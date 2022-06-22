// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippableCapsuleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippableCapsuleComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableCapsuleComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableCapsuleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execSetGripPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewGripPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripPriority(Z_Param_NewGripPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableCapsuleComponent::execSetDenyGripping)
	{
		P_GET_UBOOL(Z_Param_bDenyGripping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDenyGripping(Z_Param_bDenyGripping);
		P_NATIVE_END;
	}
	void UGrippableCapsuleComponent::StaticRegisterNativesUGrippableCapsuleComponent()
	{
		UClass* Class = UGrippableCapsuleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDenyGripping", &UGrippableCapsuleComponent::execSetDenyGripping },
			{ "SetGripPriority", &UGrippableCapsuleComponent::execSetGripPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics
	{
		struct GrippableCapsuleComponent_eventSetDenyGripping_Parms
		{
			bool bDenyGripping;
		};
		static void NewProp_bDenyGripping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
	{
		((GrippableCapsuleComponent_eventSetDenyGripping_Parms*)Obj)->bDenyGripping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableCapsuleComponent_eventSetDenyGripping_Parms), &Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::NewProp_bDenyGripping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Sets the Deny Gripping variable on the FBPInterfaceSettings struct\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Sets the Deny Gripping variable on the FBPInterfaceSettings struct" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "SetDenyGripping", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventSetDenyGripping_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableCapsuleComponent_SetGripPriority_Statics
	{
		struct GrippableCapsuleComponent_eventSetGripPriority_Parms
		{
			int32 NewGripPriority;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NewGripPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGrippableCapsuleComponent_SetGripPriority_Statics::NewProp_NewGripPriority = { "NewGripPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableCapsuleComponent_eventSetGripPriority_Parms, NewGripPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableCapsuleComponent_SetGripPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableCapsuleComponent_SetGripPriority_Statics::NewProp_NewGripPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableCapsuleComponent_SetGripPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Sets the grip priority on the FBPInterfaceSettings struct\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Sets the grip priority on the FBPInterfaceSettings struct" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableCapsuleComponent_SetGripPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableCapsuleComponent, nullptr, "SetGripPriority", nullptr, nullptr, sizeof(GrippableCapsuleComponent_eventSetGripPriority_Parms), Z_Construct_UFunction_UGrippableCapsuleComponent_SetGripPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_SetGripPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableCapsuleComponent_SetGripPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableCapsuleComponent_SetGripPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableCapsuleComponent_SetGripPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableCapsuleComponent_SetGripPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrippableCapsuleComponent_NoRegister()
	{
		return UGrippableCapsuleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGrippableCapsuleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripLogicScripts_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripLogicScripts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripLogicScripts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GripLogicScripts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGripped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGripped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDropped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRepGripSettingsAndGameplayTags_MetaData[];
#endif
		static void NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepGripSettingsAndGameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[];
#endif
		static void NewProp_bReplicateMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRGripInterfaceSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VRGripInterfaceSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrippableCapsuleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCapsuleComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrippableCapsuleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_SetDenyGripping, "SetDenyGripping" }, // 1663715472
		{ &Z_Construct_UFunction_UGrippableCapsuleComponent_SetGripPriority, "SetGripPriority" }, // 726611711
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n*\n*/" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Grippables/GrippableCapsuleComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts_Inner_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts_Inner = { "GripLogicScripts", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts = { "GripLogicScripts", nullptr, (EPropertyFlags)0x001000800000003d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableCapsuleComponent, GripLogicScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnGripped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is gripped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Called when a object is gripped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnGripped = { "OnGripped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableCapsuleComponent, OnGripped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnGripped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnGripped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnDropped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is dropped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Called when a object is dropped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableCapsuleComponent, OnDropped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripAdded_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold is secondary gripped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Called when an object we hold is secondary gripped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripAdded = { "OnSecondaryGripAdded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableCapsuleComponent, OnSecondaryGripAdded), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripRemoved_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold is secondary dropped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Called when an object we hold is secondary dropped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripRemoved = { "OnSecondaryGripRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableCapsuleComponent, OnSecondaryGripRemoved), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Tags that are set on this object */" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Tags that are set on this object" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableCapsuleComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
		{ "Comment", "// Requires bReplicates to be true for the component\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Requires bReplicates to be true for the component" },
	};
#endif
	void Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj)
	{
		((UGrippableCapsuleComponent*)Obj)->bRepGripSettingsAndGameplayTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags = { "bRepGripSettingsAndGameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGrippableCapsuleComponent), &Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
	};
#endif
	void Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((UGrippableCapsuleComponent*)Obj)->bReplicateMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGrippableCapsuleComponent), &Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bReplicateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bReplicateMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_VRGripInterfaceSettings_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCapsuleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_VRGripInterfaceSettings = { "VRGripInterfaceSettings", nullptr, (EPropertyFlags)0x0010008000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableCapsuleComponent, VRGripInterfaceSettings), Z_Construct_UScriptStruct_FBPInterfaceProperties, METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_VRGripInterfaceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_VRGripInterfaceSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrippableCapsuleComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GripLogicScripts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnGripped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_OnSecondaryGripRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_GameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_bReplicateMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableCapsuleComponent_Statics::NewProp_VRGripInterfaceSettings,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(UGrippableCapsuleComponent, IVRGripInterface), false },
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UGrippableCapsuleComponent, IGameplayTagAssetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrippableCapsuleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrippableCapsuleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrippableCapsuleComponent_Statics::ClassParams = {
		&UGrippableCapsuleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGrippableCapsuleComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableCapsuleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrippableCapsuleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrippableCapsuleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrippableCapsuleComponent, 534023439);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGrippableCapsuleComponent>()
	{
		return UGrippableCapsuleComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrippableCapsuleComponent(Z_Construct_UClass_UGrippableCapsuleComponent, &UGrippableCapsuleComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UGrippableCapsuleComponent"), false, nullptr, nullptr, nullptr);

	void UGrippableCapsuleComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GripLogicScripts(TEXT("GripLogicScripts"));
		static const FName Name_GameplayTags(TEXT("GameplayTags"));
		static const FName Name_bRepGripSettingsAndGameplayTags(TEXT("bRepGripSettingsAndGameplayTags"));
		static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));
		static const FName Name_VRGripInterfaceSettings(TEXT("VRGripInterfaceSettings"));

		const bool bIsValid = true
			&& Name_GripLogicScripts == ClassReps[(int32)ENetFields_Private::GripLogicScripts].Property->GetFName()
			&& Name_GameplayTags == ClassReps[(int32)ENetFields_Private::GameplayTags].Property->GetFName()
			&& Name_bRepGripSettingsAndGameplayTags == ClassReps[(int32)ENetFields_Private::bRepGripSettingsAndGameplayTags].Property->GetFName()
			&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName()
			&& Name_VRGripInterfaceSettings == ClassReps[(int32)ENetFields_Private::VRGripInterfaceSettings].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGrippableCapsuleComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrippableCapsuleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
