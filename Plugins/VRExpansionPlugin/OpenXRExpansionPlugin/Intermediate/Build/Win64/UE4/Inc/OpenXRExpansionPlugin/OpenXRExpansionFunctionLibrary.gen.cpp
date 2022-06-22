// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRExpansionPlugin/Public/OpenXRExpansionFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRExpansionFunctionLibrary() {}
// Cross Module References
	OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType();
	UPackage* Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
	OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_NoRegister();
	OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRExpansionFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData();
	OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRHandPoseComponent_NoRegister();
	OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch();
// End Cross Module References
	static UEnum* EBPOpenXRControllerDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("EBPOpenXRControllerDeviceType"));
		}
		return Singleton;
	}
	template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPOpenXRControllerDeviceType>()
	{
		return EBPOpenXRControllerDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPOpenXRControllerDeviceType(EBPOpenXRControllerDeviceType_StaticEnum, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("EBPOpenXRControllerDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType_Hash() { return 1354564213U; }
	UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPOpenXRControllerDeviceType"), 0, Get_Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPOpenXRControllerDeviceType::DT_SimpleController", (int64)EBPOpenXRControllerDeviceType::DT_SimpleController },
				{ "EBPOpenXRControllerDeviceType::DT_ValveIndexController", (int64)EBPOpenXRControllerDeviceType::DT_ValveIndexController },
				{ "EBPOpenXRControllerDeviceType::DT_ViveController", (int64)EBPOpenXRControllerDeviceType::DT_ViveController },
				{ "EBPOpenXRControllerDeviceType::DT_ViveProController", (int64)EBPOpenXRControllerDeviceType::DT_ViveProController },
				{ "EBPOpenXRControllerDeviceType::DT_DaydreamController", (int64)EBPOpenXRControllerDeviceType::DT_DaydreamController },
				{ "EBPOpenXRControllerDeviceType::DT_OculusTouchController", (int64)EBPOpenXRControllerDeviceType::DT_OculusTouchController },
				{ "EBPOpenXRControllerDeviceType::DT_OculusGoController", (int64)EBPOpenXRControllerDeviceType::DT_OculusGoController },
				{ "EBPOpenXRControllerDeviceType::DT_MicrosoftMotionController", (int64)EBPOpenXRControllerDeviceType::DT_MicrosoftMotionController },
				{ "EBPOpenXRControllerDeviceType::DT_MicrosoftXboxController", (int64)EBPOpenXRControllerDeviceType::DT_MicrosoftXboxController },
				{ "EBPOpenXRControllerDeviceType::DT_UnknownController", (int64)EBPOpenXRControllerDeviceType::DT_UnknownController },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// This needs to be updated as the original gets changed, that or hope they make the original blueprint accessible.\n" },
				{ "DT_DaydreamController.Comment", "//DT_CosmosController,\n" },
				{ "DT_DaydreamController.Name", "EBPOpenXRControllerDeviceType::DT_DaydreamController" },
				{ "DT_DaydreamController.ToolTip", "DT_CosmosController," },
				{ "DT_MicrosoftMotionController.Name", "EBPOpenXRControllerDeviceType::DT_MicrosoftMotionController" },
				{ "DT_MicrosoftXboxController.Name", "EBPOpenXRControllerDeviceType::DT_MicrosoftXboxController" },
				{ "DT_OculusGoController.Name", "EBPOpenXRControllerDeviceType::DT_OculusGoController" },
				{ "DT_OculusTouchController.Name", "EBPOpenXRControllerDeviceType::DT_OculusTouchController" },
				{ "DT_SimpleController.Name", "EBPOpenXRControllerDeviceType::DT_SimpleController" },
				{ "DT_UnknownController.Name", "EBPOpenXRControllerDeviceType::DT_UnknownController" },
				{ "DT_ValveIndexController.Name", "EBPOpenXRControllerDeviceType::DT_ValveIndexController" },
				{ "DT_ViveController.Name", "EBPOpenXRControllerDeviceType::DT_ViveController" },
				{ "DT_ViveProController.Name", "EBPOpenXRControllerDeviceType::DT_ViveProController" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/OpenXRExpansionFunctionLibrary.h" },
				{ "ToolTip", "This needs to be updated as the original gets changed, that or hope they make the original blueprint accessible." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
				nullptr,
				"EBPOpenXRControllerDeviceType",
				"EBPOpenXRControllerDeviceType",
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
	DEFINE_FUNCTION(UOpenXRExpansionFunctionLibrary::execGetXRMotionControllerType)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_TrackingSystemName);
		P_GET_ENUM_REF(EBPOpenXRControllerDeviceType,Z_Param_Out_DeviceType);
		P_GET_ENUM_REF(EBPXRResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenXRExpansionFunctionLibrary::GetXRMotionControllerType(Z_Param_Out_TrackingSystemName,(EBPOpenXRControllerDeviceType&)(Z_Param_Out_DeviceType),(EBPXRResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenXRExpansionFunctionLibrary::execGetOpenXRHandPose)
	{
		P_GET_STRUCT_REF(FBPOpenXRActionSkeletalData,Z_Param_Out_HandPoseContainer);
		P_GET_OBJECT(UOpenXRHandPoseComponent,Z_Param_HandPoseComponent);
		P_GET_UBOOL(Z_Param_bGetMockUpPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenXRExpansionFunctionLibrary::GetOpenXRHandPose(Z_Param_Out_HandPoseContainer,Z_Param_HandPoseComponent,Z_Param_bGetMockUpPose);
		P_NATIVE_END;
	}
	void UOpenXRExpansionFunctionLibrary::StaticRegisterNativesUOpenXRExpansionFunctionLibrary()
	{
		UClass* Class = UOpenXRExpansionFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOpenXRHandPose", &UOpenXRExpansionFunctionLibrary::execGetOpenXRHandPose },
			{ "GetXRMotionControllerType", &UOpenXRExpansionFunctionLibrary::execGetXRMotionControllerType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics
	{
		struct OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms
		{
			FBPOpenXRActionSkeletalData HandPoseContainer;
			UOpenXRHandPoseComponent* HandPoseComponent;
			bool bGetMockUpPose;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandPoseContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandPoseComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandPoseComponent;
		static void NewProp_bGetMockUpPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetMockUpPose;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_HandPoseContainer = { "HandPoseContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms, HandPoseContainer), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_HandPoseComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_HandPoseComponent = { "HandPoseComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms, HandPoseComponent), Z_Construct_UClass_UOpenXRHandPoseComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_HandPoseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_HandPoseComponent_MetaData)) };
	void Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_bGetMockUpPose_SetBit(void* Obj)
	{
		((OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms*)Obj)->bGetMockUpPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_bGetMockUpPose = { "bGetMockUpPose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms), &Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_bGetMockUpPose_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms), &Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_HandPoseContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_HandPoseComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_bGetMockUpPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|OpenXR" },
		{ "CPP_Default_bGetMockUpPose", "false" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRExpansionFunctionLibrary, nullptr, "GetOpenXRHandPose", nullptr, nullptr, sizeof(OpenXRExpansionFunctionLibrary_eventGetOpenXRHandPose_Parms), Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics
	{
		struct OpenXRExpansionFunctionLibrary_eventGetXRMotionControllerType_Parms
		{
			FString TrackingSystemName;
			EBPOpenXRControllerDeviceType DeviceType;
			EBPXRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackingSystemName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_TrackingSystemName = { "TrackingSystemName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetXRMotionControllerType_Parms, TrackingSystemName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetXRMotionControllerType_Parms, DeviceType), Z_Construct_UEnum_OpenXRExpansionPlugin_EBPOpenXRControllerDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRExpansionFunctionLibrary_eventGetXRMotionControllerType_Parms, Result), Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_TrackingSystemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_DeviceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_DeviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|OpenXR" },
		{ "Comment", "// Get a list of all currently tracked devices and their types, index in the array is their device index\n// Returns failed if the openXR query failed (no interaction profile yet or openXR is not running)\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Get a list of all currently tracked devices and their types, index in the array is their device index\nReturns failed if the openXR query failed (no interaction profile yet or openXR is not running)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRExpansionFunctionLibrary, nullptr, "GetXRMotionControllerType", nullptr, nullptr, sizeof(OpenXRExpansionFunctionLibrary_eventGetXRMotionControllerType_Parms), Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_NoRegister()
	{
		return UOpenXRExpansionFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetOpenXRHandPose, "GetOpenXRHandPose" }, // 1681755815
		{ &Z_Construct_UFunction_UOpenXRExpansionFunctionLibrary_GetXRMotionControllerType, "GetXRMotionControllerType" }, // 1521608170
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "OpenXRExpansionFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionFunctionLibrary.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRExpansionFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics::ClassParams = {
		&UOpenXRExpansionFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenXRExpansionFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenXRExpansionFunctionLibrary, 2917393493);
	template<> OPENXREXPANSIONPLUGIN_API UClass* StaticClass<UOpenXRExpansionFunctionLibrary>()
	{
		return UOpenXRExpansionFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenXRExpansionFunctionLibrary(Z_Construct_UClass_UOpenXRExpansionFunctionLibrary, &UOpenXRExpansionFunctionLibrary::StaticClass, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("UOpenXRExpansionFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRExpansionFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
