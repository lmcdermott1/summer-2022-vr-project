// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRGripInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGripInterface() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVROnDropSignature_Parms
		{
			UGripMotionControllerComponent* GrippingController;
			FBPActorGripInformation GripInformation;
			bool bWasSocketed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnDropSignature_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_GrippingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnDropSignature_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_GripInformation_MetaData)) };
	void Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((_Script_VRExpansionPlugin_eventVROnDropSignature_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_VRExpansionPlugin_eventVROnDropSignature_Parms), &Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_GrippingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_bWasSocketed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for notification when the controller drops a gripped object. */" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Delegate for notification when the controller drops a gripped object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VROnDropSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_VRExpansionPlugin_eventVROnDropSignature_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVROnGripSignature_Parms
		{
			UGripMotionControllerComponent* GrippingController;
			FBPActorGripInformation GripInformation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnGripSignature_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::NewProp_GrippingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnGripSignature_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::NewProp_GripInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::NewProp_GrippingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::NewProp_GripInformation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for notification when the controller grips a new object. */" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Delegate for notification when the controller grips a new object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VROnGripSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_VRExpansionPlugin_eventVROnGripSignature_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(IVRGripInterface::execGetGripScripts)
	{
		P_GET_TARRAY_REF(UVRGripScriptBase*,Z_Param_Out_ArrayReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGripScripts_Implementation(Z_Param_Out_ArrayReference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execRequestsSocketing)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_ParentToSocketTo);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OptionalSocketName);
		P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_RelativeTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestsSocketing_Implementation(Z_Param_Out_ParentToSocketTo,Z_Param_Out_OptionalSocketName,Z_Param_Out_RelativeTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execSetHeld)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_HoldingController);
		P_GET_PROPERTY(FByteProperty,Z_Param_GripID);
		P_GET_UBOOL(Z_Param_bIsHeld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeld_Implementation(Z_Param_HoldingController,Z_Param_GripID,Z_Param_bIsHeld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execIsHeld)
	{
		P_GET_TARRAY_REF(FBPGripPair,Z_Param_Out_HoldingControllers);
		P_GET_UBOOL_REF(Z_Param_Out_bIsHeld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsHeld_Implementation(Z_Param_Out_HoldingControllers,Z_Param_Out_bIsHeld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execAllowsMultipleGrips)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllowsMultipleGrips_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execOnInput)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY(FByteProperty,Z_Param_KeyEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInput_Implementation(Z_Param_Key,EInputEvent(Z_Param_KeyEvent));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execOnEndSecondaryUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndSecondaryUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execOnSecondaryUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execOnEndUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execOnUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execOnSecondaryGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripOwningController);
		P_GET_OBJECT(USceneComponent,Z_Param_ReleasingSecondaryGripComponent);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryGripRelease_Implementation(Z_Param_GripOwningController,Z_Param_ReleasingSecondaryGripComponent,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execOnSecondaryGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripOwningController);
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryGripComponent);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryGrip_Implementation(Z_Param_GripOwningController,Z_Param_SecondaryGripComponent,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execOnChildGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_UBOOL(Z_Param_bWasSocketed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChildGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execOnChildGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChildGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execOnGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_UBOOL(Z_Param_bWasSocketed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execOnGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execTickGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execClosestGripSlotInRange)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldLocation);
		P_GET_UBOOL(Z_Param_bSecondarySlot);
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SlotName);
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_CallingController);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverridePrefix);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClosestGripSlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_bSecondarySlot,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_Out_SlotName,Z_Param_CallingController,Z_Param_OverridePrefix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execGripBreakDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GripBreakDistance_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execAdvancedGripSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBPAdvGripSettings*)Z_Param__Result=P_THIS->AdvancedGripSettings_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execGetGripStiffnessAndDamping)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GripStiffnessOut);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GripDampingOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGripStiffnessAndDamping_Implementation(Z_Param_Out_GripStiffnessOut,Z_Param_Out_GripDampingOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execGripMovementReplicationType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripMovementReplicationSettings*)Z_Param__Result=P_THIS->GripMovementReplicationType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execGripLateUpdateSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripLateUpdateSettings*)Z_Param__Result=P_THIS->GripLateUpdateSetting_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execSecondaryGripType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESecondaryGripType*)Z_Param__Result=P_THIS->SecondaryGripType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execGetPrimaryGripType)
	{
		P_GET_UBOOL(Z_Param_bIsSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripCollisionType*)Z_Param__Result=P_THIS->GetPrimaryGripType_Implementation(Z_Param_bIsSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execSimulateOnDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SimulateOnDrop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execTeleportBehavior)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripInterfaceTeleportBehavior*)Z_Param__Result=P_THIS->TeleportBehavior_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVRGripInterface::execDenyGripping)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripInitiator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DenyGripping_Implementation(Z_Param_GripInitiator);
		P_NATIVE_END;
	}
	FBPAdvGripSettings IVRGripInterface::AdvancedGripSettings()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AdvancedGripSettings instead.");
		VRGripInterface_eventAdvancedGripSettings_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IVRGripInterface::AllowsMultipleGrips()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AllowsMultipleGrips instead.");
		VRGripInterface_eventAllowsMultipleGrips_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVRGripInterface::ClosestGripSlotInRange(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClosestGripSlotInRange instead.");
	}
	bool IVRGripInterface::DenyGripping(UGripMotionControllerComponent* GripInitiator)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DenyGripping instead.");
		VRGripInterface_eventDenyGripping_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IVRGripInterface::GetGripScripts(TArray<UVRGripScriptBase*>& ArrayReference)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGripScripts instead.");
		VRGripInterface_eventGetGripScripts_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVRGripInterface::GetGripStiffnessAndDamping(float& GripStiffnessOut, float& GripDampingOut)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGripStiffnessAndDamping instead.");
	}
	EGripCollisionType IVRGripInterface::GetPrimaryGripType(bool bIsSlot)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPrimaryGripType instead.");
		VRGripInterface_eventGetPrimaryGripType_Parms Parms;
		return Parms.ReturnValue;
	}
	float IVRGripInterface::GripBreakDistance()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GripBreakDistance instead.");
		VRGripInterface_eventGripBreakDistance_Parms Parms;
		return Parms.ReturnValue;
	}
	EGripLateUpdateSettings IVRGripInterface::GripLateUpdateSetting()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GripLateUpdateSetting instead.");
		VRGripInterface_eventGripLateUpdateSetting_Parms Parms;
		return Parms.ReturnValue;
	}
	EGripMovementReplicationSettings IVRGripInterface::GripMovementReplicationType()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GripMovementReplicationType instead.");
		VRGripInterface_eventGripMovementReplicationType_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVRGripInterface::IsHeld(TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsHeld instead.");
	}
	void IVRGripInterface::OnChildGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnChildGrip instead.");
	}
	void IVRGripInterface::OnChildGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnChildGripRelease instead.");
	}
	void IVRGripInterface::OnEndSecondaryUsed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEndSecondaryUsed instead.");
	}
	void IVRGripInterface::OnEndUsed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEndUsed instead.");
	}
	void IVRGripInterface::OnGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGrip instead.");
	}
	void IVRGripInterface::OnGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGripRelease instead.");
	}
	void IVRGripInterface::OnInput(FKey Key, EInputEvent KeyEvent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInput instead.");
	}
	void IVRGripInterface::OnSecondaryGrip(UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSecondaryGrip instead.");
	}
	void IVRGripInterface::OnSecondaryGripRelease(UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSecondaryGripRelease instead.");
	}
	void IVRGripInterface::OnSecondaryUsed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSecondaryUsed instead.");
	}
	void IVRGripInterface::OnUsed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUsed instead.");
	}
	bool IVRGripInterface::RequestsSocketing(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestsSocketing instead.");
		VRGripInterface_eventRequestsSocketing_Parms Parms;
		return Parms.ReturnValue;
	}
	ESecondaryGripType IVRGripInterface::SecondaryGripType()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SecondaryGripType instead.");
		VRGripInterface_eventSecondaryGripType_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVRGripInterface::SetHeld(UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetHeld instead.");
	}
	bool IVRGripInterface::SimulateOnDrop()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SimulateOnDrop instead.");
		VRGripInterface_eventSimulateOnDrop_Parms Parms;
		return Parms.ReturnValue;
	}
	EGripInterfaceTeleportBehavior IVRGripInterface::TeleportBehavior()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TeleportBehavior instead.");
		VRGripInterface_eventTeleportBehavior_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVRGripInterface::TickGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TickGrip instead.");
	}
	void UVRGripInterface::StaticRegisterNativesUVRGripInterface()
	{
		UClass* Class = UVRGripInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvancedGripSettings", &IVRGripInterface::execAdvancedGripSettings },
			{ "AllowsMultipleGrips", &IVRGripInterface::execAllowsMultipleGrips },
			{ "ClosestGripSlotInRange", &IVRGripInterface::execClosestGripSlotInRange },
			{ "DenyGripping", &IVRGripInterface::execDenyGripping },
			{ "GetGripScripts", &IVRGripInterface::execGetGripScripts },
			{ "GetGripStiffnessAndDamping", &IVRGripInterface::execGetGripStiffnessAndDamping },
			{ "GetPrimaryGripType", &IVRGripInterface::execGetPrimaryGripType },
			{ "GripBreakDistance", &IVRGripInterface::execGripBreakDistance },
			{ "GripLateUpdateSetting", &IVRGripInterface::execGripLateUpdateSetting },
			{ "GripMovementReplicationType", &IVRGripInterface::execGripMovementReplicationType },
			{ "IsHeld", &IVRGripInterface::execIsHeld },
			{ "OnChildGrip", &IVRGripInterface::execOnChildGrip },
			{ "OnChildGripRelease", &IVRGripInterface::execOnChildGripRelease },
			{ "OnEndSecondaryUsed", &IVRGripInterface::execOnEndSecondaryUsed },
			{ "OnEndUsed", &IVRGripInterface::execOnEndUsed },
			{ "OnGrip", &IVRGripInterface::execOnGrip },
			{ "OnGripRelease", &IVRGripInterface::execOnGripRelease },
			{ "OnInput", &IVRGripInterface::execOnInput },
			{ "OnSecondaryGrip", &IVRGripInterface::execOnSecondaryGrip },
			{ "OnSecondaryGripRelease", &IVRGripInterface::execOnSecondaryGripRelease },
			{ "OnSecondaryUsed", &IVRGripInterface::execOnSecondaryUsed },
			{ "OnUsed", &IVRGripInterface::execOnUsed },
			{ "RequestsSocketing", &IVRGripInterface::execRequestsSocketing },
			{ "SecondaryGripType", &IVRGripInterface::execSecondaryGripType },
			{ "SetHeld", &IVRGripInterface::execSetHeld },
			{ "SimulateOnDrop", &IVRGripInterface::execSimulateOnDrop },
			{ "TeleportBehavior", &IVRGripInterface::execTeleportBehavior },
			{ "TickGrip", &IVRGripInterface::execTickGrip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventAdvancedGripSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPAdvGripSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Get the advanced physics settings for this grip\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Get the advanced physics settings for this grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "AdvancedGripSettings", nullptr, nullptr, sizeof(VRGripInterface_eventAdvancedGripSettings_Parms), Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripInterface_eventAllowsMultipleGrips_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventAllowsMultipleGrips_Parms), &Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Check if an object allows multiple grips at one time\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Check if an object allows multiple grips at one time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "AllowsMultipleGrips", nullptr, nullptr, sizeof(VRGripInterface_eventAllowsMultipleGrips_Parms), Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static void NewProp_bSecondarySlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecondarySlot;
		static void NewProp_bHadSlotInRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadSlotInRange;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotWorldTransform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallingController;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverridePrefix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot_SetBit(void* Obj)
	{
		((VRGripInterface_eventClosestGripSlotInRange_Parms*)Obj)->bSecondarySlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot = { "bSecondarySlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventClosestGripSlotInRange_Parms), &Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange_SetBit(void* Obj)
	{
		((VRGripInterface_eventClosestGripSlotInRange_Parms*)Obj)->bHadSlotInRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange = { "bHadSlotInRange", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventClosestGripSlotInRange_Parms), &Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_SlotWorldTransform = { "SlotWorldTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_CallingController = { "CallingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, CallingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_OverridePrefix = { "OverridePrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, OverridePrefix), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_SlotWorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_CallingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_OverridePrefix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "/**\n\x09 * Called to get the closest grip socket in range\n\x09 * @param WorldLocation - World Location to check near\n\x09 * @param bSecondarySlot - True if this is a check for a secondary slot or not\n\x09 * @param CallingController - Controller checking for the slot (can be used in overrides for per hand checks)\n\x09 * @param OverridePrefix - A different substring to check against in the socket names to find relevant ones\n\x09 */" },
		{ "CPP_Default_CallingController", "None" },
		{ "CPP_Default_OverridePrefix", "None" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Called to get the closest grip socket in range\n@param WorldLocation - World Location to check near\n@param bSecondarySlot - True if this is a check for a secondary slot or not\n@param CallingController - Controller checking for the slot (can be used in overrides for per hand checks)\n@param OverridePrefix - A different substring to check against in the socket names to find relevant ones" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "ClosestGripSlotInRange", nullptr, nullptr, sizeof(VRGripInterface_eventClosestGripSlotInRange_Parms), Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInitiator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripInitiator;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_GripInitiator_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_GripInitiator = { "GripInitiator", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventDenyGripping_Parms, GripInitiator), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_GripInitiator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_GripInitiator_MetaData)) };
	void Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripInterface_eventDenyGripping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventDenyGripping_Parms), &Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_GripInitiator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Set up as deny instead of allow so that default allows for gripping\n" },
		{ "CPP_Default_GripInitiator", "None" },
		{ "DisplayName", "IsDenyingGrips" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Set up as deny instead of allow so that default allows for gripping" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "DenyGripping", nullptr, nullptr, sizeof(VRGripInterface_eventDenyGripping_Parms), Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_DenyGripping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrayReference_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayReference;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference_Inner = { "ArrayReference", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference = { "ArrayReference", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventGetGripScripts_Parms, ArrayReference), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference_MetaData)) };
	void Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripInterface_eventGetGripScripts_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventGetGripScripts_Parms), &Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Get grip scripts\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Get grip scripts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GetGripScripts", nullptr, nullptr, sizeof(VRGripInterface_eventGetGripScripts_Parms), Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_GetGripScripts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripStiffnessOut;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripDampingOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::NewProp_GripStiffnessOut = { "GripStiffnessOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventGetGripStiffnessAndDamping_Parms, GripStiffnessOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::NewProp_GripDampingOut = { "GripDampingOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventGetGripStiffnessAndDamping_Parms, GripDampingOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::NewProp_GripStiffnessOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::NewProp_GripDampingOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// What grip stiffness and damping to use if using a physics constraint\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "What grip stiffness and damping to use if using a physics constraint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GetGripStiffnessAndDamping", nullptr, nullptr, sizeof(VRGripInterface_eventGetGripStiffnessAndDamping_Parms), Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics
	{
		static void NewProp_bIsSlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_bIsSlot_SetBit(void* Obj)
	{
		((VRGripInterface_eventGetPrimaryGripType_Parms*)Obj)->bIsSlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_bIsSlot = { "bIsSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventGetPrimaryGripType_Parms), &Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_bIsSlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventGetPrimaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_bIsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Grip type to use\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Grip type to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GetPrimaryGripType", nullptr, nullptr, sizeof(VRGripInterface_eventGetPrimaryGripType_Parms), Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventGripBreakDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// What distance to break a grip at (only relevent with physics enabled grips\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "What distance to break a grip at (only relevent with physics enabled grips" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GripBreakDistance", nullptr, nullptr, sizeof(VRGripInterface_eventGripBreakDistance_Parms), Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_GripBreakDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventGripLateUpdateSetting_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Define the late update setting\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Define the late update setting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GripLateUpdateSetting", nullptr, nullptr, sizeof(VRGripInterface_eventGripLateUpdateSetting_Parms), Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventGripMovementReplicationType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Define which movement repliation setting to use\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Define which movement repliation setting to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GripMovementReplicationType", nullptr, nullptr, sizeof(VRGripInterface_eventGripMovementReplicationType_Parms), Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoldingControllers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HoldingControllers;
		static void NewProp_bIsHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_HoldingControllers_Inner = { "HoldingControllers", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_HoldingControllers = { "HoldingControllers", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventIsHeld_Parms, HoldingControllers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((VRGripInterface_eventIsHeld_Parms*)Obj)->bIsHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventIsHeld_Parms), &Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_HoldingControllers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_HoldingControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_bIsHeld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Returns if the object is held and if so, which controllers are holding it\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Returns if the object is held and if so, which controllers are holding it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "IsHeld", nullptr, nullptr, sizeof(VRGripInterface_eventIsHeld_Parms), Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_IsHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnChildGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GrippingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnChildGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GripInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GrippingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GripInformation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when child component is gripped\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Event triggered on the interfaced object when child component is gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnChildGrip", nullptr, nullptr, sizeof(VRGripInterface_eventOnChildGrip_Parms), Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnChildGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingController;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnChildGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnChildGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData)) };
	void Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((VRGripInterface_eventOnChildGripRelease_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventOnChildGripRelease_Parms), &Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_ReleasingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_bWasSocketed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when child component is released\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Event triggered on the interfaced object when child component is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnChildGripRelease", nullptr, nullptr, sizeof(VRGripInterface_eventOnChildGripRelease_Parms), Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to stop using an object\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Call to stop using an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnEndSecondaryUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to stop using an object\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Call to stop using an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnEndUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnEndUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GrippingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GripInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GrippingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GripInformation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when gripped\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Event triggered on the interfaced object when gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnGrip", nullptr, nullptr, sizeof(VRGripInterface_eventOnGrip_Parms), Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingController;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_ReleasingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_ReleasingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_GripInformation_MetaData)) };
	void Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((VRGripInterface_eventOnGripRelease_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventOnGripRelease_Parms), &Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_ReleasingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_bWasSocketed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when grip is released\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Event triggered on the interfaced object when grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnGripRelease", nullptr, nullptr, sizeof(VRGripInterface_eventOnGripRelease_Parms), Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnInput_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnInput_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnInput_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::NewProp_KeyEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to send an action event to the object\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Call to send an action event to the object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnInput", nullptr, nullptr, sizeof(VRGripInterface_eventOnInput_Parms), Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripOwningController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripOwningController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryGripComponent;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripOwningController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripOwningController = { "GripOwningController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGrip_Parms, GripOwningController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripOwningController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripOwningController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent = { "SecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGrip_Parms, SecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripOwningController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripInformation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when secondary gripped\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnSecondaryGrip", nullptr, nullptr, sizeof(VRGripInterface_eventOnSecondaryGrip_Parms), Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripOwningController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripOwningController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingSecondaryGripComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingSecondaryGripComponent;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripOwningController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripOwningController = { "GripOwningController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGripRelease_Parms, GripOwningController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripOwningController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripOwningController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent = { "ReleasingSecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGripRelease_Parms, ReleasingSecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripOwningController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripInformation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when secondary grip is released\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnSecondaryGripRelease", nullptr, nullptr, sizeof(VRGripInterface_eventOnSecondaryGripRelease_Parms), Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to use an object\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnSecondaryUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to use an object\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentToSocketTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentToSocketTo;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalSocketName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ParentToSocketTo = { "ParentToSocketTo", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventRequestsSocketing_Parms, ParentToSocketTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_OptionalSocketName = { "OptionalSocketName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventRequestsSocketing_Parms, OptionalSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventRequestsSocketing_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripInterface_eventRequestsSocketing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventRequestsSocketing_Parms), &Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ParentToSocketTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_OptionalSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Returns if the object requests to be socketed to something\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Returns if the object requests to be socketed to something" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "RequestsSocketing", nullptr, nullptr, sizeof(VRGripInterface_eventRequestsSocketing_Parms), Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_RequestsSocketing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventSecondaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Double Grip Type\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Double Grip Type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "SecondaryGripType", nullptr, nullptr, sizeof(VRGripInterface_eventSecondaryGripType_Parms), Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_SecondaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldingController;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripID;
		static void NewProp_bIsHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_HoldingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_HoldingController = { "HoldingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventSetHeld_Parms, HoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_HoldingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_HoldingController_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventSetHeld_Parms, GripID), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((VRGripInterface_eventSetHeld_Parms*)Obj)->bIsHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventSetHeld_Parms), &Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_HoldingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_GripID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_bIsHeld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "/*BlueprintCallable,*/" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "BlueprintCallable," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "SetHeld", nullptr, nullptr, sizeof(VRGripInterface_eventSetHeld_Parms), Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_SetHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripInterface_eventSimulateOnDrop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripInterface_eventSimulateOnDrop_Parms), &Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Should this object simulate on drop\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Should this object simulate on drop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "SimulateOnDrop", nullptr, nullptr, sizeof(VRGripInterface_eventSimulateOnDrop_Parms), Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventTeleportBehavior_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// How an interfaced object behaves when teleporting\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "How an interfaced object behaves when teleporting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "TeleportBehavior", nullptr, nullptr, sizeof(VRGripInterface_eventTeleportBehavior_Parms), Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_TeleportBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventTickGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GrippingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventTickGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GripInformation_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripInterface_eventTickGrip_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GrippingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic\n" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
		{ "ToolTip", "Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "TickGrip", nullptr, nullptr, sizeof(VRGripInterface_eventTickGrip_Parms), Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripInterface_TickGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRGripInterface_NoRegister()
	{
		return UVRGripInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVRGripInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRGripInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRGripInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings, "AdvancedGripSettings" }, // 439166445
		{ &Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips, "AllowsMultipleGrips" }, // 1898361472
		{ &Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange, "ClosestGripSlotInRange" }, // 1396977737
		{ &Z_Construct_UFunction_UVRGripInterface_DenyGripping, "DenyGripping" }, // 4042691746
		{ &Z_Construct_UFunction_UVRGripInterface_GetGripScripts, "GetGripScripts" }, // 3443941015
		{ &Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping, "GetGripStiffnessAndDamping" }, // 4025055420
		{ &Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType, "GetPrimaryGripType" }, // 2869929756
		{ &Z_Construct_UFunction_UVRGripInterface_GripBreakDistance, "GripBreakDistance" }, // 4256956773
		{ &Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting, "GripLateUpdateSetting" }, // 2460612320
		{ &Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType, "GripMovementReplicationType" }, // 2156491246
		{ &Z_Construct_UFunction_UVRGripInterface_IsHeld, "IsHeld" }, // 2631038011
		{ &Z_Construct_UFunction_UVRGripInterface_OnChildGrip, "OnChildGrip" }, // 2389536196
		{ &Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease, "OnChildGripRelease" }, // 3485757704
		{ &Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed, "OnEndSecondaryUsed" }, // 3109285902
		{ &Z_Construct_UFunction_UVRGripInterface_OnEndUsed, "OnEndUsed" }, // 2749622985
		{ &Z_Construct_UFunction_UVRGripInterface_OnGrip, "OnGrip" }, // 2591795043
		{ &Z_Construct_UFunction_UVRGripInterface_OnGripRelease, "OnGripRelease" }, // 3405791167
		{ &Z_Construct_UFunction_UVRGripInterface_OnInput, "OnInput" }, // 2552481073
		{ &Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip, "OnSecondaryGrip" }, // 1596922534
		{ &Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease, "OnSecondaryGripRelease" }, // 820922718
		{ &Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed, "OnSecondaryUsed" }, // 4185692484
		{ &Z_Construct_UFunction_UVRGripInterface_OnUsed, "OnUsed" }, // 2022615447
		{ &Z_Construct_UFunction_UVRGripInterface_RequestsSocketing, "RequestsSocketing" }, // 3258306442
		{ &Z_Construct_UFunction_UVRGripInterface_SecondaryGripType, "SecondaryGripType" }, // 384249063
		{ &Z_Construct_UFunction_UVRGripInterface_SetHeld, "SetHeld" }, // 2189635917
		{ &Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop, "SimulateOnDrop" }, // 578460911
		{ &Z_Construct_UFunction_UVRGripInterface_TeleportBehavior, "TeleportBehavior" }, // 3802770198
		{ &Z_Construct_UFunction_UVRGripInterface_TickGrip, "TickGrip" }, // 3374003590
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRGripInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVRGripInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRGripInterface_Statics::ClassParams = {
		&UVRGripInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVRGripInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRGripInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRGripInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRGripInterface, 1964064079);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRGripInterface>()
	{
		return UVRGripInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGripInterface(Z_Construct_UClass_UVRGripInterface, &UVRGripInterface::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGripInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGripInterface);
	static FName NAME_UVRGripInterface_AdvancedGripSettings = FName(TEXT("AdvancedGripSettings"));
	FBPAdvGripSettings IVRGripInterface::Execute_AdvancedGripSettings(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventAdvancedGripSettings_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_AdvancedGripSettings);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->AdvancedGripSettings_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_AllowsMultipleGrips = FName(TEXT("AllowsMultipleGrips"));
	bool IVRGripInterface::Execute_AllowsMultipleGrips(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventAllowsMultipleGrips_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_AllowsMultipleGrips);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->AllowsMultipleGrips_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_ClosestGripSlotInRange = FName(TEXT("ClosestGripSlotInRange"));
	void IVRGripInterface::Execute_ClosestGripSlotInRange(UObject* O, FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventClosestGripSlotInRange_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_ClosestGripSlotInRange);
		if (Func)
		{
			Parms.WorldLocation=WorldLocation;
			Parms.bSecondarySlot=bSecondarySlot;
			Parms.bHadSlotInRange=bHadSlotInRange;
			Parms.SlotWorldTransform=SlotWorldTransform;
			Parms.SlotName=SlotName;
			Parms.CallingController=CallingController;
			Parms.OverridePrefix=OverridePrefix;
			O->ProcessEvent(Func, &Parms);
			bHadSlotInRange=Parms.bHadSlotInRange;
			SlotWorldTransform=Parms.SlotWorldTransform;
			SlotName=Parms.SlotName;
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->ClosestGripSlotInRange_Implementation(WorldLocation,bSecondarySlot,bHadSlotInRange,SlotWorldTransform,SlotName,CallingController,OverridePrefix);
		}
	}
	static FName NAME_UVRGripInterface_DenyGripping = FName(TEXT("DenyGripping"));
	bool IVRGripInterface::Execute_DenyGripping(UObject* O, UGripMotionControllerComponent* GripInitiator)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventDenyGripping_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_DenyGripping);
		if (Func)
		{
			Parms.GripInitiator=GripInitiator;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->DenyGripping_Implementation(GripInitiator);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_GetGripScripts = FName(TEXT("GetGripScripts"));
	bool IVRGripInterface::Execute_GetGripScripts(UObject* O, TArray<UVRGripScriptBase*>& ArrayReference)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGetGripScripts_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GetGripScripts);
		if (Func)
		{
			Parms.ArrayReference=ArrayReference;
			O->ProcessEvent(Func, &Parms);
			ArrayReference=Parms.ArrayReference;
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetGripScripts_Implementation(ArrayReference);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_GetGripStiffnessAndDamping = FName(TEXT("GetGripStiffnessAndDamping"));
	void IVRGripInterface::Execute_GetGripStiffnessAndDamping(UObject* O, float& GripStiffnessOut, float& GripDampingOut)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGetGripStiffnessAndDamping_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GetGripStiffnessAndDamping);
		if (Func)
		{
			Parms.GripStiffnessOut=GripStiffnessOut;
			Parms.GripDampingOut=GripDampingOut;
			O->ProcessEvent(Func, &Parms);
			GripStiffnessOut=Parms.GripStiffnessOut;
			GripDampingOut=Parms.GripDampingOut;
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->GetGripStiffnessAndDamping_Implementation(GripStiffnessOut,GripDampingOut);
		}
	}
	static FName NAME_UVRGripInterface_GetPrimaryGripType = FName(TEXT("GetPrimaryGripType"));
	EGripCollisionType IVRGripInterface::Execute_GetPrimaryGripType(UObject* O, bool bIsSlot)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGetPrimaryGripType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GetPrimaryGripType);
		if (Func)
		{
			Parms.bIsSlot=bIsSlot;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetPrimaryGripType_Implementation(bIsSlot);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_GripBreakDistance = FName(TEXT("GripBreakDistance"));
	float IVRGripInterface::Execute_GripBreakDistance(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGripBreakDistance_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GripBreakDistance);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GripBreakDistance_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_GripLateUpdateSetting = FName(TEXT("GripLateUpdateSetting"));
	EGripLateUpdateSettings IVRGripInterface::Execute_GripLateUpdateSetting(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGripLateUpdateSetting_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GripLateUpdateSetting);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GripLateUpdateSetting_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_GripMovementReplicationType = FName(TEXT("GripMovementReplicationType"));
	EGripMovementReplicationSettings IVRGripInterface::Execute_GripMovementReplicationType(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGripMovementReplicationType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GripMovementReplicationType);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GripMovementReplicationType_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_IsHeld = FName(TEXT("IsHeld"));
	void IVRGripInterface::Execute_IsHeld(UObject* O, TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventIsHeld_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_IsHeld);
		if (Func)
		{
			Parms.HoldingControllers=HoldingControllers;
			Parms.bIsHeld=bIsHeld;
			O->ProcessEvent(Func, &Parms);
			HoldingControllers=Parms.HoldingControllers;
			bIsHeld=Parms.bIsHeld;
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->IsHeld_Implementation(HoldingControllers,bIsHeld);
		}
	}
	static FName NAME_UVRGripInterface_OnChildGrip = FName(TEXT("OnChildGrip"));
	void IVRGripInterface::Execute_OnChildGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnChildGrip_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnChildGrip);
		if (Func)
		{
			Parms.GrippingController=GrippingController;
			Parms.GripInformation=GripInformation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnChildGrip_Implementation(GrippingController,GripInformation);
		}
	}
	static FName NAME_UVRGripInterface_OnChildGripRelease = FName(TEXT("OnChildGripRelease"));
	void IVRGripInterface::Execute_OnChildGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnChildGripRelease_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnChildGripRelease);
		if (Func)
		{
			Parms.ReleasingController=ReleasingController;
			Parms.GripInformation=GripInformation;
			Parms.bWasSocketed=bWasSocketed;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnChildGripRelease_Implementation(ReleasingController,GripInformation,bWasSocketed);
		}
	}
	static FName NAME_UVRGripInterface_OnEndSecondaryUsed = FName(TEXT("OnEndSecondaryUsed"));
	void IVRGripInterface::Execute_OnEndSecondaryUsed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnEndSecondaryUsed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnEndSecondaryUsed_Implementation();
		}
	}
	static FName NAME_UVRGripInterface_OnEndUsed = FName(TEXT("OnEndUsed"));
	void IVRGripInterface::Execute_OnEndUsed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnEndUsed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnEndUsed_Implementation();
		}
	}
	static FName NAME_UVRGripInterface_OnGrip = FName(TEXT("OnGrip"));
	void IVRGripInterface::Execute_OnGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnGrip_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnGrip);
		if (Func)
		{
			Parms.GrippingController=GrippingController;
			Parms.GripInformation=GripInformation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnGrip_Implementation(GrippingController,GripInformation);
		}
	}
	static FName NAME_UVRGripInterface_OnGripRelease = FName(TEXT("OnGripRelease"));
	void IVRGripInterface::Execute_OnGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnGripRelease_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnGripRelease);
		if (Func)
		{
			Parms.ReleasingController=ReleasingController;
			Parms.GripInformation=GripInformation;
			Parms.bWasSocketed=bWasSocketed;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnGripRelease_Implementation(ReleasingController,GripInformation,bWasSocketed);
		}
	}
	static FName NAME_UVRGripInterface_OnInput = FName(TEXT("OnInput"));
	void IVRGripInterface::Execute_OnInput(UObject* O, FKey Key, EInputEvent KeyEvent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnInput_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnInput);
		if (Func)
		{
			Parms.Key=Key;
			Parms.KeyEvent=KeyEvent;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnInput_Implementation(Key,KeyEvent);
		}
	}
	static FName NAME_UVRGripInterface_OnSecondaryGrip = FName(TEXT("OnSecondaryGrip"));
	void IVRGripInterface::Execute_OnSecondaryGrip(UObject* O, UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnSecondaryGrip_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnSecondaryGrip);
		if (Func)
		{
			Parms.GripOwningController=GripOwningController;
			Parms.SecondaryGripComponent=SecondaryGripComponent;
			Parms.GripInformation=GripInformation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnSecondaryGrip_Implementation(GripOwningController,SecondaryGripComponent,GripInformation);
		}
	}
	static FName NAME_UVRGripInterface_OnSecondaryGripRelease = FName(TEXT("OnSecondaryGripRelease"));
	void IVRGripInterface::Execute_OnSecondaryGripRelease(UObject* O, UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnSecondaryGripRelease_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnSecondaryGripRelease);
		if (Func)
		{
			Parms.GripOwningController=GripOwningController;
			Parms.ReleasingSecondaryGripComponent=ReleasingSecondaryGripComponent;
			Parms.GripInformation=GripInformation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnSecondaryGripRelease_Implementation(GripOwningController,ReleasingSecondaryGripComponent,GripInformation);
		}
	}
	static FName NAME_UVRGripInterface_OnSecondaryUsed = FName(TEXT("OnSecondaryUsed"));
	void IVRGripInterface::Execute_OnSecondaryUsed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnSecondaryUsed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnSecondaryUsed_Implementation();
		}
	}
	static FName NAME_UVRGripInterface_OnUsed = FName(TEXT("OnUsed"));
	void IVRGripInterface::Execute_OnUsed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnUsed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnUsed_Implementation();
		}
	}
	static FName NAME_UVRGripInterface_RequestsSocketing = FName(TEXT("RequestsSocketing"));
	bool IVRGripInterface::Execute_RequestsSocketing(UObject* O, USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventRequestsSocketing_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_RequestsSocketing);
		if (Func)
		{
			Parms.ParentToSocketTo=ParentToSocketTo;
			Parms.OptionalSocketName=OptionalSocketName;
			Parms.RelativeTransform=RelativeTransform;
			O->ProcessEvent(Func, &Parms);
			ParentToSocketTo=Parms.ParentToSocketTo;
			OptionalSocketName=Parms.OptionalSocketName;
			RelativeTransform=Parms.RelativeTransform;
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->RequestsSocketing_Implementation(ParentToSocketTo,OptionalSocketName,RelativeTransform);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_SecondaryGripType = FName(TEXT("SecondaryGripType"));
	ESecondaryGripType IVRGripInterface::Execute_SecondaryGripType(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventSecondaryGripType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_SecondaryGripType);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->SecondaryGripType_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_SetHeld = FName(TEXT("SetHeld"));
	void IVRGripInterface::Execute_SetHeld(UObject* O, UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventSetHeld_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_SetHeld);
		if (Func)
		{
			Parms.HoldingController=HoldingController;
			Parms.GripID=GripID;
			Parms.bIsHeld=bIsHeld;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->SetHeld_Implementation(HoldingController,GripID,bIsHeld);
		}
	}
	static FName NAME_UVRGripInterface_SimulateOnDrop = FName(TEXT("SimulateOnDrop"));
	bool IVRGripInterface::Execute_SimulateOnDrop(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventSimulateOnDrop_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_SimulateOnDrop);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->SimulateOnDrop_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_TeleportBehavior = FName(TEXT("TeleportBehavior"));
	EGripInterfaceTeleportBehavior IVRGripInterface::Execute_TeleportBehavior(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventTeleportBehavior_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_TeleportBehavior);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->TeleportBehavior_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_TickGrip = FName(TEXT("TickGrip"));
	void IVRGripInterface::Execute_TickGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventTickGrip_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_TickGrip);
		if (Func)
		{
			Parms.GrippingController=GrippingController;
			Parms.GripInformation=GripInformation;
			Parms.DeltaTime=DeltaTime;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->TickGrip_Implementation(GrippingController,GripInformation,DeltaTime);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
