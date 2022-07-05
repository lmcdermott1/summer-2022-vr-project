// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingIcon.generated.h"

UCLASS()
class VRBLOCKOUT_API AFloatingIcon : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AFloatingIcon();

    UPROPERTY(VisibleAnywhere)
        UStaticMeshComponent* VisualMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingIcon")
        float FloatSpeed = 20.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingIcon")
        float RotationSpeed = 20.0f;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

};