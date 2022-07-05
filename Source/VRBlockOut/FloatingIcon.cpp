// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingIcon.h"

// Sets default values
AFloatingIcon::AFloatingIcon()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    VisualMesh->SetupAttachment(RootComponent);

   // static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeVisualAsset(TEXT("StaticMesh'/Game/MobileStarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

   // if (CubeVisualAsset.Succeeded())
   // {
    //    VisualMesh->SetStaticMesh(CubeVisualAsset.Object);
   //     VisualMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
   // }
}

// Called when the game starts or when spawned
void AFloatingIcon::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void AFloatingIcon::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector NewLocation = GetActorLocation();
    FRotator NewRotation = GetActorRotation();
    float RunningTime = GetGameTimeSinceCreation();
    float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
    NewLocation.Z += DeltaHeight * FloatSpeed;          //Scale our height by FloatSpeed
    float DeltaRotation = DeltaTime * RotationSpeed;    //Rotate by a number of degrees equal to RotationSpeed each second
    NewRotation.Yaw += DeltaRotation;
    SetActorLocationAndRotation(NewLocation, NewRotation);
}

