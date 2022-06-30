// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Interactibles/VRDialComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRDialComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRDialComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRDialComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRDialFinishedLerpingSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVRDialStateChangedSignature_Parms
		{
			float DialMilestoneAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialMilestoneAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::NewProp_DialMilestoneAngle = { "DialMilestoneAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRDialStateChangedSignature_Parms, DialMilestoneAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::NewProp_DialMilestoneAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for notification when the lever state changes. */" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Delegate for notification when the lever state changes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRDialStateChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_VRExpansionPlugin_eventVRDialStateChangedSignature_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UVRDialComponent::execSetDialAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DialAngle);
		P_GET_UBOOL(Z_Param_bCallEvents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDialAngle(Z_Param_DialAngle,Z_Param_bCallEvents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execAddDialAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DialAngleDelta);
		P_GET_UBOOL(Z_Param_bCallEvents);
		P_GET_UBOOL(Z_Param_bSkipSettingRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDialAngle(Z_Param_DialAngleDelta,Z_Param_bCallEvents,Z_Param_bSkipSettingRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execResetInitialDialLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetInitialDialLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execOnRep_InitialRelativeTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_InitialRelativeTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execSetGripPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewGripPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripPriority(Z_Param_NewGripPriority);
		P_NATIVE_END;
	}
	static FName NAME_UVRDialComponent_ReceiveDialFinishedLerping = FName(TEXT("ReceiveDialFinishedLerping"));
	void UVRDialComponent::ReceiveDialFinishedLerping()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_ReceiveDialFinishedLerping),NULL);
	}
	static FName NAME_UVRDialComponent_ReceiveDialHitSnapAngle = FName(TEXT("ReceiveDialHitSnapAngle"));
	void UVRDialComponent::ReceiveDialHitSnapAngle(float DialMilestoneAngle)
	{
		VRDialComponent_eventReceiveDialHitSnapAngle_Parms Parms;
		Parms.DialMilestoneAngle=DialMilestoneAngle;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_ReceiveDialHitSnapAngle),&Parms);
	}
	void UVRDialComponent::StaticRegisterNativesUVRDialComponent()
	{
		UClass* Class = UVRDialComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDialAngle", &UVRDialComponent::execAddDialAngle },
			{ "OnRep_InitialRelativeTransform", &UVRDialComponent::execOnRep_InitialRelativeTransform },
			{ "ResetInitialDialLocation", &UVRDialComponent::execResetInitialDialLocation },
			{ "SetDialAngle", &UVRDialComponent::execSetDialAngle },
			{ "SetGripPriority", &UVRDialComponent::execSetGripPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics
	{
		struct VRDialComponent_eventAddDialAngle_Parms
		{
			float DialAngleDelta;
			bool bCallEvents;
			bool bSkipSettingRot;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialAngleDelta;
		static void NewProp_bCallEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallEvents;
		static void NewProp_bSkipSettingRot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipSettingRot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_DialAngleDelta = { "DialAngleDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventAddDialAngle_Parms, DialAngleDelta), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bCallEvents_SetBit(void* Obj)
	{
		((VRDialComponent_eventAddDialAngle_Parms*)Obj)->bCallEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bCallEvents = { "bCallEvents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventAddDialAngle_Parms), &Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bCallEvents_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bSkipSettingRot_SetBit(void* Obj)
	{
		((VRDialComponent_eventAddDialAngle_Parms*)Obj)->bSkipSettingRot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bSkipSettingRot = { "bSkipSettingRot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventAddDialAngle_Parms), &Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bSkipSettingRot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_DialAngleDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bCallEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bSkipSettingRot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "// Can be called to recalculate the dial angle after you move it if you want different values\n" },
		{ "CPP_Default_bCallEvents", "false" },
		{ "CPP_Default_bSkipSettingRot", "false" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Can be called to recalculate the dial angle after you move it if you want different values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "AddDialAngle", nullptr, nullptr, sizeof(VRDialComponent_eventAddDialAngle_Parms), Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_AddDialAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "OnRep_InitialRelativeTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Dial Finished Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "ReceiveDialFinishedLerping", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialMilestoneAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::NewProp_DialMilestoneAngle = { "DialMilestoneAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventReceiveDialHitSnapAngle_Parms, DialMilestoneAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::NewProp_DialMilestoneAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Dial Hit Snap Angle" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "ReceiveDialHitSnapAngle", nullptr, nullptr, sizeof(VRDialComponent_eventReceiveDialHitSnapAngle_Parms), Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "// Should be called after the dial is moved post begin play\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Should be called after the dial is moved post begin play" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "ResetInitialDialLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics
	{
		struct VRDialComponent_eventSetDialAngle_Parms
		{
			float DialAngle;
			bool bCallEvents;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialAngle;
		static void NewProp_bCallEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallEvents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_DialAngle = { "DialAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventSetDialAngle_Parms, DialAngle), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_bCallEvents_SetBit(void* Obj)
	{
		((VRDialComponent_eventSetDialAngle_Parms*)Obj)->bCallEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_bCallEvents = { "bCallEvents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventSetDialAngle_Parms), &Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_bCallEvents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_DialAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_bCallEvents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "// Directly sets the dial angle, still obeys maximum limits and snapping though\n" },
		{ "CPP_Default_bCallEvents", "false" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Directly sets the dial angle, still obeys maximum limits and snapping though" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "SetDialAngle", nullptr, nullptr, sizeof(VRDialComponent_eventSetDialAngle_Parms), Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_SetDialAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics
	{
		struct VRDialComponent_eventSetGripPriority_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::NewProp_NewGripPriority = { "NewGripPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventSetGripPriority_Parms, NewGripPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::NewProp_NewGripPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripSettings" },
		{ "Comment", "// Sets the grip priority\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Sets the grip priority" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "SetGripPriority", nullptr, nullptr, sizeof(VRDialComponent_eventSetGripPriority_Parms), Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_SetGripPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRDialComponent_NoRegister()
	{
		return UVRDialComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRDialComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDialHitSnapAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialHitSnapAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLerpBackOnRelease_MetaData[];
#endif
		static void NewProp_bLerpBackOnRelease_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLerpBackOnRelease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSendDialEventsDuringLerp_MetaData[];
#endif
		static void NewProp_bSendDialEventsDuringLerp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSendDialEventsDuringLerp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialReturnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialReturnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLerping_MetaData[];
#endif
		static void NewProp_bIsLerping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLerping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDialFinishedLerping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialFinishedLerping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDialAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDialAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClockwiseMaximumDialAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClockwiseMaximumDialAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CClockwiseMaximumDialAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CClockwiseMaximumDialAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRollover_MetaData[];
#endif
		static void NewProp_bUseRollover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRollover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDialUsesAngleSnap_MetaData[];
#endif
		static void NewProp_bDialUsesAngleSnap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDialUsesAngleSnap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDialUseSnapAngleList_MetaData[];
#endif
		static void NewProp_bDialUseSnapAngleList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDialUseSnapAngleList;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialSnapAngleList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialSnapAngleList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialSnapAngleList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapAngleIncrement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapAngleIncrement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapAngleThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapAngleThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationScaler_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationScaler;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DialRotationAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialRotationAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DialRotationAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDialUseDirectHandRotation_MetaData[];
#endif
		static void NewProp_bDialUseDirectHandRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDialUseDirectHandRotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InteractorRotationAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractorRotationAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InteractorRotationAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimarySlotRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrimarySlotRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondarySlotRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondarySlotRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GripPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRepGameplayTags_MetaData[];
#endif
		static void NewProp_bRepGameplayTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepGameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[];
#endif
		static void NewProp_bReplicateMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementReplicationSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementReplicationSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementReplicationSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHeld_MetaData[];
#endif
		static void NewProp_bIsHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingGrip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoldingGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGripped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGripped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDropped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BreakDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDenyGripping_MetaData[];
#endif
		static void NewProp_bDenyGripping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRDialComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRDialComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRDialComponent_AddDialAngle, "AddDialAngle" }, // 3816145001
		{ &Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform, "OnRep_InitialRelativeTransform" }, // 1482524881
		{ &Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping, "ReceiveDialFinishedLerping" }, // 4090453411
		{ &Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle, "ReceiveDialHitSnapAngle" }, // 4270739595
		{ &Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation, "ResetInitialDialLocation" }, // 2154608869
		{ &Z_Construct_UFunction_UVRDialComponent_SetDialAngle, "SetDialAngle" }, // 472015294
		{ &Z_Construct_UFunction_UVRDialComponent_SetGripPriority, "SetGripPriority" }, // 1508539643
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Interactibles/VRDialComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialHitSnapAngle_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "Comment", "// Call to use an object\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialHitSnapAngle = { "OnDialHitSnapAngle", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, OnDialHitSnapAngle), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialHitSnapAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialHitSnapAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease_MetaData[] = {
		{ "Category", "VRDialComponent|Lerping" },
		{ "Comment", "// If true the dial will lerp back to zero on release\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "If true the dial will lerp back to zero on release" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bLerpBackOnRelease = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease = { "bLerpBackOnRelease", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp_MetaData[] = {
		{ "Category", "VRDialComponent|Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bSendDialEventsDuringLerp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp = { "bSendDialEventsDuringLerp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialReturnSpeed_MetaData[] = {
		{ "Category", "VRDialComponent|Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialReturnSpeed = { "DialReturnSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, DialReturnSpeed), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialReturnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialReturnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping_MetaData[] = {
		{ "Category", "VRDialComponent|Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bIsLerping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping = { "bIsLerping", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialFinishedLerping_MetaData[] = {
		{ "Category", "VRDialComponent|Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialFinishedLerping = { "OnDialFinishedLerping", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, OnDialFinishedLerping), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialFinishedLerping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialFinishedLerping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CurrentDialAngle_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CurrentDialAngle = { "CurrentDialAngle", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, CurrentDialAngle), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CurrentDialAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CurrentDialAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_ClockwiseMaximumDialAngle_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "Comment", "//, meta = (ClampMin = \"0.0\", ClampMax = \"360.0\", UIMin = \"0.0\", UIMax = \"360.0\"))\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", ", meta = (ClampMin = \"0.0\", ClampMax = \"360.0\", UIMin = \"0.0\", UIMax = \"360.0\"))" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_ClockwiseMaximumDialAngle = { "ClockwiseMaximumDialAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, ClockwiseMaximumDialAngle), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_ClockwiseMaximumDialAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_ClockwiseMaximumDialAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CClockwiseMaximumDialAngle_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "Comment", "//, meta = (ClampMin = \"0.0\", ClampMax = \"360.0\", UIMin = \"0.0\", UIMax = \"360.0\"))\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", ", meta = (ClampMin = \"0.0\", ClampMax = \"360.0\", UIMin = \"0.0\", UIMax = \"360.0\"))" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CClockwiseMaximumDialAngle = { "CClockwiseMaximumDialAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, CClockwiseMaximumDialAngle), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CClockwiseMaximumDialAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CClockwiseMaximumDialAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "Comment", "// If true then the dial can \"roll over\" past 360/0 degrees in a direction\n// Allowing unlimited dial angle values\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "If true then the dial can \"roll over\" past 360/0 degrees in a direction\nAllowing unlimited dial angle values" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bUseRollover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover = { "bUseRollover", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bDialUsesAngleSnap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap = { "bDialUsesAngleSnap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bDialUseSnapAngleList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList = { "bDialUseSnapAngleList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList_Inner = { "DialSnapAngleList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "Comment", "// Optional list of snap angles for the dial\n" },
		{ "editcondition", "bDialUseSnapAngleList" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Optional list of snap angles for the dial" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList = { "DialSnapAngleList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, DialSnapAngleList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleIncrement_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Angle that the dial snaps to on release and when within the threshold distance\n" },
		{ "editcondition", "!bDialUseSnapAngleList" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Angle that the dial snaps to on release and when within the threshold distance" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleIncrement = { "SnapAngleIncrement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, SnapAngleIncrement), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleIncrement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleIncrement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleThreshold_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Threshold distance that when within the dial will stay snapped to its closest snap increment\n" },
		{ "editcondition", "!bDialUseSnapAngleList" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Threshold distance that when within the dial will stay snapped to its closest snap increment" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleThreshold = { "SnapAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, SnapAngleThreshold), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_RotationScaler_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Scales rotational input to speed up or slow down the rotation\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Scales rotational input to speed up or slow down the rotation" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_RotationScaler = { "RotationScaler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, RotationScaler), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_RotationScaler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_RotationScaler_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis = { "DialRotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, DialRotationAxis), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "Comment", "// If true then the dial will directly sample the hands rotation instead of using its movement around it.\n// This is good for roll specific dials but is fairly bad elsewhere.\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "If true then the dial will directly sample the hands rotation instead of using its movement around it.\nThis is good for roll specific dials but is fairly bad elsewhere." },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bDialUseDirectHandRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation = { "bDialUseDirectHandRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "editcondition", "bDialUseDirectHandRotation" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis = { "InteractorRotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, InteractorRotationAxis), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_PrimarySlotRange_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_PrimarySlotRange = { "PrimarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, PrimarySlotRange), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_PrimarySlotRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_PrimarySlotRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SecondarySlotRange_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SecondarySlotRange = { "SecondarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, SecondarySlotRange), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SecondarySlotRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SecondarySlotRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GripPriority_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GripPriority = { "GripPriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, GripPriority), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GripPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GripPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InitialRelativeTransform_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "Comment", "// Now replicating this so that it works correctly over the network\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Now replicating this so that it works correctly over the network" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InitialRelativeTransform = { "InitialRelativeTransform", "OnRep_InitialRelativeTransform", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, InitialRelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InitialRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InitialRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Tags that are set on this object */" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Tags that are set on this object" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Requires bReplicates to be true for the component\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Requires bReplicates to be true for the component" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bRepGameplayTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags = { "bRepGameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bReplicateMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting = { "MovementReplicationSetting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, MovementReplicationSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ScriptName", "IsCurrentlyHeld" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bIsHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_HoldingGrip_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Set on grip notify, not net serializing\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Set on grip notify, not net serializing" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_HoldingGrip = { "HoldingGrip", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, HoldingGrip), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_HoldingGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_HoldingGrip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnGripped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is gripped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Called when a object is gripped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnGripped = { "OnGripped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, OnGripped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnGripped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnGripped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDropped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is dropped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Called when a object is dropped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, OnDropped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_BreakDistance_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Distance before the object will break out of the hand, 0.0f == never will\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Distance before the object will break out of the hand, 0.0f == never will" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_BreakDistance = { "BreakDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, BreakDistance), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_BreakDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_BreakDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Should we deny gripping on this object\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ScriptName", "IsDenyGripping" },
		{ "ToolTip", "Should we deny gripping on this object" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bDenyGripping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRDialComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialHitSnapAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialReturnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialFinishedLerping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CurrentDialAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_ClockwiseMaximumDialAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CClockwiseMaximumDialAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleIncrement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_RotationScaler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_PrimarySlotRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SecondarySlotRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GripPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InitialRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_HoldingGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnGripped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_BreakDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVRDialComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(UVRDialComponent, IVRGripInterface), false },
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UVRDialComponent, IGameplayTagAssetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRDialComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRDialComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRDialComponent_Statics::ClassParams = {
		&UVRDialComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRDialComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRDialComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRDialComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRDialComponent, 1786812398);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRDialComponent>()
	{
		return UVRDialComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRDialComponent(Z_Construct_UClass_UVRDialComponent, &UVRDialComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRDialComponent"), false, nullptr, nullptr, nullptr);

	void UVRDialComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_InitialRelativeTransform(TEXT("InitialRelativeTransform"));
		static const FName Name_GameplayTags(TEXT("GameplayTags"));
		static const FName Name_bRepGameplayTags(TEXT("bRepGameplayTags"));
		static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));

		const bool bIsValid = true
			&& Name_InitialRelativeTransform == ClassReps[(int32)ENetFields_Private::InitialRelativeTransform].Property->GetFName()
			&& Name_GameplayTags == ClassReps[(int32)ENetFields_Private::GameplayTags].Property->GetFName()
			&& Name_bRepGameplayTags == ClassReps[(int32)ENetFields_Private::bRepGameplayTags].Property->GetFName()
			&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UVRDialComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRDialComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
