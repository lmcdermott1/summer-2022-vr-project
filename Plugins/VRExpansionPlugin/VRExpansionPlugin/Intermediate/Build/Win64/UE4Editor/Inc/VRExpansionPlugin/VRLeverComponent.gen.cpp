// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Interactibles/VRLeverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRLeverComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRLeverComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRLeverComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVRLeverFinishedLerpingSignature_Parms
		{
			float FinalAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FinalAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::NewProp_FinalAngle = { "FinalAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRLeverFinishedLerpingSignature_Parms, FinalAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::NewProp_FinalAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRLeverFinishedLerpingSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_VRExpansionPlugin_eventVRLeverFinishedLerpingSignature_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms
		{
			bool LeverStatus;
			EVRInteractibleLeverEventType LeverStatusType;
			float LeverAngleAtTime;
			float FullLeverAngleAtTime;
		};
		static void NewProp_LeverStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LeverStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeverStatusType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LeverStatusType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeverAngleAtTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullLeverAngleAtTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverStatus_SetBit(void* Obj)
	{
		((_Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms*)Obj)->LeverStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverStatus = { "LeverStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms), &Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverStatus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverStatusType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverStatusType = { "LeverStatusType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms, LeverStatusType), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverAngleAtTime = { "LeverAngleAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms, LeverAngleAtTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_FullLeverAngleAtTime = { "FullLeverAngleAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms, FullLeverAngleAtTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverStatusType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverStatusType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverAngleAtTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_FullLeverAngleAtTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for notification when the lever state changes. */" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Delegate for notification when the lever state changes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRLeverStateChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EVRInteractibleLeverReturnType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRInteractibleLeverReturnType"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleLeverReturnType>()
	{
		return EVRInteractibleLeverReturnType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRInteractibleLeverReturnType(EVRInteractibleLeverReturnType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRInteractibleLeverReturnType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType_Hash() { return 3800712719U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRInteractibleLeverReturnType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRInteractibleLeverReturnType::Stay", (int64)EVRInteractibleLeverReturnType::Stay },
				{ "EVRInteractibleLeverReturnType::ReturnToZero", (int64)EVRInteractibleLeverReturnType::ReturnToZero },
				{ "EVRInteractibleLeverReturnType::LerpToMax", (int64)EVRInteractibleLeverReturnType::LerpToMax },
				{ "EVRInteractibleLeverReturnType::LerpToMaxIfOverThreshold", (int64)EVRInteractibleLeverReturnType::LerpToMaxIfOverThreshold },
				{ "EVRInteractibleLeverReturnType::RetainMomentum", (int64)EVRInteractibleLeverReturnType::RetainMomentum },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "LerpToMax.Comment", "/** Lerps to closest max (only works with X/Y/Z axis levers) */" },
				{ "LerpToMax.Name", "EVRInteractibleLeverReturnType::LerpToMax" },
				{ "LerpToMax.ToolTip", "Lerps to closest max (only works with X/Y/Z axis levers)" },
				{ "LerpToMaxIfOverThreshold.Comment", "/** Lerps to closest max if over the toggle threshold (only works with X/Y/Z axis levers) */" },
				{ "LerpToMaxIfOverThreshold.Name", "EVRInteractibleLeverReturnType::LerpToMaxIfOverThreshold" },
				{ "LerpToMaxIfOverThreshold.ToolTip", "Lerps to closest max if over the toggle threshold (only works with X/Y/Z axis levers)" },
				{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
				{ "RetainMomentum.Comment", "/** Retains momentum on release (only works with X/Y/Z axis levers) */" },
				{ "RetainMomentum.Name", "EVRInteractibleLeverReturnType::RetainMomentum" },
				{ "RetainMomentum.ToolTip", "Retains momentum on release (only works with X/Y/Z axis levers)" },
				{ "ReturnToZero.Comment", "/** Returns to zero on drop (lerps) */" },
				{ "ReturnToZero.Name", "EVRInteractibleLeverReturnType::ReturnToZero" },
				{ "ReturnToZero.ToolTip", "Returns to zero on drop (lerps)" },
				{ "Stay.Comment", "/** Stays in place on drop */" },
				{ "Stay.Name", "EVRInteractibleLeverReturnType::Stay" },
				{ "Stay.ToolTip", "Stays in place on drop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRInteractibleLeverReturnType",
				"EVRInteractibleLeverReturnType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRInteractibleLeverEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRInteractibleLeverEventType"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleLeverEventType>()
	{
		return EVRInteractibleLeverEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRInteractibleLeverEventType(EVRInteractibleLeverEventType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRInteractibleLeverEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType_Hash() { return 747392759U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRInteractibleLeverEventType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRInteractibleLeverEventType::LeverPositive", (int64)EVRInteractibleLeverEventType::LeverPositive },
				{ "EVRInteractibleLeverEventType::LeverNegative", (int64)EVRInteractibleLeverEventType::LeverNegative },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "LeverNegative.Name", "EVRInteractibleLeverEventType::LeverNegative" },
				{ "LeverPositive.Name", "EVRInteractibleLeverEventType::LeverPositive" },
				{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRInteractibleLeverEventType",
				"EVRInteractibleLeverEventType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRInteractibleLeverAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRInteractibleLeverAxis"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleLeverAxis>()
	{
		return EVRInteractibleLeverAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRInteractibleLeverAxis(EVRInteractibleLeverAxis_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRInteractibleLeverAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis_Hash() { return 2997715125U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRInteractibleLeverAxis"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRInteractibleLeverAxis::Axis_X", (int64)EVRInteractibleLeverAxis::Axis_X },
				{ "EVRInteractibleLeverAxis::Axis_Y", (int64)EVRInteractibleLeverAxis::Axis_Y },
				{ "EVRInteractibleLeverAxis::Axis_Z", (int64)EVRInteractibleLeverAxis::Axis_Z },
				{ "EVRInteractibleLeverAxis::Axis_XY", (int64)EVRInteractibleLeverAxis::Axis_XY },
				{ "EVRInteractibleLeverAxis::FlightStick_XY", (int64)EVRInteractibleLeverAxis::FlightStick_XY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Axis_X.Comment", "/* Rotates only towards the X Axis */" },
				{ "Axis_X.Name", "EVRInteractibleLeverAxis::Axis_X" },
				{ "Axis_X.ToolTip", "Rotates only towards the X Axis" },
				{ "Axis_XY.Comment", "/* Rotates freely on the XY Axis' */" },
				{ "Axis_XY.Name", "EVRInteractibleLeverAxis::Axis_XY" },
				{ "Axis_XY.ToolTip", "Rotates freely on the XY Axis'" },
				{ "Axis_Y.Comment", "/* Rotates only towards the Y Axis */" },
				{ "Axis_Y.Name", "EVRInteractibleLeverAxis::Axis_Y" },
				{ "Axis_Y.ToolTip", "Rotates only towards the Y Axis" },
				{ "Axis_Z.Comment", "/* Rotates only towards the Z Axis */" },
				{ "Axis_Z.Name", "EVRInteractibleLeverAxis::Axis_Z" },
				{ "Axis_Z.ToolTip", "Rotates only towards the Z Axis" },
				{ "BlueprintType", "true" },
				{ "FlightStick_XY.Comment", "/* Acts like a flight stick, with AllCurrentLeverAngles being the positive / negative of the current full angle (yaw based on initial grip delta) */" },
				{ "FlightStick_XY.Name", "EVRInteractibleLeverAxis::FlightStick_XY" },
				{ "FlightStick_XY.ToolTip", "Acts like a flight stick, with AllCurrentLeverAngles being the positive / negative of the current full angle (yaw based on initial grip delta)" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRInteractibleLeverAxis",
				"EVRInteractibleLeverAxis",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UVRLeverComponent::execReCalculateCurrentAngle)
	{
		P_GET_UBOOL(Z_Param_bAllowThrowingEvents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ReCalculateCurrentAngle(Z_Param_bAllowThrowingEvents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRLeverComponent::execSetLeverAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAngle);
		P_GET_STRUCT(FVector,Z_Param_DualAxisForwardVector);
		P_GET_UBOOL(Z_Param_bAllowThrowingEvents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeverAngle(Z_Param_NewAngle,Z_Param_DualAxisForwardVector,Z_Param_bAllowThrowingEvents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRLeverComponent::execResetInitialLeverLocation)
	{
		P_GET_UBOOL(Z_Param_bAllowThrowingEvents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetInitialLeverLocation(Z_Param_bAllowThrowingEvents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRLeverComponent::execOnRep_InitialRelativeTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_InitialRelativeTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRLeverComponent::execSetGripPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewGripPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripPriority(Z_Param_NewGripPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRLeverComponent::execSetIsLocked)
	{
		P_GET_UBOOL(Z_Param_bNewLockedState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsLocked(Z_Param_bNewLockedState);
		P_NATIVE_END;
	}
	static FName NAME_UVRLeverComponent_ReceiveLeverFinishedLerping = FName(TEXT("ReceiveLeverFinishedLerping"));
	void UVRLeverComponent::ReceiveLeverFinishedLerping(float LeverFinalAngle)
	{
		VRLeverComponent_eventReceiveLeverFinishedLerping_Parms Parms;
		Parms.LeverFinalAngle=LeverFinalAngle;
		ProcessEvent(FindFunctionChecked(NAME_UVRLeverComponent_ReceiveLeverFinishedLerping),&Parms);
	}
	static FName NAME_UVRLeverComponent_ReceiveLeverStateChanged = FName(TEXT("ReceiveLeverStateChanged"));
	void UVRLeverComponent::ReceiveLeverStateChanged(bool LeverStatus, EVRInteractibleLeverEventType LeverStatusType, float LeverAngleAtTime, float FullLeverAngleAttime)
	{
		VRLeverComponent_eventReceiveLeverStateChanged_Parms Parms;
		Parms.LeverStatus=LeverStatus ? true : false;
		Parms.LeverStatusType=LeverStatusType;
		Parms.LeverAngleAtTime=LeverAngleAtTime;
		Parms.FullLeverAngleAttime=FullLeverAngleAttime;
		ProcessEvent(FindFunctionChecked(NAME_UVRLeverComponent_ReceiveLeverStateChanged),&Parms);
	}
	void UVRLeverComponent::StaticRegisterNativesUVRLeverComponent()
	{
		UClass* Class = UVRLeverComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_InitialRelativeTransform", &UVRLeverComponent::execOnRep_InitialRelativeTransform },
			{ "ReCalculateCurrentAngle", &UVRLeverComponent::execReCalculateCurrentAngle },
			{ "ResetInitialLeverLocation", &UVRLeverComponent::execResetInitialLeverLocation },
			{ "SetGripPriority", &UVRLeverComponent::execSetGripPriority },
			{ "SetIsLocked", &UVRLeverComponent::execSetIsLocked },
			{ "SetLeverAngle", &UVRLeverComponent::execSetLeverAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRLeverComponent_OnRep_InitialRelativeTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRLeverComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLeverComponent_OnRep_InitialRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLeverComponent, nullptr, "OnRep_InitialRelativeTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRLeverComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRLeverComponent_OnRep_InitialRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRLeverComponent_OnRep_InitialRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics
	{
		struct VRLeverComponent_eventReCalculateCurrentAngle_Parms
		{
			bool bAllowThrowingEvents;
			float ReturnValue;
		};
		static void NewProp_bAllowThrowingEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowThrowingEvents;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::NewProp_bAllowThrowingEvents_SetBit(void* Obj)
	{
		((VRLeverComponent_eventReCalculateCurrentAngle_Parms*)Obj)->bAllowThrowingEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::NewProp_bAllowThrowingEvents = { "bAllowThrowingEvents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRLeverComponent_eventReCalculateCurrentAngle_Parms), &Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::NewProp_bAllowThrowingEvents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRLeverComponent_eventReCalculateCurrentAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::NewProp_bAllowThrowingEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "// ReCalculates the current angle, sets it on the back end, and returns it\n// If allow throwing events is true then it will trigger the callbacks for state changes as well\n" },
		{ "CPP_Default_bAllowThrowingEvents", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "ReCalculates the current angle, sets it on the back end, and returns it\nIf allow throwing events is true then it will trigger the callbacks for state changes as well" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLeverComponent, nullptr, "ReCalculateCurrentAngle", nullptr, nullptr, sizeof(VRLeverComponent_eventReCalculateCurrentAngle_Parms), Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeverFinalAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::NewProp_LeverFinalAngle = { "LeverFinalAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRLeverComponent_eventReceiveLeverFinishedLerping_Parms, LeverFinalAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::NewProp_LeverFinalAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Lever Finished Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLeverComponent, nullptr, "ReceiveLeverFinishedLerping", nullptr, nullptr, sizeof(VRLeverComponent_eventReceiveLeverFinishedLerping_Parms), Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics
	{
		static void NewProp_LeverStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LeverStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeverStatusType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LeverStatusType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeverAngleAtTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullLeverAngleAttime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverStatus_SetBit(void* Obj)
	{
		((VRLeverComponent_eventReceiveLeverStateChanged_Parms*)Obj)->LeverStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverStatus = { "LeverStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRLeverComponent_eventReceiveLeverStateChanged_Parms), &Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverStatus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverStatusType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverStatusType = { "LeverStatusType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRLeverComponent_eventReceiveLeverStateChanged_Parms, LeverStatusType), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverAngleAtTime = { "LeverAngleAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRLeverComponent_eventReceiveLeverStateChanged_Parms, LeverAngleAtTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_FullLeverAngleAttime = { "FullLeverAngleAttime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRLeverComponent_eventReceiveLeverStateChanged_Parms, FullLeverAngleAttime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverStatusType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverStatusType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverAngleAtTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_FullLeverAngleAttime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Lever State Changed" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLeverComponent, nullptr, "ReceiveLeverStateChanged", nullptr, nullptr, sizeof(VRLeverComponent_eventReceiveLeverStateChanged_Parms), Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics
	{
		struct VRLeverComponent_eventResetInitialLeverLocation_Parms
		{
			bool bAllowThrowingEvents;
		};
		static void NewProp_bAllowThrowingEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowThrowingEvents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::NewProp_bAllowThrowingEvents_SetBit(void* Obj)
	{
		((VRLeverComponent_eventResetInitialLeverLocation_Parms*)Obj)->bAllowThrowingEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::NewProp_bAllowThrowingEvents = { "bAllowThrowingEvents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRLeverComponent_eventResetInitialLeverLocation_Parms), &Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::NewProp_bAllowThrowingEvents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::NewProp_bAllowThrowingEvents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "// Should be called after the lever is moved post begin play\n" },
		{ "CPP_Default_bAllowThrowingEvents", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Should be called after the lever is moved post begin play" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLeverComponent, nullptr, "ResetInitialLeverLocation", nullptr, nullptr, sizeof(VRLeverComponent_eventResetInitialLeverLocation_Parms), Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics
	{
		struct VRLeverComponent_eventSetGripPriority_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::NewProp_NewGripPriority = { "NewGripPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRLeverComponent_eventSetGripPriority_Parms, NewGripPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::NewProp_NewGripPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripSettings" },
		{ "Comment", "// Sets the grip priority\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Sets the grip priority" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLeverComponent, nullptr, "SetGripPriority", nullptr, nullptr, sizeof(VRLeverComponent_eventSetGripPriority_Parms), Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRLeverComponent_SetGripPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics
	{
		struct VRLeverComponent_eventSetIsLocked_Parms
		{
			bool bNewLockedState;
		};
		static void NewProp_bNewLockedState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewLockedState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::NewProp_bNewLockedState_SetBit(void* Obj)
	{
		((VRLeverComponent_eventSetIsLocked_Parms*)Obj)->bNewLockedState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::NewProp_bNewLockedState = { "bNewLockedState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRLeverComponent_eventSetIsLocked_Parms), &Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::NewProp_bNewLockedState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::NewProp_bNewLockedState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripSettings" },
		{ "Comment", "// Sets if the lever is locked or not\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Sets if the lever is locked or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLeverComponent, nullptr, "SetIsLocked", nullptr, nullptr, sizeof(VRLeverComponent_eventSetIsLocked_Parms), Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRLeverComponent_SetIsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics
	{
		struct VRLeverComponent_eventSetLeverAngle_Parms
		{
			float NewAngle;
			FVector DualAxisForwardVector;
			bool bAllowThrowingEvents;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewAngle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DualAxisForwardVector;
		static void NewProp_bAllowThrowingEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowThrowingEvents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::NewProp_NewAngle = { "NewAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRLeverComponent_eventSetLeverAngle_Parms, NewAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::NewProp_DualAxisForwardVector = { "DualAxisForwardVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRLeverComponent_eventSetLeverAngle_Parms, DualAxisForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::NewProp_bAllowThrowingEvents_SetBit(void* Obj)
	{
		((VRLeverComponent_eventSetLeverAngle_Parms*)Obj)->bAllowThrowingEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::NewProp_bAllowThrowingEvents = { "bAllowThrowingEvents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRLeverComponent_eventSetLeverAngle_Parms), &Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::NewProp_bAllowThrowingEvents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::NewProp_NewAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::NewProp_DualAxisForwardVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::NewProp_bAllowThrowingEvents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "/**\n\x09 *    Sets the angle of the lever forcefully\n\x09 *    @param NewAngle\x09\x09\x09\x09The new angle to use, for single axis levers the sign of the angle will be used\n\x09 *    @param DualAxisForwardVector\x09Only used with dual axis levers, you need to define the forward axis for the angle to apply too\n\x09*/" },
		{ "CPP_Default_bAllowThrowingEvents", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Sets the angle of the lever forcefully\n@param NewAngle                           The new angle to use, for single axis levers the sign of the angle will be used\n@param DualAxisForwardVector      Only used with dual axis levers, you need to define the forward axis for the angle to apply too" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLeverComponent, nullptr, "SetLeverAngle", nullptr, nullptr, sizeof(VRLeverComponent_eventSetLeverAngle_Parms), Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRLeverComponent_NoRegister()
	{
		return UVRLeverComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRLeverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLeverStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeverStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLeverFinishedLerping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeverFinishedLerping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLeverAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentLeverAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllCurrentLeverAngles_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllCurrentLeverAngles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLeverForwardVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentLeverForwardVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPhysicsLever_MetaData[];
#endif
		static void NewProp_bIsPhysicsLever_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPhysicsLever;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUngripAtTargetRotation_MetaData[];
#endif
		static void NewProp_bUngripAtTargetRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUngripAtTargetRotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeverRotationAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeverRotationAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LeverRotationAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeverTogglePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeverTogglePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeverLimitPositive_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeverLimitPositive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeverLimitNegative_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeverLimitNegative;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[];
#endif
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDropWhenLocked_MetaData[];
#endif
		static void NewProp_bAutoDropWhenLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDropWhenLocked;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeverReturnTypeWhenReleased_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeverReturnTypeWhenReleased_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LeverReturnTypeWhenReleased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSendLeverEventsDuringLerp_MetaData[];
#endif
		static void NewProp_bSendLeverEventsDuringLerp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSendLeverEventsDuringLerp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeverReturnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeverReturnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlendAxisValuesByAngleThreshold_MetaData[];
#endif
		static void NewProp_bBlendAxisValuesByAngleThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlendAxisValuesByAngleThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FramesToAverage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FramesToAverage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeverMomentumFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeverMomentumFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeverRestitution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeverRestitution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLeverMomentum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLeverMomentum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLerping_MetaData[];
#endif
		static void NewProp_bIsLerping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLerping;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BreakDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDenyGripping_MetaData[];
#endif
		static void NewProp_bDenyGripping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRLeverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRLeverComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRLeverComponent_OnRep_InitialRelativeTransform, "OnRep_InitialRelativeTransform" }, // 3678054838
		{ &Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle, "ReCalculateCurrentAngle" }, // 943156884
		{ &Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping, "ReceiveLeverFinishedLerping" }, // 1180843747
		{ &Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged, "ReceiveLeverStateChanged" }, // 4013433701
		{ &Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation, "ResetInitialLeverLocation" }, // 1232995195
		{ &Z_Construct_UFunction_UVRLeverComponent_SetGripPriority, "SetGripPriority" }, // 2335991962
		{ &Z_Construct_UFunction_UVRLeverComponent_SetIsLocked, "SetIsLocked" }, // 2342121182
		{ &Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle, "SetLeverAngle" }, // 1841686306
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n* A Lever component, can act like a lever, door, wheel, joystick.\n* If set to replicates it will replicate its values to the clients.\n*/" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Interactibles/VRLeverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A Lever component, can act like a lever, door, wheel, joystick.\nIf set to replicates it will replicate its values to the clients." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnLeverStateChanged_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "// Call to use an object\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnLeverStateChanged = { "OnLeverStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, OnLeverStateChanged), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnLeverStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnLeverStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnLeverFinishedLerping_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnLeverFinishedLerping = { "OnLeverFinishedLerping", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, OnLeverFinishedLerping), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnLeverFinishedLerping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnLeverFinishedLerping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_CurrentLeverAngle_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "// Primary axis angle only\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Primary axis angle only" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_CurrentLeverAngle = { "CurrentLeverAngle", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, CurrentLeverAngle), METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_CurrentLeverAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_CurrentLeverAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_AllCurrentLeverAngles_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "// Writes out all current angles to this rotator, useful mostly for XY and Flight stick modes\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Writes out all current angles to this rotator, useful mostly for XY and Flight stick modes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_AllCurrentLeverAngles = { "AllCurrentLeverAngles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, AllCurrentLeverAngles), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_AllCurrentLeverAngles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_AllCurrentLeverAngles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_CurrentLeverForwardVector_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "// Bearing Direction, for X/Y is their signed direction, for XY mode it is an actual 2D directional vector\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Bearing Direction, for X/Y is their signed direction, for XY mode it is an actual 2D directional vector" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_CurrentLeverForwardVector = { "CurrentLeverForwardVector", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, CurrentLeverForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_CurrentLeverForwardVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_CurrentLeverForwardVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsPhysicsLever_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsPhysicsLever_SetBit(void* Obj)
	{
		((UVRLeverComponent*)Obj)->bIsPhysicsLever = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsPhysicsLever = { "bIsPhysicsLever", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsPhysicsLever_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsPhysicsLever_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsPhysicsLever_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bUngripAtTargetRotation_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bUngripAtTargetRotation_SetBit(void* Obj)
	{
		((UVRLeverComponent*)Obj)->bUngripAtTargetRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bUngripAtTargetRotation = { "bUngripAtTargetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bUngripAtTargetRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bUngripAtTargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bUngripAtTargetRotation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRotationAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRotationAxis_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "// Rotation axis to use, XY is combined X and Y, only LerpToZero and PositiveLimits work with this mode\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Rotation axis to use, XY is combined X and Y, only LerpToZero and PositiveLimits work with this mode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRotationAxis = { "LeverRotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, LeverRotationAxis), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRotationAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverTogglePercentage_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "// The percentage of the angle at witch the lever will toggle\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "The percentage of the angle at witch the lever will toggle" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverTogglePercentage = { "LeverTogglePercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, LeverTogglePercentage), METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverTogglePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverTogglePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverLimitPositive_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ClampMax", "179.9" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The max angle of the lever in the positive direction\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "The max angle of the lever in the positive direction" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverLimitPositive = { "LeverLimitPositive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, LeverLimitPositive), METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverLimitPositive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverLimitPositive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverLimitNegative_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ClampMax", "179.9" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The max angle of the lever in the negative direction\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "The max angle of the lever in the negative direction" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverLimitNegative = { "LeverLimitNegative", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, LeverLimitNegative), METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverLimitNegative_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverLimitNegative_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLocked_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "// If true then this lever is locked in place until unlocked again\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "If true then this lever is locked in place until unlocked again" },
	};
#endif
	void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((UVRLeverComponent*)Obj)->bIsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bAutoDropWhenLocked_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "// If true then this lever will auto drop even when locked\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "If true then this lever will auto drop even when locked" },
	};
#endif
	void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bAutoDropWhenLocked_SetBit(void* Obj)
	{
		((UVRLeverComponent*)Obj)->bAutoDropWhenLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bAutoDropWhenLocked = { "bAutoDropWhenLocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bAutoDropWhenLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bAutoDropWhenLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bAutoDropWhenLocked_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnTypeWhenReleased_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnTypeWhenReleased_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnTypeWhenReleased = { "LeverReturnTypeWhenReleased", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, LeverReturnTypeWhenReleased), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnTypeWhenReleased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnTypeWhenReleased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bSendLeverEventsDuringLerp_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bSendLeverEventsDuringLerp_SetBit(void* Obj)
	{
		((UVRLeverComponent*)Obj)->bSendLeverEventsDuringLerp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bSendLeverEventsDuringLerp = { "bSendLeverEventsDuringLerp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bSendLeverEventsDuringLerp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bSendLeverEventsDuringLerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bSendLeverEventsDuringLerp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnSpeed_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnSpeed = { "LeverReturnSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, LeverReturnSpeed), METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bBlendAxisValuesByAngleThreshold_MetaData[] = {
		{ "Category", "VRLeverComponent|Flight Stick Settings" },
		{ "Comment", "// If true then we will blend the values of the XY axis' by the AngleThreshold, lowering Pitch/Yaw influence based on how far from leaning into the axis that the lever is\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "If true then we will blend the values of the XY axis' by the AngleThreshold, lowering Pitch/Yaw influence based on how far from leaning into the axis that the lever is" },
	};
#endif
	void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bBlendAxisValuesByAngleThreshold_SetBit(void* Obj)
	{
		((UVRLeverComponent*)Obj)->bBlendAxisValuesByAngleThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bBlendAxisValuesByAngleThreshold = { "bBlendAxisValuesByAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bBlendAxisValuesByAngleThreshold_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bBlendAxisValuesByAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bBlendAxisValuesByAngleThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_AngleThreshold_MetaData[] = {
		{ "Category", "VRLeverComponent|Flight Stick Settings" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The angle threshold to blend around, default of 90.0 blends 0.0 to 1.0 smoothly across entire sweep\n// A value of 45 would blend it to 0 halfway rotated to the other axis, while 180 would still leave half the influence when fully rotated out of facing\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "The angle threshold to blend around, default of 90.0 blends 0.0 to 1.0 smoothly across entire sweep\nA value of 45 would blend it to 0 halfway rotated to the other axis, while 180 would still leave half the influence when fully rotated out of facing" },
		{ "UIMax", "360.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_AngleThreshold = { "AngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, AngleThreshold), METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_AngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_AngleThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_FramesToAverage_MetaData[] = {
		{ "Category", "VRLeverComponent|Momentum Settings" },
		{ "ClampMax", "12" },
		{ "ClampMin", "0" },
		{ "Comment", "// Number of frames to average momentum across for the release momentum (avoids quick waggles)\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Number of frames to average momentum across for the release momentum (avoids quick waggles)" },
		{ "UIMax", "12" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_FramesToAverage = { "FramesToAverage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, FramesToAverage), METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_FramesToAverage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_FramesToAverage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverMomentumFriction_MetaData[] = {
		{ "Category", "VRLeverComponent|Momentum Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Units in degrees per second to slow a momentum lerp down\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Units in degrees per second to slow a momentum lerp down" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverMomentumFriction = { "LeverMomentumFriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, LeverMomentumFriction), METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverMomentumFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverMomentumFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRestitution_MetaData[] = {
		{ "Category", "VRLeverComponent|Momentum Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// % of elasticity on reaching the end 0 - 1.0 \n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "% of elasticity on reaching the end 0 - 1.0" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRestitution = { "LeverRestitution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, LeverRestitution), METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRestitution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRestitution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MaxLeverMomentum_MetaData[] = {
		{ "Category", "VRLeverComponent|Momentum Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Maximum momentum of the lever in degrees per second\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Maximum momentum of the lever in degrees per second" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MaxLeverMomentum = { "MaxLeverMomentum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, MaxLeverMomentum), METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MaxLeverMomentum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MaxLeverMomentum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLerping_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLerping_SetBit(void* Obj)
	{
		((UVRLeverComponent*)Obj)->bIsLerping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLerping = { "bIsLerping", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLerping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLerping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLerping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_PrimarySlotRange_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_PrimarySlotRange = { "PrimarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, PrimarySlotRange), METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_PrimarySlotRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_PrimarySlotRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_SecondarySlotRange_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_SecondarySlotRange = { "SecondarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, SecondarySlotRange), METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_SecondarySlotRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_SecondarySlotRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_GripPriority_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_GripPriority = { "GripPriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, GripPriority), METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_GripPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_GripPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_InitialRelativeTransform_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "// Now replicating this so that it works correctly over the network\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Now replicating this so that it works correctly over the network" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_InitialRelativeTransform = { "InitialRelativeTransform", "OnRep_InitialRelativeTransform", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, InitialRelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_InitialRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_InitialRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Tags that are set on this object */" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Tags that are set on this object" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_GameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bRepGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Requires bReplicates to be true for the component\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Requires bReplicates to be true for the component" },
	};
#endif
	void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bRepGameplayTags_SetBit(void* Obj)
	{
		((UVRLeverComponent*)Obj)->bRepGameplayTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bRepGameplayTags = { "bRepGameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bRepGameplayTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bRepGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bRepGameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
	};
#endif
	void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((UVRLeverComponent*)Obj)->bReplicateMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bReplicateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bReplicateMovement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MovementReplicationSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MovementReplicationSetting_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MovementReplicationSetting = { "MovementReplicationSetting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, MovementReplicationSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MovementReplicationSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MovementReplicationSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, Stiffness), METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_Damping_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, Damping), METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_BreakDistance_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Distance before the object will break out of the hand, 0.0f == never will\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Distance before the object will break out of the hand, 0.0f == never will" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_BreakDistance = { "BreakDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, BreakDistance), METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_BreakDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_BreakDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bDenyGripping_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Should we deny gripping on this object\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ScriptName", "IsDenyGripping" },
		{ "ToolTip", "Should we deny gripping on this object" },
	};
#endif
	void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
	{
		((UVRLeverComponent*)Obj)->bDenyGripping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bDenyGripping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bDenyGripping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsHeld_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ScriptName", "IsCurrentlyHeld" },
	};
#endif
	void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((UVRLeverComponent*)Obj)->bIsHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsHeld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsHeld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_HoldingGrip_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Set on grip notify, not net serializing\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Set on grip notify, not net serializing" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_HoldingGrip = { "HoldingGrip", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, HoldingGrip), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_HoldingGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_HoldingGrip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnGripped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is gripped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Called when a object is gripped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnGripped = { "OnGripped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, OnGripped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnGripped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnGripped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnDropped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is dropped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ToolTip", "Called when a object is dropped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLeverComponent, OnDropped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnDropped_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRLeverComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnLeverStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnLeverFinishedLerping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_CurrentLeverAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_AllCurrentLeverAngles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_CurrentLeverForwardVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsPhysicsLever,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bUngripAtTargetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRotationAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRotationAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverTogglePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverLimitPositive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverLimitNegative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bAutoDropWhenLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnTypeWhenReleased_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnTypeWhenReleased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bSendLeverEventsDuringLerp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bBlendAxisValuesByAngleThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_AngleThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_FramesToAverage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverMomentumFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRestitution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MaxLeverMomentum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLerping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_PrimarySlotRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_SecondarySlotRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_GripPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_InitialRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_GameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bRepGameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bReplicateMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MovementReplicationSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MovementReplicationSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_Stiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_Damping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_BreakDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bDenyGripping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_HoldingGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnGripped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnDropped,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVRLeverComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(UVRLeverComponent, IVRGripInterface), false },
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UVRLeverComponent, IGameplayTagAssetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRLeverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRLeverComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRLeverComponent_Statics::ClassParams = {
		&UVRLeverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRLeverComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRLeverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRLeverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRLeverComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRLeverComponent, 1024305371);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRLeverComponent>()
	{
		return UVRLeverComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRLeverComponent(Z_Construct_UClass_UVRLeverComponent, &UVRLeverComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRLeverComponent"), false, nullptr, nullptr, nullptr);

	void UVRLeverComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
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

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UVRLeverComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRLeverComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
