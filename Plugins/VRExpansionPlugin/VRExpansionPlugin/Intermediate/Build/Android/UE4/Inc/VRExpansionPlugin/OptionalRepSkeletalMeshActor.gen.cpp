// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/OptionalRepSkeletalMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptionalRepSkeletalMeshActor() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UNoRepSphereComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UNoRepSphereComponent();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor();
// End Cross Module References

static_assert(std::is_polymorphic<FSkeletalMeshComponentEndPhysicsTickFunctionVR>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FSkeletalMeshComponentEndPhysicsTickFunctionVR cannot be polymorphic unless super FTickFunction is polymorphic");

class UScriptStruct* FSkeletalMeshComponentEndPhysicsTickFunctionVR::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("SkeletalMeshComponentEndPhysicsTickFunctionVR"), sizeof(FSkeletalMeshComponentEndPhysicsTickFunctionVR), Get_Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FSkeletalMeshComponentEndPhysicsTickFunctionVR>()
{
	return FSkeletalMeshComponentEndPhysicsTickFunctionVR::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR(FSkeletalMeshComponentEndPhysicsTickFunctionVR::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("SkeletalMeshComponentEndPhysicsTickFunctionVR"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFSkeletalMeshComponentEndPhysicsTickFunctionVR
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFSkeletalMeshComponentEndPhysicsTickFunctionVR()
	{
		UScriptStruct::DeferCppStructOps<FSkeletalMeshComponentEndPhysicsTickFunctionVR>(FName(TEXT("SkeletalMeshComponentEndPhysicsTickFunctionVR")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFSkeletalMeshComponentEndPhysicsTickFunctionVR;
	struct Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* A component specifically for being able to turn off movement replication in the component at will\n* Has the upside of also being a blueprintable base since UE4 doesn't allow that with std ones\n*/" },
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
		{ "ToolTip", "A component specifically for being able to turn off movement replication in the component at will\nHas the upside of also being a blueprintable base since UE4 doesn't allow that with std ones" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshComponentEndPhysicsTickFunctionVR>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"SkeletalMeshComponentEndPhysicsTickFunctionVR",
		sizeof(FSkeletalMeshComponentEndPhysicsTickFunctionVR),
		alignof(FSkeletalMeshComponentEndPhysicsTickFunctionVR),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshComponentEndPhysicsTickFunctionVR"), sizeof(FSkeletalMeshComponentEndPhysicsTickFunctionVR), Get_Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Hash() { return 4203917687U; }
	void UNoRepSphereComponent::StaticRegisterNativesUNoRepSphereComponent()
	{
	}
	UClass* Z_Construct_UClass_UNoRepSphereComponent_NoRegister()
	{
		return UNoRepSphereComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNoRepSphereComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[];
#endif
		static void NewProp_bReplicateMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoRepSphereComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoRepSphereComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "// Temp comp to avoid some engine issues, exists only until a bug fix happens\n" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Misc/OptionalRepSkeletalMeshActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Temp comp to avoid some engine issues, exists only until a bug fix happens" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoRepSphereComponent_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "Component Replication" },
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
	};
#endif
	void Z_Construct_UClass_UNoRepSphereComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((UNoRepSphereComponent*)Obj)->bReplicateMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNoRepSphereComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNoRepSphereComponent), &Z_Construct_UClass_UNoRepSphereComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNoRepSphereComponent_Statics::NewProp_bReplicateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoRepSphereComponent_Statics::NewProp_bReplicateMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNoRepSphereComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoRepSphereComponent_Statics::NewProp_bReplicateMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoRepSphereComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoRepSphereComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNoRepSphereComponent_Statics::ClassParams = {
		&UNoRepSphereComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNoRepSphereComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNoRepSphereComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNoRepSphereComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoRepSphereComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoRepSphereComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNoRepSphereComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNoRepSphereComponent, 2852990207);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UNoRepSphereComponent>()
	{
		return UNoRepSphereComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNoRepSphereComponent(Z_Construct_UClass_UNoRepSphereComponent, &UNoRepSphereComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UNoRepSphereComponent"), false, nullptr, nullptr, nullptr);

	void UNoRepSphereComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));

		const bool bIsValid = true
			&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNoRepSphereComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoRepSphereComponent);
	void UInversePhysicsSkeletalMeshComponent::StaticRegisterNativesUInversePhysicsSkeletalMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_NoRegister()
	{
		return UInversePhysicsSkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[];
#endif
		static void NewProp_bReplicateMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "Misc/OptionalRepSkeletalMeshActor.h" },
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "Component Replication" },
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
	};
#endif
	void Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((UInversePhysicsSkeletalMeshComponent*)Obj)->bReplicateMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInversePhysicsSkeletalMeshComponent), &Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::NewProp_bReplicateMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInversePhysicsSkeletalMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::ClassParams = {
		&UInversePhysicsSkeletalMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInversePhysicsSkeletalMeshComponent, 4034341372);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UInversePhysicsSkeletalMeshComponent>()
	{
		return UInversePhysicsSkeletalMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInversePhysicsSkeletalMeshComponent(Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent, &UInversePhysicsSkeletalMeshComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UInversePhysicsSkeletalMeshComponent"), false, nullptr, nullptr, nullptr);

	void UInversePhysicsSkeletalMeshComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));

		const bool bIsValid = true
			&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInversePhysicsSkeletalMeshComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInversePhysicsSkeletalMeshComponent);
	void AOptionalRepGrippableSkeletalMeshActor::StaticRegisterNativesAOptionalRepGrippableSkeletalMeshActor()
	{
	}
	UClass* Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_NoRegister()
	{
		return AOptionalRepGrippableSkeletalMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAttachmentReplication_MetaData[];
#endif
		static void NewProp_bIgnoreAttachmentReplication_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAttachmentReplication;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnorePhysicsReplication_MetaData[];
#endif
		static void NewProp_bIgnorePhysicsReplication_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnorePhysicsReplication;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASkeletalMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n*\n*  A class specifically for turning off default physics replication with a skeletal mesh and fixing an\n*  engine bug with inversed scale on skeletal meshes. Generally used for the physical hand setup.\n*/" },
		{ "IncludePath", "Misc/OptionalRepSkeletalMeshActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A class specifically for turning off default physics replication with a skeletal mesh and fixing an\nengine bug with inversed scale on skeletal meshes. Generally used for the physical hand setup." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnoreAttachmentReplication_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "// Skips the attachment replication\n" },
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
		{ "ToolTip", "Skips the attachment replication" },
	};
#endif
	void Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnoreAttachmentReplication_SetBit(void* Obj)
	{
		((AOptionalRepGrippableSkeletalMeshActor*)Obj)->bIgnoreAttachmentReplication = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnoreAttachmentReplication = { "bIgnoreAttachmentReplication", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOptionalRepGrippableSkeletalMeshActor), &Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnoreAttachmentReplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnoreAttachmentReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnoreAttachmentReplication_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnorePhysicsReplication_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "// Skips the physics replication\n" },
		{ "ModuleRelativePath", "Public/Misc/OptionalRepSkeletalMeshActor.h" },
		{ "ToolTip", "Skips the physics replication" },
	};
#endif
	void Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnorePhysicsReplication_SetBit(void* Obj)
	{
		((AOptionalRepGrippableSkeletalMeshActor*)Obj)->bIgnorePhysicsReplication = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnorePhysicsReplication = { "bIgnorePhysicsReplication", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOptionalRepGrippableSkeletalMeshActor), &Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnorePhysicsReplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnorePhysicsReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnorePhysicsReplication_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnoreAttachmentReplication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::NewProp_bIgnorePhysicsReplication,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOptionalRepGrippableSkeletalMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::ClassParams = {
		&AOptionalRepGrippableSkeletalMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOptionalRepGrippableSkeletalMeshActor, 275303289);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AOptionalRepGrippableSkeletalMeshActor>()
	{
		return AOptionalRepGrippableSkeletalMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOptionalRepGrippableSkeletalMeshActor(Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor, &AOptionalRepGrippableSkeletalMeshActor::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AOptionalRepGrippableSkeletalMeshActor"), false, nullptr, nullptr, nullptr);

	void AOptionalRepGrippableSkeletalMeshActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIgnoreAttachmentReplication(TEXT("bIgnoreAttachmentReplication"));
		static const FName Name_bIgnorePhysicsReplication(TEXT("bIgnorePhysicsReplication"));

		const bool bIsValid = true
			&& Name_bIgnoreAttachmentReplication == ClassReps[(int32)ENetFields_Private::bIgnoreAttachmentReplication].Property->GetFName()
			&& Name_bIgnorePhysicsReplication == ClassReps[(int32)ENetFields_Private::bIgnorePhysicsReplication].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AOptionalRepGrippableSkeletalMeshActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOptionalRepGrippableSkeletalMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
