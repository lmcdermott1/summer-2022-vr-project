// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripMotionControllerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGripMotionControllerComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerTeleportedGripsSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGripComponentEndPhysicsTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRDeviceId();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPSecondaryGripInfo();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRVelocityType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVRGripControllerOnProfileTransformChanged_Parms
		{
			FTransform NewRelTransForProcComps;
			FTransform NewProfileTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRelTransForProcComps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRelTransForProcComps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewProfileTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewProfileTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::NewProp_NewRelTransForProcComps_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::NewProp_NewRelTransForProcComps = { "NewRelTransForProcComps", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRGripControllerOnProfileTransformChanged_Parms, NewRelTransForProcComps), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::NewProp_NewRelTransForProcComps_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::NewProp_NewRelTransForProcComps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::NewProp_NewProfileTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::NewProp_NewProfileTransform = { "NewProfileTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRGripControllerOnProfileTransformChanged_Parms, NewProfileTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::NewProp_NewProfileTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::NewProp_NewProfileTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::NewProp_NewRelTransForProcComps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::NewProp_NewProfileTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for notification when the controller profile transform changes. */" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Delegate for notification when the controller profile transform changes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRGripControllerOnProfileTransformChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_VRExpansionPlugin_eventVRGripControllerOnProfileTransformChanged_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVRGripControllerOnGripOutOfRange_Parms
		{
			FBPActorGripInformation GripInformation;
			float Distance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRGripControllerOnGripOutOfRange_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature_Statics::NewProp_GripInformation_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRGripControllerOnGripOutOfRange_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for notification when an interactive grip goes out of range and isn't set to auto handle it. */" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Delegate for notification when an interactive grip goes out of range and isn't set to auto handle it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRGripControllerOnGripOutOfRange__DelegateSignature", nullptr, nullptr, sizeof(_Script_VRExpansionPlugin_eventVRGripControllerOnGripOutOfRange_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerTeleportedGripsSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerTeleportedGripsSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for notification when the controller teleports its grips. */" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Delegate for notification when the controller teleports its grips." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerTeleportedGripsSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VROnControllerTeleportedGripsSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerTeleportedGripsSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerTeleportedGripsSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerTeleportedGripsSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerTeleportedGripsSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVROnControllerDropSignature_Parms
		{
			FBPActorGripInformation GripInformation;
			bool bWasSocketed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
		static void NewProp_bWasSocketed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnControllerDropSignature_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::NewProp_GripInformation_MetaData)) };
	void Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((_Script_VRExpansionPlugin_eventVROnControllerDropSignature_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_VRExpansionPlugin_eventVROnControllerDropSignature_Parms), &Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::NewProp_bWasSocketed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for notification when the controller drops a gripped object. */" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Delegate for notification when the controller drops a gripped object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VROnControllerDropSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_VRExpansionPlugin_eventVROnControllerDropSignature_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVROnControllerGripSignature_Parms
		{
			FBPActorGripInformation GripInformation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnControllerGripSignature_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature_Statics::NewProp_GripInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature_Statics::NewProp_GripInformation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for notification when the controller grips a new object. */" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Delegate for notification when the controller grips a new object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VROnControllerGripSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_VRExpansionPlugin_eventVROnControllerGripSignature_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVRGripControllerOnTrackingEventSignature_Parms
		{
			ETrackingStatus NewTrackingStatus;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewTrackingStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTrackingStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewTrackingStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature_Statics::NewProp_NewTrackingStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature_Statics::NewProp_NewTrackingStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature_Statics::NewProp_NewTrackingStatus = { "NewTrackingStatus", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRGripControllerOnTrackingEventSignature_Parms, NewTrackingStatus), Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature_Statics::NewProp_NewTrackingStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature_Statics::NewProp_NewTrackingStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature_Statics::NewProp_NewTrackingStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature_Statics::NewProp_NewTrackingStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for notification when the controllers tracking changes. */" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Delegate for notification when the controllers tracking changes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRGripControllerOnTrackingEventSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_VRExpansionPlugin_eventVRGripControllerOnTrackingEventSignature_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}

static_assert(std::is_polymorphic<FGripComponentEndPhysicsTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FGripComponentEndPhysicsTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");

class UScriptStruct* FGripComponentEndPhysicsTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FGripComponentEndPhysicsTickFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGripComponentEndPhysicsTickFunction, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("GripComponentEndPhysicsTickFunction"), sizeof(FGripComponentEndPhysicsTickFunction), Get_Z_Construct_UScriptStruct_FGripComponentEndPhysicsTickFunction_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FGripComponentEndPhysicsTickFunction>()
{
	return FGripComponentEndPhysicsTickFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGripComponentEndPhysicsTickFunction(FGripComponentEndPhysicsTickFunction::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("GripComponentEndPhysicsTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFGripComponentEndPhysicsTickFunction
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFGripComponentEndPhysicsTickFunction()
	{
		UScriptStruct::DeferCppStructOps<FGripComponentEndPhysicsTickFunction>(FName(TEXT("GripComponentEndPhysicsTickFunction")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFGripComponentEndPhysicsTickFunction;
	struct Z_Construct_UScriptStruct_FGripComponentEndPhysicsTickFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGripComponentEndPhysicsTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Tick function that does post physics work. This executes in EndPhysics (after physics is done)\n**/" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Tick function that does post physics work. This executes in EndPhysics (after physics is done)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGripComponentEndPhysicsTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGripComponentEndPhysicsTickFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGripComponentEndPhysicsTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"GripComponentEndPhysicsTickFunction",
		sizeof(FGripComponentEndPhysicsTickFunction),
		alignof(FGripComponentEndPhysicsTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGripComponentEndPhysicsTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGripComponentEndPhysicsTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGripComponentEndPhysicsTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGripComponentEndPhysicsTickFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GripComponentEndPhysicsTickFunction"), sizeof(FGripComponentEndPhysicsTickFunction), Get_Z_Construct_UScriptStruct_FGripComponentEndPhysicsTickFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGripComponentEndPhysicsTickFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGripComponentEndPhysicsTickFunction_Hash() { return 2322191353U; }
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetControllerDeviceID)
	{
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_DeviceID);
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result);
		P_GET_UBOOL(Z_Param_bCheckOpenVROnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetControllerDeviceID(Z_Param_Out_DeviceID,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_bCheckOpenVROnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGripControllerIsTracked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GripControllerIsTracked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetGripDistance_BP)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_STRUCT(FVector,Z_Param_ExpectedLocation);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_CurrentDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGripDistance_BP(Z_Param_Out_Grip,Z_Param_ExpectedLocation,Z_Param_Out_CurrentDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execUpdatePhysicsHandleTransform_BP)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GrippedActor);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePhysicsHandleTransform_BP(Z_Param_Out_GrippedActor,Z_Param_Out_NewTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execUpdatePhysicsHandle_BP)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_UBOOL(Z_Param_bFullyRecreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdatePhysicsHandle_BP(Z_Param_Out_Grip,Z_Param_bFullyRecreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execDestroyPhysicsHandle_BP)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DestroyPhysicsHandle_BP(Z_Param_Out_Grip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execSetUpPhysicsHandle_BP)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUpPhysicsHandle_BP(Z_Param_Out_Grip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execSetPhysicsHandleSettings)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_STRUCT_REF(FBPAdvancedPhysicsHandleSettings,Z_Param_Out_PhysicsHandleSettingsIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPhysicsHandleSettings(Z_Param_Out_Grip,Z_Param_Out_PhysicsHandleSettingsIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetPhysicsHandleSettings)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_STRUCT_REF(FBPAdvancedPhysicsHandleSettings,Z_Param_Out_PhysicsHandleSettingsOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPhysicsHandleSettings(Z_Param_Out_Grip,Z_Param_Out_PhysicsHandleSettingsOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execRemoveSecondaryAttachmentFromGripByID)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_GripID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LerpToTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSecondaryAttachmentFromGripByID(Z_Param_GripID,Z_Param_LerpToTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execRemoveSecondaryAttachmentFromGrip)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripToRemoveAttachment);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LerpToTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSecondaryAttachmentFromGrip(Z_Param_Out_GripToRemoveAttachment,Z_Param_LerpToTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execRemoveSecondaryAttachmentPoint)
	{
		P_GET_OBJECT(UObject,Z_Param_GrippedObjectToRemoveAttachment);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LerpToTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSecondaryAttachmentPoint(Z_Param_GrippedObjectToRemoveAttachment,Z_Param_LerpToTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execAddSecondaryAttachmentToGripByID)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_GripID);
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryPointComponent);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OriginalTransform);
		P_GET_UBOOL(Z_Param_bTransformIsAlreadyRelative);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LerpToTime);
		P_GET_UBOOL(Z_Param_bIsSlotGrip);
		P_GET_PROPERTY(FNameProperty,Z_Param_SecondarySlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSecondaryAttachmentToGripByID(Z_Param_GripID,Z_Param_SecondaryPointComponent,Z_Param_Out_OriginalTransform,Z_Param_bTransformIsAlreadyRelative,Z_Param_LerpToTime,Z_Param_bIsSlotGrip,Z_Param_SecondarySlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execAddSecondaryAttachmentToGrip)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripToAddAttachment);
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryPointComponent);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OriginalTransform);
		P_GET_UBOOL(Z_Param_bTransformIsAlreadyRelative);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LerpToTime);
		P_GET_UBOOL(Z_Param_bIsSlotGrip);
		P_GET_PROPERTY(FNameProperty,Z_Param_SecondarySlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSecondaryAttachmentToGrip(Z_Param_Out_GripToAddAttachment,Z_Param_SecondaryPointComponent,Z_Param_Out_OriginalTransform,Z_Param_bTransformIsAlreadyRelative,Z_Param_LerpToTime,Z_Param_bIsSlotGrip,Z_Param_SecondarySlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execAddSecondaryAttachmentPoint)
	{
		P_GET_OBJECT(UObject,Z_Param_GrippedObjectToAddAttachment);
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryPointComponent);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OriginalTransform);
		P_GET_UBOOL(Z_Param_bTransformIsAlreadyRelative);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LerpToTime);
		P_GET_UBOOL(Z_Param_bIsSlotGrip);
		P_GET_PROPERTY(FNameProperty,Z_Param_SecondarySlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSecondaryAttachmentPoint(Z_Param_GrippedObjectToAddAttachment,Z_Param_SecondaryPointComponent,Z_Param_Out_OriginalTransform,Z_Param_bTransformIsAlreadyRelative,Z_Param_LerpToTime,Z_Param_bIsSlotGrip,Z_Param_SecondarySlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execTeleportMoveGrips)
	{
		P_GET_UBOOL(Z_Param_bTeleportPhysicsGrips);
		P_GET_UBOOL(Z_Param_bIsForPostTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeleportMoveGrips(Z_Param_bTeleportPhysicsGrips,Z_Param_bIsForPostTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execTeleportMoveGrip)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_UBOOL(Z_Param_bTeleportPhysicsGrips);
		P_GET_UBOOL(Z_Param_bIsForPostTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TeleportMoveGrip(Z_Param_Out_Grip,Z_Param_bTeleportPhysicsGrips,Z_Param_bIsForPostTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execTeleportMoveGrippedComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToMove);
		P_GET_UBOOL(Z_Param_bTeleportPhysicsGrips);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TeleportMoveGrippedComponent(Z_Param_ComponentToMove,Z_Param_bTeleportPhysicsGrips);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execTeleportMoveGrippedActor)
	{
		P_GET_OBJECT(AActor,Z_Param_GrippedActorToMove);
		P_GET_UBOOL(Z_Param_bTeleportPhysicsGrips);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TeleportMoveGrippedActor(Z_Param_GrippedActorToMove,Z_Param_bTeleportPhysicsGrips);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execPostTeleportMoveGrippedObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostTeleportMoveGrippedObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetGrippedComponents)
	{
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_GrippedComponentsArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGrippedComponents(Z_Param_Out_GrippedComponentsArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetGrippedObjects)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_GrippedObjectsArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGrippedObjects(Z_Param_Out_GrippedObjectsArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetGrippedActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_GrippedActorArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGrippedActors(Z_Param_Out_GrippedActorArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetAllGrips)
	{
		P_GET_TARRAY_REF(FBPActorGripInformation,Z_Param_Out_GripArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllGrips(Z_Param_Out_GripArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execHasGrippedObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasGrippedObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetIsSecondaryAttachment)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToCheck);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsSecondaryAttachment(Z_Param_ComponentToCheck,Z_Param_Out_Grip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetIsComponentHeld)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsComponentHeld(Z_Param_ComponentToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetIsHeld)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsHeld(Z_Param_ActorToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetIsObjectHeld)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsObjectHeld(Z_Param_ObjectToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execConvertToGripRelativeTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_GrippedActorTransform);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UGripMotionControllerComponent::ConvertToGripRelativeTransform(Z_Param_Out_GrippedActorTransform,Z_Param_Out_InTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execConvertToControllerRelativeTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->ConvertToControllerRelativeTransform(Z_Param_Out_InTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execBP_HasGripMovementAuthority)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_HasGripMovementAuthority(Z_Param_Out_Grip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execBP_HasGripAuthorityForObject)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_HasGripAuthorityForObject(Z_Param_ObjToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execBP_HasGripAuthority)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_HasGripAuthority(Z_Param_Out_Grip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execCreateGripRelativeAdditionTransform_BP)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripToSample);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AdditionTransform);
		P_GET_UBOOL(Z_Param_bGripRelative);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->CreateGripRelativeAdditionTransform_BP(Z_Param_Out_GripToSample,Z_Param_Out_AdditionTransform,Z_Param_bGripRelative);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execSetGripStiffnessAndDamping)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewStiffness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDamping);
		P_GET_UBOOL(Z_Param_bAlsoSetAngularValues);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OptionalAngularStiffness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OptionalAngularDamping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripStiffnessAndDamping(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_NewStiffness,Z_Param_NewDamping,Z_Param_bAlsoSetAngularValues,Z_Param_OptionalAngularStiffness,Z_Param_OptionalAngularDamping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execSetGripAdditionTransform)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewAdditionTransform);
		P_GET_UBOOL(Z_Param_bMakeGripRelative);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripAdditionTransform(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_NewAdditionTransform,Z_Param_bMakeGripRelative);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execSetGripRelativeTransform)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewRelativeTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripRelativeTransform(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_NewRelativeTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execSetGripLateUpdateSetting)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result);
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_NewGripLateUpdateSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripLateUpdateSetting(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),EGripLateUpdateSettings(Z_Param_NewGripLateUpdateSetting));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execSetGripCollisionType)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result);
		P_GET_ENUM(EGripCollisionType,Z_Param_NewGripCollisionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripCollisionType(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),EGripCollisionType(Z_Param_NewGripCollisionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execSetPausedTransform)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_PausedTransform);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPausedTransform(Z_Param_Out_Grip,Z_Param_Out_PausedTransform,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execSetGripHybridLock)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result);
		P_GET_UBOOL(Z_Param_bIsLocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripHybridLock(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_bIsLocked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execSetGripPaused)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result);
		P_GET_UBOOL(Z_Param_bIsPaused);
		P_GET_UBOOL(Z_Param_bNoConstraintWhenPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripPaused(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_bIsPaused,Z_Param_bNoConstraintWhenPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetGripMass)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Mass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGripMass(Z_Param_Out_Grip,Z_Param_Out_Mass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetPhysicsConstraintForce)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularForce);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPhysicsConstraintForce(Z_Param_Out_Grip,Z_Param_Out_AngularForce,Z_Param_Out_LinearForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetPhysicsVelocities)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPhysicsVelocities(Z_Param_Out_Grip,Z_Param_Out_AngularVelocity,Z_Param_Out_LinearVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetGripByID)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_PROPERTY(FByteProperty,Z_Param_IDToLookForGrip);
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGripByID(Z_Param_Out_Grip,Z_Param_IDToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetGripByObject)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_OBJECT(UObject,Z_Param_ObjectToLookForGrip);
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGripByObject(Z_Param_Out_Grip,Z_Param_ObjectToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetGripByComponent)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToLookForGrip);
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGripByComponent(Z_Param_Out_Grip,Z_Param_ComponentToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetGripByActor)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_OBJECT(AActor,Z_Param_ActorToLookForGrip);
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGripByActor(Z_Param_Out_Grip,Z_Param_ActorToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execNotifyDrop)
	{
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_NewDrop);
		P_GET_UBOOL(Z_Param_bSimulate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyDrop_Implementation(Z_Param_NewDrop,Z_Param_bSimulate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execDropGrip)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_UBOOL(Z_Param_bSimulate);
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity);
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DropGrip(Z_Param_Out_Grip,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execDropComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToDrop);
		P_GET_UBOOL(Z_Param_bSimulate);
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity);
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DropComponent(Z_Param_ComponentToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGripComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToGrip);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset);
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalsnapToSocketName);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalBoneToGripName);
		P_GET_ENUM(EGripCollisionType,Z_Param_GripCollisionType);
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_GripLateUpdateSetting);
		P_GET_ENUM(EGripMovementReplicationSettings,Z_Param_GripMovementReplicationSetting);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GripStiffness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GripDamping);
		P_GET_UBOOL(Z_Param_bIsSlotGrip);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GripComponent(Z_Param_ComponentToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalsnapToSocketName,Z_Param_OptionalBoneToGripName,EGripCollisionType(Z_Param_GripCollisionType),EGripLateUpdateSettings(Z_Param_GripLateUpdateSetting),EGripMovementReplicationSettings(Z_Param_GripMovementReplicationSetting),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bIsSlotGrip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execDropActor)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToDrop);
		P_GET_UBOOL(Z_Param_bSimulate);
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity);
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DropActor(Z_Param_ActorToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGripActor)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToGrip);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset);
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalSnapToSocketName);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalBoneToGripName);
		P_GET_ENUM(EGripCollisionType,Z_Param_GripCollisionType);
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_GripLateUpdateSetting);
		P_GET_ENUM(EGripMovementReplicationSettings,Z_Param_GripMovementReplicationSetting);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GripStiffness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GripDamping);
		P_GET_UBOOL(Z_Param_bIsSlotGrip);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GripActor(Z_Param_ActorToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalSnapToSocketName,Z_Param_OptionalBoneToGripName,EGripCollisionType(Z_Param_GripCollisionType),EGripLateUpdateSettings(Z_Param_GripLateUpdateSetting),EGripMovementReplicationSettings(Z_Param_GripMovementReplicationSetting),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bIsSlotGrip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execDropObjectByInterface)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectToDrop);
		P_GET_PROPERTY(FByteProperty,Z_Param_GripIDToDrop);
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity);
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DropObjectByInterface(Z_Param_ObjectToDrop,Z_Param_GripIDToDrop,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGripObjectByInterface)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectToGrip);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset);
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalBoneToGripName);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalSnapToSocketName);
		P_GET_UBOOL(Z_Param_bIsSlotGrip);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GripObjectByInterface(Z_Param_ObjectToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalBoneToGripName,Z_Param_OptionalSnapToSocketName,Z_Param_bIsSlotGrip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execDropObject)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectToDrop);
		P_GET_PROPERTY(FByteProperty,Z_Param_GripIdToDrop);
		P_GET_UBOOL(Z_Param_bSimulate);
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity);
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DropObject(Z_Param_ObjectToDrop,Z_Param_GripIdToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGripObject)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectToGrip);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset);
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalSnapToSocketName);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalBoneToGripName);
		P_GET_ENUM(EGripCollisionType,Z_Param_GripCollisionType);
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_GripLateUpdateSetting);
		P_GET_ENUM(EGripMovementReplicationSettings,Z_Param_GripMovementReplicationSetting);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GripStiffness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GripDamping);
		P_GET_UBOOL(Z_Param_bIsSlotGrip);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GripObject(Z_Param_ObjectToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalSnapToSocketName,Z_Param_OptionalBoneToGripName,EGripCollisionType(Z_Param_GripCollisionType),EGripLateUpdateSettings(Z_Param_GripLateUpdateSetting),EGripMovementReplicationSettings(Z_Param_GripMovementReplicationSetting),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bIsSlotGrip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execSetSocketTransform)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectToSocket);
		P_GET_STRUCT(FTransform_NetQuantize,Z_Param_RelativeTransformToParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSocketTransform(Z_Param_ObjectToSocket,Z_Param_RelativeTransformToParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execNotifyDropAndSocket)
	{
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_NewDrop);
		P_GET_OBJECT(USceneComponent,Z_Param_SocketingParent);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalSocketName);
		P_GET_STRUCT(FTransform_NetQuantize,Z_Param_RelativeTransformToParent);
		P_GET_UBOOL(Z_Param_bWeldBodies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyDropAndSocket_Implementation(Z_Param_NewDrop,Z_Param_SocketingParent,Z_Param_OptionalSocketName,Z_Param_RelativeTransformToParent,Z_Param_bWeldBodies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execServer_NotifyDropAndSocketGrip)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_GripID);
		P_GET_OBJECT(USceneComponent,Z_Param_SocketingParent);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalSocketName);
		P_GET_STRUCT(FTransform_NetQuantize,Z_Param_RelativeTransformToParent);
		P_GET_UBOOL(Z_Param_bWeldBodies);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_NotifyDropAndSocketGrip_Validate(Z_Param_GripID,Z_Param_SocketingParent,Z_Param_OptionalSocketName,Z_Param_RelativeTransformToParent,Z_Param_bWeldBodies))
		{
			RPC_ValidateFailed(TEXT("Server_NotifyDropAndSocketGrip_Validate"));
			return;
		}
		P_THIS->Server_NotifyDropAndSocketGrip_Implementation(Z_Param_GripID,Z_Param_SocketingParent,Z_Param_OptionalSocketName,Z_Param_RelativeTransformToParent,Z_Param_bWeldBodies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execDropAndSocketGrip)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripToDrop);
		P_GET_OBJECT(USceneComponent,Z_Param_SocketingParent);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalSocketName);
		P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_RelativeTransformToParent);
		P_GET_UBOOL(Z_Param_bWeldBodies);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DropAndSocketGrip(Z_Param_Out_GripToDrop,Z_Param_SocketingParent,Z_Param_OptionalSocketName,Z_Param_Out_RelativeTransformToParent,Z_Param_bWeldBodies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execDropAndSocketObject)
	{
		P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_RelativeTransformToParent);
		P_GET_OBJECT(UObject,Z_Param_ObjectToDrop);
		P_GET_PROPERTY(FByteProperty,Z_Param_GripIDToDrop);
		P_GET_OBJECT(USceneComponent,Z_Param_SocketingParent);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalSocketName);
		P_GET_UBOOL(Z_Param_bWeldBodies);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DropAndSocketObject(Z_Param_Out_RelativeTransformToParent,Z_Param_ObjectToDrop,Z_Param_GripIDToDrop,Z_Param_SocketingParent,Z_Param_OptionalSocketName,Z_Param_bWeldBodies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execBP_IsLocallyControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_IsLocallyControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execServer_SendControllerTransform)
	{
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SendControllerTransform_Validate(Z_Param_NewTransform))
		{
			RPC_ValidateFailed(TEXT("Server_SendControllerTransform_Validate"));
			return;
		}
		P_THIS->Server_SendControllerTransform_Implementation(Z_Param_NewTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execOnRep_ReplicatedControllerTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedControllerTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execOnRep_LocallyGrippedObjects)
	{
		P_GET_TARRAY(FBPActorGripInformation,Z_Param_OriginalArrayState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LocallyGrippedObjects(Z_Param_OriginalArrayState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execOnRep_GrippedObjects)
	{
		P_GET_TARRAY(FBPActorGripInformation,Z_Param_OriginalArrayState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GrippedObjects(Z_Param_OriginalArrayState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execOnRep_LocalTransaction)
	{
		P_GET_TARRAY(FBPActorGripInformation,Z_Param_OriginalArrayState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LocalTransaction(Z_Param_OriginalArrayState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execServer_NotifyHandledTransaction)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_GripID);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_NotifyHandledTransaction_Validate(Z_Param_GripID))
		{
			RPC_ValidateFailed(TEXT("Server_NotifyHandledTransaction_Validate"));
			return;
		}
		P_THIS->Server_NotifyHandledTransaction_Implementation(Z_Param_GripID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execServer_NotifyLocalGripRemoved)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_GripID);
		P_GET_STRUCT(FTransform_NetQuantize,Z_Param_TransformAtDrop);
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_AngularVelocity);
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LinearVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_NotifyLocalGripRemoved_Validate(Z_Param_GripID,Z_Param_TransformAtDrop,Z_Param_AngularVelocity,Z_Param_LinearVelocity))
		{
			RPC_ValidateFailed(TEXT("Server_NotifyLocalGripRemoved_Validate"));
			return;
		}
		P_THIS->Server_NotifyLocalGripRemoved_Implementation(Z_Param_GripID,Z_Param_TransformAtDrop,Z_Param_AngularVelocity,Z_Param_LinearVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execServer_NotifySecondaryAttachmentChanged_Retain)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_GripID);
		P_GET_STRUCT(FBPSecondaryGripInfo,Z_Param_SecondaryGripInfo);
		P_GET_STRUCT(FTransform_NetQuantize,Z_Param_NewRelativeTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_NotifySecondaryAttachmentChanged_Retain_Validate(Z_Param_GripID,Z_Param_SecondaryGripInfo,Z_Param_NewRelativeTransform))
		{
			RPC_ValidateFailed(TEXT("Server_NotifySecondaryAttachmentChanged_Retain_Validate"));
			return;
		}
		P_THIS->Server_NotifySecondaryAttachmentChanged_Retain_Implementation(Z_Param_GripID,Z_Param_SecondaryGripInfo,Z_Param_NewRelativeTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execServer_NotifySecondaryAttachmentChanged)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_GripID);
		P_GET_STRUCT(FBPSecondaryGripInfo,Z_Param_SecondaryGripInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_NotifySecondaryAttachmentChanged_Validate(Z_Param_GripID,Z_Param_SecondaryGripInfo))
		{
			RPC_ValidateFailed(TEXT("Server_NotifySecondaryAttachmentChanged_Validate"));
			return;
		}
		P_THIS->Server_NotifySecondaryAttachmentChanged_Implementation(Z_Param_GripID,Z_Param_SecondaryGripInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execServer_NotifyLocalGripAddedOrChanged)
	{
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_newGrip);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_NotifyLocalGripAddedOrChanged_Validate(Z_Param_newGrip))
		{
			RPC_ValidateFailed(TEXT("Server_NotifyLocalGripAddedOrChanged_Validate"));
			return;
		}
		P_THIS->Server_NotifyLocalGripAddedOrChanged_Implementation(Z_Param_newGrip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execClient_NotifyInvalidLocalGrip)
	{
		P_GET_OBJECT(UObject,Z_Param_LocallyGrippedObject);
		P_GET_PROPERTY(FByteProperty,Z_Param_GripID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_NotifyInvalidLocalGrip_Implementation(Z_Param_LocallyGrippedObject,Z_Param_GripID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetPivotLocation_BP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPivotLocation_BP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetPivotTransform_BP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetPivotTransform_BP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execSetCustomPivotComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_NewCustomPivotComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_PivotSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomPivotComponent(Z_Param_NewCustomPivotComponent,Z_Param_PivotSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execGetHandType)
	{
		P_GET_ENUM_REF(EControllerHand,Z_Param_Out_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHandType((EControllerHand&)(Z_Param_Out_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execNewControllerProfileLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NewControllerProfileLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGripMotionControllerComponent::execCancelGlobalLerpToHand)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_GripID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelGlobalLerpToHand(Z_Param_GripID);
		P_NATIVE_END;
	}
	static FName NAME_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip = FName(TEXT("Client_NotifyInvalidLocalGrip"));
	void UGripMotionControllerComponent::Client_NotifyInvalidLocalGrip(UObject* LocallyGrippedObject, uint8 GripID)
	{
		GripMotionControllerComponent_eventClient_NotifyInvalidLocalGrip_Parms Parms;
		Parms.LocallyGrippedObject=LocallyGrippedObject;
		Parms.GripID=GripID;
		ProcessEvent(FindFunctionChecked(NAME_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip),&Parms);
	}
	static FName NAME_UGripMotionControllerComponent_NotifyDrop = FName(TEXT("NotifyDrop"));
	void UGripMotionControllerComponent::NotifyDrop(FBPActorGripInformation const& NewDrop, bool bSimulate)
	{
		GripMotionControllerComponent_eventNotifyDrop_Parms Parms;
		Parms.NewDrop=NewDrop;
		Parms.bSimulate=bSimulate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGripMotionControllerComponent_NotifyDrop),&Parms);
	}
	static FName NAME_UGripMotionControllerComponent_NotifyDropAndSocket = FName(TEXT("NotifyDropAndSocket"));
	void UGripMotionControllerComponent::NotifyDropAndSocket(FBPActorGripInformation const& NewDrop, USceneComponent* SocketingParent, FName OptionalSocketName, FTransform_NetQuantize const& RelativeTransformToParent, bool bWeldBodies)
	{
		GripMotionControllerComponent_eventNotifyDropAndSocket_Parms Parms;
		Parms.NewDrop=NewDrop;
		Parms.SocketingParent=SocketingParent;
		Parms.OptionalSocketName=OptionalSocketName;
		Parms.RelativeTransformToParent=RelativeTransformToParent;
		Parms.bWeldBodies=bWeldBodies ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGripMotionControllerComponent_NotifyDropAndSocket),&Parms);
	}
	static FName NAME_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip = FName(TEXT("Server_NotifyDropAndSocketGrip"));
	void UGripMotionControllerComponent::Server_NotifyDropAndSocketGrip(uint8 GripID, USceneComponent* SocketingParent, FName OptionalSocketName, FTransform_NetQuantize const& RelativeTransformToParent, bool bWeldBodies)
	{
		GripMotionControllerComponent_eventServer_NotifyDropAndSocketGrip_Parms Parms;
		Parms.GripID=GripID;
		Parms.SocketingParent=SocketingParent;
		Parms.OptionalSocketName=OptionalSocketName;
		Parms.RelativeTransformToParent=RelativeTransformToParent;
		Parms.bWeldBodies=bWeldBodies ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip),&Parms);
	}
	static FName NAME_UGripMotionControllerComponent_Server_NotifyHandledTransaction = FName(TEXT("Server_NotifyHandledTransaction"));
	void UGripMotionControllerComponent::Server_NotifyHandledTransaction(uint8 GripID)
	{
		GripMotionControllerComponent_eventServer_NotifyHandledTransaction_Parms Parms;
		Parms.GripID=GripID;
		ProcessEvent(FindFunctionChecked(NAME_UGripMotionControllerComponent_Server_NotifyHandledTransaction),&Parms);
	}
	static FName NAME_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged = FName(TEXT("Server_NotifyLocalGripAddedOrChanged"));
	void UGripMotionControllerComponent::Server_NotifyLocalGripAddedOrChanged(FBPActorGripInformation const& newGrip)
	{
		GripMotionControllerComponent_eventServer_NotifyLocalGripAddedOrChanged_Parms Parms;
		Parms.newGrip=newGrip;
		ProcessEvent(FindFunctionChecked(NAME_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged),&Parms);
	}
	static FName NAME_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved = FName(TEXT("Server_NotifyLocalGripRemoved"));
	void UGripMotionControllerComponent::Server_NotifyLocalGripRemoved(uint8 GripID, FTransform_NetQuantize const& TransformAtDrop, FVector_NetQuantize100 AngularVelocity, FVector_NetQuantize100 LinearVelocity)
	{
		GripMotionControllerComponent_eventServer_NotifyLocalGripRemoved_Parms Parms;
		Parms.GripID=GripID;
		Parms.TransformAtDrop=TransformAtDrop;
		Parms.AngularVelocity=AngularVelocity;
		Parms.LinearVelocity=LinearVelocity;
		ProcessEvent(FindFunctionChecked(NAME_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved),&Parms);
	}
	static FName NAME_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged = FName(TEXT("Server_NotifySecondaryAttachmentChanged"));
	void UGripMotionControllerComponent::Server_NotifySecondaryAttachmentChanged(uint8 GripID, FBPSecondaryGripInfo const& SecondaryGripInfo)
	{
		GripMotionControllerComponent_eventServer_NotifySecondaryAttachmentChanged_Parms Parms;
		Parms.GripID=GripID;
		Parms.SecondaryGripInfo=SecondaryGripInfo;
		ProcessEvent(FindFunctionChecked(NAME_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged),&Parms);
	}
	static FName NAME_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain = FName(TEXT("Server_NotifySecondaryAttachmentChanged_Retain"));
	void UGripMotionControllerComponent::Server_NotifySecondaryAttachmentChanged_Retain(uint8 GripID, FBPSecondaryGripInfo const& SecondaryGripInfo, FTransform_NetQuantize const& NewRelativeTransform)
	{
		GripMotionControllerComponent_eventServer_NotifySecondaryAttachmentChanged_Retain_Parms Parms;
		Parms.GripID=GripID;
		Parms.SecondaryGripInfo=SecondaryGripInfo;
		Parms.NewRelativeTransform=NewRelativeTransform;
		ProcessEvent(FindFunctionChecked(NAME_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain),&Parms);
	}
	static FName NAME_UGripMotionControllerComponent_Server_SendControllerTransform = FName(TEXT("Server_SendControllerTransform"));
	void UGripMotionControllerComponent::Server_SendControllerTransform(FBPVRComponentPosRep NewTransform)
	{
		GripMotionControllerComponent_eventServer_SendControllerTransform_Parms Parms;
		Parms.NewTransform=NewTransform;
		ProcessEvent(FindFunctionChecked(NAME_UGripMotionControllerComponent_Server_SendControllerTransform),&Parms);
	}
	void UGripMotionControllerComponent::StaticRegisterNativesUGripMotionControllerComponent()
	{
		UClass* Class = UGripMotionControllerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSecondaryAttachmentPoint", &UGripMotionControllerComponent::execAddSecondaryAttachmentPoint },
			{ "AddSecondaryAttachmentToGrip", &UGripMotionControllerComponent::execAddSecondaryAttachmentToGrip },
			{ "AddSecondaryAttachmentToGripByID", &UGripMotionControllerComponent::execAddSecondaryAttachmentToGripByID },
			{ "BP_HasGripAuthority", &UGripMotionControllerComponent::execBP_HasGripAuthority },
			{ "BP_HasGripAuthorityForObject", &UGripMotionControllerComponent::execBP_HasGripAuthorityForObject },
			{ "BP_HasGripMovementAuthority", &UGripMotionControllerComponent::execBP_HasGripMovementAuthority },
			{ "BP_IsLocallyControlled", &UGripMotionControllerComponent::execBP_IsLocallyControlled },
			{ "CancelGlobalLerpToHand", &UGripMotionControllerComponent::execCancelGlobalLerpToHand },
			{ "Client_NotifyInvalidLocalGrip", &UGripMotionControllerComponent::execClient_NotifyInvalidLocalGrip },
			{ "ConvertToControllerRelativeTransform", &UGripMotionControllerComponent::execConvertToControllerRelativeTransform },
			{ "ConvertToGripRelativeTransform", &UGripMotionControllerComponent::execConvertToGripRelativeTransform },
			{ "CreateGripRelativeAdditionTransform_BP", &UGripMotionControllerComponent::execCreateGripRelativeAdditionTransform_BP },
			{ "DestroyPhysicsHandle_BP", &UGripMotionControllerComponent::execDestroyPhysicsHandle_BP },
			{ "DropActor", &UGripMotionControllerComponent::execDropActor },
			{ "DropAndSocketGrip", &UGripMotionControllerComponent::execDropAndSocketGrip },
			{ "DropAndSocketObject", &UGripMotionControllerComponent::execDropAndSocketObject },
			{ "DropComponent", &UGripMotionControllerComponent::execDropComponent },
			{ "DropGrip", &UGripMotionControllerComponent::execDropGrip },
			{ "DropObject", &UGripMotionControllerComponent::execDropObject },
			{ "DropObjectByInterface", &UGripMotionControllerComponent::execDropObjectByInterface },
			{ "GetAllGrips", &UGripMotionControllerComponent::execGetAllGrips },
			{ "GetControllerDeviceID", &UGripMotionControllerComponent::execGetControllerDeviceID },
			{ "GetGripByActor", &UGripMotionControllerComponent::execGetGripByActor },
			{ "GetGripByComponent", &UGripMotionControllerComponent::execGetGripByComponent },
			{ "GetGripByID", &UGripMotionControllerComponent::execGetGripByID },
			{ "GetGripByObject", &UGripMotionControllerComponent::execGetGripByObject },
			{ "GetGripDistance_BP", &UGripMotionControllerComponent::execGetGripDistance_BP },
			{ "GetGripMass", &UGripMotionControllerComponent::execGetGripMass },
			{ "GetGrippedActors", &UGripMotionControllerComponent::execGetGrippedActors },
			{ "GetGrippedComponents", &UGripMotionControllerComponent::execGetGrippedComponents },
			{ "GetGrippedObjects", &UGripMotionControllerComponent::execGetGrippedObjects },
			{ "GetHandType", &UGripMotionControllerComponent::execGetHandType },
			{ "GetIsComponentHeld", &UGripMotionControllerComponent::execGetIsComponentHeld },
			{ "GetIsHeld", &UGripMotionControllerComponent::execGetIsHeld },
			{ "GetIsObjectHeld", &UGripMotionControllerComponent::execGetIsObjectHeld },
			{ "GetIsSecondaryAttachment", &UGripMotionControllerComponent::execGetIsSecondaryAttachment },
			{ "GetPhysicsConstraintForce", &UGripMotionControllerComponent::execGetPhysicsConstraintForce },
			{ "GetPhysicsHandleSettings", &UGripMotionControllerComponent::execGetPhysicsHandleSettings },
			{ "GetPhysicsVelocities", &UGripMotionControllerComponent::execGetPhysicsVelocities },
			{ "GetPivotLocation_BP", &UGripMotionControllerComponent::execGetPivotLocation_BP },
			{ "GetPivotTransform_BP", &UGripMotionControllerComponent::execGetPivotTransform_BP },
			{ "GripActor", &UGripMotionControllerComponent::execGripActor },
			{ "GripComponent", &UGripMotionControllerComponent::execGripComponent },
			{ "GripControllerIsTracked", &UGripMotionControllerComponent::execGripControllerIsTracked },
			{ "GripObject", &UGripMotionControllerComponent::execGripObject },
			{ "GripObjectByInterface", &UGripMotionControllerComponent::execGripObjectByInterface },
			{ "HasGrippedObjects", &UGripMotionControllerComponent::execHasGrippedObjects },
			{ "NewControllerProfileLoaded", &UGripMotionControllerComponent::execNewControllerProfileLoaded },
			{ "NotifyDrop", &UGripMotionControllerComponent::execNotifyDrop },
			{ "NotifyDropAndSocket", &UGripMotionControllerComponent::execNotifyDropAndSocket },
			{ "OnRep_GrippedObjects", &UGripMotionControllerComponent::execOnRep_GrippedObjects },
			{ "OnRep_LocallyGrippedObjects", &UGripMotionControllerComponent::execOnRep_LocallyGrippedObjects },
			{ "OnRep_LocalTransaction", &UGripMotionControllerComponent::execOnRep_LocalTransaction },
			{ "OnRep_ReplicatedControllerTransform", &UGripMotionControllerComponent::execOnRep_ReplicatedControllerTransform },
			{ "PostTeleportMoveGrippedObjects", &UGripMotionControllerComponent::execPostTeleportMoveGrippedObjects },
			{ "RemoveSecondaryAttachmentFromGrip", &UGripMotionControllerComponent::execRemoveSecondaryAttachmentFromGrip },
			{ "RemoveSecondaryAttachmentFromGripByID", &UGripMotionControllerComponent::execRemoveSecondaryAttachmentFromGripByID },
			{ "RemoveSecondaryAttachmentPoint", &UGripMotionControllerComponent::execRemoveSecondaryAttachmentPoint },
			{ "Server_NotifyDropAndSocketGrip", &UGripMotionControllerComponent::execServer_NotifyDropAndSocketGrip },
			{ "Server_NotifyHandledTransaction", &UGripMotionControllerComponent::execServer_NotifyHandledTransaction },
			{ "Server_NotifyLocalGripAddedOrChanged", &UGripMotionControllerComponent::execServer_NotifyLocalGripAddedOrChanged },
			{ "Server_NotifyLocalGripRemoved", &UGripMotionControllerComponent::execServer_NotifyLocalGripRemoved },
			{ "Server_NotifySecondaryAttachmentChanged", &UGripMotionControllerComponent::execServer_NotifySecondaryAttachmentChanged },
			{ "Server_NotifySecondaryAttachmentChanged_Retain", &UGripMotionControllerComponent::execServer_NotifySecondaryAttachmentChanged_Retain },
			{ "Server_SendControllerTransform", &UGripMotionControllerComponent::execServer_SendControllerTransform },
			{ "SetCustomPivotComponent", &UGripMotionControllerComponent::execSetCustomPivotComponent },
			{ "SetGripAdditionTransform", &UGripMotionControllerComponent::execSetGripAdditionTransform },
			{ "SetGripCollisionType", &UGripMotionControllerComponent::execSetGripCollisionType },
			{ "SetGripHybridLock", &UGripMotionControllerComponent::execSetGripHybridLock },
			{ "SetGripLateUpdateSetting", &UGripMotionControllerComponent::execSetGripLateUpdateSetting },
			{ "SetGripPaused", &UGripMotionControllerComponent::execSetGripPaused },
			{ "SetGripRelativeTransform", &UGripMotionControllerComponent::execSetGripRelativeTransform },
			{ "SetGripStiffnessAndDamping", &UGripMotionControllerComponent::execSetGripStiffnessAndDamping },
			{ "SetPausedTransform", &UGripMotionControllerComponent::execSetPausedTransform },
			{ "SetPhysicsHandleSettings", &UGripMotionControllerComponent::execSetPhysicsHandleSettings },
			{ "SetSocketTransform", &UGripMotionControllerComponent::execSetSocketTransform },
			{ "SetUpPhysicsHandle_BP", &UGripMotionControllerComponent::execSetUpPhysicsHandle_BP },
			{ "TeleportMoveGrip", &UGripMotionControllerComponent::execTeleportMoveGrip },
			{ "TeleportMoveGrippedActor", &UGripMotionControllerComponent::execTeleportMoveGrippedActor },
			{ "TeleportMoveGrippedComponent", &UGripMotionControllerComponent::execTeleportMoveGrippedComponent },
			{ "TeleportMoveGrips", &UGripMotionControllerComponent::execTeleportMoveGrips },
			{ "UpdatePhysicsHandle_BP", &UGripMotionControllerComponent::execUpdatePhysicsHandle_BP },
			{ "UpdatePhysicsHandleTransform_BP", &UGripMotionControllerComponent::execUpdatePhysicsHandleTransform_BP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics
	{
		struct GripMotionControllerComponent_eventAddSecondaryAttachmentPoint_Parms
		{
			UObject* GrippedObjectToAddAttachment;
			USceneComponent* SecondaryPointComponent;
			FTransform OriginalTransform;
			bool bTransformIsAlreadyRelative;
			float LerpToTime;
			bool bIsSlotGrip;
			FName SecondarySlotName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippedObjectToAddAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryPointComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryPointComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalTransform;
		static void NewProp_bTransformIsAlreadyRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransformIsAlreadyRelative;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpToTime;
		static void NewProp_bIsSlotGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlotGrip;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SecondarySlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_GrippedObjectToAddAttachment = { "GrippedObjectToAddAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventAddSecondaryAttachmentPoint_Parms, GrippedObjectToAddAttachment), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_SecondaryPointComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_SecondaryPointComponent = { "SecondaryPointComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventAddSecondaryAttachmentPoint_Parms, SecondaryPointComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_SecondaryPointComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_SecondaryPointComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_OriginalTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_OriginalTransform = { "OriginalTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventAddSecondaryAttachmentPoint_Parms, OriginalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_OriginalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_OriginalTransform_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_bTransformIsAlreadyRelative_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventAddSecondaryAttachmentPoint_Parms*)Obj)->bTransformIsAlreadyRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_bTransformIsAlreadyRelative = { "bTransformIsAlreadyRelative", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventAddSecondaryAttachmentPoint_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_bTransformIsAlreadyRelative_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_LerpToTime = { "LerpToTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventAddSecondaryAttachmentPoint_Parms, LerpToTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_bIsSlotGrip_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventAddSecondaryAttachmentPoint_Parms*)Obj)->bIsSlotGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_bIsSlotGrip = { "bIsSlotGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventAddSecondaryAttachmentPoint_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_bIsSlotGrip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_SecondarySlotName = { "SecondarySlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventAddSecondaryAttachmentPoint_Parms, SecondarySlotName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventAddSecondaryAttachmentPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventAddSecondaryAttachmentPoint_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_GrippedObjectToAddAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_SecondaryPointComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_OriginalTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_bTransformIsAlreadyRelative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_LerpToTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_bIsSlotGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_SecondarySlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Adds a secondary attachment point to the grip\n" },
		{ "CPP_Default_bIsSlotGrip", "false" },
		{ "CPP_Default_bTransformIsAlreadyRelative", "false" },
		{ "CPP_Default_LerpToTime", "0.250000" },
		{ "CPP_Default_SecondarySlotName", "None" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Adds a secondary attachment point to the grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "AddSecondaryAttachmentPoint", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventAddSecondaryAttachmentPoint_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics
	{
		struct GripMotionControllerComponent_eventAddSecondaryAttachmentToGrip_Parms
		{
			FBPActorGripInformation GripToAddAttachment;
			USceneComponent* SecondaryPointComponent;
			FTransform OriginalTransform;
			bool bTransformIsAlreadyRelative;
			float LerpToTime;
			bool bIsSlotGrip;
			FName SecondarySlotName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripToAddAttachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripToAddAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryPointComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryPointComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalTransform;
		static void NewProp_bTransformIsAlreadyRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransformIsAlreadyRelative;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpToTime;
		static void NewProp_bIsSlotGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlotGrip;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SecondarySlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_GripToAddAttachment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_GripToAddAttachment = { "GripToAddAttachment", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventAddSecondaryAttachmentToGrip_Parms, GripToAddAttachment), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_GripToAddAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_GripToAddAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_SecondaryPointComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_SecondaryPointComponent = { "SecondaryPointComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventAddSecondaryAttachmentToGrip_Parms, SecondaryPointComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_SecondaryPointComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_SecondaryPointComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_OriginalTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_OriginalTransform = { "OriginalTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventAddSecondaryAttachmentToGrip_Parms, OriginalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_OriginalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_OriginalTransform_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_bTransformIsAlreadyRelative_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventAddSecondaryAttachmentToGrip_Parms*)Obj)->bTransformIsAlreadyRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_bTransformIsAlreadyRelative = { "bTransformIsAlreadyRelative", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventAddSecondaryAttachmentToGrip_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_bTransformIsAlreadyRelative_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_LerpToTime = { "LerpToTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventAddSecondaryAttachmentToGrip_Parms, LerpToTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_bIsSlotGrip_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventAddSecondaryAttachmentToGrip_Parms*)Obj)->bIsSlotGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_bIsSlotGrip = { "bIsSlotGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventAddSecondaryAttachmentToGrip_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_bIsSlotGrip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_SecondarySlotName = { "SecondarySlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventAddSecondaryAttachmentToGrip_Parms, SecondarySlotName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventAddSecondaryAttachmentToGrip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventAddSecondaryAttachmentToGrip_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_GripToAddAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_SecondaryPointComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_OriginalTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_bTransformIsAlreadyRelative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_LerpToTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_bIsSlotGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_SecondarySlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Adds a secondary attachment point to the grip\n" },
		{ "CPP_Default_bIsSlotGrip", "false" },
		{ "CPP_Default_bTransformIsAlreadyRelative", "false" },
		{ "CPP_Default_LerpToTime", "0.250000" },
		{ "CPP_Default_SecondarySlotName", "None" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Adds a secondary attachment point to the grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "AddSecondaryAttachmentToGrip", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventAddSecondaryAttachmentToGrip_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics
	{
		struct GripMotionControllerComponent_eventAddSecondaryAttachmentToGripByID_Parms
		{
			uint8 GripID;
			USceneComponent* SecondaryPointComponent;
			FTransform OriginalTransform;
			bool bTransformIsAlreadyRelative;
			float LerpToTime;
			bool bIsSlotGrip;
			FName SecondarySlotName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryPointComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryPointComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalTransform;
		static void NewProp_bTransformIsAlreadyRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransformIsAlreadyRelative;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpToTime;
		static void NewProp_bIsSlotGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlotGrip;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SecondarySlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_GripID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventAddSecondaryAttachmentToGripByID_Parms, GripID), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_GripID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_GripID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_SecondaryPointComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_SecondaryPointComponent = { "SecondaryPointComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventAddSecondaryAttachmentToGripByID_Parms, SecondaryPointComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_SecondaryPointComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_SecondaryPointComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_OriginalTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_OriginalTransform = { "OriginalTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventAddSecondaryAttachmentToGripByID_Parms, OriginalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_OriginalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_OriginalTransform_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_bTransformIsAlreadyRelative_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventAddSecondaryAttachmentToGripByID_Parms*)Obj)->bTransformIsAlreadyRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_bTransformIsAlreadyRelative = { "bTransformIsAlreadyRelative", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventAddSecondaryAttachmentToGripByID_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_bTransformIsAlreadyRelative_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_LerpToTime = { "LerpToTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventAddSecondaryAttachmentToGripByID_Parms, LerpToTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_bIsSlotGrip_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventAddSecondaryAttachmentToGripByID_Parms*)Obj)->bIsSlotGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_bIsSlotGrip = { "bIsSlotGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventAddSecondaryAttachmentToGripByID_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_bIsSlotGrip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_SecondarySlotName = { "SecondarySlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventAddSecondaryAttachmentToGripByID_Parms, SecondarySlotName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventAddSecondaryAttachmentToGripByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventAddSecondaryAttachmentToGripByID_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_GripID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_SecondaryPointComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_OriginalTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_bTransformIsAlreadyRelative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_LerpToTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_bIsSlotGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_SecondarySlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Adds a secondary attachment point to the grip\n" },
		{ "CPP_Default_bIsSlotGrip", "false" },
		{ "CPP_Default_bTransformIsAlreadyRelative", "false" },
		{ "CPP_Default_LerpToTime", "0.250000" },
		{ "CPP_Default_SecondarySlotName", "None" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Adds a secondary attachment point to the grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "AddSecondaryAttachmentToGripByID", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventAddSecondaryAttachmentToGripByID_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics
	{
		struct GripMotionControllerComponent_eventBP_HasGripAuthority_Parms
		{
			FBPActorGripInformation Grip;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventBP_HasGripAuthority_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::NewProp_Grip_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventBP_HasGripAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventBP_HasGripAuthority_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Returns if we have grip authority (can call drop / grip on this grip)\n// Mostly for networked games as local grips are client authed and all others are server authed\n" },
		{ "DisplayName", "HasGripAuthority" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Returns if we have grip authority (can call drop / grip on this grip)\nMostly for networked games as local grips are client authed and all others are server authed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "BP_HasGripAuthority", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventBP_HasGripAuthority_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics
	{
		struct GripMotionControllerComponent_eventBP_HasGripAuthorityForObject_Parms
		{
			const UObject* ObjToCheck;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjToCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::NewProp_ObjToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::NewProp_ObjToCheck = { "ObjToCheck", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventBP_HasGripAuthorityForObject_Parms, ObjToCheck), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::NewProp_ObjToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::NewProp_ObjToCheck_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventBP_HasGripAuthorityForObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventBP_HasGripAuthorityForObject_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::NewProp_ObjToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Returns if we have grip authority (can call drop / grip on this grip)\n// Mostly for networked games as local grips are client authed and all others are server authed\n" },
		{ "DisplayName", "HasGripAuthorityForObject" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Returns if we have grip authority (can call drop / grip on this grip)\nMostly for networked games as local grips are client authed and all others are server authed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "BP_HasGripAuthorityForObject", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventBP_HasGripAuthorityForObject_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics
	{
		struct GripMotionControllerComponent_eventBP_HasGripMovementAuthority_Parms
		{
			FBPActorGripInformation Grip;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventBP_HasGripMovementAuthority_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::NewProp_Grip_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventBP_HasGripMovementAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventBP_HasGripMovementAuthority_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Returns if we have grip movement authority (we handle movement of the grip)\n// Mostly for networked games where ClientSide will be true for all and ServerSide will be true for server only\n" },
		{ "DisplayName", "HasGripMovementAuthority" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Returns if we have grip movement authority (we handle movement of the grip)\nMostly for networked games where ClientSide will be true for all and ServerSide will be true for server only" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "BP_HasGripMovementAuthority", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventBP_HasGripMovementAuthority_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_BP_IsLocallyControlled_Statics
	{
		struct GripMotionControllerComponent_eventBP_IsLocallyControlled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGripMotionControllerComponent_BP_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventBP_IsLocallyControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_BP_IsLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventBP_IsLocallyControlled_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_BP_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_BP_IsLocallyControlled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_BP_IsLocallyControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_BP_IsLocallyControlled_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Returns if this is the owning connection for the motion controller\n" },
		{ "DisplayName", "IsLocallyControlled" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Returns if this is the owning connection for the motion controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_BP_IsLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "BP_IsLocallyControlled", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventBP_IsLocallyControlled_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_BP_IsLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_BP_IsLocallyControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_BP_IsLocallyControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_BP_IsLocallyControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_BP_IsLocallyControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_BP_IsLocallyControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_CancelGlobalLerpToHand_Statics
	{
		struct GripMotionControllerComponent_eventCancelGlobalLerpToHand_Parms
		{
			uint8 GripID;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_CancelGlobalLerpToHand_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventCancelGlobalLerpToHand_Parms, GripID), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_CancelGlobalLerpToHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_CancelGlobalLerpToHand_Statics::NewProp_GripID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_CancelGlobalLerpToHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_CancelGlobalLerpToHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "CancelGlobalLerpToHand", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventCancelGlobalLerpToHand_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_CancelGlobalLerpToHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_CancelGlobalLerpToHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_CancelGlobalLerpToHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_CancelGlobalLerpToHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_CancelGlobalLerpToHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_CancelGlobalLerpToHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocallyGrippedObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Statics::NewProp_LocallyGrippedObject = { "LocallyGrippedObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventClient_NotifyInvalidLocalGrip_Parms, LocallyGrippedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventClient_NotifyInvalidLocalGrip_Parms, GripID), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Statics::NewProp_LocallyGrippedObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Statics::NewProp_GripID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Notify a client that their local grip was bad\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Notify a client that their local grip was bad" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "Client_NotifyInvalidLocalGrip", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventClient_NotifyInvalidLocalGrip_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Statics
	{
		struct GripMotionControllerComponent_eventConvertToControllerRelativeTransform_Parms
		{
			FTransform InTransform;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventConvertToControllerRelativeTransform_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Statics::NewProp_InTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventConvertToControllerRelativeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Statics::NewProp_InTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Converts a worldspace transform into being relative to this motion controller\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Converts a worldspace transform into being relative to this motion controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "ConvertToControllerRelativeTransform", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventConvertToControllerRelativeTransform_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics
	{
		struct GripMotionControllerComponent_eventConvertToGripRelativeTransform_Parms
		{
			FTransform GrippedActorTransform;
			FTransform InTransform;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippedActorTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrippedActorTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::NewProp_GrippedActorTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::NewProp_GrippedActorTransform = { "GrippedActorTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventConvertToGripRelativeTransform_Parms, GrippedActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::NewProp_GrippedActorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::NewProp_GrippedActorTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventConvertToGripRelativeTransform_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::NewProp_InTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventConvertToGripRelativeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::NewProp_GrippedActorTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::NewProp_InTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Creates a secondary grip relative transform\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Creates a secondary grip relative transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "ConvertToGripRelativeTransform", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventConvertToGripRelativeTransform_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics
	{
		struct GripMotionControllerComponent_eventCreateGripRelativeAdditionTransform_BP_Parms
		{
			FBPActorGripInformation GripToSample;
			FTransform AdditionTransform;
			bool bGripRelative;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripToSample_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripToSample;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionTransform;
		static void NewProp_bGripRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGripRelative;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::NewProp_GripToSample_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::NewProp_GripToSample = { "GripToSample", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventCreateGripRelativeAdditionTransform_BP_Parms, GripToSample), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::NewProp_GripToSample_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::NewProp_GripToSample_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::NewProp_AdditionTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::NewProp_AdditionTransform = { "AdditionTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventCreateGripRelativeAdditionTransform_BP_Parms, AdditionTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::NewProp_AdditionTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::NewProp_AdditionTransform_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::NewProp_bGripRelative_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventCreateGripRelativeAdditionTransform_BP_Parms*)Obj)->bGripRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::NewProp_bGripRelative = { "bGripRelative", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventCreateGripRelativeAdditionTransform_BP_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::NewProp_bGripRelative_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventCreateGripRelativeAdditionTransform_BP_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::NewProp_GripToSample,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::NewProp_AdditionTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::NewProp_bGripRelative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Used to convert an offset transform to grip relative, useful for storing an initial offset and then lerping back to 0 without re-calculating every tick\n" },
		{ "CPP_Default_bGripRelative", "false" },
		{ "DisplayName", "CreateGripRelativeAdditionTransform" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Used to convert an offset transform to grip relative, useful for storing an initial offset and then lerping back to 0 without re-calculating every tick" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "CreateGripRelativeAdditionTransform_BP", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventCreateGripRelativeAdditionTransform_BP_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics
	{
		struct GripMotionControllerComponent_eventDestroyPhysicsHandle_BP_Parms
		{
			FBPActorGripInformation Grip;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDestroyPhysicsHandle_BP_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::NewProp_Grip_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventDestroyPhysicsHandle_BP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventDestroyPhysicsHandle_BP_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController|Custom" },
		{ "Comment", "// Destroys a physics handle for this grip\n" },
		{ "DisplayName", "DestroyPhysicsHandle" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Destroys a physics handle for this grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "DestroyPhysicsHandle_BP", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventDestroyPhysicsHandle_BP_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics
	{
		struct GripMotionControllerComponent_eventDropActor_Parms
		{
			AActor* ActorToDrop;
			bool bSimulate;
			FVector OptionalAngularVelocity;
			FVector OptionalLinearVelocity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToDrop;
		static void NewProp_bSimulate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalAngularVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalLinearVelocity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::NewProp_ActorToDrop = { "ActorToDrop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropActor_Parms, ActorToDrop), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::NewProp_bSimulate_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventDropActor_Parms*)Obj)->bSimulate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::NewProp_bSimulate = { "bSimulate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventDropActor_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::NewProp_bSimulate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::NewProp_OptionalAngularVelocity = { "OptionalAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropActor_Parms, OptionalAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::NewProp_OptionalLinearVelocity = { "OptionalLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropActor_Parms, OptionalLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventDropActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventDropActor_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::NewProp_ActorToDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::NewProp_bSimulate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::NewProp_OptionalAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::NewProp_OptionalLinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Drop a gripped actor\n" },
		{ "CPP_Default_OptionalAngularVelocity", "" },
		{ "CPP_Default_OptionalLinearVelocity", "" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Drop a gripped actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "DropActor", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventDropActor_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_DropActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_DropActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics
	{
		struct GripMotionControllerComponent_eventDropAndSocketGrip_Parms
		{
			FBPActorGripInformation GripToDrop;
			USceneComponent* SocketingParent;
			FName OptionalSocketName;
			FTransform_NetQuantize RelativeTransformToParent;
			bool bWeldBodies;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripToDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripToDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketingParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SocketingParent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransformToParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransformToParent;
		static void NewProp_bWeldBodies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWeldBodies;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_GripToDrop_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_GripToDrop = { "GripToDrop", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropAndSocketGrip_Parms, GripToDrop), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_GripToDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_GripToDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_SocketingParent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_SocketingParent = { "SocketingParent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropAndSocketGrip_Parms, SocketingParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_SocketingParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_SocketingParent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_OptionalSocketName = { "OptionalSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropAndSocketGrip_Parms, OptionalSocketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_RelativeTransformToParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_RelativeTransformToParent = { "RelativeTransformToParent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropAndSocketGrip_Parms, RelativeTransformToParent), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_RelativeTransformToParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_RelativeTransformToParent_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_bWeldBodies_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventDropAndSocketGrip_Parms*)Obj)->bWeldBodies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_bWeldBodies = { "bWeldBodies", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventDropAndSocketGrip_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_bWeldBodies_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventDropAndSocketGrip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventDropAndSocketGrip_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_GripToDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_SocketingParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_OptionalSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_RelativeTransformToParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_bWeldBodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Drops a grip and sockets it to the given component at the given relative transform.\n// *Note*: If both the parent and the child are simulating it also delays a single tick and then re-applies the relative transform.\n// This is to avoid a race condition where we need to wait for the next physics update.\n" },
		{ "CPP_Default_bWeldBodies", "true" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Drops a grip and sockets it to the given component at the given relative transform.\n*Note*: If both the parent and the child are simulating it also delays a single tick and then re-applies the relative transform.\nThis is to avoid a race condition where we need to wait for the next physics update." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "DropAndSocketGrip", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventDropAndSocketGrip_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics
	{
		struct GripMotionControllerComponent_eventDropAndSocketObject_Parms
		{
			FTransform_NetQuantize RelativeTransformToParent;
			UObject* ObjectToDrop;
			uint8 GripIDToDrop;
			USceneComponent* SocketingParent;
			FName OptionalSocketName;
			bool bWeldBodies;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransformToParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransformToParent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToDrop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripIDToDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketingParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SocketingParent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalSocketName;
		static void NewProp_bWeldBodies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWeldBodies;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_RelativeTransformToParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_RelativeTransformToParent = { "RelativeTransformToParent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropAndSocketObject_Parms, RelativeTransformToParent), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_RelativeTransformToParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_RelativeTransformToParent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_ObjectToDrop = { "ObjectToDrop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropAndSocketObject_Parms, ObjectToDrop), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_GripIDToDrop = { "GripIDToDrop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropAndSocketObject_Parms, GripIDToDrop), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_SocketingParent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_SocketingParent = { "SocketingParent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropAndSocketObject_Parms, SocketingParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_SocketingParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_SocketingParent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_OptionalSocketName = { "OptionalSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropAndSocketObject_Parms, OptionalSocketName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_bWeldBodies_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventDropAndSocketObject_Parms*)Obj)->bWeldBodies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_bWeldBodies = { "bWeldBodies", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventDropAndSocketObject_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_bWeldBodies_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventDropAndSocketObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventDropAndSocketObject_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_RelativeTransformToParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_ObjectToDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_GripIDToDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_SocketingParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_OptionalSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_bWeldBodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Drops a gripped object and sockets it to the given component at the given relative transform.\n// *Note*: If both the parent and the child are simulating it also delays a single tick and then re-applies the relative transform.\n// This is to avoid a race condition where we need to wait for the next physics update.\n" },
		{ "CPP_Default_bWeldBodies", "true" },
		{ "CPP_Default_GripIDToDrop", "0" },
		{ "CPP_Default_ObjectToDrop", "None" },
		{ "CPP_Default_OptionalSocketName", "None" },
		{ "CPP_Default_SocketingParent", "None" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Drops a gripped object and sockets it to the given component at the given relative transform.\n*Note*: If both the parent and the child are simulating it also delays a single tick and then re-applies the relative transform.\nThis is to avoid a race condition where we need to wait for the next physics update." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "DropAndSocketObject", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventDropAndSocketObject_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics
	{
		struct GripMotionControllerComponent_eventDropComponent_Parms
		{
			UPrimitiveComponent* ComponentToDrop;
			bool bSimulate;
			FVector OptionalAngularVelocity;
			FVector OptionalLinearVelocity;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToDrop;
		static void NewProp_bSimulate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalAngularVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalLinearVelocity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_ComponentToDrop_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_ComponentToDrop = { "ComponentToDrop", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropComponent_Parms, ComponentToDrop), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_ComponentToDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_ComponentToDrop_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_bSimulate_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventDropComponent_Parms*)Obj)->bSimulate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_bSimulate = { "bSimulate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventDropComponent_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_bSimulate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_OptionalAngularVelocity = { "OptionalAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropComponent_Parms, OptionalAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_OptionalLinearVelocity = { "OptionalLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropComponent_Parms, OptionalLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventDropComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventDropComponent_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_ComponentToDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_bSimulate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_OptionalAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_OptionalLinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Drop a gripped component\n" },
		{ "CPP_Default_OptionalAngularVelocity", "" },
		{ "CPP_Default_OptionalLinearVelocity", "" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Drop a gripped component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "DropComponent", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventDropComponent_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics
	{
		struct GripMotionControllerComponent_eventDropGrip_Parms
		{
			FBPActorGripInformation Grip;
			bool bSimulate;
			FVector OptionalAngularVelocity;
			FVector OptionalLinearVelocity;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static void NewProp_bSimulate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalAngularVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalLinearVelocity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropGrip_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_Grip_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_bSimulate_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventDropGrip_Parms*)Obj)->bSimulate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_bSimulate = { "bSimulate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventDropGrip_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_bSimulate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_OptionalAngularVelocity = { "OptionalAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropGrip_Parms, OptionalAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_OptionalLinearVelocity = { "OptionalLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropGrip_Parms, OptionalLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventDropGrip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventDropGrip_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_bSimulate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_OptionalAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_OptionalLinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Master function for dropping a grip\n" },
		{ "CPP_Default_bSimulate", "false" },
		{ "CPP_Default_OptionalAngularVelocity", "" },
		{ "CPP_Default_OptionalLinearVelocity", "" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Master function for dropping a grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "DropGrip", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventDropGrip_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics
	{
		struct GripMotionControllerComponent_eventDropObject_Parms
		{
			UObject* ObjectToDrop;
			uint8 GripIdToDrop;
			bool bSimulate;
			FVector OptionalAngularVelocity;
			FVector OptionalLinearVelocity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToDrop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripIdToDrop;
		static void NewProp_bSimulate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalAngularVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalLinearVelocity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::NewProp_ObjectToDrop = { "ObjectToDrop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropObject_Parms, ObjectToDrop), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::NewProp_GripIdToDrop = { "GripIdToDrop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropObject_Parms, GripIdToDrop), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::NewProp_bSimulate_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventDropObject_Parms*)Obj)->bSimulate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::NewProp_bSimulate = { "bSimulate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventDropObject_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::NewProp_bSimulate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::NewProp_OptionalAngularVelocity = { "OptionalAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropObject_Parms, OptionalAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::NewProp_OptionalLinearVelocity = { "OptionalLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropObject_Parms, OptionalLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventDropObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventDropObject_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::NewProp_ObjectToDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::NewProp_GripIdToDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::NewProp_bSimulate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::NewProp_OptionalAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::NewProp_OptionalLinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Auto drop any uobject that is/root is a primitive component and has the VR Grip Interface\x09\n// If an object is passed in it will attempt to drop it, otherwise it will attempt to find and drop the given grip id\n" },
		{ "CPP_Default_bSimulate", "false" },
		{ "CPP_Default_GripIdToDrop", "0" },
		{ "CPP_Default_ObjectToDrop", "None" },
		{ "CPP_Default_OptionalAngularVelocity", "" },
		{ "CPP_Default_OptionalLinearVelocity", "" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Auto drop any uobject that is/root is a primitive component and has the VR Grip Interface\nIf an object is passed in it will attempt to drop it, otherwise it will attempt to find and drop the given grip id" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "DropObject", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventDropObject_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_DropObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_DropObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics
	{
		struct GripMotionControllerComponent_eventDropObjectByInterface_Parms
		{
			UObject* ObjectToDrop;
			uint8 GripIDToDrop;
			FVector OptionalAngularVelocity;
			FVector OptionalLinearVelocity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToDrop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripIDToDrop;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalAngularVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalLinearVelocity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::NewProp_ObjectToDrop = { "ObjectToDrop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropObjectByInterface_Parms, ObjectToDrop), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::NewProp_GripIDToDrop = { "GripIDToDrop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropObjectByInterface_Parms, GripIDToDrop), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::NewProp_OptionalAngularVelocity = { "OptionalAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropObjectByInterface_Parms, OptionalAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::NewProp_OptionalLinearVelocity = { "OptionalLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventDropObjectByInterface_Parms, OptionalLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventDropObjectByInterface_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventDropObjectByInterface_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::NewProp_ObjectToDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::NewProp_GripIDToDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::NewProp_OptionalAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::NewProp_OptionalLinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Auto drop any uobject that is/root is a primitive component and has the VR Grip Interface\n// If an object is passed in it will attempt to drop it, otherwise it will attempt to find and drop the given grip id\n" },
		{ "CPP_Default_GripIDToDrop", "0" },
		{ "CPP_Default_ObjectToDrop", "None" },
		{ "CPP_Default_OptionalAngularVelocity", "" },
		{ "CPP_Default_OptionalLinearVelocity", "" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Auto drop any uobject that is/root is a primitive component and has the VR Grip Interface\nIf an object is passed in it will attempt to drop it, otherwise it will attempt to find and drop the given grip id" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "DropObjectByInterface", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventDropObjectByInterface_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetAllGrips_Statics
	{
		struct GripMotionControllerComponent_eventGetAllGrips_Parms
		{
			TArray<FBPActorGripInformation> GripArray;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GripArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetAllGrips_Statics::NewProp_GripArray_Inner = { "GripArray", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetAllGrips_Statics::NewProp_GripArray = { "GripArray", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetAllGrips_Parms, GripArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetAllGrips_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetAllGrips_Statics::NewProp_GripArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetAllGrips_Statics::NewProp_GripArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetAllGrips_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Get list of all gripped objects grip info structures (local and normal both)\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Get list of all gripped objects grip info structures (local and normal both)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetAllGrips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetAllGrips", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetAllGrips_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetAllGrips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetAllGrips_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetAllGrips_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetAllGrips_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetAllGrips()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetAllGrips_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics
	{
		struct GripMotionControllerComponent_eventGetControllerDeviceID_Parms
		{
			FXRDeviceId DeviceID;
			EBPVRResultSwitch Result;
			bool bCheckOpenVROnly;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static void NewProp_bCheckOpenVROnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckOpenVROnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetControllerDeviceID_Parms, DeviceID), Z_Construct_UScriptStruct_FXRDeviceId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetControllerDeviceID_Parms, Result), Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::NewProp_bCheckOpenVROnly_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGetControllerDeviceID_Parms*)Obj)->bCheckOpenVROnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::NewProp_bCheckOpenVROnly = { "bCheckOpenVROnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGetControllerDeviceID_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::NewProp_bCheckOpenVROnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::NewProp_DeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::NewProp_bCheckOpenVROnly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "/** Returns the first valid device ID for this motion controller (across enabled XR systems)\n\x09*\n\x09* If bCheckOpenVROnly is true, then it only checks for OpenVR IDs (for use with my openVR nodes).\n\x09*/" },
		{ "CPP_Default_bCheckOpenVROnly", "false" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Returns the first valid device ID for this motion controller (across enabled XR systems)\n\nIf bCheckOpenVROnly is true, then it only checks for OpenVR IDs (for use with my openVR nodes)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetControllerDeviceID", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetControllerDeviceID_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics
	{
		struct GripMotionControllerComponent_eventGetGripByActor_Parms
		{
			FBPActorGripInformation Grip;
			AActor* ActorToLookForGrip;
			EBPVRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToLookForGrip;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripByActor_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics::NewProp_ActorToLookForGrip = { "ActorToLookForGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripByActor_Parms, ActorToLookForGrip), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripByActor_Parms, Result), Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics::NewProp_ActorToLookForGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Get a grip by actor\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Get a grip by actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetGripByActor", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetGripByActor_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics
	{
		struct GripMotionControllerComponent_eventGetGripByComponent_Parms
		{
			FBPActorGripInformation Grip;
			UPrimitiveComponent* ComponentToLookForGrip;
			EBPVRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToLookForGrip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToLookForGrip;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripByComponent_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::NewProp_ComponentToLookForGrip_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::NewProp_ComponentToLookForGrip = { "ComponentToLookForGrip", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripByComponent_Parms, ComponentToLookForGrip), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::NewProp_ComponentToLookForGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::NewProp_ComponentToLookForGrip_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripByComponent_Parms, Result), Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::NewProp_ComponentToLookForGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Get a grip by component\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Get a grip by component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetGripByComponent", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetGripByComponent_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics
	{
		struct GripMotionControllerComponent_eventGetGripByID_Parms
		{
			FBPActorGripInformation Grip;
			uint8 IDToLookForGrip;
			EBPVRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IDToLookForGrip;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripByID_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics::NewProp_IDToLookForGrip = { "IDToLookForGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripByID_Parms, IDToLookForGrip), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripByID_Parms, Result), Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics::NewProp_IDToLookForGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Gets a grip by its grip ID *NOTE*: Grip IDs are only unique to their controller, do NOT use them as cross controller identifiers\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Gets a grip by its grip ID *NOTE*: Grip IDs are only unique to their controller, do NOT use them as cross controller identifiers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetGripByID", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetGripByID_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics
	{
		struct GripMotionControllerComponent_eventGetGripByObject_Parms
		{
			FBPActorGripInformation Grip;
			UObject* ObjectToLookForGrip;
			EBPVRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToLookForGrip;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripByObject_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics::NewProp_ObjectToLookForGrip = { "ObjectToLookForGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripByObject_Parms, ObjectToLookForGrip), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripByObject_Parms, Result), Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics::NewProp_ObjectToLookForGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Gets a grip by object, will auto use ByComponent or ByActor\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Gets a grip by object, will auto use ByComponent or ByActor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetGripByObject", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetGripByObject_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics
	{
		struct GripMotionControllerComponent_eventGetGripDistance_BP_Parms
		{
			FBPActorGripInformation Grip;
			FVector ExpectedLocation;
			float CurrentDistance;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpectedLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDistance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripDistance_BP_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::NewProp_ExpectedLocation = { "ExpectedLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripDistance_BP_Parms, ExpectedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::NewProp_CurrentDistance = { "CurrentDistance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripDistance_BP_Parms, CurrentDistance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGetGripDistance_BP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGetGripDistance_BP_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::NewProp_ExpectedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::NewProp_CurrentDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController|Custom" },
		{ "Comment", "// Get the grip distance of either the physics handle if there is one, or the difference from the hand to the root component if there isn't\n" },
		{ "DisplayName", "GetGripDistance" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Get the grip distance of either the physics handle if there is one, or the difference from the hand to the root component if there isn't" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetGripDistance_BP", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetGripDistance_BP_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass_Statics
	{
		struct GripMotionControllerComponent_eventGetGripMass_Parms
		{
			FBPActorGripInformation Grip;
			float Mass;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripMass_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass_Statics::NewProp_Grip_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGripMass_Parms, Mass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass_Statics::NewProp_Mass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Get the root components mass of a grip\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Get the root components mass of a grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetGripMass", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetGripMass_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedActors_Statics
	{
		struct GripMotionControllerComponent_eventGetGrippedActors_Parms
		{
			TArray<AActor*> GrippedActorArray;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippedActorArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GrippedActorArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedActors_Statics::NewProp_GrippedActorArray_Inner = { "GrippedActorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedActors_Statics::NewProp_GrippedActorArray = { "GrippedActorArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGrippedActors_Parms, GrippedActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedActors_Statics::NewProp_GrippedActorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedActors_Statics::NewProp_GrippedActorArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Get list of all gripped actors\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Get list of all gripped actors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetGrippedActors", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetGrippedActors_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents_Statics
	{
		struct GripMotionControllerComponent_eventGetGrippedComponents_Parms
		{
			TArray<UPrimitiveComponent*> GrippedComponentsArray;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippedComponentsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippedComponentsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GrippedComponentsArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents_Statics::NewProp_GrippedComponentsArray_Inner = { "GrippedComponentsArray", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents_Statics::NewProp_GrippedComponentsArray_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents_Statics::NewProp_GrippedComponentsArray = { "GrippedComponentsArray", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGrippedComponents_Parms, GrippedComponentsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents_Statics::NewProp_GrippedComponentsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents_Statics::NewProp_GrippedComponentsArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents_Statics::NewProp_GrippedComponentsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents_Statics::NewProp_GrippedComponentsArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Get list of all gripped components\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Get list of all gripped components" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetGrippedComponents", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetGrippedComponents_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedObjects_Statics
	{
		struct GripMotionControllerComponent_eventGetGrippedObjects_Parms
		{
			TArray<UObject*> GrippedObjectsArray;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippedObjectsArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GrippedObjectsArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedObjects_Statics::NewProp_GrippedObjectsArray_Inner = { "GrippedObjectsArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedObjects_Statics::NewProp_GrippedObjectsArray = { "GrippedObjectsArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetGrippedObjects_Parms, GrippedObjectsArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedObjects_Statics::NewProp_GrippedObjectsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedObjects_Statics::NewProp_GrippedObjectsArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Get list of all gripped objects\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Get list of all gripped objects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetGrippedObjects", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetGrippedObjects_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetHandType_Statics
	{
		struct GripMotionControllerComponent_eventGetHandType_Parms
		{
			EControllerHand Hand;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetHandType_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetHandType_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetHandType_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetHandType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetHandType_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetHandType_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetHandType_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
		{ "Comment", "// Gets the hand enum\n" },
		{ "CompactNodeTitle", "HandType" },
		{ "DisplayName", "HandType" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Gets the hand enum" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetHandType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetHandType", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetHandType_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetHandType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetHandType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetHandType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetHandType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetHandType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetHandType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics
	{
		struct GripMotionControllerComponent_eventGetIsComponentHeld_Parms
		{
			const UPrimitiveComponent* ComponentToCheck;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::NewProp_ComponentToCheck_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::NewProp_ComponentToCheck = { "ComponentToCheck", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetIsComponentHeld_Parms, ComponentToCheck), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::NewProp_ComponentToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::NewProp_ComponentToCheck_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGetIsComponentHeld_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGetIsComponentHeld_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::NewProp_ComponentToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Gets if the given component is held by this controller\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Gets if the given component is held by this controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetIsComponentHeld", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetIsComponentHeld_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics
	{
		struct GripMotionControllerComponent_eventGetIsHeld_Parms
		{
			const AActor* ActorToCheck;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::NewProp_ActorToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::NewProp_ActorToCheck = { "ActorToCheck", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetIsHeld_Parms, ActorToCheck), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::NewProp_ActorToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::NewProp_ActorToCheck_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGetIsHeld_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGetIsHeld_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::NewProp_ActorToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Gets if the given actor is held by this controller\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Gets if the given actor is held by this controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetIsHeld", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetIsHeld_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics
	{
		struct GripMotionControllerComponent_eventGetIsObjectHeld_Parms
		{
			const UObject* ObjectToCheck;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectToCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::NewProp_ObjectToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::NewProp_ObjectToCheck = { "ObjectToCheck", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetIsObjectHeld_Parms, ObjectToCheck), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::NewProp_ObjectToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::NewProp_ObjectToCheck_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGetIsObjectHeld_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGetIsObjectHeld_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::NewProp_ObjectToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Gets if the given object is held by this controller\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Gets if the given object is held by this controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetIsObjectHeld", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetIsObjectHeld_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics
	{
		struct GripMotionControllerComponent_eventGetIsSecondaryAttachment_Parms
		{
			const USceneComponent* ComponentToCheck;
			FBPActorGripInformation Grip;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToCheck;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::NewProp_ComponentToCheck_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::NewProp_ComponentToCheck = { "ComponentToCheck", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetIsSecondaryAttachment_Parms, ComponentToCheck), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::NewProp_ComponentToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::NewProp_ComponentToCheck_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetIsSecondaryAttachment_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGetIsSecondaryAttachment_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGetIsSecondaryAttachment_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::NewProp_ComponentToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Gets if the given Component is a secondary attach point to a gripped actor\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Gets if the given Component is a secondary attach point to a gripped actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetIsSecondaryAttachment", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetIsSecondaryAttachment_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics
	{
		struct GripMotionControllerComponent_eventGetPhysicsConstraintForce_Parms
		{
			FBPActorGripInformation Grip;
			FVector AngularForce;
			FVector LinearForce;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularForce;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearForce;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetPhysicsConstraintForce_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::NewProp_Grip_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::NewProp_AngularForce = { "AngularForce", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetPhysicsConstraintForce_Parms, AngularForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::NewProp_LinearForce = { "LinearForce", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetPhysicsConstraintForce_Parms, LinearForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGetPhysicsConstraintForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGetPhysicsConstraintForce_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::NewProp_AngularForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::NewProp_LinearForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Get the physics constraint force of a simulating grip\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Get the physics constraint force of a simulating grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetPhysicsConstraintForce", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetPhysicsConstraintForce_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics
	{
		struct GripMotionControllerComponent_eventGetPhysicsHandleSettings_Parms
		{
			FBPActorGripInformation Grip;
			FBPAdvancedPhysicsHandleSettings PhysicsHandleSettingsOut;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicsHandleSettingsOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetPhysicsHandleSettings_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::NewProp_Grip_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::NewProp_PhysicsHandleSettingsOut = { "PhysicsHandleSettingsOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetPhysicsHandleSettings_Parms, PhysicsHandleSettingsOut), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGetPhysicsHandleSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGetPhysicsHandleSettings_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::NewProp_PhysicsHandleSettingsOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController|Custom" },
		{ "Comment", "// Gets the advanced physics handle settings\n" },
		{ "DisplayName", "GetPhysicsHandleSettings" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Gets the advanced physics handle settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetPhysicsHandleSettings", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetPhysicsHandleSettings_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics
	{
		struct GripMotionControllerComponent_eventGetPhysicsVelocities_Parms
		{
			FBPActorGripInformation Grip;
			FVector AngularVelocity;
			FVector LinearVelocity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetPhysicsVelocities_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::NewProp_Grip_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetPhysicsVelocities_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetPhysicsVelocities_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::NewProp_LinearVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Get the physics velocities of a grip\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Get the physics velocities of a grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetPhysicsVelocities", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetPhysicsVelocities_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotLocation_BP_Statics
	{
		struct GripMotionControllerComponent_eventGetPivotLocation_BP_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotLocation_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetPivotLocation_BP_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotLocation_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotLocation_BP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotLocation_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Set the custom pivot component, allows you to use remote grips easier\n" },
		{ "DisplayName", "GetPivotLocation" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Set the custom pivot component, allows you to use remote grips easier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotLocation_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetPivotLocation_BP", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetPivotLocation_BP_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotLocation_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotLocation_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotLocation_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotLocation_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotLocation_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotLocation_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotTransform_BP_Statics
	{
		struct GripMotionControllerComponent_eventGetPivotTransform_BP_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotTransform_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGetPivotTransform_BP_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotTransform_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotTransform_BP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotTransform_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Set the custom pivot component, allows you to use remote grips easier\n" },
		{ "DisplayName", "GetPivotTransform" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Set the custom pivot component, allows you to use remote grips easier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotTransform_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GetPivotTransform_BP", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGetPivotTransform_BP_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotTransform_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotTransform_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotTransform_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotTransform_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotTransform_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotTransform_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics
	{
		struct GripMotionControllerComponent_eventGripActor_Parms
		{
			AActor* ActorToGrip;
			FTransform WorldOffset;
			bool bWorldOffsetIsRelative;
			FName OptionalSnapToSocketName;
			FName OptionalBoneToGripName;
			EGripCollisionType GripCollisionType;
			EGripLateUpdateSettings GripLateUpdateSetting;
			EGripMovementReplicationSettings GripMovementReplicationSetting;
			float GripStiffness;
			float GripDamping;
			bool bIsSlotGrip;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
		static void NewProp_bWorldOffsetIsRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldOffsetIsRelative;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalSnapToSocketName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalBoneToGripName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripCollisionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GripCollisionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripLateUpdateSetting_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GripLateUpdateSetting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripMovementReplicationSetting_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GripMovementReplicationSetting;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripStiffness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripDamping;
		static void NewProp_bIsSlotGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlotGrip;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_ActorToGrip = { "ActorToGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripActor_Parms, ActorToGrip), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripActor_Parms, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_WorldOffset_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_bWorldOffsetIsRelative_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGripActor_Parms*)Obj)->bWorldOffsetIsRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_bWorldOffsetIsRelative = { "bWorldOffsetIsRelative", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGripActor_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_bWorldOffsetIsRelative_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_OptionalSnapToSocketName = { "OptionalSnapToSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripActor_Parms, OptionalSnapToSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_OptionalBoneToGripName = { "OptionalBoneToGripName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripActor_Parms, OptionalBoneToGripName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_GripCollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_GripCollisionType = { "GripCollisionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripActor_Parms, GripCollisionType), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_GripLateUpdateSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_GripLateUpdateSetting = { "GripLateUpdateSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripActor_Parms, GripLateUpdateSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_GripMovementReplicationSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_GripMovementReplicationSetting = { "GripMovementReplicationSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripActor_Parms, GripMovementReplicationSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_GripStiffness = { "GripStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripActor_Parms, GripStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_GripDamping = { "GripDamping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripActor_Parms, GripDamping), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_bIsSlotGrip_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGripActor_Parms*)Obj)->bIsSlotGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_bIsSlotGrip = { "bIsSlotGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGripActor_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_bIsSlotGrip_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGripActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGripActor_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_ActorToGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_WorldOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_bWorldOffsetIsRelative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_OptionalSnapToSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_OptionalBoneToGripName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_GripCollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_GripCollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_GripLateUpdateSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_GripLateUpdateSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_GripMovementReplicationSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_GripMovementReplicationSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_GripStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_GripDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_bIsSlotGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "/* Grip an actor, these are stored in a Tarray that will prevent destruction of the object, you MUST ungrip an actor if you want to kill it\n\x09   The WorldOffset is the transform that it will remain away from the controller, if you use the world position of the actor then it will grab\n\x09   at the point of intersection. \n\n\x09   If WorldOffsetIsRelative is true then it will not convert the transform from world space but will instead use that offset directly.\n\x09   You could pass in a socket relative transform with this set for snapping or an empty transform to snap the object at its 0,0,0 point.\n\n\x09   If you declare a valid OptionSnapToSocketName then it will instead snap the actor to the relative offset\n\x09   location that the socket is to its parent actor.\n\n\x09\x09It will only do this if the WorldOffset value is left default, if it is not, then it will treat this as the name of the slot\n\x09\x09that you already have the transform for.\n\n\x09   If you declare a valid OptionalBoneToGripName then it will grip that physics body with physics grips (It will expect a bone worldspace transform then, \n\x09   if you pass in the normal actor/root component world space transform then the grip will not be positioned correctly).\n\x09*/" },
		{ "CPP_Default_bIsSlotGrip", "false" },
		{ "CPP_Default_bWorldOffsetIsRelative", "false" },
		{ "CPP_Default_GripCollisionType", "InteractiveCollisionWithPhysics" },
		{ "CPP_Default_GripDamping", "200.000000" },
		{ "CPP_Default_GripLateUpdateSetting", "NotWhenCollidingOrDoubleGripping" },
		{ "CPP_Default_GripMovementReplicationSetting", "ForceClientSideMovement" },
		{ "CPP_Default_GripStiffness", "1500.000000" },
		{ "CPP_Default_OptionalBoneToGripName", "None" },
		{ "CPP_Default_OptionalSnapToSocketName", "None" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Grip an actor, these are stored in a Tarray that will prevent destruction of the object, you MUST ungrip an actor if you want to kill it\n         The WorldOffset is the transform that it will remain away from the controller, if you use the world position of the actor then it will grab\n         at the point of intersection.\n\n         If WorldOffsetIsRelative is true then it will not convert the transform from world space but will instead use that offset directly.\n         You could pass in a socket relative transform with this set for snapping or an empty transform to snap the object at its 0,0,0 point.\n\n         If you declare a valid OptionSnapToSocketName then it will instead snap the actor to the relative offset\n         location that the socket is to its parent actor.\n\n              It will only do this if the WorldOffset value is left default, if it is not, then it will treat this as the name of the slot\n              that you already have the transform for.\n\n         If you declare a valid OptionalBoneToGripName then it will grip that physics body with physics grips (It will expect a bone worldspace transform then,\n         if you pass in the normal actor/root component world space transform then the grip will not be positioned correctly)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GripActor", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGripActor_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GripActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GripActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics
	{
		struct GripMotionControllerComponent_eventGripComponent_Parms
		{
			UPrimitiveComponent* ComponentToGrip;
			FTransform WorldOffset;
			bool bWorldOffsetIsRelative;
			FName OptionalsnapToSocketName;
			FName OptionalBoneToGripName;
			EGripCollisionType GripCollisionType;
			EGripLateUpdateSettings GripLateUpdateSetting;
			EGripMovementReplicationSettings GripMovementReplicationSetting;
			float GripStiffness;
			float GripDamping;
			bool bIsSlotGrip;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToGrip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
		static void NewProp_bWorldOffsetIsRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldOffsetIsRelative;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalsnapToSocketName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalBoneToGripName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripCollisionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GripCollisionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripLateUpdateSetting_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GripLateUpdateSetting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripMovementReplicationSetting_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GripMovementReplicationSetting;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripStiffness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripDamping;
		static void NewProp_bIsSlotGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlotGrip;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_ComponentToGrip_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_ComponentToGrip = { "ComponentToGrip", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripComponent_Parms, ComponentToGrip), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_ComponentToGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_ComponentToGrip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripComponent_Parms, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_WorldOffset_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_bWorldOffsetIsRelative_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGripComponent_Parms*)Obj)->bWorldOffsetIsRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_bWorldOffsetIsRelative = { "bWorldOffsetIsRelative", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGripComponent_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_bWorldOffsetIsRelative_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_OptionalsnapToSocketName = { "OptionalsnapToSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripComponent_Parms, OptionalsnapToSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_OptionalBoneToGripName = { "OptionalBoneToGripName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripComponent_Parms, OptionalBoneToGripName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_GripCollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_GripCollisionType = { "GripCollisionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripComponent_Parms, GripCollisionType), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_GripLateUpdateSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_GripLateUpdateSetting = { "GripLateUpdateSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripComponent_Parms, GripLateUpdateSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_GripMovementReplicationSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_GripMovementReplicationSetting = { "GripMovementReplicationSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripComponent_Parms, GripMovementReplicationSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_GripStiffness = { "GripStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripComponent_Parms, GripStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_GripDamping = { "GripDamping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripComponent_Parms, GripDamping), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_bIsSlotGrip_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGripComponent_Parms*)Obj)->bIsSlotGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_bIsSlotGrip = { "bIsSlotGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGripComponent_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_bIsSlotGrip_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGripComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGripComponent_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_ComponentToGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_WorldOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_bWorldOffsetIsRelative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_OptionalsnapToSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_OptionalBoneToGripName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_GripCollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_GripCollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_GripLateUpdateSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_GripLateUpdateSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_GripMovementReplicationSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_GripMovementReplicationSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_GripStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_GripDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_bIsSlotGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Grip a component\n" },
		{ "CPP_Default_bIsSlotGrip", "false" },
		{ "CPP_Default_bWorldOffsetIsRelative", "false" },
		{ "CPP_Default_GripCollisionType", "InteractiveCollisionWithPhysics" },
		{ "CPP_Default_GripDamping", "200.000000" },
		{ "CPP_Default_GripLateUpdateSetting", "NotWhenCollidingOrDoubleGripping" },
		{ "CPP_Default_GripMovementReplicationSetting", "ForceClientSideMovement" },
		{ "CPP_Default_GripStiffness", "1500.000000" },
		{ "CPP_Default_OptionalBoneToGripName", "None" },
		{ "CPP_Default_OptionalsnapToSocketName", "None" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Grip a component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GripComponent", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGripComponent_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GripControllerIsTracked_Statics
	{
		struct GripMotionControllerComponent_eventGripControllerIsTracked_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGripMotionControllerComponent_GripControllerIsTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGripControllerIsTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripControllerIsTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGripControllerIsTracked_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GripControllerIsTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GripControllerIsTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripControllerIsTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GripControllerIsTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "/** Whether or not this component had a valid tracked device this frame\n\x09*\n\x09* Use this instead of the normal IsTracked() for the motion controller which will not return the correct information.\n\x09* This is messy but I have no access to the various private members of the motion controller.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Whether or not this component had a valid tracked device this frame\n\nUse this instead of the normal IsTracked() for the motion controller which will not return the correct information.\nThis is messy but I have no access to the various private members of the motion controller." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GripControllerIsTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GripControllerIsTracked", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGripControllerIsTracked_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GripControllerIsTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GripControllerIsTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GripControllerIsTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GripControllerIsTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GripControllerIsTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GripControllerIsTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics
	{
		struct GripMotionControllerComponent_eventGripObject_Parms
		{
			UObject* ObjectToGrip;
			FTransform WorldOffset;
			bool bWorldOffsetIsRelative;
			FName OptionalSnapToSocketName;
			FName OptionalBoneToGripName;
			EGripCollisionType GripCollisionType;
			EGripLateUpdateSettings GripLateUpdateSetting;
			EGripMovementReplicationSettings GripMovementReplicationSetting;
			float GripStiffness;
			float GripDamping;
			bool bIsSlotGrip;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
		static void NewProp_bWorldOffsetIsRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldOffsetIsRelative;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalSnapToSocketName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalBoneToGripName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripCollisionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GripCollisionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripLateUpdateSetting_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GripLateUpdateSetting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripMovementReplicationSetting_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GripMovementReplicationSetting;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripStiffness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripDamping;
		static void NewProp_bIsSlotGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlotGrip;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_ObjectToGrip = { "ObjectToGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripObject_Parms, ObjectToGrip), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripObject_Parms, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_WorldOffset_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_bWorldOffsetIsRelative_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGripObject_Parms*)Obj)->bWorldOffsetIsRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_bWorldOffsetIsRelative = { "bWorldOffsetIsRelative", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGripObject_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_bWorldOffsetIsRelative_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_OptionalSnapToSocketName = { "OptionalSnapToSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripObject_Parms, OptionalSnapToSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_OptionalBoneToGripName = { "OptionalBoneToGripName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripObject_Parms, OptionalBoneToGripName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_GripCollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_GripCollisionType = { "GripCollisionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripObject_Parms, GripCollisionType), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_GripLateUpdateSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_GripLateUpdateSetting = { "GripLateUpdateSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripObject_Parms, GripLateUpdateSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_GripMovementReplicationSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_GripMovementReplicationSetting = { "GripMovementReplicationSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripObject_Parms, GripMovementReplicationSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_GripStiffness = { "GripStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripObject_Parms, GripStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_GripDamping = { "GripDamping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripObject_Parms, GripDamping), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_bIsSlotGrip_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGripObject_Parms*)Obj)->bIsSlotGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_bIsSlotGrip = { "bIsSlotGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGripObject_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_bIsSlotGrip_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGripObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGripObject_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_ObjectToGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_WorldOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_bWorldOffsetIsRelative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_OptionalSnapToSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_OptionalBoneToGripName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_GripCollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_GripCollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_GripLateUpdateSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_GripLateUpdateSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_GripMovementReplicationSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_GripMovementReplicationSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_GripStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_GripDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_bIsSlotGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "/* Auto grip any uobject that is/root is a primitive component and has the VR Grip Interface\n\x09these are stored in a Tarray that will prevent destruction of the object, you MUST ungrip an actor if you want to kill it\n\x09The WorldOffset is the transform that it will remain away from the controller, if you use the world position of the actor then it will grab\n\x09""at the point of intersection.\n\n\x09If WorldOffsetIsRelative is true then it will not convert the transform from world space but will instead use that offset directly.\n\x09You could pass in a socket relative transform with this set for snapping or an empty transform to snap the object at its 0,0,0 point.\n\n\x09If you declare a valid OptionSnapToSocketName then it will instead snap the actor to the relative offset\n\x09location that the socket is to its parent actor. \n\x09\n\x09It will only do this if the WorldOffset value is left default, if it is not, then it will treat this as the name of the slot\n\x09that you already have the transform for.\n\n\x09If you declare a valid OptionalBoneToGripName then it will grip that physics body with physics grips (It will expect a bone worldspace transform then,\n\x09if you pass in the normal actor/root component world space transform then the grip will not be positioned correctly).\n\x09*/" },
		{ "CPP_Default_bIsSlotGrip", "false" },
		{ "CPP_Default_bWorldOffsetIsRelative", "false" },
		{ "CPP_Default_GripCollisionType", "InteractiveCollisionWithPhysics" },
		{ "CPP_Default_GripDamping", "200.000000" },
		{ "CPP_Default_GripLateUpdateSetting", "NotWhenCollidingOrDoubleGripping" },
		{ "CPP_Default_GripMovementReplicationSetting", "ForceClientSideMovement" },
		{ "CPP_Default_GripStiffness", "1500.000000" },
		{ "CPP_Default_OptionalBoneToGripName", "None" },
		{ "CPP_Default_OptionalSnapToSocketName", "None" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Auto grip any uobject that is/root is a primitive component and has the VR Grip Interface\n      these are stored in a Tarray that will prevent destruction of the object, you MUST ungrip an actor if you want to kill it\n      The WorldOffset is the transform that it will remain away from the controller, if you use the world position of the actor then it will grab\n      at the point of intersection.\n\n      If WorldOffsetIsRelative is true then it will not convert the transform from world space but will instead use that offset directly.\n      You could pass in a socket relative transform with this set for snapping or an empty transform to snap the object at its 0,0,0 point.\n\n      If you declare a valid OptionSnapToSocketName then it will instead snap the actor to the relative offset\n      location that the socket is to its parent actor.\n\n      It will only do this if the WorldOffset value is left default, if it is not, then it will treat this as the name of the slot\n      that you already have the transform for.\n\n      If you declare a valid OptionalBoneToGripName then it will grip that physics body with physics grips (It will expect a bone worldspace transform then,\n      if you pass in the normal actor/root component world space transform then the grip will not be positioned correctly)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GripObject", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGripObject_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GripObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GripObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics
	{
		struct GripMotionControllerComponent_eventGripObjectByInterface_Parms
		{
			UObject* ObjectToGrip;
			FTransform WorldOffset;
			bool bWorldOffsetIsRelative;
			FName OptionalBoneToGripName;
			FName OptionalSnapToSocketName;
			bool bIsSlotGrip;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
		static void NewProp_bWorldOffsetIsRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldOffsetIsRelative;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalBoneToGripName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalSnapToSocketName;
		static void NewProp_bIsSlotGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlotGrip;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_ObjectToGrip = { "ObjectToGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripObjectByInterface_Parms, ObjectToGrip), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripObjectByInterface_Parms, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_WorldOffset_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_bWorldOffsetIsRelative_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGripObjectByInterface_Parms*)Obj)->bWorldOffsetIsRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_bWorldOffsetIsRelative = { "bWorldOffsetIsRelative", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGripObjectByInterface_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_bWorldOffsetIsRelative_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_OptionalBoneToGripName = { "OptionalBoneToGripName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripObjectByInterface_Parms, OptionalBoneToGripName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_OptionalSnapToSocketName = { "OptionalSnapToSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventGripObjectByInterface_Parms, OptionalSnapToSocketName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_bIsSlotGrip_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGripObjectByInterface_Parms*)Obj)->bIsSlotGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_bIsSlotGrip = { "bIsSlotGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGripObjectByInterface_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_bIsSlotGrip_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventGripObjectByInterface_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventGripObjectByInterface_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_ObjectToGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_WorldOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_bWorldOffsetIsRelative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_OptionalBoneToGripName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_OptionalSnapToSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_bIsSlotGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Auto grip any uobject that is/root is a primitive component\n" },
		{ "CPP_Default_bIsSlotGrip", "false" },
		{ "CPP_Default_bWorldOffsetIsRelative", "false" },
		{ "CPP_Default_OptionalBoneToGripName", "None" },
		{ "CPP_Default_OptionalSnapToSocketName", "None" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Auto grip any uobject that is/root is a primitive component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "GripObjectByInterface", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventGripObjectByInterface_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_HasGrippedObjects_Statics
	{
		struct GripMotionControllerComponent_eventHasGrippedObjects_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGripMotionControllerComponent_HasGrippedObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventHasGrippedObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_HasGrippedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventHasGrippedObjects_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_HasGrippedObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_HasGrippedObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_HasGrippedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_HasGrippedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Get if we have gripped objects, local or replicated\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Get if we have gripped objects, local or replicated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_HasGrippedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "HasGrippedObjects", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventHasGrippedObjects_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_HasGrippedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_HasGrippedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_HasGrippedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_HasGrippedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_HasGrippedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_HasGrippedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_NewControllerProfileLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_NewControllerProfileLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_NewControllerProfileLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "NewControllerProfileLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_NewControllerProfileLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_NewControllerProfileLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_NewControllerProfileLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_NewControllerProfileLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewDrop;
		static void NewProp_bSimulate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::NewProp_NewDrop_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::NewProp_NewDrop = { "NewDrop", nullptr, (EPropertyFlags)0x0010008008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventNotifyDrop_Parms, NewDrop), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::NewProp_NewDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::NewProp_NewDrop_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::NewProp_bSimulate_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventNotifyDrop_Parms*)Obj)->bSimulate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::NewProp_bSimulate = { "bSimulate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventNotifyDrop_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::NewProp_bSimulate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::NewProp_NewDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::NewProp_bSimulate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "NotifyDrop", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventNotifyDrop_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketingParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SocketingParent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransformToParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransformToParent;
		static void NewProp_bWeldBodies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWeldBodies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_NewDrop_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_NewDrop = { "NewDrop", nullptr, (EPropertyFlags)0x0010008008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventNotifyDropAndSocket_Parms, NewDrop), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_NewDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_NewDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_SocketingParent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_SocketingParent = { "SocketingParent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventNotifyDropAndSocket_Parms, SocketingParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_SocketingParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_SocketingParent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_OptionalSocketName = { "OptionalSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventNotifyDropAndSocket_Parms, OptionalSocketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_RelativeTransformToParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_RelativeTransformToParent = { "RelativeTransformToParent", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventNotifyDropAndSocket_Parms, RelativeTransformToParent), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_RelativeTransformToParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_RelativeTransformToParent_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_bWeldBodies_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventNotifyDropAndSocket_Parms*)Obj)->bWeldBodies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_bWeldBodies = { "bWeldBodies", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventNotifyDropAndSocket_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_bWeldBodies_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_NewDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_SocketingParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_OptionalSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_RelativeTransformToParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::NewProp_bWeldBodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "NotifyDropAndSocket", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventNotifyDropAndSocket_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_GrippedObjects_Statics
	{
		struct GripMotionControllerComponent_eventOnRep_GrippedObjects_Parms
		{
			TArray<FBPActorGripInformation> OriginalArrayState;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalArrayState_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OriginalArrayState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_GrippedObjects_Statics::NewProp_OriginalArrayState_Inner = { "OriginalArrayState", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_GrippedObjects_Statics::NewProp_OriginalArrayState = { "OriginalArrayState", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventOnRep_GrippedObjects_Parms, OriginalArrayState), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_GrippedObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_GrippedObjects_Statics::NewProp_OriginalArrayState_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_GrippedObjects_Statics::NewProp_OriginalArrayState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_GrippedObjects_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Original array state is useless without full serialize, it just hold last delta\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Original array state is useless without full serialize, it just hold last delta" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_GrippedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "OnRep_GrippedObjects", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventOnRep_GrippedObjects_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_GrippedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_GrippedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_GrippedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_GrippedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_GrippedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_GrippedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Statics
	{
		struct GripMotionControllerComponent_eventOnRep_LocallyGrippedObjects_Parms
		{
			TArray<FBPActorGripInformation> OriginalArrayState;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalArrayState_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OriginalArrayState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Statics::NewProp_OriginalArrayState_Inner = { "OriginalArrayState", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Statics::NewProp_OriginalArrayState = { "OriginalArrayState", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventOnRep_LocallyGrippedObjects_Parms, OriginalArrayState), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Statics::NewProp_OriginalArrayState_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Statics::NewProp_OriginalArrayState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "OnRep_LocallyGrippedObjects", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventOnRep_LocallyGrippedObjects_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocallyGrippedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocalTransaction_Statics
	{
		struct GripMotionControllerComponent_eventOnRep_LocalTransaction_Parms
		{
			TArray<FBPActorGripInformation> OriginalArrayState;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalArrayState_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OriginalArrayState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocalTransaction_Statics::NewProp_OriginalArrayState_Inner = { "OriginalArrayState", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocalTransaction_Statics::NewProp_OriginalArrayState = { "OriginalArrayState", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventOnRep_LocalTransaction_Parms, OriginalArrayState), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocalTransaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocalTransaction_Statics::NewProp_OriginalArrayState_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocalTransaction_Statics::NewProp_OriginalArrayState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocalTransaction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Original array state is useless without full serialize, it just hold last delta\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Original array state is useless without full serialize, it just hold last delta" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocalTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "OnRep_LocalTransaction", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventOnRep_LocalTransaction_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocalTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocalTransaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocalTransaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocalTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocalTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocalTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_ReplicatedControllerTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_ReplicatedControllerTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_ReplicatedControllerTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "OnRep_ReplicatedControllerTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_ReplicatedControllerTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_ReplicatedControllerTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_ReplicatedControllerTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_ReplicatedControllerTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_PostTeleportMoveGrippedObjects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_PostTeleportMoveGrippedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// After teleporting a pawn you NEED to call this, otherwise gripped objects will travel with a sweeped move and can get caught on geometry\n// The base Teleport() function automatically calls this already, but when you manually set location you should do it yourself.\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "After teleporting a pawn you NEED to call this, otherwise gripped objects will travel with a sweeped move and can get caught on geometry\nThe base Teleport() function automatically calls this already, but when you manually set location you should do it yourself." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_PostTeleportMoveGrippedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "PostTeleportMoveGrippedObjects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_PostTeleportMoveGrippedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_PostTeleportMoveGrippedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_PostTeleportMoveGrippedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_PostTeleportMoveGrippedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics
	{
		struct GripMotionControllerComponent_eventRemoveSecondaryAttachmentFromGrip_Parms
		{
			FBPActorGripInformation GripToRemoveAttachment;
			float LerpToTime;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripToRemoveAttachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripToRemoveAttachment;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpToTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::NewProp_GripToRemoveAttachment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::NewProp_GripToRemoveAttachment = { "GripToRemoveAttachment", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventRemoveSecondaryAttachmentFromGrip_Parms, GripToRemoveAttachment), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::NewProp_GripToRemoveAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::NewProp_GripToRemoveAttachment_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::NewProp_LerpToTime = { "LerpToTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventRemoveSecondaryAttachmentFromGrip_Parms, LerpToTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventRemoveSecondaryAttachmentFromGrip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventRemoveSecondaryAttachmentFromGrip_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::NewProp_GripToRemoveAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::NewProp_LerpToTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Removes a secondary attachment point from a grip\n" },
		{ "CPP_Default_LerpToTime", "0.250000" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Removes a secondary attachment point from a grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "RemoveSecondaryAttachmentFromGrip", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventRemoveSecondaryAttachmentFromGrip_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics
	{
		struct GripMotionControllerComponent_eventRemoveSecondaryAttachmentFromGripByID_Parms
		{
			uint8 GripID;
			float LerpToTime;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpToTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::NewProp_GripID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventRemoveSecondaryAttachmentFromGripByID_Parms, GripID), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::NewProp_GripID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::NewProp_GripID_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::NewProp_LerpToTime = { "LerpToTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventRemoveSecondaryAttachmentFromGripByID_Parms, LerpToTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventRemoveSecondaryAttachmentFromGripByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventRemoveSecondaryAttachmentFromGripByID_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::NewProp_GripID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::NewProp_LerpToTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Removes a secondary attachment point from a grip\n" },
		{ "CPP_Default_GripID", "0" },
		{ "CPP_Default_LerpToTime", "0.250000" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Removes a secondary attachment point from a grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "RemoveSecondaryAttachmentFromGripByID", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventRemoveSecondaryAttachmentFromGripByID_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics
	{
		struct GripMotionControllerComponent_eventRemoveSecondaryAttachmentPoint_Parms
		{
			UObject* GrippedObjectToRemoveAttachment;
			float LerpToTime;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippedObjectToRemoveAttachment;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpToTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics::NewProp_GrippedObjectToRemoveAttachment = { "GrippedObjectToRemoveAttachment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventRemoveSecondaryAttachmentPoint_Parms, GrippedObjectToRemoveAttachment), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics::NewProp_LerpToTime = { "LerpToTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventRemoveSecondaryAttachmentPoint_Parms, LerpToTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventRemoveSecondaryAttachmentPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventRemoveSecondaryAttachmentPoint_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics::NewProp_GrippedObjectToRemoveAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics::NewProp_LerpToTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Removes a secondary attachment point from a grip\n" },
		{ "CPP_Default_LerpToTime", "0.250000" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Removes a secondary attachment point from a grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "RemoveSecondaryAttachmentPoint", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventRemoveSecondaryAttachmentPoint_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketingParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SocketingParent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransformToParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransformToParent;
		static void NewProp_bWeldBodies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWeldBodies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventServer_NotifyDropAndSocketGrip_Parms, GripID), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_SocketingParent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_SocketingParent = { "SocketingParent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventServer_NotifyDropAndSocketGrip_Parms, SocketingParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_SocketingParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_SocketingParent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_OptionalSocketName = { "OptionalSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventServer_NotifyDropAndSocketGrip_Parms, OptionalSocketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_RelativeTransformToParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_RelativeTransformToParent = { "RelativeTransformToParent", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventServer_NotifyDropAndSocketGrip_Parms, RelativeTransformToParent), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_RelativeTransformToParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_RelativeTransformToParent_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_bWeldBodies_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventServer_NotifyDropAndSocketGrip_Parms*)Obj)->bWeldBodies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_bWeldBodies = { "bWeldBodies", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventServer_NotifyDropAndSocketGrip_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_bWeldBodies_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_GripID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_SocketingParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_OptionalSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_RelativeTransformToParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::NewProp_bWeldBodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Notify the server about a new drop and socket\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Notify the server about a new drop and socket" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "Server_NotifyDropAndSocketGrip", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventServer_NotifyDropAndSocketGrip_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyHandledTransaction_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyHandledTransaction_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventServer_NotifyHandledTransaction_Parms, GripID), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyHandledTransaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyHandledTransaction_Statics::NewProp_GripID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyHandledTransaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Handle a server initiated grip\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Handle a server initiated grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyHandledTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "Server_NotifyHandledTransaction", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventServer_NotifyHandledTransaction_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyHandledTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyHandledTransaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyHandledTransaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyHandledTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyHandledTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyHandledTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newGrip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newGrip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Statics::NewProp_newGrip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Statics::NewProp_newGrip = { "newGrip", nullptr, (EPropertyFlags)0x0010008008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventServer_NotifyLocalGripAddedOrChanged_Parms, newGrip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Statics::NewProp_newGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Statics::NewProp_newGrip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Statics::NewProp_newGrip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Notify the server that we locally gripped something\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Notify the server that we locally gripped something" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "Server_NotifyLocalGripAddedOrChanged", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventServer_NotifyLocalGripAddedOrChanged_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformAtDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformAtDrop;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventServer_NotifyLocalGripRemoved_Parms, GripID), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::NewProp_TransformAtDrop_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::NewProp_TransformAtDrop = { "TransformAtDrop", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventServer_NotifyLocalGripRemoved_Parms, TransformAtDrop), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::NewProp_TransformAtDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::NewProp_TransformAtDrop_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventServer_NotifyLocalGripRemoved_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventServer_NotifyLocalGripRemoved_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::NewProp_GripID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::NewProp_TransformAtDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::NewProp_LinearVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Notify change on relative position editing as well, make RPCS callable in blueprint\n// Notify the server that we locally gripped something\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Notify change on relative position editing as well, make RPCS callable in blueprint\nNotify the server that we locally gripped something" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "Server_NotifyLocalGripRemoved", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventServer_NotifyLocalGripRemoved_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryGripInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventServer_NotifySecondaryAttachmentChanged_Parms, GripID), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Statics::NewProp_SecondaryGripInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Statics::NewProp_SecondaryGripInfo = { "SecondaryGripInfo", nullptr, (EPropertyFlags)0x0010008008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventServer_NotifySecondaryAttachmentChanged_Parms, SecondaryGripInfo), Z_Construct_UScriptStruct_FBPSecondaryGripInfo, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Statics::NewProp_SecondaryGripInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Statics::NewProp_SecondaryGripInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Statics::NewProp_GripID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Statics::NewProp_SecondaryGripInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Notify the server that we changed some secondary attachment information\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Notify the server that we changed some secondary attachment information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "Server_NotifySecondaryAttachmentChanged", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventServer_NotifySecondaryAttachmentChanged_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryGripInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRelativeTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventServer_NotifySecondaryAttachmentChanged_Retain_Parms, GripID), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::NewProp_SecondaryGripInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::NewProp_SecondaryGripInfo = { "SecondaryGripInfo", nullptr, (EPropertyFlags)0x0010008008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventServer_NotifySecondaryAttachmentChanged_Retain_Parms, SecondaryGripInfo), Z_Construct_UScriptStruct_FBPSecondaryGripInfo, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::NewProp_SecondaryGripInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::NewProp_SecondaryGripInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::NewProp_NewRelativeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::NewProp_NewRelativeTransform = { "NewRelativeTransform", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventServer_NotifySecondaryAttachmentChanged_Retain_Parms, NewRelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::NewProp_NewRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::NewProp_NewRelativeTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::NewProp_GripID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::NewProp_SecondaryGripInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::NewProp_NewRelativeTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Notify the server that we changed some secondary attachment information\n// This one specifically sends out the new relative location for a retain secondary grip\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Notify the server that we changed some secondary attachment information\nThis one specifically sends out the new relative location for a retain secondary grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "Server_NotifySecondaryAttachmentChanged_Retain", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventServer_NotifySecondaryAttachmentChanged_Retain_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_Server_SendControllerTransform_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_SendControllerTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventServer_SendControllerTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_Server_SendControllerTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_Server_SendControllerTransform_Statics::NewProp_NewTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_Server_SendControllerTransform_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// I'm sending it unreliable because it is being resent pretty often\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "I'm sending it unreliable because it is being resent pretty often" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_Server_SendControllerTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "Server_SendControllerTransform", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventServer_SendControllerTransform_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_Server_SendControllerTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_SendControllerTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_Server_SendControllerTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_Server_SendControllerTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_Server_SendControllerTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_Server_SendControllerTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent_Statics
	{
		struct GripMotionControllerComponent_eventSetCustomPivotComponent_Parms
		{
			USceneComponent* NewCustomPivotComponent;
			FName PivotSocketName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCustomPivotComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCustomPivotComponent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PivotSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent_Statics::NewProp_NewCustomPivotComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent_Statics::NewProp_NewCustomPivotComponent = { "NewCustomPivotComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetCustomPivotComponent_Parms, NewCustomPivotComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent_Statics::NewProp_NewCustomPivotComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent_Statics::NewProp_NewCustomPivotComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent_Statics::NewProp_PivotSocketName = { "PivotSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetCustomPivotComponent_Parms, PivotSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent_Statics::NewProp_NewCustomPivotComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent_Statics::NewProp_PivotSocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController|CustomPivot" },
		{ "Comment", "// Set the custom pivot component, allows you to use remote grips easier\n" },
		{ "CPP_Default_PivotSocketName", "None" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Set the custom pivot component, allows you to use remote grips easier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "SetCustomPivotComponent", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventSetCustomPivotComponent_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics
	{
		struct GripMotionControllerComponent_eventSetGripAdditionTransform_Parms
		{
			FBPActorGripInformation Grip;
			EBPVRResultSwitch Result;
			FTransform NewAdditionTransform;
			bool bMakeGripRelative;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewAdditionTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewAdditionTransform;
		static void NewProp_bMakeGripRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMakeGripRelative;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripAdditionTransform_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_Grip_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripAdditionTransform_Parms, Result), Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_NewAdditionTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_NewAdditionTransform = { "NewAdditionTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripAdditionTransform_Parms, NewAdditionTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_NewAdditionTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_NewAdditionTransform_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_bMakeGripRelative_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventSetGripAdditionTransform_Parms*)Obj)->bMakeGripRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_bMakeGripRelative = { "bMakeGripRelative", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventSetGripAdditionTransform_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_bMakeGripRelative_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_NewAdditionTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::NewProp_bMakeGripRelative,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Set the addition transform of a grip, CALL LOCALLY, not server side, Addition transform is not replicated\n" },
		{ "CPP_Default_bMakeGripRelative", "false" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Set the addition transform of a grip, CALL LOCALLY, not server side, Addition transform is not replicated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "SetGripAdditionTransform", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventSetGripAdditionTransform_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics
	{
		struct GripMotionControllerComponent_eventSetGripCollisionType_Parms
		{
			FBPActorGripInformation Grip;
			EBPVRResultSwitch Result;
			EGripCollisionType NewGripCollisionType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewGripCollisionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewGripCollisionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripCollisionType_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::NewProp_Grip_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripCollisionType_Parms, Result), Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::NewProp_NewGripCollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::NewProp_NewGripCollisionType = { "NewGripCollisionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripCollisionType_Parms, NewGripCollisionType), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::NewProp_NewGripCollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::NewProp_NewGripCollisionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Set the Grip Collision Type of a grip, call server side if not a local grip\n" },
		{ "CPP_Default_NewGripCollisionType", "InteractiveCollisionWithPhysics" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Set the Grip Collision Type of a grip, call server side if not a local grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "SetGripCollisionType", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventSetGripCollisionType_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics
	{
		struct GripMotionControllerComponent_eventSetGripHybridLock_Parms
		{
			FBPActorGripInformation Grip;
			EBPVRResultSwitch Result;
			bool bIsLocked;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripHybridLock_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::NewProp_Grip_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripHybridLock_Parms, Result), Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventSetGripHybridLock_Parms*)Obj)->bIsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventSetGripHybridLock_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::NewProp_bIsLocked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Sets whether an active hybrid grip is locked to its soft setting (is not replicated by default as it is likely you will want to pass variables with this setting).\n" },
		{ "CPP_Default_bIsLocked", "false" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Sets whether an active hybrid grip is locked to its soft setting (is not replicated by default as it is likely you will want to pass variables with this setting)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "SetGripHybridLock", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventSetGripHybridLock_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics
	{
		struct GripMotionControllerComponent_eventSetGripLateUpdateSetting_Parms
		{
			FBPActorGripInformation Grip;
			EBPVRResultSwitch Result;
			EGripLateUpdateSettings NewGripLateUpdateSetting;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewGripLateUpdateSetting_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewGripLateUpdateSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripLateUpdateSetting_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::NewProp_Grip_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripLateUpdateSetting_Parms, Result), Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::NewProp_NewGripLateUpdateSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::NewProp_NewGripLateUpdateSetting = { "NewGripLateUpdateSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripLateUpdateSetting_Parms, NewGripLateUpdateSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::NewProp_NewGripLateUpdateSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::NewProp_NewGripLateUpdateSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Set the late update setting of a grip, call server side if not a local grip\n" },
		{ "CPP_Default_NewGripLateUpdateSetting", "NotWhenCollidingOrDoubleGripping" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Set the late update setting of a grip, call server side if not a local grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "SetGripLateUpdateSetting", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventSetGripLateUpdateSetting_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics
	{
		struct GripMotionControllerComponent_eventSetGripPaused_Parms
		{
			FBPActorGripInformation Grip;
			EBPVRResultSwitch Result;
			bool bIsPaused;
			bool bNoConstraintWhenPaused;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static void NewProp_bIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
		static void NewProp_bNoConstraintWhenPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoConstraintWhenPaused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripPaused_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_Grip_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripPaused_Parms, Result), Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_bIsPaused_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventSetGripPaused_Parms*)Obj)->bIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventSetGripPaused_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_bNoConstraintWhenPaused_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventSetGripPaused_Parms*)Obj)->bNoConstraintWhenPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_bNoConstraintWhenPaused = { "bNoConstraintWhenPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventSetGripPaused_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_bNoConstraintWhenPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_bIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::NewProp_bNoConstraintWhenPaused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Sets whether an active grip is paused or not (is not replicated by default as it is likely you will want to pass variables with this setting).\n// If you want it server authed you should RPC a bool down with any additional information (ie: attach location).\n" },
		{ "CPP_Default_bIsPaused", "false" },
		{ "CPP_Default_bNoConstraintWhenPaused", "false" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Sets whether an active grip is paused or not (is not replicated by default as it is likely you will want to pass variables with this setting).\nIf you want it server authed you should RPC a bool down with any additional information (ie: attach location)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "SetGripPaused", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventSetGripPaused_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics
	{
		struct GripMotionControllerComponent_eventSetGripRelativeTransform_Parms
		{
			FBPActorGripInformation Grip;
			EBPVRResultSwitch Result;
			FTransform NewRelativeTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRelativeTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripRelativeTransform_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::NewProp_Grip_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripRelativeTransform_Parms, Result), Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::NewProp_NewRelativeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::NewProp_NewRelativeTransform = { "NewRelativeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripRelativeTransform_Parms, NewRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::NewProp_NewRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::NewProp_NewRelativeTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::NewProp_NewRelativeTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Set the relative transform of a grip, call server side if not a local grip\n// Can check HasGripAuthority to decide if callable locally\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Set the relative transform of a grip, call server side if not a local grip\nCan check HasGripAuthority to decide if callable locally" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "SetGripRelativeTransform", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventSetGripRelativeTransform_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics
	{
		struct GripMotionControllerComponent_eventSetGripStiffnessAndDamping_Parms
		{
			FBPActorGripInformation Grip;
			EBPVRResultSwitch Result;
			float NewStiffness;
			float NewDamping;
			bool bAlsoSetAngularValues;
			float OptionalAngularStiffness;
			float OptionalAngularDamping;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewStiffness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDamping;
		static void NewProp_bAlsoSetAngularValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlsoSetAngularValues;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OptionalAngularStiffness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OptionalAngularDamping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripStiffnessAndDamping_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_Grip_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripStiffnessAndDamping_Parms, Result), Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_NewStiffness = { "NewStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripStiffnessAndDamping_Parms, NewStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_NewDamping = { "NewDamping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripStiffnessAndDamping_Parms, NewDamping), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_bAlsoSetAngularValues_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventSetGripStiffnessAndDamping_Parms*)Obj)->bAlsoSetAngularValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_bAlsoSetAngularValues = { "bAlsoSetAngularValues", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventSetGripStiffnessAndDamping_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_bAlsoSetAngularValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_OptionalAngularStiffness = { "OptionalAngularStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripStiffnessAndDamping_Parms, OptionalAngularStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_OptionalAngularDamping = { "OptionalAngularDamping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetGripStiffnessAndDamping_Parms, OptionalAngularDamping), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_NewStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_NewDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_bAlsoSetAngularValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_OptionalAngularStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::NewProp_OptionalAngularDamping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Set the constraint stiffness and dampening of a grip, call server side if not a local grip\n// Can check HasGripAuthority to decide if callable locally\n" },
		{ "CPP_Default_bAlsoSetAngularValues", "false" },
		{ "CPP_Default_OptionalAngularDamping", "0.000000" },
		{ "CPP_Default_OptionalAngularStiffness", "0.000000" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Set the constraint stiffness and dampening of a grip, call server side if not a local grip\nCan check HasGripAuthority to decide if callable locally" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "SetGripStiffnessAndDamping", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventSetGripStiffnessAndDamping_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics
	{
		struct GripMotionControllerComponent_eventSetPausedTransform_Parms
		{
			FBPActorGripInformation Grip;
			FTransform PausedTransform;
			bool bTeleport;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PausedTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PausedTransform;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetPausedTransform_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::NewProp_Grip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::NewProp_PausedTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::NewProp_PausedTransform = { "PausedTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetPausedTransform_Parms, PausedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::NewProp_PausedTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::NewProp_PausedTransform_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventSetPausedTransform_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventSetPausedTransform_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::NewProp_PausedTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Sets the transform to stay at during pause\n" },
		{ "CPP_Default_bTeleport", "false" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Sets the transform to stay at during pause" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "SetPausedTransform", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventSetPausedTransform_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics
	{
		struct GripMotionControllerComponent_eventSetPhysicsHandleSettings_Parms
		{
			FBPActorGripInformation Grip;
			FBPAdvancedPhysicsHandleSettings PhysicsHandleSettingsIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsHandleSettingsIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicsHandleSettingsIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetPhysicsHandleSettings_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::NewProp_Grip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::NewProp_PhysicsHandleSettingsIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::NewProp_PhysicsHandleSettingsIn = { "PhysicsHandleSettingsIn", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetPhysicsHandleSettings_Parms, PhysicsHandleSettingsIn), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::NewProp_PhysicsHandleSettingsIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::NewProp_PhysicsHandleSettingsIn_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventSetPhysicsHandleSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventSetPhysicsHandleSettings_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::NewProp_PhysicsHandleSettingsIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController|Custom" },
		{ "Comment", "// Sets the advanced physics handle settings, also automatically updates it\n" },
		{ "DisplayName", "SetPhysicsHandleSettings" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Sets the advanced physics handle settings, also automatically updates it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "SetPhysicsHandleSettings", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventSetPhysicsHandleSettings_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform_Statics
	{
		struct GripMotionControllerComponent_eventSetSocketTransform_Parms
		{
			UObject* ObjectToSocket;
			FTransform_NetQuantize RelativeTransformToParent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransformToParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransformToParent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform_Statics::NewProp_ObjectToSocket = { "ObjectToSocket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetSocketTransform_Parms, ObjectToSocket), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform_Statics::NewProp_RelativeTransformToParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform_Statics::NewProp_RelativeTransformToParent = { "RelativeTransformToParent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetSocketTransform_Parms, RelativeTransformToParent), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform_Statics::NewProp_RelativeTransformToParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform_Statics::NewProp_RelativeTransformToParent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform_Statics::NewProp_ObjectToSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform_Statics::NewProp_RelativeTransformToParent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*, FName OptionalSocketName, bool bWeldBodies*/" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", ", FName OptionalSocketName, bool bWeldBodies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "SetSocketTransform", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventSetSocketTransform_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics
	{
		struct GripMotionControllerComponent_eventSetUpPhysicsHandle_BP_Parms
		{
			FBPActorGripInformation Grip;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventSetUpPhysicsHandle_BP_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::NewProp_Grip_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventSetUpPhysicsHandle_BP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventSetUpPhysicsHandle_BP_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController|Custom" },
		{ "Comment", "// Creates a physics handle for this grip\n" },
		{ "DisplayName", "SetUpPhysicsHandle" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Creates a physics handle for this grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "SetUpPhysicsHandle_BP", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventSetUpPhysicsHandle_BP_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics
	{
		struct GripMotionControllerComponent_eventTeleportMoveGrip_Parms
		{
			FBPActorGripInformation Grip;
			bool bTeleportPhysicsGrips;
			bool bIsForPostTeleport;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static void NewProp_bTeleportPhysicsGrips_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleportPhysicsGrips;
		static void NewProp_bIsForPostTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsForPostTeleport;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventTeleportMoveGrip_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::NewProp_bTeleportPhysicsGrips_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventTeleportMoveGrip_Parms*)Obj)->bTeleportPhysicsGrips = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::NewProp_bTeleportPhysicsGrips = { "bTeleportPhysicsGrips", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventTeleportMoveGrip_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::NewProp_bTeleportPhysicsGrips_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::NewProp_bIsForPostTeleport_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventTeleportMoveGrip_Parms*)Obj)->bIsForPostTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::NewProp_bIsForPostTeleport = { "bIsForPostTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventTeleportMoveGrip_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::NewProp_bIsForPostTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventTeleportMoveGrip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventTeleportMoveGrip_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::NewProp_bTeleportPhysicsGrips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::NewProp_bIsForPostTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Move a single grip back into position ignoring collision in the way\n// bTeleportPhysicsGrips says whether we should teleport any physics grips as well\n// bIsForPostTeleport says whether we shuld allow the DropOnTeleport logic to apply or not\n" },
		{ "CPP_Default_bIsForPostTeleport", "false" },
		{ "CPP_Default_bTeleportPhysicsGrips", "true" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Move a single grip back into position ignoring collision in the way\nbTeleportPhysicsGrips says whether we should teleport any physics grips as well\nbIsForPostTeleport says whether we shuld allow the DropOnTeleport logic to apply or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "TeleportMoveGrip", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventTeleportMoveGrip_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics
	{
		struct GripMotionControllerComponent_eventTeleportMoveGrippedActor_Parms
		{
			AActor* GrippedActorToMove;
			bool bTeleportPhysicsGrips;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippedActorToMove;
		static void NewProp_bTeleportPhysicsGrips_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleportPhysicsGrips;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::NewProp_GrippedActorToMove = { "GrippedActorToMove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventTeleportMoveGrippedActor_Parms, GrippedActorToMove), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::NewProp_bTeleportPhysicsGrips_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventTeleportMoveGrippedActor_Parms*)Obj)->bTeleportPhysicsGrips = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::NewProp_bTeleportPhysicsGrips = { "bTeleportPhysicsGrips", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventTeleportMoveGrippedActor_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::NewProp_bTeleportPhysicsGrips_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventTeleportMoveGrippedActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventTeleportMoveGrippedActor_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::NewProp_GrippedActorToMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::NewProp_bTeleportPhysicsGrips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Move a single gripped item back into position ignoring collision in the way\n// bTeleportPhysicsGrips says whether we should teleport any physics grips as well\n" },
		{ "CPP_Default_bTeleportPhysicsGrips", "true" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Move a single gripped item back into position ignoring collision in the way\nbTeleportPhysicsGrips says whether we should teleport any physics grips as well" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "TeleportMoveGrippedActor", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventTeleportMoveGrippedActor_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics
	{
		struct GripMotionControllerComponent_eventTeleportMoveGrippedComponent_Parms
		{
			UPrimitiveComponent* ComponentToMove;
			bool bTeleportPhysicsGrips;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToMove;
		static void NewProp_bTeleportPhysicsGrips_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleportPhysicsGrips;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::NewProp_ComponentToMove_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::NewProp_ComponentToMove = { "ComponentToMove", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventTeleportMoveGrippedComponent_Parms, ComponentToMove), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::NewProp_ComponentToMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::NewProp_ComponentToMove_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::NewProp_bTeleportPhysicsGrips_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventTeleportMoveGrippedComponent_Parms*)Obj)->bTeleportPhysicsGrips = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::NewProp_bTeleportPhysicsGrips = { "bTeleportPhysicsGrips", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventTeleportMoveGrippedComponent_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::NewProp_bTeleportPhysicsGrips_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventTeleportMoveGrippedComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventTeleportMoveGrippedComponent_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::NewProp_ComponentToMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::NewProp_bTeleportPhysicsGrips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Move a single gripped item back into position ignoring collision in the way\n// bTeleportPhysicsGrips says whether we should teleport any physics grips as well\n" },
		{ "CPP_Default_bTeleportPhysicsGrips", "true" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Move a single gripped item back into position ignoring collision in the way\nbTeleportPhysicsGrips says whether we should teleport any physics grips as well" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "TeleportMoveGrippedComponent", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventTeleportMoveGrippedComponent_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics
	{
		struct GripMotionControllerComponent_eventTeleportMoveGrips_Parms
		{
			bool bTeleportPhysicsGrips;
			bool bIsForPostTeleport;
		};
		static void NewProp_bTeleportPhysicsGrips_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleportPhysicsGrips;
		static void NewProp_bIsForPostTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsForPostTeleport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics::NewProp_bTeleportPhysicsGrips_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventTeleportMoveGrips_Parms*)Obj)->bTeleportPhysicsGrips = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics::NewProp_bTeleportPhysicsGrips = { "bTeleportPhysicsGrips", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventTeleportMoveGrips_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics::NewProp_bTeleportPhysicsGrips_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics::NewProp_bIsForPostTeleport_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventTeleportMoveGrips_Parms*)Obj)->bIsForPostTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics::NewProp_bIsForPostTeleport = { "bIsForPostTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventTeleportMoveGrips_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics::NewProp_bIsForPostTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics::NewProp_bTeleportPhysicsGrips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics::NewProp_bIsForPostTeleport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Moves all grips back into position immediately\n" },
		{ "CPP_Default_bIsForPostTeleport", "false" },
		{ "CPP_Default_bTeleportPhysicsGrips", "true" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Moves all grips back into position immediately" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "TeleportMoveGrips", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventTeleportMoveGrips_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics
	{
		struct GripMotionControllerComponent_eventUpdatePhysicsHandle_BP_Parms
		{
			FBPActorGripInformation Grip;
			bool bFullyRecreate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static void NewProp_bFullyRecreate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFullyRecreate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventUpdatePhysicsHandle_BP_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::NewProp_Grip_MetaData)) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::NewProp_bFullyRecreate_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventUpdatePhysicsHandle_BP_Parms*)Obj)->bFullyRecreate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::NewProp_bFullyRecreate = { "bFullyRecreate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventUpdatePhysicsHandle_BP_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::NewProp_bFullyRecreate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GripMotionControllerComponent_eventUpdatePhysicsHandle_BP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GripMotionControllerComponent_eventUpdatePhysicsHandle_BP_Parms), &Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::NewProp_bFullyRecreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController|Custom" },
		{ "Comment", "// Re-creates a physics handle for this grip\n// If bFullyRecreate is true then it will set all of the handle properties, if not then it will only reset the physics actors and COM positions\n" },
		{ "CPP_Default_bFullyRecreate", "true" },
		{ "DisplayName", "UpdatePhysicsHandle" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Re-creates a physics handle for this grip\nIf bFullyRecreate is true then it will set all of the handle properties, if not then it will only reset the physics actors and COM positions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "UpdatePhysicsHandle_BP", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventUpdatePhysicsHandle_BP_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics
	{
		struct GripMotionControllerComponent_eventUpdatePhysicsHandleTransform_BP_Parms
		{
			FBPActorGripInformation GrippedActor;
			FTransform NewTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrippedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::NewProp_GrippedActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::NewProp_GrippedActor = { "GrippedActor", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventUpdatePhysicsHandleTransform_BP_Parms, GrippedActor), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::NewProp_GrippedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::NewProp_GrippedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::NewProp_NewTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GripMotionControllerComponent_eventUpdatePhysicsHandleTransform_BP_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::NewProp_NewTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::NewProp_NewTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::NewProp_GrippedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::NewProp_NewTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripMotionController|Custom" },
		{ "Comment", "// Update the location of the physics handle\n" },
		{ "DisplayName", "UpdatePhysicsHandleTransform" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Update the location of the physics handle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGripMotionControllerComponent, nullptr, "UpdatePhysicsHandleTransform_BP", nullptr, nullptr, sizeof(GripMotionControllerComponent_eventUpdatePhysicsHandleTransform_BP_Parms), Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister()
	{
		return UGripMotionControllerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGripMotionControllerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGripScriptClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultGripScriptClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGripScript_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultGripScript;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLerpToHandFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLerpToHandFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOffsetByHMD_MetaData[];
#endif
		static void NewProp_bOffsetByHMD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOffsetByHMD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConstrainToPivot_MetaData[];
#endif
		static void NewProp_bConstrainToPivot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConstrainToPivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachChar_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_AttachChar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothHandTracking_MetaData[];
#endif
		static void NewProp_bSmoothHandTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothHandTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothWithEuroLowPassFunction_MetaData[];
#endif
		static void NewProp_bSmoothWithEuroLowPassFunction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothWithEuroLowPassFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EuroSmoothingParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EuroSmoothingParams;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VelocityCalculationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityCalculationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VelocityCalculationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSampleVelocityInWorldSpace_MetaData[];
#endif
		static void NewProp_bSampleVelocityInWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSampleVelocityInWorldSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocitySamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VelocitySamples;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOffsetByControllerProfile_MetaData[];
#endif
		static void NewProp_bOffsetByControllerProfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOffsetByControllerProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnControllerProfileTransformChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerProfileTransformChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGripOutOfRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGripOutOfRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTrackingChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrackingChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGrippedObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGrippedObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDroppedObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDroppedObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTeleportedGrips_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeleportedGrips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGripTransformChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGripTransformChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomPivotComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CustomPivotComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomPivotComponentSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomPivotComponentSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipPivotTransformAdjustment_MetaData[];
#endif
		static void NewProp_bSkipPivotTransformAdjustment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipPivotTransformAdjustment;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrippedObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GrippedObjects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocallyGrippedObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocallyGrippedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocallyGrippedObjects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalTransactionBuffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalTransactionBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalTransactionBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysSendTickGrip_MetaData[];
#endif
		static void NewProp_bAlwaysSendTickGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSendTickGrip;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalLateUpdateComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalLateUpdateComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalLateUpdateComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedControllerTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedControllerTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerNetUpdateRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ControllerNetUpdateRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothReplicatedMotion_MetaData[];
#endif
		static void NewProp_bSmoothReplicatedMotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothReplicatedMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateWithoutTracking_MetaData[];
#endif
		static void NewProp_bReplicateWithoutTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateWithoutTracking;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectsWaitingForSocketUpdate_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectsWaitingForSocketUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectsWaitingForSocketUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseWithoutTracking_MetaData[];
#endif
		static void NewProp_bUseWithoutTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWithoutTracking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGripMotionControllerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMotionControllerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGripMotionControllerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentPoint, "AddSecondaryAttachmentPoint" }, // 1342222652
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGrip, "AddSecondaryAttachmentToGrip" }, // 1575987411
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID, "AddSecondaryAttachmentToGripByID" }, // 2073769327
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthority, "BP_HasGripAuthority" }, // 302954828
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripAuthorityForObject, "BP_HasGripAuthorityForObject" }, // 2277597036
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_BP_HasGripMovementAuthority, "BP_HasGripMovementAuthority" }, // 372365476
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_BP_IsLocallyControlled, "BP_IsLocallyControlled" }, // 223561467
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_CancelGlobalLerpToHand, "CancelGlobalLerpToHand" }, // 3285754450
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip, "Client_NotifyInvalidLocalGrip" }, // 2546056498
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToControllerRelativeTransform, "ConvertToControllerRelativeTransform" }, // 4196022559
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_ConvertToGripRelativeTransform, "ConvertToGripRelativeTransform" }, // 12343611
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP, "CreateGripRelativeAdditionTransform_BP" }, // 748335118
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_DestroyPhysicsHandle_BP, "DestroyPhysicsHandle_BP" }, // 3298595897
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_DropActor, "DropActor" }, // 3189377831
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketGrip, "DropAndSocketGrip" }, // 4031766223
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_DropAndSocketObject, "DropAndSocketObject" }, // 2514370268
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_DropComponent, "DropComponent" }, // 2240256189
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_DropGrip, "DropGrip" }, // 3629162168
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_DropObject, "DropObject" }, // 328553674
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_DropObjectByInterface, "DropObjectByInterface" }, // 4169936103
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetAllGrips, "GetAllGrips" }, // 3728899587
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetControllerDeviceID, "GetControllerDeviceID" }, // 3070038157
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByActor, "GetGripByActor" }, // 1052876766
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByComponent, "GetGripByComponent" }, // 241932394
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByID, "GetGripByID" }, // 852283016
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetGripByObject, "GetGripByObject" }, // 1213701563
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetGripDistance_BP, "GetGripDistance_BP" }, // 1831563665
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetGripMass, "GetGripMass" }, // 4284973953
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedActors, "GetGrippedActors" }, // 4258355446
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedComponents, "GetGrippedComponents" }, // 870224092
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetGrippedObjects, "GetGrippedObjects" }, // 251922800
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetHandType, "GetHandType" }, // 675620126
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetIsComponentHeld, "GetIsComponentHeld" }, // 1707889462
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetIsHeld, "GetIsHeld" }, // 168104988
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetIsObjectHeld, "GetIsObjectHeld" }, // 2212161874
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetIsSecondaryAttachment, "GetIsSecondaryAttachment" }, // 3840490319
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsConstraintForce, "GetPhysicsConstraintForce" }, // 1008838226
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsHandleSettings, "GetPhysicsHandleSettings" }, // 196782171
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetPhysicsVelocities, "GetPhysicsVelocities" }, // 1947664120
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotLocation_BP, "GetPivotLocation_BP" }, // 1382280292
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GetPivotTransform_BP, "GetPivotTransform_BP" }, // 1504678228
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GripActor, "GripActor" }, // 238747098
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GripComponent, "GripComponent" }, // 3262705983
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GripControllerIsTracked, "GripControllerIsTracked" }, // 3913170258
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GripObject, "GripObject" }, // 591899410
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_GripObjectByInterface, "GripObjectByInterface" }, // 2166359233
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_HasGrippedObjects, "HasGrippedObjects" }, // 3685688537
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_NewControllerProfileLoaded, "NewControllerProfileLoaded" }, // 3332894476
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDrop, "NotifyDrop" }, // 431765282
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_NotifyDropAndSocket, "NotifyDropAndSocket" }, // 2461152361
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_GrippedObjects, "OnRep_GrippedObjects" }, // 3050184080
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocallyGrippedObjects, "OnRep_LocallyGrippedObjects" }, // 3997200555
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_LocalTransaction, "OnRep_LocalTransaction" }, // 761018225
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_OnRep_ReplicatedControllerTransform, "OnRep_ReplicatedControllerTransform" }, // 2764073037
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_PostTeleportMoveGrippedObjects, "PostTeleportMoveGrippedObjects" }, // 3776574963
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip, "RemoveSecondaryAttachmentFromGrip" }, // 1001375755
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID, "RemoveSecondaryAttachmentFromGripByID" }, // 384976264
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint, "RemoveSecondaryAttachmentPoint" }, // 2526298951
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip, "Server_NotifyDropAndSocketGrip" }, // 1873447794
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyHandledTransaction, "Server_NotifyHandledTransaction" }, // 2494205907
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged, "Server_NotifyLocalGripAddedOrChanged" }, // 2927518400
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifyLocalGripRemoved, "Server_NotifyLocalGripRemoved" }, // 731324594
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged, "Server_NotifySecondaryAttachmentChanged" }, // 2598051993
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain, "Server_NotifySecondaryAttachmentChanged_Retain" }, // 3362042886
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_Server_SendControllerTransform, "Server_SendControllerTransform" }, // 1594010725
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_SetCustomPivotComponent, "SetCustomPivotComponent" }, // 2496857372
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_SetGripAdditionTransform, "SetGripAdditionTransform" }, // 1979428479
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_SetGripCollisionType, "SetGripCollisionType" }, // 1194834886
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_SetGripHybridLock, "SetGripHybridLock" }, // 174186637
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_SetGripLateUpdateSetting, "SetGripLateUpdateSetting" }, // 1377702713
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_SetGripPaused, "SetGripPaused" }, // 1607384487
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_SetGripRelativeTransform, "SetGripRelativeTransform" }, // 1823789802
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_SetGripStiffnessAndDamping, "SetGripStiffnessAndDamping" }, // 2670843686
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_SetPausedTransform, "SetPausedTransform" }, // 2241610271
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_SetPhysicsHandleSettings, "SetPhysicsHandleSettings" }, // 2683561286
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_SetSocketTransform, "SetSocketTransform" }, // 2620735138
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_SetUpPhysicsHandle_BP, "SetUpPhysicsHandle_BP" }, // 2656654
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrip, "TeleportMoveGrip" }, // 3387537779
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedActor, "TeleportMoveGrippedActor" }, // 1154323968
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrippedComponent, "TeleportMoveGrippedComponent" }, // 151774104
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_TeleportMoveGrips, "TeleportMoveGrips" }, // 1117362133
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandle_BP, "UpdatePhysicsHandle_BP" }, // 885879233
		{ &Z_Construct_UFunction_UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP, "UpdatePhysicsHandleTransform_BP" }, // 1673776120
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MotionController" },
		{ "Comment", "/**\n* An override of the MotionControllerComponent that implements position replication and Gripping with grip replication and controllable late updates per object.\n*/" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "GripMotionControllerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An override of the MotionControllerComponent that implements position replication and Gripping with grip replication and controllable late updates per object." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_DefaultGripScriptClass_MetaData[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// The grip script that defines the default behaviors of grips\n// Don't edit this unless you really know what you are doing, leave it empty\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "The grip script that defines the default behaviors of grips\nDon't edit this unless you really know what you are doing, leave it empty" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_DefaultGripScriptClass = { "DefaultGripScriptClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, DefaultGripScriptClass), Z_Construct_UClass_UVRGripScriptBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_DefaultGripScriptClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_DefaultGripScriptClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_DefaultGripScript_MetaData[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// This is the pointer to the default grip script\n// It is here to access so if you want to set some variables on your override then you can\n// Due to a bug with instanced variables and parent classes you can't directly edit this in subclass in the details panel\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "This is the pointer to the default grip script\nIt is here to access so if you want to set some variables on your override then you can\nDue to a bug with instanced variables and parent classes you can't directly edit this in subclass in the details panel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_DefaultGripScript = { "DefaultGripScript", nullptr, (EPropertyFlags)0x00100000000a201d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, DefaultGripScript), Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_DefaultGripScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_DefaultGripScript_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnLerpToHandFinished_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "//UPROPERTY(BlueprintAssignable, Category = \"Grip Events\")\n//\x09""FVROnControllerGripSignature OnLerpToHandBegin;\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "UPROPERTY(BlueprintAssignable, Category = \"Grip Events\")\n       FVROnControllerGripSignature OnLerpToHandBegin;" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnLerpToHandFinished = { "OnLerpToHandFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, OnLerpToHandFinished), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnLerpToHandFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnLerpToHandFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bOffsetByHMD_MetaData[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// If true will subtract the HMD's location from the position, useful for if the actors base is set to the HMD location always (simple character).\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "If true will subtract the HMD's location from the position, useful for if the actors base is set to the HMD location always (simple character)." },
	};
#endif
	void Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bOffsetByHMD_SetBit(void* Obj)
	{
		((UGripMotionControllerComponent*)Obj)->bOffsetByHMD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bOffsetByHMD = { "bOffsetByHMD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGripMotionControllerComponent), &Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bOffsetByHMD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bOffsetByHMD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bOffsetByHMD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bConstrainToPivot_MetaData[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// When true any physics constraints will be attached to the grip pivot instead of a new kinematic actor in the scene\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "When true any physics constraints will be attached to the grip pivot instead of a new kinematic actor in the scene" },
	};
#endif
	void Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bConstrainToPivot_SetBit(void* Obj)
	{
		((UGripMotionControllerComponent*)Obj)->bConstrainToPivot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bConstrainToPivot = { "bConstrainToPivot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGripMotionControllerComponent), &Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bConstrainToPivot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bConstrainToPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bConstrainToPivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_AttachChar_MetaData[] = {
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_AttachChar = { "AttachChar", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, AttachChar), Z_Construct_UClass_AVRBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_AttachChar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_AttachChar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothHandTracking_MetaData[] = {
		{ "Category", "GripMotionController|Smoothing" },
		{ "Comment", "// If true will smooth the hand tracking data with a TInterp function\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "If true will smooth the hand tracking data with a TInterp function" },
	};
#endif
	void Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothHandTracking_SetBit(void* Obj)
	{
		((UGripMotionControllerComponent*)Obj)->bSmoothHandTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothHandTracking = { "bSmoothHandTracking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGripMotionControllerComponent), &Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothHandTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothHandTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothHandTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothWithEuroLowPassFunction_MetaData[] = {
		{ "Category", "GripMotionController|Smoothing" },
		{ "Comment", "// If true will smooth hand tracking with the Linear and Rotational 1 Euro low pass settings instead\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "If true will smooth hand tracking with the Linear and Rotational 1 Euro low pass settings instead" },
	};
#endif
	void Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothWithEuroLowPassFunction_SetBit(void* Obj)
	{
		((UGripMotionControllerComponent*)Obj)->bSmoothWithEuroLowPassFunction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothWithEuroLowPassFunction = { "bSmoothWithEuroLowPassFunction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGripMotionControllerComponent), &Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothWithEuroLowPassFunction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothWithEuroLowPassFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothWithEuroLowPassFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_SmoothingSpeed_MetaData[] = {
		{ "Category", "GripMotionController|Smoothing" },
		{ "Comment", "// The interp speed to use if smoothing is enabled and not using the 1 Euro smoothing\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "The interp speed to use if smoothing is enabled and not using the 1 Euro smoothing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_SmoothingSpeed = { "SmoothingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, SmoothingSpeed), METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_SmoothingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_SmoothingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_EuroSmoothingParams_MetaData[] = {
		{ "Category", "GripMotionController|Smoothing" },
		{ "Comment", "// Smoothing parameters when using the 1 Euro low pass option\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Smoothing parameters when using the 1 Euro low pass option" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_EuroSmoothingParams = { "EuroSmoothingParams", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, EuroSmoothingParams), Z_Construct_UScriptStruct_FBPEuroLowPassFilterTrans, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_EuroSmoothingParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_EuroSmoothingParams_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_VelocityCalculationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_VelocityCalculationType_MetaData[] = {
		{ "Category", "GripMotionController|ComponentVelocity" },
		{ "Comment", "// Type of velocity calculation to use for the motion controller\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Type of velocity calculation to use for the motion controller" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_VelocityCalculationType = { "VelocityCalculationType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, VelocityCalculationType), Z_Construct_UEnum_VRExpansionPlugin_EVRVelocityType, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_VelocityCalculationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_VelocityCalculationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSampleVelocityInWorldSpace_MetaData[] = {
		{ "Category", "GripMotionController|ComponentVelocity" },
		{ "Comment", "// If we should sample the velocity in world or local space\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "If we should sample the velocity in world or local space" },
	};
#endif
	void Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSampleVelocityInWorldSpace_SetBit(void* Obj)
	{
		((UGripMotionControllerComponent*)Obj)->bSampleVelocityInWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSampleVelocityInWorldSpace = { "bSampleVelocityInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGripMotionControllerComponent), &Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSampleVelocityInWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSampleVelocityInWorldSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSampleVelocityInWorldSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_VelocitySamples_MetaData[] = {
		{ "Category", "GripMotionController|ComponentVelocity" },
		{ "Comment", "// If not using velocity mode \"default\" this is the number of sample to keep\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "If not using velocity mode \"default\" this is the number of sample to keep" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_VelocitySamples = { "VelocitySamples", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, VelocitySamples), METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_VelocitySamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_VelocitySamples_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bOffsetByControllerProfile_MetaData[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// If true will offset the tracked location of the controller by the controller profile that is currently loaded.\n// Thows the event OnControllerProfileTransformChanged when it happens so that you can adjust specific components\n// Like procedural ones for the offset (procedural meshes are already correctly offset for the controller and\n// need rewound.\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "If true will offset the tracked location of the controller by the controller profile that is currently loaded.\nThows the event OnControllerProfileTransformChanged when it happens so that you can adjust specific components\nLike procedural ones for the offset (procedural meshes are already correctly offset for the controller and\nneed rewound." },
	};
#endif
	void Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bOffsetByControllerProfile_SetBit(void* Obj)
	{
		((UGripMotionControllerComponent*)Obj)->bOffsetByControllerProfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bOffsetByControllerProfile = { "bOffsetByControllerProfile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGripMotionControllerComponent), &Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bOffsetByControllerProfile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bOffsetByControllerProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bOffsetByControllerProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnControllerProfileTransformChanged_MetaData[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Called when the controller profile changed and we have a new transform (only if bOffsetByControllerProfile is true)\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Called when the controller profile changed and we have a new transform (only if bOffsetByControllerProfile is true)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnControllerProfileTransformChanged = { "OnControllerProfileTransformChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, OnControllerProfileTransformChanged), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnProfileTransformChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnControllerProfileTransformChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnControllerProfileTransformChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnGripOutOfRange_MetaData[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Called when the controller profile changed and we have a new transform (only if bOffsetByControllerProfile is true)\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Called when the controller profile changed and we have a new transform (only if bOffsetByControllerProfile is true)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnGripOutOfRange = { "OnGripOutOfRange", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, OnGripOutOfRange), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnGripOutOfRange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnGripOutOfRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnGripOutOfRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnTrackingChanged_MetaData[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Called when a controller first gets a valid tracked frame\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Called when a controller first gets a valid tracked frame" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnTrackingChanged = { "OnTrackingChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, OnTrackingChanged), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGripControllerOnTrackingEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnTrackingChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnTrackingChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnGrippedObject_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is gripped\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Called when a object is gripped" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnGrippedObject = { "OnGrippedObject", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, OnGrippedObject), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnGrippedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnGrippedObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnDroppedObject_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is dropped\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Called when a object is dropped" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnDroppedObject = { "OnDroppedObject", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, OnDroppedObject), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerDropSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnDroppedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnDroppedObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnTeleportedGrips_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a gripped object has been teleported\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Called when a gripped object has been teleported" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnTeleportedGrips = { "OnTeleportedGrips", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, OnTeleportedGrips), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerTeleportedGripsSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnTeleportedGrips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnTeleportedGrips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnSecondaryGripAdded_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold is secondary gripped\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Called when an object we hold is secondary gripped" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnSecondaryGripAdded = { "OnSecondaryGripAdded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, OnSecondaryGripAdded), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnSecondaryGripAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnSecondaryGripAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnSecondaryGripRemoved_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold is secondary dropped\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Called when an object we hold is secondary dropped" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnSecondaryGripRemoved = { "OnSecondaryGripRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, OnSecondaryGripRemoved), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnSecondaryGripRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnSecondaryGripRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnGripTransformChanged_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold has its grip transform changed\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Called when an object we hold has its grip transform changed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnGripTransformChanged = { "OnGripTransformChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, OnGripTransformChanged), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnControllerGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnGripTransformChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnGripTransformChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_CustomPivotComponent_MetaData[] = {
		{ "Category", "GripMotionController|CustomPivot" },
		{ "Comment", "// The component to use for basing the grip off of instead of the motion controller\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "The component to use for basing the grip off of instead of the motion controller" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_CustomPivotComponent = { "CustomPivotComponent", nullptr, (EPropertyFlags)0x001400000008000d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, CustomPivotComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_CustomPivotComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_CustomPivotComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_CustomPivotComponentSocketName_MetaData[] = {
		{ "Category", "GripMotionController|CustomPivot" },
		{ "Comment", "// The socket for the component to use for basing the grip off of instead of the motion controller\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "The socket for the component to use for basing the grip off of instead of the motion controller" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_CustomPivotComponentSocketName = { "CustomPivotComponentSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, CustomPivotComponentSocketName), METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_CustomPivotComponentSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_CustomPivotComponentSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSkipPivotTransformAdjustment_MetaData[] = {
		{ "Category", "GripMotionController|CustomPivot" },
		{ "Comment", "// If true then we will skip the pivot transform adjustment when gripping an object with the custom pivot\n// This is here for legacy support for anyone not using \"ConvertToControllerRelativeTransform\".\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "If true then we will skip the pivot transform adjustment when gripping an object with the custom pivot\nThis is here for legacy support for anyone not using \"ConvertToControllerRelativeTransform\"." },
	};
#endif
	void Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSkipPivotTransformAdjustment_SetBit(void* Obj)
	{
		((UGripMotionControllerComponent*)Obj)->bSkipPivotTransformAdjustment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSkipPivotTransformAdjustment = { "bSkipPivotTransformAdjustment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGripMotionControllerComponent), &Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSkipPivotTransformAdjustment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSkipPivotTransformAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSkipPivotTransformAdjustment_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_GrippedObjects_Inner = { "GrippedObjects", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_GrippedObjects_MetaData[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// When possible I suggest that you use GetAllGrips/GetGrippedObjects instead of directly referencing this\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "When possible I suggest that you use GetAllGrips/GetGrippedObjects instead of directly referencing this" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_GrippedObjects = { "GrippedObjects", "OnRep_GrippedObjects", (EPropertyFlags)0x0010008100000034, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, GrippedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_GrippedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_GrippedObjects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_LocallyGrippedObjects_Inner = { "LocallyGrippedObjects", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_LocallyGrippedObjects_MetaData[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// When possible I suggest that you use GetAllGrips/GetGrippedObjects instead of directly referencing this\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "When possible I suggest that you use GetAllGrips/GetGrippedObjects instead of directly referencing this" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_LocallyGrippedObjects = { "LocallyGrippedObjects", "OnRep_LocallyGrippedObjects", (EPropertyFlags)0x0010008100000034, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, LocallyGrippedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_LocallyGrippedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_LocallyGrippedObjects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_LocalTransactionBuffer_Inner = { "LocalTransactionBuffer", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_LocalTransactionBuffer_MetaData[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Local Grip TransactionalBuffer to store server sided grips that need to be emplaced into the local buffer\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Local Grip TransactionalBuffer to store server sided grips that need to be emplaced into the local buffer" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_LocalTransactionBuffer = { "LocalTransactionBuffer", "OnRep_LocalTransaction", (EPropertyFlags)0x0010008100000034, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, LocalTransactionBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_LocalTransactionBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_LocalTransactionBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bAlwaysSendTickGrip_MetaData[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// Enable this to send the TickGrip event every tick even for non custom grip types - has a slight performance hit\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Enable this to send the TickGrip event every tick even for non custom grip types - has a slight performance hit" },
	};
#endif
	void Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bAlwaysSendTickGrip_SetBit(void* Obj)
	{
		((UGripMotionControllerComponent*)Obj)->bAlwaysSendTickGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bAlwaysSendTickGrip = { "bAlwaysSendTickGrip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGripMotionControllerComponent), &Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bAlwaysSendTickGrip_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bAlwaysSendTickGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bAlwaysSendTickGrip_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_AdditionalLateUpdateComponents_Inner = { "AdditionalLateUpdateComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_AdditionalLateUpdateComponents_MetaData[] = {
		{ "Category", "GripMotionController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_AdditionalLateUpdateComponents = { "AdditionalLateUpdateComponents", nullptr, (EPropertyFlags)0x001000800000000c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, AdditionalLateUpdateComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_AdditionalLateUpdateComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_AdditionalLateUpdateComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ReplicatedControllerTransform_MetaData[] = {
		{ "Category", "GripMotionController|Networking" },
		{ "Comment", "//  Movement Replication\n// Actor needs to be replicated for this to work\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Movement Replication\nActor needs to be replicated for this to work" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ReplicatedControllerTransform = { "ReplicatedControllerTransform", "OnRep_ReplicatedControllerTransform", (EPropertyFlags)0x0010000100010021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, ReplicatedControllerTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ReplicatedControllerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ReplicatedControllerTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ControllerNetUpdateRate_MetaData[] = {
		{ "Category", "GripMotionController|Networking" },
		{ "ClampMin", "0" },
		{ "Comment", "// Rate to update the position to the server, 100htz is default (same as replication rate, should also hit every tick).\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Rate to update the position to the server, 100htz is default (same as replication rate, should also hit every tick)." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ControllerNetUpdateRate = { "ControllerNetUpdateRate", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, ControllerNetUpdateRate), METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ControllerNetUpdateRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ControllerNetUpdateRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothReplicatedMotion_MetaData[] = {
		{ "Category", "GripMotionController|Networking" },
		{ "Comment", "// Whether to smooth (lerp) between ticks for the replicated motion, DOES NOTHING if update rate is larger than FPS!\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Whether to smooth (lerp) between ticks for the replicated motion, DOES NOTHING if update rate is larger than FPS!" },
	};
#endif
	void Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothReplicatedMotion_SetBit(void* Obj)
	{
		((UGripMotionControllerComponent*)Obj)->bSmoothReplicatedMotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothReplicatedMotion = { "bSmoothReplicatedMotion", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGripMotionControllerComponent), &Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothReplicatedMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothReplicatedMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothReplicatedMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bReplicateWithoutTracking_MetaData[] = {
		{ "Category", "GripMotionController|Networking" },
		{ "Comment", "// Whether to replicate even if no tracking (FPS or test characters)\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Whether to replicate even if no tracking (FPS or test characters)" },
	};
#endif
	void Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bReplicateWithoutTracking_SetBit(void* Obj)
	{
		((UGripMotionControllerComponent*)Obj)->bReplicateWithoutTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bReplicateWithoutTracking = { "bReplicateWithoutTracking", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGripMotionControllerComponent), &Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bReplicateWithoutTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bReplicateWithoutTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bReplicateWithoutTracking_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ObjectsWaitingForSocketUpdate_Inner = { "ObjectsWaitingForSocketUpdate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ObjectsWaitingForSocketUpdate_MetaData[] = {
		{ "Comment", "// Keep a hard reference to the drop to avoid deletion errors\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "Keep a hard reference to the drop to avoid deletion errors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ObjectsWaitingForSocketUpdate = { "ObjectsWaitingForSocketUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGripMotionControllerComponent, ObjectsWaitingForSocketUpdate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ObjectsWaitingForSocketUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ObjectsWaitingForSocketUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bUseWithoutTracking_MetaData[] = {
		{ "Category", "GripMotionController" },
		{ "Comment", "// This is for testing, setting it to true allows you to test grip with a non VR enabled pawn\n" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ToolTip", "This is for testing, setting it to true allows you to test grip with a non VR enabled pawn" },
	};
#endif
	void Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bUseWithoutTracking_SetBit(void* Obj)
	{
		((UGripMotionControllerComponent*)Obj)->bUseWithoutTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bUseWithoutTracking = { "bUseWithoutTracking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGripMotionControllerComponent), &Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bUseWithoutTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bUseWithoutTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bUseWithoutTracking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGripMotionControllerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_DefaultGripScriptClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_DefaultGripScript,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnLerpToHandFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bOffsetByHMD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bConstrainToPivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_AttachChar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothHandTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothWithEuroLowPassFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_SmoothingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_EuroSmoothingParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_VelocityCalculationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_VelocityCalculationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSampleVelocityInWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_VelocitySamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bOffsetByControllerProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnControllerProfileTransformChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnGripOutOfRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnTrackingChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnGrippedObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnDroppedObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnTeleportedGrips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnSecondaryGripAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnSecondaryGripRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_OnGripTransformChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_CustomPivotComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_CustomPivotComponentSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSkipPivotTransformAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_GrippedObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_GrippedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_LocallyGrippedObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_LocallyGrippedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_LocalTransactionBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_LocalTransactionBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bAlwaysSendTickGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_AdditionalLateUpdateComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_AdditionalLateUpdateComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ReplicatedControllerTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ControllerNetUpdateRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bSmoothReplicatedMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bReplicateWithoutTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ObjectsWaitingForSocketUpdate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_ObjectsWaitingForSocketUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_bUseWithoutTracking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGripMotionControllerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGripMotionControllerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::ClassParams = {
		&UGripMotionControllerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGripMotionControllerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGripMotionControllerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGripMotionControllerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGripMotionControllerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGripMotionControllerComponent, 1100175615);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGripMotionControllerComponent>()
	{
		return UGripMotionControllerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGripMotionControllerComponent(Z_Construct_UClass_UGripMotionControllerComponent, &UGripMotionControllerComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UGripMotionControllerComponent"), false, nullptr, nullptr, nullptr);

	void UGripMotionControllerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GrippedObjects(TEXT("GrippedObjects"));
		static const FName Name_LocallyGrippedObjects(TEXT("LocallyGrippedObjects"));
		static const FName Name_LocalTransactionBuffer(TEXT("LocalTransactionBuffer"));
		static const FName Name_ReplicatedControllerTransform(TEXT("ReplicatedControllerTransform"));
		static const FName Name_ControllerNetUpdateRate(TEXT("ControllerNetUpdateRate"));
		static const FName Name_bSmoothReplicatedMotion(TEXT("bSmoothReplicatedMotion"));
		static const FName Name_bReplicateWithoutTracking(TEXT("bReplicateWithoutTracking"));

		const bool bIsValid = true
			&& Name_GrippedObjects == ClassReps[(int32)ENetFields_Private::GrippedObjects].Property->GetFName()
			&& Name_LocallyGrippedObjects == ClassReps[(int32)ENetFields_Private::LocallyGrippedObjects].Property->GetFName()
			&& Name_LocalTransactionBuffer == ClassReps[(int32)ENetFields_Private::LocalTransactionBuffer].Property->GetFName()
			&& Name_ReplicatedControllerTransform == ClassReps[(int32)ENetFields_Private::ReplicatedControllerTransform].Property->GetFName()
			&& Name_ControllerNetUpdateRate == ClassReps[(int32)ENetFields_Private::ControllerNetUpdateRate].Property->GetFName()
			&& Name_bSmoothReplicatedMotion == ClassReps[(int32)ENetFields_Private::bSmoothReplicatedMotion].Property->GetFName()
			&& Name_bReplicateWithoutTracking == ClassReps[(int32)ENetFields_Private::bReplicateWithoutTracking].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGripMotionControllerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGripMotionControllerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
