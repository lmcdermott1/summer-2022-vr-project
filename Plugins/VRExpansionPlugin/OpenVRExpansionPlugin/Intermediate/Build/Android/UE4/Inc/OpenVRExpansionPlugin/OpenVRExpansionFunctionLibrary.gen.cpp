// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenVRExpansionPlugin/Public/OpenVRExpansionFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenVRExpansionFunctionLibrary() {}
// Cross Module References
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRControllerDeviceType();
	UPackage* Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRHMDDeviceType();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRTrackedDeviceClass();
	OPENVREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenVRCameraHandle();
	OPENVREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_NoRegister();
	OPENVREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	static UEnum* EBPOpenVRControllerDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRControllerDeviceType, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EBPOpenVRControllerDeviceType"));
		}
		return Singleton;
	}
	template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPOpenVRControllerDeviceType>()
	{
		return EBPOpenVRControllerDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPOpenVRControllerDeviceType(EBPOpenVRControllerDeviceType_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EBPOpenVRControllerDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRControllerDeviceType_Hash() { return 3602563193U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRControllerDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPOpenVRControllerDeviceType"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRControllerDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPOpenVRControllerDeviceType::DT_IndexController", (int64)EBPOpenVRControllerDeviceType::DT_IndexController },
				{ "EBPOpenVRControllerDeviceType::DT_ViveController", (int64)EBPOpenVRControllerDeviceType::DT_ViveController },
				{ "EBPOpenVRControllerDeviceType::DT_CosmosController", (int64)EBPOpenVRControllerDeviceType::DT_CosmosController },
				{ "EBPOpenVRControllerDeviceType::DT_RiftController", (int64)EBPOpenVRControllerDeviceType::DT_RiftController },
				{ "EBPOpenVRControllerDeviceType::DT_RiftSController", (int64)EBPOpenVRControllerDeviceType::DT_RiftSController },
				{ "EBPOpenVRControllerDeviceType::DT_QuestController", (int64)EBPOpenVRControllerDeviceType::DT_QuestController },
				{ "EBPOpenVRControllerDeviceType::DT_WMRController", (int64)EBPOpenVRControllerDeviceType::DT_WMRController },
				{ "EBPOpenVRControllerDeviceType::DT_UnknownController", (int64)EBPOpenVRControllerDeviceType::DT_UnknownController },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// This needs to be updated as the original gets changed, that or hope they make the original blueprint accessible.\n" },
				{ "DT_CosmosController.Name", "EBPOpenVRControllerDeviceType::DT_CosmosController" },
				{ "DT_IndexController.Name", "EBPOpenVRControllerDeviceType::DT_IndexController" },
				{ "DT_QuestController.Name", "EBPOpenVRControllerDeviceType::DT_QuestController" },
				{ "DT_RiftController.Name", "EBPOpenVRControllerDeviceType::DT_RiftController" },
				{ "DT_RiftSController.Name", "EBPOpenVRControllerDeviceType::DT_RiftSController" },
				{ "DT_UnknownController.Name", "EBPOpenVRControllerDeviceType::DT_UnknownController" },
				{ "DT_ViveController.Name", "EBPOpenVRControllerDeviceType::DT_ViveController" },
				{ "DT_WMRController.Name", "EBPOpenVRControllerDeviceType::DT_WMRController" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "This needs to be updated as the original gets changed, that or hope they make the original blueprint accessible." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				nullptr,
				"EBPOpenVRControllerDeviceType",
				"EBPOpenVRControllerDeviceType",
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
	static UEnum* EBPOpenVRHMDDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRHMDDeviceType, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EBPOpenVRHMDDeviceType"));
		}
		return Singleton;
	}
	template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPOpenVRHMDDeviceType>()
	{
		return EBPOpenVRHMDDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPOpenVRHMDDeviceType(EBPOpenVRHMDDeviceType_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EBPOpenVRHMDDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRHMDDeviceType_Hash() { return 34232812U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRHMDDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPOpenVRHMDDeviceType"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRHMDDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPOpenVRHMDDeviceType::DT_SteamVR", (int64)EBPOpenVRHMDDeviceType::DT_SteamVR },
				{ "EBPOpenVRHMDDeviceType::DT_ValveIndex", (int64)EBPOpenVRHMDDeviceType::DT_ValveIndex },
				{ "EBPOpenVRHMDDeviceType::DT_Vive", (int64)EBPOpenVRHMDDeviceType::DT_Vive },
				{ "EBPOpenVRHMDDeviceType::DT_ViveCosmos", (int64)EBPOpenVRHMDDeviceType::DT_ViveCosmos },
				{ "EBPOpenVRHMDDeviceType::DT_OculusQuestHMD", (int64)EBPOpenVRHMDDeviceType::DT_OculusQuestHMD },
				{ "EBPOpenVRHMDDeviceType::DT_OculusHMD", (int64)EBPOpenVRHMDDeviceType::DT_OculusHMD },
				{ "EBPOpenVRHMDDeviceType::DT_WindowsMR", (int64)EBPOpenVRHMDDeviceType::DT_WindowsMR },
				{ "EBPOpenVRHMDDeviceType::DT_Unknown", (int64)EBPOpenVRHMDDeviceType::DT_Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// This needs to be updated as the original gets changed, that or hope they make the original blueprint accessible.\n" },
				{ "DT_OculusHMD.Name", "EBPOpenVRHMDDeviceType::DT_OculusHMD" },
				{ "DT_OculusQuestHMD.Name", "EBPOpenVRHMDDeviceType::DT_OculusQuestHMD" },
				{ "DT_SteamVR.Name", "EBPOpenVRHMDDeviceType::DT_SteamVR" },
				{ "DT_Unknown.Comment", "//DT_OSVR,\n" },
				{ "DT_Unknown.Name", "EBPOpenVRHMDDeviceType::DT_Unknown" },
				{ "DT_Unknown.ToolTip", "DT_OSVR," },
				{ "DT_ValveIndex.Name", "EBPOpenVRHMDDeviceType::DT_ValveIndex" },
				{ "DT_Vive.Name", "EBPOpenVRHMDDeviceType::DT_Vive" },
				{ "DT_ViveCosmos.Name", "EBPOpenVRHMDDeviceType::DT_ViveCosmos" },
				{ "DT_WindowsMR.Name", "EBPOpenVRHMDDeviceType::DT_WindowsMR" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "This needs to be updated as the original gets changed, that or hope they make the original blueprint accessible." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				nullptr,
				"EBPOpenVRHMDDeviceType",
				"EBPOpenVRHMDDeviceType",
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
	static UEnum* EVRDeviceProperty_Matrix34_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_Matrix34"));
		}
		return Singleton;
	}
	template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRDeviceProperty_Matrix34>()
	{
		return EVRDeviceProperty_Matrix34_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_Matrix34(EVRDeviceProperty_Matrix34_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_Matrix34"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34_Hash() { return 3496304496U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_Matrix34"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRDeviceProperty_Matrix34::Prop_StatusDisplayTransform_Matrix34_1013", (int64)EVRDeviceProperty_Matrix34::Prop_StatusDisplayTransform_Matrix34_1013 },
				{ "EVRDeviceProperty_Matrix34::HMDProp_CameraToHeadTransform_Matrix34_2016", (int64)EVRDeviceProperty_Matrix34::HMDProp_CameraToHeadTransform_Matrix34_2016 },
				{ "EVRDeviceProperty_Matrix34::HMDProp_CameraToHeadTransforms_Matrix34_2055", (int64)EVRDeviceProperty_Matrix34::HMDProp_CameraToHeadTransforms_Matrix34_2055 },
				{ "EVRDeviceProperty_Matrix34::HMDProp_ImuToHeadTransform_Matrix34_2063", (int64)EVRDeviceProperty_Matrix34::HMDProp_ImuToHeadTransform_Matrix34_2063 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HMDProp_CameraToHeadTransform_Matrix34_2016.Comment", "// 1 Prefix = 2000 series\n" },
				{ "HMDProp_CameraToHeadTransform_Matrix34_2016.DisplayName", "HMDProp_CameraToHeadTransform_Matrix34" },
				{ "HMDProp_CameraToHeadTransform_Matrix34_2016.Name", "EVRDeviceProperty_Matrix34::HMDProp_CameraToHeadTransform_Matrix34_2016" },
				{ "HMDProp_CameraToHeadTransform_Matrix34_2016.ToolTip", "1 Prefix = 2000 series" },
				{ "HMDProp_CameraToHeadTransforms_Matrix34_2055.DisplayName", "HMDProp_CameraToHeadTransforms_Matrix34" },
				{ "HMDProp_CameraToHeadTransforms_Matrix34_2055.Name", "EVRDeviceProperty_Matrix34::HMDProp_CameraToHeadTransforms_Matrix34_2055" },
				{ "HMDProp_ImuToHeadTransform_Matrix34_2063.DisplayName", "HMDProp_ImToHeadTransform_Matrix34" },
				{ "HMDProp_ImuToHeadTransform_Matrix34_2063.Name", "EVRDeviceProperty_Matrix34::HMDProp_ImuToHeadTransform_Matrix34_2063" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "Prop_StatusDisplayTransform_Matrix34_1013.Comment", "// No prefix = 1000 series\n" },
				{ "Prop_StatusDisplayTransform_Matrix34_1013.DisplayName", "Prop_StatusDisplayTransform_Matrix34" },
				{ "Prop_StatusDisplayTransform_Matrix34_1013.Name", "EVRDeviceProperty_Matrix34::Prop_StatusDisplayTransform_Matrix34_1013" },
				{ "Prop_StatusDisplayTransform_Matrix34_1013.ToolTip", "No prefix = 1000 series" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				nullptr,
				"EVRDeviceProperty_Matrix34",
				"EVRDeviceProperty_Matrix34",
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
	static UEnum* EVRDeviceProperty_UInt64_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_UInt64"));
		}
		return Singleton;
	}
	template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRDeviceProperty_UInt64>()
	{
		return EVRDeviceProperty_UInt64_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_UInt64(EVRDeviceProperty_UInt64_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_UInt64"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64_Hash() { return 3528739561U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_UInt64"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRDeviceProperty_UInt64::Prop_HardwareRevision_Uint64_1017", (int64)EVRDeviceProperty_UInt64::Prop_HardwareRevision_Uint64_1017 },
				{ "EVRDeviceProperty_UInt64::Prop_FirmwareVersion_Uint64_1018", (int64)EVRDeviceProperty_UInt64::Prop_FirmwareVersion_Uint64_1018 },
				{ "EVRDeviceProperty_UInt64::Prop_FPGAVersion_Uint64_1019", (int64)EVRDeviceProperty_UInt64::Prop_FPGAVersion_Uint64_1019 },
				{ "EVRDeviceProperty_UInt64::Prop_VRCVersion_Uint64_1020", (int64)EVRDeviceProperty_UInt64::Prop_VRCVersion_Uint64_1020 },
				{ "EVRDeviceProperty_UInt64::Prop_RadioVersion_Uint64_1021", (int64)EVRDeviceProperty_UInt64::Prop_RadioVersion_Uint64_1021 },
				{ "EVRDeviceProperty_UInt64::Prop_DongleVersion_Uint64_1022", (int64)EVRDeviceProperty_UInt64::Prop_DongleVersion_Uint64_1022 },
				{ "EVRDeviceProperty_UInt64::Prop_ParentDriver_Uint64_1034", (int64)EVRDeviceProperty_UInt64::Prop_ParentDriver_Uint64_1034 },
				{ "EVRDeviceProperty_UInt64::Prop_BootloaderVersion_Uint64_1044", (int64)EVRDeviceProperty_UInt64::Prop_BootloaderVersion_Uint64_1044 },
				{ "EVRDeviceProperty_UInt64::HMDProp_CurrentUniverseId_Uint64_2004", (int64)EVRDeviceProperty_UInt64::HMDProp_CurrentUniverseId_Uint64_2004 },
				{ "EVRDeviceProperty_UInt64::HMDProp_PreviousUniverseId_Uint64_2005", (int64)EVRDeviceProperty_UInt64::HMDProp_PreviousUniverseId_Uint64_2005 },
				{ "EVRDeviceProperty_UInt64::HMDProp_DisplayFirmwareVersion_Uint64_2006", (int64)EVRDeviceProperty_UInt64::HMDProp_DisplayFirmwareVersion_Uint64_2006 },
				{ "EVRDeviceProperty_UInt64::HMDProp_CameraFirmwareVersion_Uint64_2027", (int64)EVRDeviceProperty_UInt64::HMDProp_CameraFirmwareVersion_Uint64_2027 },
				{ "EVRDeviceProperty_UInt64::HMDProp_DisplayFPGAVersion_Uint64_2029", (int64)EVRDeviceProperty_UInt64::HMDProp_DisplayFPGAVersion_Uint64_2029 },
				{ "EVRDeviceProperty_UInt64::HMDProp_DisplayBootloaderVersion_Uint64_2030", (int64)EVRDeviceProperty_UInt64::HMDProp_DisplayBootloaderVersion_Uint64_2030 },
				{ "EVRDeviceProperty_UInt64::HMDProp_DisplayHardwareVersion_Uint64_2031", (int64)EVRDeviceProperty_UInt64::HMDProp_DisplayHardwareVersion_Uint64_2031 },
				{ "EVRDeviceProperty_UInt64::HMDProp_AudioFirmwareVersion_Uint64_2032", (int64)EVRDeviceProperty_UInt64::HMDProp_AudioFirmwareVersion_Uint64_2032 },
				{ "EVRDeviceProperty_UInt64::HMDProp_GraphicsAdapterLuid_Uint64_2045", (int64)EVRDeviceProperty_UInt64::HMDProp_GraphicsAdapterLuid_Uint64_2045 },
				{ "EVRDeviceProperty_UInt64::HMDProp_AudioBridgeFirmwareVersion_Uint64_2061", (int64)EVRDeviceProperty_UInt64::HMDProp_AudioBridgeFirmwareVersion_Uint64_2061 },
				{ "EVRDeviceProperty_UInt64::HMDProp_ImageBridgeFirmwareVersion_Uint64_2062", (int64)EVRDeviceProperty_UInt64::HMDProp_ImageBridgeFirmwareVersion_Uint64_2062 },
				{ "EVRDeviceProperty_UInt64::HMDProp_AdditionalRadioFeatures_Uint64_2070", (int64)EVRDeviceProperty_UInt64::HMDProp_AdditionalRadioFeatures_Uint64_2070 },
				{ "EVRDeviceProperty_UInt64::ControllerProp_SupportedButtons_Uint64_3001", (int64)EVRDeviceProperty_UInt64::ControllerProp_SupportedButtons_Uint64_3001 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ControllerProp_SupportedButtons_Uint64_3001.Comment", "// 2 Prefix = 3000 series\n" },
				{ "ControllerProp_SupportedButtons_Uint64_3001.DisplayName", "ControllerProp_SupportedButtons_Uint64" },
				{ "ControllerProp_SupportedButtons_Uint64_3001.Name", "EVRDeviceProperty_UInt64::ControllerProp_SupportedButtons_Uint64_3001" },
				{ "ControllerProp_SupportedButtons_Uint64_3001.ToolTip", "2 Prefix = 3000 series" },
				{ "HMDProp_AdditionalRadioFeatures_Uint64_2070.DisplayName", "HMDProp_AdditionalRadioFeatures_Uint64" },
				{ "HMDProp_AdditionalRadioFeatures_Uint64_2070.Name", "EVRDeviceProperty_UInt64::HMDProp_AdditionalRadioFeatures_Uint64_2070" },
				{ "HMDProp_AudioBridgeFirmwareVersion_Uint64_2061.DisplayName", "HMDProp_AudioBridgeFirmwareVersion_Uint64" },
				{ "HMDProp_AudioBridgeFirmwareVersion_Uint64_2061.Name", "EVRDeviceProperty_UInt64::HMDProp_AudioBridgeFirmwareVersion_Uint64_2061" },
				{ "HMDProp_AudioFirmwareVersion_Uint64_2032.DisplayName", "HMDProp_AudioFirmwareVersion_Uint64" },
				{ "HMDProp_AudioFirmwareVersion_Uint64_2032.Name", "EVRDeviceProperty_UInt64::HMDProp_AudioFirmwareVersion_Uint64_2032" },
				{ "HMDProp_CameraFirmwareVersion_Uint64_2027.DisplayName", "HMDProp_CameraFirmwareVersion_Uint64" },
				{ "HMDProp_CameraFirmwareVersion_Uint64_2027.Name", "EVRDeviceProperty_UInt64::HMDProp_CameraFirmwareVersion_Uint64_2027" },
				{ "HMDProp_CurrentUniverseId_Uint64_2004.Comment", "// 1 Prefix = 2000 series\n" },
				{ "HMDProp_CurrentUniverseId_Uint64_2004.DisplayName", "HMDProp_CurrentUniverseId_Uint64" },
				{ "HMDProp_CurrentUniverseId_Uint64_2004.Name", "EVRDeviceProperty_UInt64::HMDProp_CurrentUniverseId_Uint64_2004" },
				{ "HMDProp_CurrentUniverseId_Uint64_2004.ToolTip", "1 Prefix = 2000 series" },
				{ "HMDProp_DisplayBootloaderVersion_Uint64_2030.DisplayName", "HMDProp_DisplayBootloaderVersion_Uint64" },
				{ "HMDProp_DisplayBootloaderVersion_Uint64_2030.Name", "EVRDeviceProperty_UInt64::HMDProp_DisplayBootloaderVersion_Uint64_2030" },
				{ "HMDProp_DisplayFirmwareVersion_Uint64_2006.DisplayName", "HMDProp_DisplayFirmwareVersion_Uint64" },
				{ "HMDProp_DisplayFirmwareVersion_Uint64_2006.Name", "EVRDeviceProperty_UInt64::HMDProp_DisplayFirmwareVersion_Uint64_2006" },
				{ "HMDProp_DisplayFPGAVersion_Uint64_2029.DisplayName", "HMDProp_DisplayFPGAVersion_Uint64" },
				{ "HMDProp_DisplayFPGAVersion_Uint64_2029.Name", "EVRDeviceProperty_UInt64::HMDProp_DisplayFPGAVersion_Uint64_2029" },
				{ "HMDProp_DisplayHardwareVersion_Uint64_2031.DisplayName", "HMDProp_DisplayHardwareVersion_Uint64" },
				{ "HMDProp_DisplayHardwareVersion_Uint64_2031.Name", "EVRDeviceProperty_UInt64::HMDProp_DisplayHardwareVersion_Uint64_2031" },
				{ "HMDProp_GraphicsAdapterLuid_Uint64_2045.DisplayName", "HMDProp_GraphicsAdapterLuid_Uint64" },
				{ "HMDProp_GraphicsAdapterLuid_Uint64_2045.Name", "EVRDeviceProperty_UInt64::HMDProp_GraphicsAdapterLuid_Uint64_2045" },
				{ "HMDProp_ImageBridgeFirmwareVersion_Uint64_2062.DisplayName", "HMDProp_ImageBridgeFirmwareVersion_Uint64" },
				{ "HMDProp_ImageBridgeFirmwareVersion_Uint64_2062.Name", "EVRDeviceProperty_UInt64::HMDProp_ImageBridgeFirmwareVersion_Uint64_2062" },
				{ "HMDProp_PreviousUniverseId_Uint64_2005.DisplayName", "HMDProp_PreviousUniverseId_Uint64" },
				{ "HMDProp_PreviousUniverseId_Uint64_2005.Name", "EVRDeviceProperty_UInt64::HMDProp_PreviousUniverseId_Uint64_2005" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "Prop_BootloaderVersion_Uint64_1044.DisplayName", "Prop_BootloaderVersion_Uint64" },
				{ "Prop_BootloaderVersion_Uint64_1044.Name", "EVRDeviceProperty_UInt64::Prop_BootloaderVersion_Uint64_1044" },
				{ "Prop_DongleVersion_Uint64_1022.DisplayName", "Prop_DongleVersion_Uint64" },
				{ "Prop_DongleVersion_Uint64_1022.Name", "EVRDeviceProperty_UInt64::Prop_DongleVersion_Uint64_1022" },
				{ "Prop_FirmwareVersion_Uint64_1018.DisplayName", "Prop_FirmwareVersion_Uint64" },
				{ "Prop_FirmwareVersion_Uint64_1018.Name", "EVRDeviceProperty_UInt64::Prop_FirmwareVersion_Uint64_1018" },
				{ "Prop_FPGAVersion_Uint64_1019.DisplayName", "Prop_FPGAVersion_Uint64" },
				{ "Prop_FPGAVersion_Uint64_1019.Name", "EVRDeviceProperty_UInt64::Prop_FPGAVersion_Uint64_1019" },
				{ "Prop_HardwareRevision_Uint64_1017.Comment", "// No prefix = 1000 series\n" },
				{ "Prop_HardwareRevision_Uint64_1017.DisplayName", "Prop_HardwareRevision_Uint64" },
				{ "Prop_HardwareRevision_Uint64_1017.Name", "EVRDeviceProperty_UInt64::Prop_HardwareRevision_Uint64_1017" },
				{ "Prop_HardwareRevision_Uint64_1017.ToolTip", "No prefix = 1000 series" },
				{ "Prop_ParentDriver_Uint64_1034.DisplayName", "Prop_ParentDriver_Uint64" },
				{ "Prop_ParentDriver_Uint64_1034.Name", "EVRDeviceProperty_UInt64::Prop_ParentDriver_Uint64_1034" },
				{ "Prop_RadioVersion_Uint64_1021.DisplayName", "Prop_RadioVersion_Uint64" },
				{ "Prop_RadioVersion_Uint64_1021.Name", "EVRDeviceProperty_UInt64::Prop_RadioVersion_Uint64_1021" },
				{ "Prop_VRCVersion_Uint64_1020.DisplayName", "Prop_VRCVersion_Uint64" },
				{ "Prop_VRCVersion_Uint64_1020.Name", "EVRDeviceProperty_UInt64::Prop_VRCVersion_Uint64_1020" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				nullptr,
				"EVRDeviceProperty_UInt64",
				"EVRDeviceProperty_UInt64",
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
	static UEnum* EVRDeviceProperty_Int32_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_Int32"));
		}
		return Singleton;
	}
	template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRDeviceProperty_Int32>()
	{
		return EVRDeviceProperty_Int32_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_Int32(EVRDeviceProperty_Int32_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_Int32"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32_Hash() { return 1040112770U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_Int32"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRDeviceProperty_Int32::Prop_DeviceClass_Int32_1029", (int64)EVRDeviceProperty_Int32::Prop_DeviceClass_Int32_1029 },
				{ "EVRDeviceProperty_Int32::Prop_NumCameras_Int32_1039", (int64)EVRDeviceProperty_Int32::Prop_NumCameras_Int32_1039 },
				{ "EVRDeviceProperty_Int32::Prop_CameraFrameLayout_Int32_1040", (int64)EVRDeviceProperty_Int32::Prop_CameraFrameLayout_Int32_1040 },
				{ "EVRDeviceProperty_Int32::Prop_CameraStreamFormat_Int32_1041", (int64)EVRDeviceProperty_Int32::Prop_CameraStreamFormat_Int32_1041 },
				{ "EVRDeviceProperty_Int32::HMDProp_DisplayMCType_Int32_2008", (int64)EVRDeviceProperty_Int32::HMDProp_DisplayMCType_Int32_2008 },
				{ "EVRDeviceProperty_Int32::HMDProp_EdidVendorID_Int32_2011", (int64)EVRDeviceProperty_Int32::HMDProp_EdidVendorID_Int32_2011 },
				{ "EVRDeviceProperty_Int32::HMDProp_EdidProductID_Int32_2015", (int64)EVRDeviceProperty_Int32::HMDProp_EdidProductID_Int32_2015 },
				{ "EVRDeviceProperty_Int32::HMDProp_DisplayGCType_Int32_2017", (int64)EVRDeviceProperty_Int32::HMDProp_DisplayGCType_Int32_2017 },
				{ "EVRDeviceProperty_Int32::HMDProp_CameraCompatibilityMode_Int32_2033", (int64)EVRDeviceProperty_Int32::HMDProp_CameraCompatibilityMode_Int32_2033 },
				{ "EVRDeviceProperty_Int32::HMDProp_DisplayMCImageWidth_Int32_2038", (int64)EVRDeviceProperty_Int32::HMDProp_DisplayMCImageWidth_Int32_2038 },
				{ "EVRDeviceProperty_Int32::HMDProp_DisplayMCImageHeight_Int32_2039", (int64)EVRDeviceProperty_Int32::HMDProp_DisplayMCImageHeight_Int32_2039 },
				{ "EVRDeviceProperty_Int32::HMDProp_DisplayMCImageNumChannels_Int32_2040", (int64)EVRDeviceProperty_Int32::HMDProp_DisplayMCImageNumChannels_Int32_2040 },
				{ "EVRDeviceProperty_Int32::HMDProp_ExpectedTrackingReferenceCount_Int32_2049", (int64)EVRDeviceProperty_Int32::HMDProp_ExpectedTrackingReferenceCount_Int32_2049 },
				{ "EVRDeviceProperty_Int32::HMDProp_ExpectedControllerCount_Int32_2050", (int64)EVRDeviceProperty_Int32::HMDProp_ExpectedControllerCount_Int32_2050 },
				{ "EVRDeviceProperty_Int32::HMDProp_DistortionMeshResolution_Int32_2056", (int64)EVRDeviceProperty_Int32::HMDProp_DistortionMeshResolution_Int32_2056 },
				{ "EVRDeviceProperty_Int32::HMDProp_HmdTrackingStyle_Int32_2075", (int64)EVRDeviceProperty_Int32::HMDProp_HmdTrackingStyle_Int32_2075 },
				{ "EVRDeviceProperty_Int32::ControllerProp_Axis0Type_Int32_3002", (int64)EVRDeviceProperty_Int32::ControllerProp_Axis0Type_Int32_3002 },
				{ "EVRDeviceProperty_Int32::ControllerPropProp_Axis1Type_Int32_3003", (int64)EVRDeviceProperty_Int32::ControllerPropProp_Axis1Type_Int32_3003 },
				{ "EVRDeviceProperty_Int32::ControllerPropProp_Axis2Type_Int32_3004", (int64)EVRDeviceProperty_Int32::ControllerPropProp_Axis2Type_Int32_3004 },
				{ "EVRDeviceProperty_Int32::ControllerPropProp_Axis3Type_Int32_3005", (int64)EVRDeviceProperty_Int32::ControllerPropProp_Axis3Type_Int32_3005 },
				{ "EVRDeviceProperty_Int32::ControllerPropProp_Axis4Type_Int32_3006", (int64)EVRDeviceProperty_Int32::ControllerPropProp_Axis4Type_Int32_3006 },
				{ "EVRDeviceProperty_Int32::ControllerProp_ControllerRoleHint_Int32_3007", (int64)EVRDeviceProperty_Int32::ControllerProp_ControllerRoleHint_Int32_3007 },
				{ "EVRDeviceProperty_Int32::TrackRefProp_Nonce_Int32_4008", (int64)EVRDeviceProperty_Int32::TrackRefProp_Nonce_Int32_4008 },
				{ "EVRDeviceProperty_Int32::DriverProp_ControllerHandSelectionPriority_Int32_7002", (int64)EVRDeviceProperty_Int32::DriverProp_ControllerHandSelectionPriority_Int32_7002 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ControllerProp_Axis0Type_Int32_3002.Comment", "// 2 Prefix = 3000 series\n" },
				{ "ControllerProp_Axis0Type_Int32_3002.DisplayName", "ControllerProp_Axis0Type_Int32" },
				{ "ControllerProp_Axis0Type_Int32_3002.Name", "EVRDeviceProperty_Int32::ControllerProp_Axis0Type_Int32_3002" },
				{ "ControllerProp_Axis0Type_Int32_3002.ToolTip", "2 Prefix = 3000 series" },
				{ "ControllerProp_ControllerRoleHint_Int32_3007.DisplayName", "ControllerProp_ControllerRoleHint_Int32" },
				{ "ControllerProp_ControllerRoleHint_Int32_3007.Name", "EVRDeviceProperty_Int32::ControllerProp_ControllerRoleHint_Int32_3007" },
				{ "ControllerPropProp_Axis1Type_Int32_3003.DisplayName", "ControllerPropProp_Axis1Type_Int32" },
				{ "ControllerPropProp_Axis1Type_Int32_3003.Name", "EVRDeviceProperty_Int32::ControllerPropProp_Axis1Type_Int32_3003" },
				{ "ControllerPropProp_Axis2Type_Int32_3004.DisplayName", "ControllerPropProp_Axis2Type_Int32" },
				{ "ControllerPropProp_Axis2Type_Int32_3004.Name", "EVRDeviceProperty_Int32::ControllerPropProp_Axis2Type_Int32_3004" },
				{ "ControllerPropProp_Axis3Type_Int32_3005.DisplayName", "ControllerPropProp_Axis3Type_Int32" },
				{ "ControllerPropProp_Axis3Type_Int32_3005.Name", "EVRDeviceProperty_Int32::ControllerPropProp_Axis3Type_Int32_3005" },
				{ "ControllerPropProp_Axis4Type_Int32_3006.DisplayName", "ControllerPropProp_Axis4Type_Int32" },
				{ "ControllerPropProp_Axis4Type_Int32_3006.Name", "EVRDeviceProperty_Int32::ControllerPropProp_Axis4Type_Int32_3006" },
				{ "DriverProp_ControllerHandSelectionPriority_Int32_7002.Comment", "// Driver Props\n" },
				{ "DriverProp_ControllerHandSelectionPriority_Int32_7002.DisplayName", "DriverProp_ControllerHandSelectionPriority_Int32" },
				{ "DriverProp_ControllerHandSelectionPriority_Int32_7002.Name", "EVRDeviceProperty_Int32::DriverProp_ControllerHandSelectionPriority_Int32_7002" },
				{ "DriverProp_ControllerHandSelectionPriority_Int32_7002.ToolTip", "Driver Props" },
				{ "HMDProp_CameraCompatibilityMode_Int32_2033.DisplayName", "HMDProp_CameraCompatibilityMode_Int32" },
				{ "HMDProp_CameraCompatibilityMode_Int32_2033.Name", "EVRDeviceProperty_Int32::HMDProp_CameraCompatibilityMode_Int32_2033" },
				{ "HMDProp_DisplayGCType_Int32_2017.DisplayName", "HMDProp_DisplayGCType_Int32" },
				{ "HMDProp_DisplayGCType_Int32_2017.Name", "EVRDeviceProperty_Int32::HMDProp_DisplayGCType_Int32_2017" },
				{ "HMDProp_DisplayMCImageHeight_Int32_2039.DisplayName", "HMDProp_DisplayMCImageHeight_Int32" },
				{ "HMDProp_DisplayMCImageHeight_Int32_2039.Name", "EVRDeviceProperty_Int32::HMDProp_DisplayMCImageHeight_Int32_2039" },
				{ "HMDProp_DisplayMCImageNumChannels_Int32_2040.DisplayName", "HMDProp_DisplayMCImageNumChannels_Int32" },
				{ "HMDProp_DisplayMCImageNumChannels_Int32_2040.Name", "EVRDeviceProperty_Int32::HMDProp_DisplayMCImageNumChannels_Int32_2040" },
				{ "HMDProp_DisplayMCImageWidth_Int32_2038.DisplayName", "HMDProp_DisplayMCImageWidth_Int32" },
				{ "HMDProp_DisplayMCImageWidth_Int32_2038.Name", "EVRDeviceProperty_Int32::HMDProp_DisplayMCImageWidth_Int32_2038" },
				{ "HMDProp_DisplayMCType_Int32_2008.Comment", "// 1 Prefix = 2000 series\n" },
				{ "HMDProp_DisplayMCType_Int32_2008.DisplayName", "HMDProp_DisplayMCType_Int32" },
				{ "HMDProp_DisplayMCType_Int32_2008.Name", "EVRDeviceProperty_Int32::HMDProp_DisplayMCType_Int32_2008" },
				{ "HMDProp_DisplayMCType_Int32_2008.ToolTip", "1 Prefix = 2000 series" },
				{ "HMDProp_DistortionMeshResolution_Int32_2056.DisplayName", "HMDProp_DistortionMeshResolution_Int32" },
				{ "HMDProp_DistortionMeshResolution_Int32_2056.Name", "EVRDeviceProperty_Int32::HMDProp_DistortionMeshResolution_Int32_2056" },
				{ "HMDProp_EdidProductID_Int32_2015.DisplayName", "HMDProp_EdidProductID_Int32" },
				{ "HMDProp_EdidProductID_Int32_2015.Name", "EVRDeviceProperty_Int32::HMDProp_EdidProductID_Int32_2015" },
				{ "HMDProp_EdidVendorID_Int32_2011.DisplayName", "HMDProp_EdidVendorID_Int32" },
				{ "HMDProp_EdidVendorID_Int32_2011.Name", "EVRDeviceProperty_Int32::HMDProp_EdidVendorID_Int32_2011" },
				{ "HMDProp_ExpectedControllerCount_Int32_2050.DisplayName", "HMDProp_ExpectedControllerCount_Int32" },
				{ "HMDProp_ExpectedControllerCount_Int32_2050.Name", "EVRDeviceProperty_Int32::HMDProp_ExpectedControllerCount_Int32_2050" },
				{ "HMDProp_ExpectedTrackingReferenceCount_Int32_2049.DisplayName", "HMDProp_ExpectedTrackingReferenceCount_Int32" },
				{ "HMDProp_ExpectedTrackingReferenceCount_Int32_2049.Name", "EVRDeviceProperty_Int32::HMDProp_ExpectedTrackingReferenceCount_Int32_2049" },
				{ "HMDProp_HmdTrackingStyle_Int32_2075.DisplayName", "HMDProp_HmdTrackingStyle_Int32" },
				{ "HMDProp_HmdTrackingStyle_Int32_2075.Name", "EVRDeviceProperty_Int32::HMDProp_HmdTrackingStyle_Int32_2075" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "Prop_CameraFrameLayout_Int32_1040.DisplayName", "Prop_CameraFrameLayout_Int32" },
				{ "Prop_CameraFrameLayout_Int32_1040.Name", "EVRDeviceProperty_Int32::Prop_CameraFrameLayout_Int32_1040" },
				{ "Prop_CameraStreamFormat_Int32_1041.Comment", "// EVRTrackedCameraFrameLayout value\n" },
				{ "Prop_CameraStreamFormat_Int32_1041.DisplayName", "Prop_CameraStreamFormat_Int32" },
				{ "Prop_CameraStreamFormat_Int32_1041.Name", "EVRDeviceProperty_Int32::Prop_CameraStreamFormat_Int32_1041" },
				{ "Prop_CameraStreamFormat_Int32_1041.ToolTip", "EVRTrackedCameraFrameLayout value" },
				{ "Prop_DeviceClass_Int32_1029.Comment", "// No prefix = 1000 series\n" },
				{ "Prop_DeviceClass_Int32_1029.DisplayName", "Prop_DeviceClass_Int32" },
				{ "Prop_DeviceClass_Int32_1029.Name", "EVRDeviceProperty_Int32::Prop_DeviceClass_Int32_1029" },
				{ "Prop_DeviceClass_Int32_1029.ToolTip", "No prefix = 1000 series" },
				{ "Prop_NumCameras_Int32_1039.DisplayName", "Prop_NumCameras_Int32" },
				{ "Prop_NumCameras_Int32_1039.Name", "EVRDeviceProperty_Int32::Prop_NumCameras_Int32_1039" },
				{ "TrackRefProp_Nonce_Int32_4008.Comment", "// Tracked device props\n" },
				{ "TrackRefProp_Nonce_Int32_4008.DisplayName", "TrackRefProp_Nonce_Int32" },
				{ "TrackRefProp_Nonce_Int32_4008.Name", "EVRDeviceProperty_Int32::TrackRefProp_Nonce_Int32_4008" },
				{ "TrackRefProp_Nonce_Int32_4008.ToolTip", "Tracked device props" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				nullptr,
				"EVRDeviceProperty_Int32",
				"EVRDeviceProperty_Int32",
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
	static UEnum* EVRDeviceProperty_Float_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_Float"));
		}
		return Singleton;
	}
	template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRDeviceProperty_Float>()
	{
		return EVRDeviceProperty_Float_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_Float(EVRDeviceProperty_Float_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_Float"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float_Hash() { return 2856388855U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_Float"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRDeviceProperty_Float::Prop_DeviceBatteryPercentage_Float_1012", (int64)EVRDeviceProperty_Float::Prop_DeviceBatteryPercentage_Float_1012 },
				{ "EVRDeviceProperty_Float::HMDProp_SecondsFromVsyncToPhotons_Float_2001", (int64)EVRDeviceProperty_Float::HMDProp_SecondsFromVsyncToPhotons_Float_2001 },
				{ "EVRDeviceProperty_Float::HMDProp_DisplayFrequency_Float_2002", (int64)EVRDeviceProperty_Float::HMDProp_DisplayFrequency_Float_2002 },
				{ "EVRDeviceProperty_Float::HMDProp_UserIpdMeters_Float_2003", (int64)EVRDeviceProperty_Float::HMDProp_UserIpdMeters_Float_2003 },
				{ "EVRDeviceProperty_Float::HMDProp_DisplayMCOffset_Float_2009", (int64)EVRDeviceProperty_Float::HMDProp_DisplayMCOffset_Float_2009 },
				{ "EVRDeviceProperty_Float::HMDProp_DisplayMCScale_Float_2010", (int64)EVRDeviceProperty_Float::HMDProp_DisplayMCScale_Float_2010 },
				{ "EVRDeviceProperty_Float::HMDProp_DisplayGCBlackClamp_Float_2014", (int64)EVRDeviceProperty_Float::HMDProp_DisplayGCBlackClamp_Float_2014 },
				{ "EVRDeviceProperty_Float::HMDProp_DisplayGCOffset_Float_2018", (int64)EVRDeviceProperty_Float::HMDProp_DisplayGCOffset_Float_2018 },
				{ "EVRDeviceProperty_Float::HMDProp_DisplayGCScale_Float_2019", (int64)EVRDeviceProperty_Float::HMDProp_DisplayGCScale_Float_2019 },
				{ "EVRDeviceProperty_Float::HMDProp_DisplayGCPrescale_Float_2020", (int64)EVRDeviceProperty_Float::HMDProp_DisplayGCPrescale_Float_2020 },
				{ "EVRDeviceProperty_Float::HMDProp_LensCenterLeftU_Float_2022", (int64)EVRDeviceProperty_Float::HMDProp_LensCenterLeftU_Float_2022 },
				{ "EVRDeviceProperty_Float::HMDProp_LensCenterLeftV_Float_2023", (int64)EVRDeviceProperty_Float::HMDProp_LensCenterLeftV_Float_2023 },
				{ "EVRDeviceProperty_Float::HMDProp_LensCenterRightU_Float_2024", (int64)EVRDeviceProperty_Float::HMDProp_LensCenterRightU_Float_2024 },
				{ "EVRDeviceProperty_Float::HMDProp_LensCenterRightV_Float_2025", (int64)EVRDeviceProperty_Float::HMDProp_LensCenterRightV_Float_2025 },
				{ "EVRDeviceProperty_Float::HMDProp_UserHeadToEyeDepthMeters_Float_2026", (int64)EVRDeviceProperty_Float::HMDProp_UserHeadToEyeDepthMeters_Float_2026 },
				{ "EVRDeviceProperty_Float::HMDProp_ScreenshotHorizontalFieldOfViewDegrees_Float_2034", (int64)EVRDeviceProperty_Float::HMDProp_ScreenshotHorizontalFieldOfViewDegrees_Float_2034 },
				{ "EVRDeviceProperty_Float::HMDProp_ScreenshotVerticalFieldOfViewDegrees_Float_2035", (int64)EVRDeviceProperty_Float::HMDProp_ScreenshotVerticalFieldOfViewDegrees_Float_2035 },
				{ "EVRDeviceProperty_Float::HMDProp_SecondsFromPhotonsToVblank_Float_2042", (int64)EVRDeviceProperty_Float::HMDProp_SecondsFromPhotonsToVblank_Float_2042 },
				{ "EVRDeviceProperty_Float::HMDProp_MinimumIpdStepMeters_Float_2060", (int64)EVRDeviceProperty_Float::HMDProp_MinimumIpdStepMeters_Float_2060 },
				{ "EVRDeviceProperty_Float::TrackRefProp_FieldOfViewLeftDegrees_Float_4000", (int64)EVRDeviceProperty_Float::TrackRefProp_FieldOfViewLeftDegrees_Float_4000 },
				{ "EVRDeviceProperty_Float::TrackRefProp_FieldOfViewRightDegrees_Float_4001", (int64)EVRDeviceProperty_Float::TrackRefProp_FieldOfViewRightDegrees_Float_4001 },
				{ "EVRDeviceProperty_Float::TrackRefProp_FieldOfViewTopDegrees_Float_4002", (int64)EVRDeviceProperty_Float::TrackRefProp_FieldOfViewTopDegrees_Float_4002 },
				{ "EVRDeviceProperty_Float::TrackRefProp_FieldOfViewBottomDegrees_Float_4003", (int64)EVRDeviceProperty_Float::TrackRefProp_FieldOfViewBottomDegrees_Float_4003 },
				{ "EVRDeviceProperty_Float::TrackRefProp_TrackingRangeMinimumMeters_Float_4004", (int64)EVRDeviceProperty_Float::TrackRefProp_TrackingRangeMinimumMeters_Float_4004 },
				{ "EVRDeviceProperty_Float::TrackRefProp_TrackingRangeMaximumMeters_Float_4005", (int64)EVRDeviceProperty_Float::TrackRefProp_TrackingRangeMaximumMeters_Float_4005 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HMDProp_DisplayFrequency_Float_2002.DisplayName", "HMDProp_DisplayFrequency_Float" },
				{ "HMDProp_DisplayFrequency_Float_2002.Name", "EVRDeviceProperty_Float::HMDProp_DisplayFrequency_Float_2002" },
				{ "HMDProp_DisplayGCBlackClamp_Float_2014.DisplayName", "HMDProp_DisplayGCBlackClamp_Float" },
				{ "HMDProp_DisplayGCBlackClamp_Float_2014.Name", "EVRDeviceProperty_Float::HMDProp_DisplayGCBlackClamp_Float_2014" },
				{ "HMDProp_DisplayGCOffset_Float_2018.DisplayName", "HMDProp_DisplayGCOffset_Float" },
				{ "HMDProp_DisplayGCOffset_Float_2018.Name", "EVRDeviceProperty_Float::HMDProp_DisplayGCOffset_Float_2018" },
				{ "HMDProp_DisplayGCPrescale_Float_2020.DisplayName", "HMDProp_DisplayGCPrescale_Float" },
				{ "HMDProp_DisplayGCPrescale_Float_2020.Name", "EVRDeviceProperty_Float::HMDProp_DisplayGCPrescale_Float_2020" },
				{ "HMDProp_DisplayGCScale_Float_2019.DisplayName", "HMDProp_DisplayGCScale_Float" },
				{ "HMDProp_DisplayGCScale_Float_2019.Name", "EVRDeviceProperty_Float::HMDProp_DisplayGCScale_Float_2019" },
				{ "HMDProp_DisplayMCOffset_Float_2009.DisplayName", "HMDProp_DisplayMCOffset_Float" },
				{ "HMDProp_DisplayMCOffset_Float_2009.Name", "EVRDeviceProperty_Float::HMDProp_DisplayMCOffset_Float_2009" },
				{ "HMDProp_DisplayMCScale_Float_2010.DisplayName", "HMDProp_DisplayMCScale_Float" },
				{ "HMDProp_DisplayMCScale_Float_2010.Name", "EVRDeviceProperty_Float::HMDProp_DisplayMCScale_Float_2010" },
				{ "HMDProp_LensCenterLeftU_Float_2022.DisplayName", "HMDProp_LensCenterLeftU_Float" },
				{ "HMDProp_LensCenterLeftU_Float_2022.Name", "EVRDeviceProperty_Float::HMDProp_LensCenterLeftU_Float_2022" },
				{ "HMDProp_LensCenterLeftV_Float_2023.DisplayName", "HMDProp_LensCenterLeftV_Float" },
				{ "HMDProp_LensCenterLeftV_Float_2023.Name", "EVRDeviceProperty_Float::HMDProp_LensCenterLeftV_Float_2023" },
				{ "HMDProp_LensCenterRightU_Float_2024.DisplayName", "HMDProp_LensCenterRightU_Float" },
				{ "HMDProp_LensCenterRightU_Float_2024.Name", "EVRDeviceProperty_Float::HMDProp_LensCenterRightU_Float_2024" },
				{ "HMDProp_LensCenterRightV_Float_2025.DisplayName", "HMDProp_LensCenterRightV_Float" },
				{ "HMDProp_LensCenterRightV_Float_2025.Name", "EVRDeviceProperty_Float::HMDProp_LensCenterRightV_Float_2025" },
				{ "HMDProp_MinimumIpdStepMeters_Float_2060.DisplayName", "HMDProp_MinimumIpdStepMeters_Float" },
				{ "HMDProp_MinimumIpdStepMeters_Float_2060.Name", "EVRDeviceProperty_Float::HMDProp_MinimumIpdStepMeters_Float_2060" },
				{ "HMDProp_ScreenshotHorizontalFieldOfViewDegrees_Float_2034.DisplayName", "HMDProp_ScreenshotHorizontalFieldOfViewDegrees_Float" },
				{ "HMDProp_ScreenshotHorizontalFieldOfViewDegrees_Float_2034.Name", "EVRDeviceProperty_Float::HMDProp_ScreenshotHorizontalFieldOfViewDegrees_Float_2034" },
				{ "HMDProp_ScreenshotVerticalFieldOfViewDegrees_Float_2035.DisplayName", "HMDProp_ScreenshotVerticalFieldOfViewDegrees_Float" },
				{ "HMDProp_ScreenshotVerticalFieldOfViewDegrees_Float_2035.Name", "EVRDeviceProperty_Float::HMDProp_ScreenshotVerticalFieldOfViewDegrees_Float_2035" },
				{ "HMDProp_SecondsFromPhotonsToVblank_Float_2042.DisplayName", "HMDProp_SecondsFromPhotonsToVblank_Float" },
				{ "HMDProp_SecondsFromPhotonsToVblank_Float_2042.Name", "EVRDeviceProperty_Float::HMDProp_SecondsFromPhotonsToVblank_Float_2042" },
				{ "HMDProp_SecondsFromVsyncToPhotons_Float_2001.Comment", "// 1 Prefix = 2000 series\n" },
				{ "HMDProp_SecondsFromVsyncToPhotons_Float_2001.DisplayName", "HMDProp_SecondsFromVsyncToPhotons_Float" },
				{ "HMDProp_SecondsFromVsyncToPhotons_Float_2001.Name", "EVRDeviceProperty_Float::HMDProp_SecondsFromVsyncToPhotons_Float_2001" },
				{ "HMDProp_SecondsFromVsyncToPhotons_Float_2001.ToolTip", "1 Prefix = 2000 series" },
				{ "HMDProp_UserHeadToEyeDepthMeters_Float_2026.DisplayName", "HMDProp_UserHeadToEyeDepthMeters_Float" },
				{ "HMDProp_UserHeadToEyeDepthMeters_Float_2026.Name", "EVRDeviceProperty_Float::HMDProp_UserHeadToEyeDepthMeters_Float_2026" },
				{ "HMDProp_UserIpdMeters_Float_2003.DisplayName", "HMDProp_UserIpdMeters_Float" },
				{ "HMDProp_UserIpdMeters_Float_2003.Name", "EVRDeviceProperty_Float::HMDProp_UserIpdMeters_Float_2003" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "Prop_DeviceBatteryPercentage_Float_1012.Comment", "// No Prefix = 1000 series\n" },
				{ "Prop_DeviceBatteryPercentage_Float_1012.DisplayName", "Prop_DeviceBatteryPercentage_Float" },
				{ "Prop_DeviceBatteryPercentage_Float_1012.Name", "EVRDeviceProperty_Float::Prop_DeviceBatteryPercentage_Float_1012" },
				{ "Prop_DeviceBatteryPercentage_Float_1012.ToolTip", "No Prefix = 1000 series" },
				{ "TrackRefProp_FieldOfViewBottomDegrees_Float_4003.DisplayName", "TrackRefProp_FieldOfViewBottomDegrees_Float" },
				{ "TrackRefProp_FieldOfViewBottomDegrees_Float_4003.Name", "EVRDeviceProperty_Float::TrackRefProp_FieldOfViewBottomDegrees_Float_4003" },
				{ "TrackRefProp_FieldOfViewLeftDegrees_Float_4000.Comment", "// 3 Prefix = 4000 series\n" },
				{ "TrackRefProp_FieldOfViewLeftDegrees_Float_4000.DisplayName", "TrackRefProp_FieldOfViewLeftDegrees_Float" },
				{ "TrackRefProp_FieldOfViewLeftDegrees_Float_4000.Name", "EVRDeviceProperty_Float::TrackRefProp_FieldOfViewLeftDegrees_Float_4000" },
				{ "TrackRefProp_FieldOfViewLeftDegrees_Float_4000.ToolTip", "3 Prefix = 4000 series" },
				{ "TrackRefProp_FieldOfViewRightDegrees_Float_4001.DisplayName", "TrackRefProp_FieldOfViewRightDegrees_Float" },
				{ "TrackRefProp_FieldOfViewRightDegrees_Float_4001.Name", "EVRDeviceProperty_Float::TrackRefProp_FieldOfViewRightDegrees_Float_4001" },
				{ "TrackRefProp_FieldOfViewTopDegrees_Float_4002.DisplayName", "TrackRefProp_FieldOfViewTopDegrees_Float" },
				{ "TrackRefProp_FieldOfViewTopDegrees_Float_4002.Name", "EVRDeviceProperty_Float::TrackRefProp_FieldOfViewTopDegrees_Float_4002" },
				{ "TrackRefProp_TrackingRangeMaximumMeters_Float_4005.DisplayName", "TrackRefProp_TrackingRangeMaximumMeters_Float" },
				{ "TrackRefProp_TrackingRangeMaximumMeters_Float_4005.Name", "EVRDeviceProperty_Float::TrackRefProp_TrackingRangeMaximumMeters_Float_4005" },
				{ "TrackRefProp_TrackingRangeMinimumMeters_Float_4004.DisplayName", "TrackRefProp_TrackingRangeMinimumMeters_Float" },
				{ "TrackRefProp_TrackingRangeMinimumMeters_Float_4004.Name", "EVRDeviceProperty_Float::TrackRefProp_TrackingRangeMinimumMeters_Float_4004" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				nullptr,
				"EVRDeviceProperty_Float",
				"EVRDeviceProperty_Float",
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
	static UEnum* EVRDeviceProperty_Bool_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_Bool"));
		}
		return Singleton;
	}
	template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRDeviceProperty_Bool>()
	{
		return EVRDeviceProperty_Bool_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_Bool(EVRDeviceProperty_Bool_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_Bool"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool_Hash() { return 1916453482U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_Bool"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRDeviceProperty_Bool::Prop_WillDriftInYaw_Bool_1004", (int64)EVRDeviceProperty_Bool::Prop_WillDriftInYaw_Bool_1004 },
				{ "EVRDeviceProperty_Bool::Prop_DeviceIsWireless_Bool_1010", (int64)EVRDeviceProperty_Bool::Prop_DeviceIsWireless_Bool_1010 },
				{ "EVRDeviceProperty_Bool::Prop_DeviceIsCharging_Bool_1011", (int64)EVRDeviceProperty_Bool::Prop_DeviceIsCharging_Bool_1011 },
				{ "EVRDeviceProperty_Bool::Prop_Firmware_UpdateAvailable_Bool_1014", (int64)EVRDeviceProperty_Bool::Prop_Firmware_UpdateAvailable_Bool_1014 },
				{ "EVRDeviceProperty_Bool::Prop_Firmware_ManualUpdate_Bool_1015", (int64)EVRDeviceProperty_Bool::Prop_Firmware_ManualUpdate_Bool_1015 },
				{ "EVRDeviceProperty_Bool::Prop_BlockServerShutdown_Bool_1023", (int64)EVRDeviceProperty_Bool::Prop_BlockServerShutdown_Bool_1023 },
				{ "EVRDeviceProperty_Bool::Prop_CanUnifyCoordinateSystemWithHmd_Bool_1024", (int64)EVRDeviceProperty_Bool::Prop_CanUnifyCoordinateSystemWithHmd_Bool_1024 },
				{ "EVRDeviceProperty_Bool::Prop_ContainsProximitySensor_Bool_1025", (int64)EVRDeviceProperty_Bool::Prop_ContainsProximitySensor_Bool_1025 },
				{ "EVRDeviceProperty_Bool::Prop_DeviceProvidesBatteryStatus_Bool_1026", (int64)EVRDeviceProperty_Bool::Prop_DeviceProvidesBatteryStatus_Bool_1026 },
				{ "EVRDeviceProperty_Bool::Prop_DeviceCanPowerOff_Bool_1027", (int64)EVRDeviceProperty_Bool::Prop_DeviceCanPowerOff_Bool_1027 },
				{ "EVRDeviceProperty_Bool::Prop_HasCamera_Bool_1030", (int64)EVRDeviceProperty_Bool::Prop_HasCamera_Bool_1030 },
				{ "EVRDeviceProperty_Bool::Prop_Firmware_ForceUpdateRequired_Bool_1032", (int64)EVRDeviceProperty_Bool::Prop_Firmware_ForceUpdateRequired_Bool_1032 },
				{ "EVRDeviceProperty_Bool::Prop_ViveSystemButtonFixRequired_Bool_1033", (int64)EVRDeviceProperty_Bool::Prop_ViveSystemButtonFixRequired_Bool_1033 },
				{ "EVRDeviceProperty_Bool::Prop_NeverTracked_Bool_1038", (int64)EVRDeviceProperty_Bool::Prop_NeverTracked_Bool_1038 },
				{ "EVRDeviceProperty_Bool::Prop_Identifiable_Bool_1043", (int64)EVRDeviceProperty_Bool::Prop_Identifiable_Bool_1043 },
				{ "EVRDeviceProperty_Bool::Prop_Firmware_RemindUpdate_Bool_1047", (int64)EVRDeviceProperty_Bool::Prop_Firmware_RemindUpdate_Bool_1047 },
				{ "EVRDeviceProperty_Bool::HMDProp_ReportsTimeSinceVSync_Bool_2000", (int64)EVRDeviceProperty_Bool::HMDProp_ReportsTimeSinceVSync_Bool_2000 },
				{ "EVRDeviceProperty_Bool::HMDProp_IsOnDesktop_Bool_2007", (int64)EVRDeviceProperty_Bool::HMDProp_IsOnDesktop_Bool_2007 },
				{ "EVRDeviceProperty_Bool::HMDProp_DisplaySuppressed_Bool_2036", (int64)EVRDeviceProperty_Bool::HMDProp_DisplaySuppressed_Bool_2036 },
				{ "EVRDeviceProperty_Bool::HMDProp_DisplayAllowNightMode_Bool_2037", (int64)EVRDeviceProperty_Bool::HMDProp_DisplayAllowNightMode_Bool_2037 },
				{ "EVRDeviceProperty_Bool::HMDProp_DriverDirectModeSendsVsyncEvents_Bool_2043", (int64)EVRDeviceProperty_Bool::HMDProp_DriverDirectModeSendsVsyncEvents_Bool_2043 },
				{ "EVRDeviceProperty_Bool::HMDProp_DisplayDebugMode_Bool_2044", (int64)EVRDeviceProperty_Bool::HMDProp_DisplayDebugMode_Bool_2044 },
				{ "EVRDeviceProperty_Bool::HMDProp_DoNotApplyPrediction_Bool_2054", (int64)EVRDeviceProperty_Bool::HMDProp_DoNotApplyPrediction_Bool_2054 },
				{ "EVRDeviceProperty_Bool::HMDProp_DriverIsDrawingControllers_Bool_2057", (int64)EVRDeviceProperty_Bool::HMDProp_DriverIsDrawingControllers_Bool_2057 },
				{ "EVRDeviceProperty_Bool::HMDProp_DriverRequestsApplicationPause_Bool_2058", (int64)EVRDeviceProperty_Bool::HMDProp_DriverRequestsApplicationPause_Bool_2058 },
				{ "EVRDeviceProperty_Bool::HMDProp_DriverRequestsReducedRendering_Bool_2059", (int64)EVRDeviceProperty_Bool::HMDProp_DriverRequestsReducedRendering_Bool_2059 },
				{ "EVRDeviceProperty_Bool::HMDProp_ConfigurationIncludesLighthouse20Features_Bool_2069", (int64)EVRDeviceProperty_Bool::HMDProp_ConfigurationIncludesLighthouse20Features_Bool_2069 },
				{ "EVRDeviceProperty_Bool::HMDProp_DriverProvidedChaperoneVisibility_Bool_2076", (int64)EVRDeviceProperty_Bool::HMDProp_DriverProvidedChaperoneVisibility_Bool_2076 },
				{ "EVRDeviceProperty_Bool::HMDProp_DisplaySupportsMultipleFramerates_Bool_2081", (int64)EVRDeviceProperty_Bool::HMDProp_DisplaySupportsMultipleFramerates_Bool_2081 },
				{ "EVRDeviceProperty_Bool::TrackRefProp_CanWirelessIdentify_Bool_4007", (int64)EVRDeviceProperty_Bool::TrackRefProp_CanWirelessIdentify_Bool_4007 },
				{ "EVRDeviceProperty_Bool::DriverProp_HasDisplayComponent_Bool_6002", (int64)EVRDeviceProperty_Bool::DriverProp_HasDisplayComponent_Bool_6002 },
				{ "EVRDeviceProperty_Bool::DriverProp_HasControllerComponent_Bool_6003", (int64)EVRDeviceProperty_Bool::DriverProp_HasControllerComponent_Bool_6003 },
				{ "EVRDeviceProperty_Bool::DriverProp_HasCameraComponent_Bool_6004", (int64)EVRDeviceProperty_Bool::DriverProp_HasCameraComponent_Bool_6004 },
				{ "EVRDeviceProperty_Bool::DriverProp_HasDriverDirectModeComponent_Bool_6005", (int64)EVRDeviceProperty_Bool::DriverProp_HasDriverDirectModeComponent_Bool_6005 },
				{ "EVRDeviceProperty_Bool::DriverProp_HasVirtualDisplayComponent_Bool_6006", (int64)EVRDeviceProperty_Bool::DriverProp_HasVirtualDisplayComponent_Bool_6006 },
				{ "EVRDeviceProperty_Bool::DriverProp_HasSpatialAnchorsSupport_Bool_6007", (int64)EVRDeviceProperty_Bool::DriverProp_HasSpatialAnchorsSupport_Bool_6007 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DriverProp_HasCameraComponent_Bool_6004.DisplayName", "DriverProp_HasCameraComponent_Bool" },
				{ "DriverProp_HasCameraComponent_Bool_6004.Name", "EVRDeviceProperty_Bool::DriverProp_HasCameraComponent_Bool_6004" },
				{ "DriverProp_HasControllerComponent_Bool_6003.DisplayName", "DriverProp_HasControllerComponent_Bool" },
				{ "DriverProp_HasControllerComponent_Bool_6003.Name", "EVRDeviceProperty_Bool::DriverProp_HasControllerComponent_Bool_6003" },
				{ "DriverProp_HasDisplayComponent_Bool_6002.Comment", "// 5 prefix = 6000 series\n" },
				{ "DriverProp_HasDisplayComponent_Bool_6002.DisplayName", "DriverProp_HasDisplayComponent_Bool" },
				{ "DriverProp_HasDisplayComponent_Bool_6002.Name", "EVRDeviceProperty_Bool::DriverProp_HasDisplayComponent_Bool_6002" },
				{ "DriverProp_HasDisplayComponent_Bool_6002.ToolTip", "5 prefix = 6000 series" },
				{ "DriverProp_HasDriverDirectModeComponent_Bool_6005.DisplayName", "DriverProp_HasDriverDirectModeComponent_Bool" },
				{ "DriverProp_HasDriverDirectModeComponent_Bool_6005.Name", "EVRDeviceProperty_Bool::DriverProp_HasDriverDirectModeComponent_Bool_6005" },
				{ "DriverProp_HasSpatialAnchorsSupport_Bool_6007.DisplayName", "DriverProp_HasSpatialAnchorsSupport_Bool" },
				{ "DriverProp_HasSpatialAnchorsSupport_Bool_6007.Name", "EVRDeviceProperty_Bool::DriverProp_HasSpatialAnchorsSupport_Bool_6007" },
				{ "DriverProp_HasVirtualDisplayComponent_Bool_6006.DisplayName", "DriverProp_HasVirtualDisplayComponent_Bool" },
				{ "DriverProp_HasVirtualDisplayComponent_Bool_6006.Name", "EVRDeviceProperty_Bool::DriverProp_HasVirtualDisplayComponent_Bool_6006" },
				{ "HMDProp_ConfigurationIncludesLighthouse20Features_Bool_2069.DisplayName", "HMDProp_ConfigurationIncludesLighthouse20Features_Bool" },
				{ "HMDProp_ConfigurationIncludesLighthouse20Features_Bool_2069.Name", "EVRDeviceProperty_Bool::HMDProp_ConfigurationIncludesLighthouse20Features_Bool_2069" },
				{ "HMDProp_DisplayAllowNightMode_Bool_2037.DisplayName", "HMDProp_DisplayAllowNightMode_Bool" },
				{ "HMDProp_DisplayAllowNightMode_Bool_2037.Name", "EVRDeviceProperty_Bool::HMDProp_DisplayAllowNightMode_Bool_2037" },
				{ "HMDProp_DisplayDebugMode_Bool_2044.DisplayName", "HMDProp_DisplayDebugMode_Bool" },
				{ "HMDProp_DisplayDebugMode_Bool_2044.Name", "EVRDeviceProperty_Bool::HMDProp_DisplayDebugMode_Bool_2044" },
				{ "HMDProp_DisplaySupportsMultipleFramerates_Bool_2081.DisplayName", "HMDProp_DisplaySupportsMultipleFramerates_Bool" },
				{ "HMDProp_DisplaySupportsMultipleFramerates_Bool_2081.Name", "EVRDeviceProperty_Bool::HMDProp_DisplaySupportsMultipleFramerates_Bool_2081" },
				{ "HMDProp_DisplaySuppressed_Bool_2036.DisplayName", "HMDProp_DisplaySuppressed_Bool" },
				{ "HMDProp_DisplaySuppressed_Bool_2036.Name", "EVRDeviceProperty_Bool::HMDProp_DisplaySuppressed_Bool_2036" },
				{ "HMDProp_DoNotApplyPrediction_Bool_2054.DisplayName", "HMDProp_DoNotApplyPrediction_Bool" },
				{ "HMDProp_DoNotApplyPrediction_Bool_2054.Name", "EVRDeviceProperty_Bool::HMDProp_DoNotApplyPrediction_Bool_2054" },
				{ "HMDProp_DriverDirectModeSendsVsyncEvents_Bool_2043.DisplayName", "HMDProp_DriverDirectModeSendsVsyncEvents_Bool" },
				{ "HMDProp_DriverDirectModeSendsVsyncEvents_Bool_2043.Name", "EVRDeviceProperty_Bool::HMDProp_DriverDirectModeSendsVsyncEvents_Bool_2043" },
				{ "HMDProp_DriverIsDrawingControllers_Bool_2057.DisplayName", "HMDProp_DriverIsDrawingControllers_Bool" },
				{ "HMDProp_DriverIsDrawingControllers_Bool_2057.Name", "EVRDeviceProperty_Bool::HMDProp_DriverIsDrawingControllers_Bool_2057" },
				{ "HMDProp_DriverProvidedChaperoneVisibility_Bool_2076.DisplayName", "HMDProp_DriverProvidedChaperoneVisibility_Bool" },
				{ "HMDProp_DriverProvidedChaperoneVisibility_Bool_2076.Name", "EVRDeviceProperty_Bool::HMDProp_DriverProvidedChaperoneVisibility_Bool_2076" },
				{ "HMDProp_DriverRequestsApplicationPause_Bool_2058.DisplayName", "HMDProp_DriverRequestsApplicationPause_Bool" },
				{ "HMDProp_DriverRequestsApplicationPause_Bool_2058.Name", "EVRDeviceProperty_Bool::HMDProp_DriverRequestsApplicationPause_Bool_2058" },
				{ "HMDProp_DriverRequestsReducedRendering_Bool_2059.DisplayName", "HMDProp_DriverRequestsReducedRendering_Bool" },
				{ "HMDProp_DriverRequestsReducedRendering_Bool_2059.Name", "EVRDeviceProperty_Bool::HMDProp_DriverRequestsReducedRendering_Bool_2059" },
				{ "HMDProp_IsOnDesktop_Bool_2007.DisplayName", "HMDProp_IsOnDesktop_Bool" },
				{ "HMDProp_IsOnDesktop_Bool_2007.Name", "EVRDeviceProperty_Bool::HMDProp_IsOnDesktop_Bool_2007" },
				{ "HMDProp_ReportsTimeSinceVSync_Bool_2000.Comment", "// 1 prefix = 2000 series\n" },
				{ "HMDProp_ReportsTimeSinceVSync_Bool_2000.DisplayName", "HMDProp_ReportsTimeSinceVSync_Bool" },
				{ "HMDProp_ReportsTimeSinceVSync_Bool_2000.Name", "EVRDeviceProperty_Bool::HMDProp_ReportsTimeSinceVSync_Bool_2000" },
				{ "HMDProp_ReportsTimeSinceVSync_Bool_2000.ToolTip", "1 prefix = 2000 series" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "Prop_BlockServerShutdown_Bool_1023.DisplayName", "Prop_BlockServerShutdown_Bool" },
				{ "Prop_BlockServerShutdown_Bool_1023.Name", "EVRDeviceProperty_Bool::Prop_BlockServerShutdown_Bool_1023" },
				{ "Prop_CanUnifyCoordinateSystemWithHmd_Bool_1024.DisplayName", "Prop_CanUnifyCoordinateSystemWithHmd_Bool" },
				{ "Prop_CanUnifyCoordinateSystemWithHmd_Bool_1024.Name", "EVRDeviceProperty_Bool::Prop_CanUnifyCoordinateSystemWithHmd_Bool_1024" },
				{ "Prop_ContainsProximitySensor_Bool_1025.DisplayName", "Prop_ContainsProximitySensor_Bool" },
				{ "Prop_ContainsProximitySensor_Bool_1025.Name", "EVRDeviceProperty_Bool::Prop_ContainsProximitySensor_Bool_1025" },
				{ "Prop_DeviceCanPowerOff_Bool_1027.DisplayName", "Prop_DeviceCanPowerOff_Bool" },
				{ "Prop_DeviceCanPowerOff_Bool_1027.Name", "EVRDeviceProperty_Bool::Prop_DeviceCanPowerOff_Bool_1027" },
				{ "Prop_DeviceIsCharging_Bool_1011.DisplayName", "Prop_DeviceIsCharging_Bool" },
				{ "Prop_DeviceIsCharging_Bool_1011.Name", "EVRDeviceProperty_Bool::Prop_DeviceIsCharging_Bool_1011" },
				{ "Prop_DeviceIsWireless_Bool_1010.DisplayName", "Prop_DeviceIsWireless_Bool" },
				{ "Prop_DeviceIsWireless_Bool_1010.Name", "EVRDeviceProperty_Bool::Prop_DeviceIsWireless_Bool_1010" },
				{ "Prop_DeviceProvidesBatteryStatus_Bool_1026.DisplayName", "Prop_DeviceProvidesBatteryStatus_Bool" },
				{ "Prop_DeviceProvidesBatteryStatus_Bool_1026.Name", "EVRDeviceProperty_Bool::Prop_DeviceProvidesBatteryStatus_Bool_1026" },
				{ "Prop_Firmware_ForceUpdateRequired_Bool_1032.DisplayName", "Prop_Firmware_ForceUpdateRequired_Bool" },
				{ "Prop_Firmware_ForceUpdateRequired_Bool_1032.Name", "EVRDeviceProperty_Bool::Prop_Firmware_ForceUpdateRequired_Bool_1032" },
				{ "Prop_Firmware_ManualUpdate_Bool_1015.DisplayName", "Prop_Firmware_ManualUpdate_Bool" },
				{ "Prop_Firmware_ManualUpdate_Bool_1015.Name", "EVRDeviceProperty_Bool::Prop_Firmware_ManualUpdate_Bool_1015" },
				{ "Prop_Firmware_RemindUpdate_Bool_1047.DisplayName", "Prop_Firmware_RemindUpdate_Bool" },
				{ "Prop_Firmware_RemindUpdate_Bool_1047.Name", "EVRDeviceProperty_Bool::Prop_Firmware_RemindUpdate_Bool_1047" },
				{ "Prop_Firmware_UpdateAvailable_Bool_1014.DisplayName", "Prop_Firmware_UpdateAvailable_Bool" },
				{ "Prop_Firmware_UpdateAvailable_Bool_1014.Name", "EVRDeviceProperty_Bool::Prop_Firmware_UpdateAvailable_Bool_1014" },
				{ "Prop_HasCamera_Bool_1030.DisplayName", "Prop_HasCamera_Bool" },
				{ "Prop_HasCamera_Bool_1030.Name", "EVRDeviceProperty_Bool::Prop_HasCamera_Bool_1030" },
				{ "Prop_Identifiable_Bool_1043.DisplayName", "Prop_Identifiable_Bool" },
				{ "Prop_Identifiable_Bool_1043.Name", "EVRDeviceProperty_Bool::Prop_Identifiable_Bool_1043" },
				{ "Prop_NeverTracked_Bool_1038.DisplayName", "Prop_NeverTracked_Bool" },
				{ "Prop_NeverTracked_Bool_1038.Name", "EVRDeviceProperty_Bool::Prop_NeverTracked_Bool_1038" },
				{ "Prop_ViveSystemButtonFixRequired_Bool_1033.DisplayName", "Prop_ViveSystemButtonFixRequired_Bool" },
				{ "Prop_ViveSystemButtonFixRequired_Bool_1033.Name", "EVRDeviceProperty_Bool::Prop_ViveSystemButtonFixRequired_Bool_1033" },
				{ "Prop_WillDriftInYaw_Bool_1004.Comment", "// No prefix = 1000 series\n" },
				{ "Prop_WillDriftInYaw_Bool_1004.DisplayName", "Prop_WillDriftInYaw_Bool" },
				{ "Prop_WillDriftInYaw_Bool_1004.Name", "EVRDeviceProperty_Bool::Prop_WillDriftInYaw_Bool_1004" },
				{ "Prop_WillDriftInYaw_Bool_1004.ToolTip", "No prefix = 1000 series" },
				{ "TrackRefProp_CanWirelessIdentify_Bool_4007.Comment", "// Tracked devices\n" },
				{ "TrackRefProp_CanWirelessIdentify_Bool_4007.DisplayName", "TrackRefProp_CanWirelessIdentify_Bool" },
				{ "TrackRefProp_CanWirelessIdentify_Bool_4007.Name", "EVRDeviceProperty_Bool::TrackRefProp_CanWirelessIdentify_Bool_4007" },
				{ "TrackRefProp_CanWirelessIdentify_Bool_4007.ToolTip", "Tracked devices" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				nullptr,
				"EVRDeviceProperty_Bool",
				"EVRDeviceProperty_Bool",
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
	static UEnum* EVRDeviceProperty_String_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_String"));
		}
		return Singleton;
	}
	template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRDeviceProperty_String>()
	{
		return EVRDeviceProperty_String_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_String(EVRDeviceProperty_String_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_String"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String_Hash() { return 3970033793U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_String"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRDeviceProperty_String::Prop_TrackingSystemName_String_1000", (int64)EVRDeviceProperty_String::Prop_TrackingSystemName_String_1000 },
				{ "EVRDeviceProperty_String::Prop_ModelNumber_String_1001", (int64)EVRDeviceProperty_String::Prop_ModelNumber_String_1001 },
				{ "EVRDeviceProperty_String::Prop_SerialNumber_String_1002", (int64)EVRDeviceProperty_String::Prop_SerialNumber_String_1002 },
				{ "EVRDeviceProperty_String::Prop_RenderModelName_String_1003", (int64)EVRDeviceProperty_String::Prop_RenderModelName_String_1003 },
				{ "EVRDeviceProperty_String::Prop_ManufacturerName_String_1005", (int64)EVRDeviceProperty_String::Prop_ManufacturerName_String_1005 },
				{ "EVRDeviceProperty_String::Prop_TrackingFirmwareVersion_String_1006", (int64)EVRDeviceProperty_String::Prop_TrackingFirmwareVersion_String_1006 },
				{ "EVRDeviceProperty_String::Prop_HardwareRevision_String_1007", (int64)EVRDeviceProperty_String::Prop_HardwareRevision_String_1007 },
				{ "EVRDeviceProperty_String::Prop_AllWirelessDongleDescriptions_String_1008", (int64)EVRDeviceProperty_String::Prop_AllWirelessDongleDescriptions_String_1008 },
				{ "EVRDeviceProperty_String::Prop_ConnectedWirelessDongle_String_1009", (int64)EVRDeviceProperty_String::Prop_ConnectedWirelessDongle_String_1009 },
				{ "EVRDeviceProperty_String::Prop_Firmware_ManualUpdateURL_String_1016", (int64)EVRDeviceProperty_String::Prop_Firmware_ManualUpdateURL_String_1016 },
				{ "EVRDeviceProperty_String::Prop_Firmware_ProgrammingTarget_String_1028", (int64)EVRDeviceProperty_String::Prop_Firmware_ProgrammingTarget_String_1028 },
				{ "EVRDeviceProperty_String::Prop_DriverVersion_String_1031", (int64)EVRDeviceProperty_String::Prop_DriverVersion_String_1031 },
				{ "EVRDeviceProperty_String::Prop_ResourceRoot_String_1035", (int64)EVRDeviceProperty_String::Prop_ResourceRoot_String_1035 },
				{ "EVRDeviceProperty_String::Prop_RegisteredDeviceType_String_1036", (int64)EVRDeviceProperty_String::Prop_RegisteredDeviceType_String_1036 },
				{ "EVRDeviceProperty_String::Prop_InputProfileName_String_1037", (int64)EVRDeviceProperty_String::Prop_InputProfileName_String_1037 },
				{ "EVRDeviceProperty_String::Prop_AdditionalDeviceSettingsPath_String_1042", (int64)EVRDeviceProperty_String::Prop_AdditionalDeviceSettingsPath_String_1042 },
				{ "EVRDeviceProperty_String::Prop_AdditionalSystemReportData_String_1045", (int64)EVRDeviceProperty_String::Prop_AdditionalSystemReportData_String_1045 },
				{ "EVRDeviceProperty_String::Prop_CompositeFirmwareVersion_String_1046", (int64)EVRDeviceProperty_String::Prop_CompositeFirmwareVersion_String_1046 },
				{ "EVRDeviceProperty_String::HMDProp_DisplayMCImageLeft_String_2012", (int64)EVRDeviceProperty_String::HMDProp_DisplayMCImageLeft_String_2012 },
				{ "EVRDeviceProperty_String::HMDProp_DisplayMCImageRight_String_2013", (int64)EVRDeviceProperty_String::HMDProp_DisplayMCImageRight_String_2013 },
				{ "EVRDeviceProperty_String::HMDProp_DisplayGCImage_String_2021", (int64)EVRDeviceProperty_String::HMDProp_DisplayGCImage_String_2021 },
				{ "EVRDeviceProperty_String::HMDProp_CameraFirmwareDescription_String_2028", (int64)EVRDeviceProperty_String::HMDProp_CameraFirmwareDescription_String_2028 },
				{ "EVRDeviceProperty_String::HMDProp_DriverProvidedChaperonePath_String_2048", (int64)EVRDeviceProperty_String::HMDProp_DriverProvidedChaperonePath_String_2048 },
				{ "EVRDeviceProperty_String::HMDProp_ExpectedControllerType_String_2074", (int64)EVRDeviceProperty_String::HMDProp_ExpectedControllerType_String_2074 },
				{ "EVRDeviceProperty_String::HMDProp_DashboardLayoutPathName_String_2090", (int64)EVRDeviceProperty_String::HMDProp_DashboardLayoutPathName_String_2090 },
				{ "EVRDeviceProperty_String::ControllerProp_AttachedDeviceId_String_3000", (int64)EVRDeviceProperty_String::ControllerProp_AttachedDeviceId_String_3000 },
				{ "EVRDeviceProperty_String::TrackRefProp_ModeLabel_String_4006", (int64)EVRDeviceProperty_String::TrackRefProp_ModeLabel_String_4006 },
				{ "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceOff_String_5001", (int64)EVRDeviceProperty_String::UIProp_NamedIconPathDeviceOff_String_5001 },
				{ "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceSearching_String_5002", (int64)EVRDeviceProperty_String::UIProp_NamedIconPathDeviceSearching_String_5002 },
				{ "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceSearchingAlert_String_5003", (int64)EVRDeviceProperty_String::UIProp_NamedIconPathDeviceSearchingAlert_String_5003 },
				{ "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceReady_String_5004", (int64)EVRDeviceProperty_String::UIProp_NamedIconPathDeviceReady_String_5004 },
				{ "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceReadyAlert_String_5005", (int64)EVRDeviceProperty_String::UIProp_NamedIconPathDeviceReadyAlert_String_5005 },
				{ "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceNotReady_String_5006", (int64)EVRDeviceProperty_String::UIProp_NamedIconPathDeviceNotReady_String_5006 },
				{ "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceStandby_String_5007", (int64)EVRDeviceProperty_String::UIProp_NamedIconPathDeviceStandby_String_5007 },
				{ "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceAlertLow_String_5008", (int64)EVRDeviceProperty_String::UIProp_NamedIconPathDeviceAlertLow_String_5008 },
				{ "EVRDeviceProperty_String::DriverProp_UserConfigPath_String_6000", (int64)EVRDeviceProperty_String::DriverProp_UserConfigPath_String_6000 },
				{ "EVRDeviceProperty_String::DriverProp_InstallPath_String_6001", (int64)EVRDeviceProperty_String::DriverProp_InstallPath_String_6001 },
				{ "EVRDeviceProperty_String::DriverProp_ControllerType_String_7000", (int64)EVRDeviceProperty_String::DriverProp_ControllerType_String_7000 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/*\n// Not implementing currently\n\n// Properties that are unique to TrackedDeviceClass_HMD\nProp_DisplayMCImageData_Binary\x09\x09\x09\x09= 2041,\n\nProp_IconPathName_String = 5000, // DEPRECATED. Value not referenced. Now expected to be part of icon path properties.\n\n\n// Not implemented because very little use, and names are huuggge.....\nProp_NamedIconPathControllerLeftDeviceOff_String_2051\nProp_NamedIconPAthControllerRightDeviceOff_String_2052\nProp_NamedIconPathTrackingReferenceDeviceOff_String_2053\n\n\n// Properties that are used by helpers, but are opaque to applications\nProp_DisplayHiddenArea_Binary_Start\x09\x09\x09\x09= 5100,\nProp_DisplayHiddenArea_Binary_End\x09\x09\x09\x09= 5150,\nProp_ParentContainer\x09\x09\x09\x09\x09\x09\x09= 5151\n\n// Vendors are free to expose private debug data in this reserved region\nProp_VendorSpecific_Reserved_Start = 10000,\nProp_VendorSpecific_Reserved_End = 10999,\n\nProp_ImuFactoryGyroBias_Vector3\x09\x09\x09\x09= 2064,\nProp_ImuFactoryGyroScale_Vector3\x09\x09\x09= 2065,\nProp_ImuFactoryAccelerometerBias_Vector3\x09= 2066,\nProp_ImuFactoryAccelerometerScale_Vector3\x09= 2067,\n// reserved 2068\n\n// Driver requested mura correction properties\nProp_DriverRequestedMuraCorrectionMode_Int32\x09\x09= 2200,\nProp_DriverRequestedMuraFeather_InnerLeft_Int32\x09\x09= 2201,\nProp_DriverRequestedMuraFeather_InnerRight_Int32\x09= 2202,\nProp_DriverRequestedMuraFeather_InnerTop_Int32\x09\x09= 2203,\nProp_DriverRequestedMuraFeather_InnerBottom_Int32\x09= 2204,\nProp_DriverRequestedMuraFeather_OuterLeft_Int32\x09\x09= 2205,\nProp_DriverRequestedMuraFeather_OuterRight_Int32\x09= 2206,\nProp_DriverRequestedMuraFeather_OuterTop_Int32\x09\x09= 2207,\nProp_DriverRequestedMuraFeather_OuterBottom_Int32\x09= 2208,\n\nProp_TrackedDeviceProperty_Max\x09\x09\x09\x09= 1000000,\n\n\nProp_CameraWhiteBalance_Vector4_Array = 2071, // Prop_NumCameras_Int32-sized array of float[4] RGBG white balance calibration data (max size is vr::k_unMaxCameras)\nProp_CameraDistortionFunction_Int32_Array = 2072, // Prop_NumCameras_Int32-sized array of vr::EVRDistortionFunctionType values (max size is vr::k_unMaxCameras)\nProp_CameraDistortionCoefficients_Float_Array = 2073, // Prop_NumCameras_Int32-sized array of double[vr::k_unMaxDistortionFunctionParameters] (max size is vr::k_unMaxCameras)\nProp_DisplayAvailableFrameRates_Float_Array = 2080, // populated by compositor from actual EDID list when available from GPU driver\n*/// #TODO: Update these\n" },
				{ "ControllerProp_AttachedDeviceId_String_3000.Comment", "// 2 prefix = 3000 series\n" },
				{ "ControllerProp_AttachedDeviceId_String_3000.DisplayName", "ControllerProp_AttachedDeviceId_String" },
				{ "ControllerProp_AttachedDeviceId_String_3000.Name", "EVRDeviceProperty_String::ControllerProp_AttachedDeviceId_String_3000" },
				{ "ControllerProp_AttachedDeviceId_String_3000.ToolTip", "2 prefix = 3000 series" },
				{ "DriverProp_ControllerType_String_7000.Comment", "// Properties that are set internally based on other information provided by drivers\n" },
				{ "DriverProp_ControllerType_String_7000.DisplayName", "DriverProp_ControllerType_String" },
				{ "DriverProp_ControllerType_String_7000.Name", "EVRDeviceProperty_String::DriverProp_ControllerType_String_7000" },
				{ "DriverProp_ControllerType_String_7000.ToolTip", "Properties that are set internally based on other information provided by drivers" },
				{ "DriverProp_InstallPath_String_6001.DisplayName", "DriverProp_InstallPath_String" },
				{ "DriverProp_InstallPath_String_6001.Name", "EVRDeviceProperty_String::DriverProp_InstallPath_String_6001" },
				{ "DriverProp_UserConfigPath_String_6000.Comment", "// 5 prefix = 6000 series\n" },
				{ "DriverProp_UserConfigPath_String_6000.DisplayName", "DriverProp_UserConfigPath_String" },
				{ "DriverProp_UserConfigPath_String_6000.Name", "EVRDeviceProperty_String::DriverProp_UserConfigPath_String_6000" },
				{ "DriverProp_UserConfigPath_String_6000.ToolTip", "5 prefix = 6000 series" },
				{ "HMDProp_CameraFirmwareDescription_String_2028.DisplayName", "HMDProp_CameraFirmwareDescription_String" },
				{ "HMDProp_CameraFirmwareDescription_String_2028.Name", "EVRDeviceProperty_String::HMDProp_CameraFirmwareDescription_String_2028" },
				{ "HMDProp_DashboardLayoutPathName_String_2090.DisplayName", "HMDProp_DashboardLayoutPathName_String" },
				{ "HMDProp_DashboardLayoutPathName_String_2090.Name", "EVRDeviceProperty_String::HMDProp_DashboardLayoutPathName_String_2090" },
				{ "HMDProp_DisplayGCImage_String_2021.DisplayName", "HMDProp_DisplayGCImage_String" },
				{ "HMDProp_DisplayGCImage_String_2021.Name", "EVRDeviceProperty_String::HMDProp_DisplayGCImage_String_2021" },
				{ "HMDProp_DisplayMCImageLeft_String_2012.Comment", "// 1 prefix = 2000 series\n" },
				{ "HMDProp_DisplayMCImageLeft_String_2012.DisplayName", "HMDProp_DisplayMCImageLeft_String" },
				{ "HMDProp_DisplayMCImageLeft_String_2012.Name", "EVRDeviceProperty_String::HMDProp_DisplayMCImageLeft_String_2012" },
				{ "HMDProp_DisplayMCImageLeft_String_2012.ToolTip", "1 prefix = 2000 series" },
				{ "HMDProp_DisplayMCImageRight_String_2013.DisplayName", "HMDProp_DisplayMCImageRight_String" },
				{ "HMDProp_DisplayMCImageRight_String_2013.Name", "EVRDeviceProperty_String::HMDProp_DisplayMCImageRight_String_2013" },
				{ "HMDProp_DriverProvidedChaperonePath_String_2048.DisplayName", "HMDProp_DriverProvidedChaperonePath_String" },
				{ "HMDProp_DriverProvidedChaperonePath_String_2048.Name", "EVRDeviceProperty_String::HMDProp_DriverProvidedChaperonePath_String_2048" },
				{ "HMDProp_ExpectedControllerType_String_2074.DisplayName", "HMDProp_ExpectedControllerType_String" },
				{ "HMDProp_ExpectedControllerType_String_2074.Name", "EVRDeviceProperty_String::HMDProp_ExpectedControllerType_String_2074" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "Prop_AdditionalDeviceSettingsPath_String_1042.DisplayName", "Prop_AdditionalDeviceSettingsPath_String" },
				{ "Prop_AdditionalDeviceSettingsPath_String_1042.Name", "EVRDeviceProperty_String::Prop_AdditionalDeviceSettingsPath_String_1042" },
				{ "Prop_AdditionalSystemReportData_String_1045.DisplayName", "Prop_AdditionalSystemReportData_String" },
				{ "Prop_AdditionalSystemReportData_String_1045.Name", "EVRDeviceProperty_String::Prop_AdditionalSystemReportData_String_1045" },
				{ "Prop_AllWirelessDongleDescriptions_String_1008.DisplayName", "Prop_AllWirelessDongleDescriptions_String" },
				{ "Prop_AllWirelessDongleDescriptions_String_1008.Name", "EVRDeviceProperty_String::Prop_AllWirelessDongleDescriptions_String_1008" },
				{ "Prop_CompositeFirmwareVersion_String_1046.DisplayName", "Prop_CompositeFirmwareVersion_String" },
				{ "Prop_CompositeFirmwareVersion_String_1046.Name", "EVRDeviceProperty_String::Prop_CompositeFirmwareVersion_String_1046" },
				{ "Prop_ConnectedWirelessDongle_String_1009.DisplayName", "Prop_ConnectedWirelessDongle_String" },
				{ "Prop_ConnectedWirelessDongle_String_1009.Name", "EVRDeviceProperty_String::Prop_ConnectedWirelessDongle_String_1009" },
				{ "Prop_DriverVersion_String_1031.DisplayName", "Prop_DriverVersion_String" },
				{ "Prop_DriverVersion_String_1031.Name", "EVRDeviceProperty_String::Prop_DriverVersion_String_1031" },
				{ "Prop_Firmware_ManualUpdateURL_String_1016.DisplayName", "Prop_Firmware_ManualUpdateURL_String" },
				{ "Prop_Firmware_ManualUpdateURL_String_1016.Name", "EVRDeviceProperty_String::Prop_Firmware_ManualUpdateURL_String_1016" },
				{ "Prop_Firmware_ProgrammingTarget_String_1028.DisplayName", "Prop_Firmware_ProgrammingTarget_String" },
				{ "Prop_Firmware_ProgrammingTarget_String_1028.Name", "EVRDeviceProperty_String::Prop_Firmware_ProgrammingTarget_String_1028" },
				{ "Prop_HardwareRevision_String_1007.DisplayName", "Prop_HardwareRevision_String" },
				{ "Prop_HardwareRevision_String_1007.Name", "EVRDeviceProperty_String::Prop_HardwareRevision_String_1007" },
				{ "Prop_InputProfileName_String_1037.DisplayName", "Prop_InputProfileName_String" },
				{ "Prop_InputProfileName_String_1037.Name", "EVRDeviceProperty_String::Prop_InputProfileName_String_1037" },
				{ "Prop_ManufacturerName_String_1005.DisplayName", "Prop_ManufacturerName_String" },
				{ "Prop_ManufacturerName_String_1005.Name", "EVRDeviceProperty_String::Prop_ManufacturerName_String_1005" },
				{ "Prop_ModelNumber_String_1001.DisplayName", "Prop_ModelNumber_String" },
				{ "Prop_ModelNumber_String_1001.Name", "EVRDeviceProperty_String::Prop_ModelNumber_String_1001" },
				{ "Prop_RegisteredDeviceType_String_1036.DisplayName", "Prop_RegisteredDeviceType_String" },
				{ "Prop_RegisteredDeviceType_String_1036.Name", "EVRDeviceProperty_String::Prop_RegisteredDeviceType_String_1036" },
				{ "Prop_RenderModelName_String_1003.DisplayName", "Prop_RenderModelName_String" },
				{ "Prop_RenderModelName_String_1003.Name", "EVRDeviceProperty_String::Prop_RenderModelName_String_1003" },
				{ "Prop_ResourceRoot_String_1035.DisplayName", "Prop_ResourceRoot_String" },
				{ "Prop_ResourceRoot_String_1035.Name", "EVRDeviceProperty_String::Prop_ResourceRoot_String_1035" },
				{ "Prop_SerialNumber_String_1002.DisplayName", "Prop_SerialNumber_String" },
				{ "Prop_SerialNumber_String_1002.Name", "EVRDeviceProperty_String::Prop_SerialNumber_String_1002" },
				{ "Prop_TrackingFirmwareVersion_String_1006.DisplayName", "Prop_TrackingFirmwareVersion_String" },
				{ "Prop_TrackingFirmwareVersion_String_1006.Name", "EVRDeviceProperty_String::Prop_TrackingFirmwareVersion_String_1006" },
				{ "Prop_TrackingSystemName_String_1000.Comment", "// No prefix = 1000 series\n" },
				{ "Prop_TrackingSystemName_String_1000.DisplayName", "Prop_TrackingSystemName_String" },
				{ "Prop_TrackingSystemName_String_1000.Name", "EVRDeviceProperty_String::Prop_TrackingSystemName_String_1000" },
				{ "Prop_TrackingSystemName_String_1000.ToolTip", "No prefix = 1000 series" },
				{ "ToolTip", "// Not implementing currently\n\n// Properties that are unique to TrackedDeviceClass_HMD\nProp_DisplayMCImageData_Binary                         = 2041,\n\nProp_IconPathName_String = 5000, // DEPRECATED. Value not referenced. Now expected to be part of icon path properties.\n\n\n// Not implemented because very little use, and names are huuggge.....\nProp_NamedIconPathControllerLeftDeviceOff_String_2051\nProp_NamedIconPAthControllerRightDeviceOff_String_2052\nProp_NamedIconPathTrackingReferenceDeviceOff_String_2053\n\n\n// Properties that are used by helpers, but are opaque to applications\nProp_DisplayHiddenArea_Binary_Start                            = 5100,\nProp_DisplayHiddenArea_Binary_End                              = 5150,\nProp_ParentContainer                                                   = 5151\n\n// Vendors are free to expose private debug data in this reserved region\nProp_VendorSpecific_Reserved_Start = 10000,\nProp_VendorSpecific_Reserved_End = 10999,\n\nProp_ImuFactoryGyroBias_Vector3                                = 2064,\nProp_ImuFactoryGyroScale_Vector3                       = 2065,\nProp_ImuFactoryAccelerometerBias_Vector3       = 2066,\nProp_ImuFactoryAccelerometerScale_Vector3      = 2067,\n// reserved 2068\n\n// Driver requested mura correction properties\nProp_DriverRequestedMuraCorrectionMode_Int32           = 2200,\nProp_DriverRequestedMuraFeather_InnerLeft_Int32                = 2201,\nProp_DriverRequestedMuraFeather_InnerRight_Int32       = 2202,\nProp_DriverRequestedMuraFeather_InnerTop_Int32         = 2203,\nProp_DriverRequestedMuraFeather_InnerBottom_Int32      = 2204,\nProp_DriverRequestedMuraFeather_OuterLeft_Int32                = 2205,\nProp_DriverRequestedMuraFeather_OuterRight_Int32       = 2206,\nProp_DriverRequestedMuraFeather_OuterTop_Int32         = 2207,\nProp_DriverRequestedMuraFeather_OuterBottom_Int32      = 2208,\n\nProp_TrackedDeviceProperty_Max                         = 1000000,\n\n\nProp_CameraWhiteBalance_Vector4_Array = 2071, // Prop_NumCameras_Int32-sized array of float[4] RGBG white balance calibration data (max size is vr::k_unMaxCameras)\nProp_CameraDistortionFunction_Int32_Array = 2072, // Prop_NumCameras_Int32-sized array of vr::EVRDistortionFunctionType values (max size is vr::k_unMaxCameras)\nProp_CameraDistortionCoefficients_Float_Array = 2073, // Prop_NumCameras_Int32-sized array of double[vr::k_unMaxDistortionFunctionParameters] (max size is vr::k_unMaxCameras)\nProp_DisplayAvailableFrameRates_Float_Array = 2080, // populated by compositor from actual EDID list when available from GPU driver\n// #TODO: Update these" },
				{ "TrackRefProp_ModeLabel_String_4006.Comment", "// 3 prefix = 4000 series\n" },
				{ "TrackRefProp_ModeLabel_String_4006.DisplayName", "TrackRefProp_ModeLabel_String" },
				{ "TrackRefProp_ModeLabel_String_4006.Name", "EVRDeviceProperty_String::TrackRefProp_ModeLabel_String_4006" },
				{ "TrackRefProp_ModeLabel_String_4006.ToolTip", "3 prefix = 4000 series" },
				{ "UIProp_NamedIconPathDeviceAlertLow_String_5008.DisplayName", "UIProp_NamedIconPathDeviceAlertLow_String" },
				{ "UIProp_NamedIconPathDeviceAlertLow_String_5008.Name", "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceAlertLow_String_5008" },
				{ "UIProp_NamedIconPathDeviceNotReady_String_5006.DisplayName", "UIProp_NamedIconPathDeviceNotReady_String" },
				{ "UIProp_NamedIconPathDeviceNotReady_String_5006.Name", "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceNotReady_String_5006" },
				{ "UIProp_NamedIconPathDeviceOff_String_5001.Comment", "// 4 prefix = 5000 series\n" },
				{ "UIProp_NamedIconPathDeviceOff_String_5001.DisplayName", "UIProp_NamedIconPathDeviceOff_String" },
				{ "UIProp_NamedIconPathDeviceOff_String_5001.Name", "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceOff_String_5001" },
				{ "UIProp_NamedIconPathDeviceOff_String_5001.ToolTip", "4 prefix = 5000 series" },
				{ "UIProp_NamedIconPathDeviceReady_String_5004.DisplayName", "UIProp_NamedIconPathDeviceReady_String" },
				{ "UIProp_NamedIconPathDeviceReady_String_5004.Name", "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceReady_String_5004" },
				{ "UIProp_NamedIconPathDeviceReadyAlert_String_5005.DisplayName", "UIProp_NamedIconPathDeviceReadyAlert_String" },
				{ "UIProp_NamedIconPathDeviceReadyAlert_String_5005.Name", "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceReadyAlert_String_5005" },
				{ "UIProp_NamedIconPathDeviceSearching_String_5002.DisplayName", "UIProp_NamedIconPathDeviceSearching_String" },
				{ "UIProp_NamedIconPathDeviceSearching_String_5002.Name", "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceSearching_String_5002" },
				{ "UIProp_NamedIconPathDeviceSearchingAlert_String_5003.DisplayName", "UIProp_NamedIconPathDeviceSearchingAlert_String_" },
				{ "UIProp_NamedIconPathDeviceSearchingAlert_String_5003.Name", "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceSearchingAlert_String_5003" },
				{ "UIProp_NamedIconPathDeviceStandby_String_5007.DisplayName", "UIProp_NamedIconPathDeviceStandby_String" },
				{ "UIProp_NamedIconPathDeviceStandby_String_5007.Name", "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceStandby_String_5007" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				nullptr,
				"EVRDeviceProperty_String",
				"EVRDeviceProperty_String",
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
	static UEnum* EBPSteamVRTrackedDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EBPSteamVRTrackedDeviceType"));
		}
		return Singleton;
	}
	template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPSteamVRTrackedDeviceType>()
	{
		return EBPSteamVRTrackedDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPSteamVRTrackedDeviceType(EBPSteamVRTrackedDeviceType_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EBPSteamVRTrackedDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType_Hash() { return 1081987324U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPSteamVRTrackedDeviceType"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPSteamVRTrackedDeviceType::Controller", (int64)EBPSteamVRTrackedDeviceType::Controller },
				{ "EBPSteamVRTrackedDeviceType::TrackingReference", (int64)EBPSteamVRTrackedDeviceType::TrackingReference },
				{ "EBPSteamVRTrackedDeviceType::Other", (int64)EBPSteamVRTrackedDeviceType::Other },
				{ "EBPSteamVRTrackedDeviceType::Invalid", (int64)EBPSteamVRTrackedDeviceType::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// #TODO: Update these\n" },
				{ "Controller.Comment", "/** Represents a Steam VR Controller */" },
				{ "Controller.Name", "EBPSteamVRTrackedDeviceType::Controller" },
				{ "Controller.ToolTip", "Represents a Steam VR Controller" },
				{ "Invalid.Comment", "/** DeviceId is invalid */" },
				{ "Invalid.Name", "EBPSteamVRTrackedDeviceType::Invalid" },
				{ "Invalid.ToolTip", "DeviceId is invalid" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "Other.Comment", "/** Misc. device types, for future expansion */" },
				{ "Other.Name", "EBPSteamVRTrackedDeviceType::Other" },
				{ "Other.ToolTip", "Misc. device types, for future expansion" },
				{ "ToolTip", "#TODO: Update these" },
				{ "TrackingReference.Comment", "/** Represents a static tracking reference device, such as a Lighthouse or tracking camera */" },
				{ "TrackingReference.Name", "EBPSteamVRTrackedDeviceType::TrackingReference" },
				{ "TrackingReference.ToolTip", "Represents a static tracking reference device, such as a Lighthouse or tracking camera" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				nullptr,
				"EBPSteamVRTrackedDeviceType",
				"EBPSteamVRTrackedDeviceType",
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
	static UEnum* EAsyncBlueprintResultSwitch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EAsyncBlueprintResultSwitch"));
		}
		return Singleton;
	}
	template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EAsyncBlueprintResultSwitch>()
	{
		return EAsyncBlueprintResultSwitch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAsyncBlueprintResultSwitch(EAsyncBlueprintResultSwitch_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EAsyncBlueprintResultSwitch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch_Hash() { return 2432647524U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAsyncBlueprintResultSwitch"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAsyncBlueprintResultSwitch::OnSuccess", (int64)EAsyncBlueprintResultSwitch::OnSuccess },
				{ "EAsyncBlueprintResultSwitch::AsyncLoading", (int64)EAsyncBlueprintResultSwitch::AsyncLoading },
				{ "EAsyncBlueprintResultSwitch::OnFailure", (int64)EAsyncBlueprintResultSwitch::OnFailure },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AsyncLoading.Comment", "// On still loading async\n" },
				{ "AsyncLoading.Name", "EAsyncBlueprintResultSwitch::AsyncLoading" },
				{ "AsyncLoading.ToolTip", "On still loading async" },
				{ "Comment", "// This will make using the load model as async easier to understand\n" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "OnFailure.Comment", "// On Failure\n" },
				{ "OnFailure.Name", "EAsyncBlueprintResultSwitch::OnFailure" },
				{ "OnFailure.ToolTip", "On Failure" },
				{ "OnSuccess.Comment", "// On Success \n" },
				{ "OnSuccess.Name", "EAsyncBlueprintResultSwitch::OnSuccess" },
				{ "OnSuccess.ToolTip", "On Success" },
				{ "ToolTip", "This will make using the load model as async easier to understand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				nullptr,
				"EAsyncBlueprintResultSwitch",
				"EAsyncBlueprintResultSwitch",
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
	static UEnum* EOpenVRCameraFrameType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EOpenVRCameraFrameType"));
		}
		return Singleton;
	}
	template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EOpenVRCameraFrameType>()
	{
		return EOpenVRCameraFrameType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOpenVRCameraFrameType(EOpenVRCameraFrameType_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EOpenVRCameraFrameType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType_Hash() { return 2409308472U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOpenVRCameraFrameType"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOpenVRCameraFrameType::VRFrameType_Distorted", (int64)EOpenVRCameraFrameType::VRFrameType_Distorted },
				{ "EOpenVRCameraFrameType::VRFrameType_Undistorted", (int64)EOpenVRCameraFrameType::VRFrameType_Undistorted },
				{ "EOpenVRCameraFrameType::VRFrameType_MaximumUndistorted", (int64)EOpenVRCameraFrameType::VRFrameType_MaximumUndistorted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "VRFrameType_Distorted.Name", "EOpenVRCameraFrameType::VRFrameType_Distorted" },
				{ "VRFrameType_MaximumUndistorted.Name", "EOpenVRCameraFrameType::VRFrameType_MaximumUndistorted" },
				{ "VRFrameType_Undistorted.Name", "EOpenVRCameraFrameType::VRFrameType_Undistorted" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				nullptr,
				"EOpenVRCameraFrameType",
				"EOpenVRCameraFrameType",
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
	static UEnum* EBPOVRResultSwitch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EBPOVRResultSwitch"));
		}
		return Singleton;
	}
	template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPOVRResultSwitch>()
	{
		return EBPOVRResultSwitch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPOVRResultSwitch(EBPOVRResultSwitch_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EBPOVRResultSwitch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch_Hash() { return 3721919718U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPOVRResultSwitch"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPOVRResultSwitch::OnSucceeded", (int64)EBPOVRResultSwitch::OnSucceeded },
				{ "EBPOVRResultSwitch::OnFailed", (int64)EBPOVRResultSwitch::OnFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// This makes a lot of the blueprint functions cleaner\n" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "OnFailed.Comment", "// On Failure\n" },
				{ "OnFailed.Name", "EBPOVRResultSwitch::OnFailed" },
				{ "OnFailed.ToolTip", "On Failure" },
				{ "OnSucceeded.Comment", "// On Success\n" },
				{ "OnSucceeded.Name", "EBPOVRResultSwitch::OnSucceeded" },
				{ "OnSucceeded.ToolTip", "On Success" },
				{ "ToolTip", "This makes a lot of the blueprint functions cleaner" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				nullptr,
				"EBPOVRResultSwitch",
				"EBPOVRResultSwitch",
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
	static UEnum* EBPOpenVRTrackedDeviceClass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRTrackedDeviceClass, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EBPOpenVRTrackedDeviceClass"));
		}
		return Singleton;
	}
	template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPOpenVRTrackedDeviceClass>()
	{
		return EBPOpenVRTrackedDeviceClass_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPOpenVRTrackedDeviceClass(EBPOpenVRTrackedDeviceClass_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EBPOpenVRTrackedDeviceClass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRTrackedDeviceClass_Hash() { return 4045028521U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRTrackedDeviceClass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPOpenVRTrackedDeviceClass"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRTrackedDeviceClass_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_Invalid", (int64)EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_Invalid },
				{ "EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_HMD", (int64)EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_HMD },
				{ "EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_Controller", (int64)EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_Controller },
				{ "EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_GenericTracker", (int64)EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_GenericTracker },
				{ "EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_TrackingReference", (int64)EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_TrackingReference },
				{ "EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_DisplayRedirect", (int64)EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_DisplayRedirect },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "TrackedDeviceClass_Controller.Comment", "// Head-Mounted Displays\n" },
				{ "TrackedDeviceClass_Controller.Name", "EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_Controller" },
				{ "TrackedDeviceClass_Controller.ToolTip", "Head-Mounted Displays" },
				{ "TrackedDeviceClass_DisplayRedirect.Comment", "// Camera and base stations that serve as tracking reference points\n" },
				{ "TrackedDeviceClass_DisplayRedirect.Name", "EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_DisplayRedirect" },
				{ "TrackedDeviceClass_DisplayRedirect.ToolTip", "Camera and base stations that serve as tracking reference points" },
				{ "TrackedDeviceClass_GenericTracker.Comment", "// Tracked controllers\n" },
				{ "TrackedDeviceClass_GenericTracker.Name", "EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_GenericTracker" },
				{ "TrackedDeviceClass_GenericTracker.ToolTip", "Tracked controllers" },
				{ "TrackedDeviceClass_HMD.Comment", "// the ID was not valid.\n" },
				{ "TrackedDeviceClass_HMD.Name", "EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_HMD" },
				{ "TrackedDeviceClass_HMD.ToolTip", "the ID was not valid." },
				{ "TrackedDeviceClass_Invalid.Comment", "// #TODO: Keep up to date\n//enum ETrackedDeviceClass - copied from valves enum\n" },
				{ "TrackedDeviceClass_Invalid.Name", "EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_Invalid" },
				{ "TrackedDeviceClass_Invalid.ToolTip", "#TODO: Keep up to date\nenum ETrackedDeviceClass - copied from valves enum" },
				{ "TrackedDeviceClass_TrackingReference.Comment", "// Generic trackers, similar to controllers\n" },
				{ "TrackedDeviceClass_TrackingReference.Name", "EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_TrackingReference" },
				{ "TrackedDeviceClass_TrackingReference.ToolTip", "Generic trackers, similar to controllers" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				nullptr,
				"EBPOpenVRTrackedDeviceClass",
				"EBPOpenVRTrackedDeviceClass",
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
class UScriptStruct* FBPOpenVRCameraHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENVREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOpenVRCameraHandle, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("BPOpenVRCameraHandle"), sizeof(FBPOpenVRCameraHandle), Get_Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_Hash());
	}
	return Singleton;
}
template<> OPENVREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPOpenVRCameraHandle>()
{
	return FBPOpenVRCameraHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPOpenVRCameraHandle(FBPOpenVRCameraHandle::StaticStruct, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("BPOpenVRCameraHandle"), false, nullptr, nullptr);
static struct FScriptStruct_OpenVRExpansionPlugin_StaticRegisterNativesFBPOpenVRCameraHandle
{
	FScriptStruct_OpenVRExpansionPlugin_StaticRegisterNativesFBPOpenVRCameraHandle()
	{
		UScriptStruct::DeferCppStructOps<FBPOpenVRCameraHandle>(FName(TEXT("BPOpenVRCameraHandle")));
	}
} ScriptStruct_OpenVRExpansionPlugin_StaticRegisterNativesFBPOpenVRCameraHandle;
	struct Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|VRCamera" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPOpenVRCameraHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPOpenVRCameraHandle",
		sizeof(FBPOpenVRCameraHandle),
		alignof(FBPOpenVRCameraHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPOpenVRCameraHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPOpenVRCameraHandle"), sizeof(FBPOpenVRCameraHandle), Get_Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_Hash() { return 2389391890U; }
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execSetSuspendRendering)
	{
		P_GET_UBOOL(Z_Param_bSuspendRendering);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::SetSuspendRendering(Z_Param_bSuspendRendering);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execGetCurrentVRGridAlpha)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_VRGridAlpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::GetCurrentVRGridAlpha(Z_Param_Out_VRGridAlpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execFadeVRGrid)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fSeconds);
		P_GET_UBOOL(Z_Param_bFadeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::FadeVRGrid(Z_Param_fSeconds,Z_Param_bFadeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execGetCurrentHMDFadeColor)
	{
		P_GET_STRUCT_REF(FColor,Z_Param_Out_ColorOut);
		P_GET_UBOOL(Z_Param_bBackground);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::GetCurrentHMDFadeColor(Z_Param_Out_ColorOut,Z_Param_bBackground);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execFadeHMDToColor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fSeconds);
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_GET_UBOOL(Z_Param_bBackground);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::FadeHMDToColor(Z_Param_fSeconds,Z_Param_Color,Z_Param_bBackground);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execClearSkyboxOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::ClearSkyboxOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execSetSkyboxOverride)
	{
		P_GET_OBJECT(UTexture,Z_Param_tFront);
		P_GET_OBJECT(UTexture2D,Z_Param_tBack);
		P_GET_OBJECT(UTexture,Z_Param_tLeft);
		P_GET_OBJECT(UTexture,Z_Param_tRight);
		P_GET_OBJECT(UTexture,Z_Param_tTop);
		P_GET_OBJECT(UTexture,Z_Param_tBottom);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::SetSkyboxOverride(Z_Param_tFront,Z_Param_tBack,Z_Param_tLeft,Z_Param_tRight,Z_Param_tTop,Z_Param_tBottom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execSetSkyboxOverride_LatLongStereoPair)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_LatLongSkyboxL);
		P_GET_OBJECT(UTexture2D,Z_Param_LatLongSkyboxR);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::SetSkyboxOverride_LatLongStereoPair(Z_Param_LatLongSkyboxL,Z_Param_LatLongSkyboxR);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execSetSkyboxOverride_LatLong)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_LatLongSkybox);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::SetSkyboxOverride_LatLong(Z_Param_LatLongSkybox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execIsValid)
	{
		P_GET_STRUCT_REF(FBPOpenVRCameraHandle,Z_Param_Out_CameraHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::IsValid(Z_Param_Out_CameraHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execReleaseVRCamera)
	{
		P_GET_STRUCT_REF(FBPOpenVRCameraHandle,Z_Param_Out_CameraHandle);
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenVRExpansionFunctionLibrary::ReleaseVRCamera(Z_Param_Out_CameraHandle,(EBPOVRResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execAcquireVRCamera)
	{
		P_GET_STRUCT_REF(FBPOpenVRCameraHandle,Z_Param_Out_CameraHandle);
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenVRExpansionFunctionLibrary::AcquireVRCamera(Z_Param_Out_CameraHandle,(EBPOVRResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execCreateCameraTexture2D)
	{
		P_GET_STRUCT_REF(FBPOpenVRCameraHandle,Z_Param_Out_CameraHandle);
		P_GET_ENUM(EOpenVRCameraFrameType,Z_Param_FrameType);
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UOpenVRExpansionFunctionLibrary::CreateCameraTexture2D(Z_Param_Out_CameraHandle,EOpenVRCameraFrameType(Z_Param_FrameType),(EBPOVRResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execGetVRCameraFrame)
	{
		P_GET_STRUCT_REF(FBPOpenVRCameraHandle,Z_Param_Out_CameraHandle);
		P_GET_ENUM(EOpenVRCameraFrameType,Z_Param_FrameType);
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result);
		P_GET_OBJECT(UTexture2D,Z_Param_TargetRenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenVRExpansionFunctionLibrary::GetVRCameraFrame(Z_Param_Out_CameraHandle,EOpenVRCameraFrameType(Z_Param_FrameType),(EBPOVRResultSwitch&)(Z_Param_Out_Result),Z_Param_TargetRenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execHasVRCamera)
	{
		P_GET_ENUM(EOpenVRCameraFrameType,Z_Param_FrameType);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::HasVRCamera(EOpenVRCameraFrameType(Z_Param_FrameType),Z_Param_Out_Width,Z_Param_Out_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyMatrix34AsTransform)
	{
		P_GET_ENUM(EVRDeviceProperty_Matrix34,Z_Param_PropertyToRetrieve);
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TransformValue);
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyMatrix34AsTransform(EVRDeviceProperty_Matrix34(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_TransformValue,(EBPOVRResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyUInt64)
	{
		P_GET_ENUM(EVRDeviceProperty_UInt64,Z_Param_PropertyToRetrieve);
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_UInt64Value);
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyUInt64(EVRDeviceProperty_UInt64(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_UInt64Value,(EBPOVRResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyInt32)
	{
		P_GET_ENUM(EVRDeviceProperty_Int32,Z_Param_PropertyToRetrieve);
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_IntValue);
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyInt32(EVRDeviceProperty_Int32(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_IntValue,(EBPOVRResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyFloat)
	{
		P_GET_ENUM(EVRDeviceProperty_Float,Z_Param_PropertyToRetrieve);
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FloatValue);
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyFloat(EVRDeviceProperty_Float(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_FloatValue,(EBPOVRResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyBool)
	{
		P_GET_ENUM(EVRDeviceProperty_Bool,Z_Param_PropertyToRetrieve);
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
		P_GET_UBOOL_REF(Z_Param_Out_BoolValue);
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyBool(EVRDeviceProperty_Bool(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_BoolValue,(EBPOVRResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyString)
	{
		P_GET_ENUM(EVRDeviceProperty_String,Z_Param_PropertyToRetrieve);
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_StringValue);
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyString(EVRDeviceProperty_String(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_StringValue,(EBPOVRResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execGetVRDeviceModelAndTexture)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_RenderModelNameOverride);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_RenderModelNameOut);
		P_GET_ENUM(EBPOpenVRTrackedDeviceClass,Z_Param_DeviceType);
		P_GET_TARRAY(UProceduralMeshComponent*,Z_Param_ProceduralMeshComponentsToFill);
		P_GET_UBOOL(Z_Param_bCreateCollision);
		P_GET_ENUM_REF(EAsyncBlueprintResultSwitch,Z_Param_Out_Result);
		P_GET_PROPERTY(FIntProperty,Z_Param_OverrideDeviceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UOpenVRExpansionFunctionLibrary::GetVRDeviceModelAndTexture(Z_Param_WorldContextObject,Z_Param_RenderModelNameOverride,Z_Param_Out_RenderModelNameOut,EBPOpenVRTrackedDeviceClass(Z_Param_DeviceType),Z_Param_ProceduralMeshComponentsToFill,Z_Param_bCreateCollision,(EAsyncBlueprintResultSwitch&)(Z_Param_Out_Result),Z_Param_OverrideDeviceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execGetOpenVRDevicesByType)
	{
		P_GET_ENUM(EBPOpenVRTrackedDeviceClass,Z_Param_TypeToRetreive);
		P_GET_TARRAY_REF(int32,Z_Param_Out_FoundIndexs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenVRExpansionFunctionLibrary::GetOpenVRDevicesByType(EBPOpenVRTrackedDeviceClass(Z_Param_TypeToRetreive),Z_Param_Out_FoundIndexs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execGetOpenVRDevices)
	{
		P_GET_TARRAY_REF(EBPOpenVRTrackedDeviceClass,Z_Param_Out_FoundDevices);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenVRExpansionFunctionLibrary::GetOpenVRDevices(Z_Param_Out_FoundDevices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execGetOpenVRDeviceType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBPOpenVRTrackedDeviceClass*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::GetOpenVRDeviceType(Z_Param_DeviceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execIsOpenVRDeviceConnected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::IsOpenVRDeviceConnected(Z_Param_DeviceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execGetOpenVRControllerType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBPOpenVRControllerDeviceType*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::GetOpenVRControllerType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenVRExpansionFunctionLibrary::execGetOpenVRHMDType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBPOpenVRHMDDeviceType*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::GetOpenVRHMDType();
		P_NATIVE_END;
	}
	void UOpenVRExpansionFunctionLibrary::StaticRegisterNativesUOpenVRExpansionFunctionLibrary()
	{
		UClass* Class = UOpenVRExpansionFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcquireVRCamera", &UOpenVRExpansionFunctionLibrary::execAcquireVRCamera },
			{ "ClearSkyboxOverride", &UOpenVRExpansionFunctionLibrary::execClearSkyboxOverride },
			{ "CreateCameraTexture2D", &UOpenVRExpansionFunctionLibrary::execCreateCameraTexture2D },
			{ "FadeHMDToColor", &UOpenVRExpansionFunctionLibrary::execFadeHMDToColor },
			{ "FadeVRGrid", &UOpenVRExpansionFunctionLibrary::execFadeVRGrid },
			{ "GetCurrentHMDFadeColor", &UOpenVRExpansionFunctionLibrary::execGetCurrentHMDFadeColor },
			{ "GetCurrentVRGridAlpha", &UOpenVRExpansionFunctionLibrary::execGetCurrentVRGridAlpha },
			{ "GetOpenVRControllerType", &UOpenVRExpansionFunctionLibrary::execGetOpenVRControllerType },
			{ "GetOpenVRDevices", &UOpenVRExpansionFunctionLibrary::execGetOpenVRDevices },
			{ "GetOpenVRDevicesByType", &UOpenVRExpansionFunctionLibrary::execGetOpenVRDevicesByType },
			{ "GetOpenVRDeviceType", &UOpenVRExpansionFunctionLibrary::execGetOpenVRDeviceType },
			{ "GetOpenVRHMDType", &UOpenVRExpansionFunctionLibrary::execGetOpenVRHMDType },
			{ "GetVRCameraFrame", &UOpenVRExpansionFunctionLibrary::execGetVRCameraFrame },
			{ "GetVRDeviceModelAndTexture", &UOpenVRExpansionFunctionLibrary::execGetVRDeviceModelAndTexture },
			{ "GetVRDevicePropertyBool", &UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyBool },
			{ "GetVRDevicePropertyFloat", &UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyFloat },
			{ "GetVRDevicePropertyInt32", &UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyInt32 },
			{ "GetVRDevicePropertyMatrix34AsTransform", &UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyMatrix34AsTransform },
			{ "GetVRDevicePropertyString", &UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyString },
			{ "GetVRDevicePropertyUInt64", &UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyUInt64 },
			{ "HasVRCamera", &UOpenVRExpansionFunctionLibrary::execHasVRCamera },
			{ "IsOpenVRDeviceConnected", &UOpenVRExpansionFunctionLibrary::execIsOpenVRDeviceConnected },
			{ "IsValid", &UOpenVRExpansionFunctionLibrary::execIsValid },
			{ "ReleaseVRCamera", &UOpenVRExpansionFunctionLibrary::execReleaseVRCamera },
			{ "SetSkyboxOverride", &UOpenVRExpansionFunctionLibrary::execSetSkyboxOverride },
			{ "SetSkyboxOverride_LatLong", &UOpenVRExpansionFunctionLibrary::execSetSkyboxOverride_LatLong },
			{ "SetSkyboxOverride_LatLongStereoPair", &UOpenVRExpansionFunctionLibrary::execSetSkyboxOverride_LatLongStereoPair },
			{ "SetSuspendRendering", &UOpenVRExpansionFunctionLibrary::execSetSuspendRendering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventAcquireVRCamera_Parms
		{
			FBPOpenVRCameraHandle CameraHandle;
			EBPOVRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraHandle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Statics::NewProp_CameraHandle = { "CameraHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventAcquireVRCamera_Parms, CameraHandle), Z_Construct_UScriptStruct_FBPOpenVRCameraHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventAcquireVRCamera_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Statics::NewProp_CameraHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|VRCamera" },
		{ "Comment", "// Acquire the vr camera for access (wakes it up) and returns a handle to use for functions regarding it (MUST RELEASE CAMERA WHEN DONE)\n" },
		{ "DisplayName", "AcquireVRCamera" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Acquire the vr camera for access (wakes it up) and returns a handle to use for functions regarding it (MUST RELEASE CAMERA WHEN DONE)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "AcquireVRCamera", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventAcquireVRCamera_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventClearSkyboxOverride_Parms
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
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventClearSkyboxOverride_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventClearSkyboxOverride_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
		{ "Comment", "// Remove skybox override in steamVR\n" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Remove skybox override in steamVR" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "ClearSkyboxOverride", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventClearSkyboxOverride_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms
		{
			FBPOpenVRCameraHandle CameraHandle;
			EOpenVRCameraFrameType FrameType;
			EBPOVRResultSwitch Result;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraHandle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrameType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrameType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::NewProp_CameraHandle = { "CameraHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms, CameraHandle), Z_Construct_UScriptStruct_FBPOpenVRCameraHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::NewProp_FrameType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::NewProp_FrameType = { "FrameType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms, FrameType), Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::NewProp_CameraHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::NewProp_FrameType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::NewProp_FrameType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|VRCamera" },
		{ "Comment", "// Create Camera Render Target, automatically pulls the correct texture size and format\n" },
		{ "DisplayName", "CreateCameraTexture2D" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Create Camera Render Target, automatically pulls the correct texture size and format" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "CreateCameraTexture2D", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms
		{
			float fSeconds;
			FColor Color;
			bool bBackground;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fSeconds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static void NewProp_bBackground_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBackground;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::NewProp_fSeconds = { "fSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms, fSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::NewProp_bBackground_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms*)Obj)->bBackground = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::NewProp_bBackground = { "bBackground", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::NewProp_bBackground_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::NewProp_fSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::NewProp_bBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
		{ "Comment", "/** Fades the view on the HMD to the specified color. The fade will take fSeconds, and the color values are between\n\x09* 0.0 and 1.0. This color is faded on top of the scene based on the alpha parameter. Removing the fade color instantly\n\x09* would be FadeToColor( 0.0, 0.0, 0.0, 0.0, 0.0 ).  Values are in un-premultiplied alpha space. */" },
		{ "CPP_Default_bBackground", "false" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Fades the view on the HMD to the specified color. The fade will take fSeconds, and the color values are between\n0.0 and 1.0. This color is faded on top of the scene based on the alpha parameter. Removing the fade color instantly\nwould be FadeToColor( 0.0, 0.0, 0.0, 0.0, 0.0 ).  Values are in un-premultiplied alpha space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "FadeHMDToColor", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms
		{
			float fSeconds;
			bool bFadeIn;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fSeconds;
		static void NewProp_bFadeIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFadeIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::NewProp_fSeconds = { "fSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms, fSeconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::NewProp_bFadeIn_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms*)Obj)->bFadeIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::NewProp_bFadeIn = { "bFadeIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::NewProp_bFadeIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::NewProp_fSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::NewProp_bFadeIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
		{ "Comment", "/** Fading the Grid in or out in fSeconds */" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Fading the Grid in or out in fSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "FadeVRGrid", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms
		{
			FColor ColorOut;
			bool bBackground;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOut;
		static void NewProp_bBackground_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBackground;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::NewProp_ColorOut = { "ColorOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms, ColorOut), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::NewProp_bBackground_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms*)Obj)->bBackground = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::NewProp_bBackground = { "bBackground", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::NewProp_bBackground_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::NewProp_ColorOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::NewProp_bBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
		{ "Comment", "/** Get current fade color value. */" },
		{ "CPP_Default_bBackground", "false" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Get current fade color value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "GetCurrentHMDFadeColor", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventGetCurrentVRGridAlpha_Parms
		{
			float VRGridAlpha;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRGridAlpha;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Statics::NewProp_VRGridAlpha = { "VRGridAlpha", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetCurrentVRGridAlpha_Parms, VRGridAlpha), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventGetCurrentVRGridAlpha_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventGetCurrentVRGridAlpha_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Statics::NewProp_VRGridAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
		{ "Comment", "/** Get current alpha value of grid. */" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Get current alpha value of grid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "GetCurrentVRGridAlpha", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventGetCurrentVRGridAlpha_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventGetOpenVRControllerType_Parms
		{
			EBPOpenVRControllerDeviceType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetOpenVRControllerType_Parms, ReturnValue), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRControllerDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "Comment", "// Gets what type of controller is plugged in\n" },
		{ "DisplayName", "GetOpenVRControllerType" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets what type of controller is plugged in" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "GetOpenVRControllerType", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventGetOpenVRControllerType_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventGetOpenVRDevices_Parms
		{
			TArray<EBPOpenVRTrackedDeviceClass> FoundDevices;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FoundDevices_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FoundDevices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoundDevices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Statics::NewProp_FoundDevices_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Statics::NewProp_FoundDevices_Inner = { "FoundDevices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRTrackedDeviceClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Statics::NewProp_FoundDevices = { "FoundDevices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetOpenVRDevices_Parms, FoundDevices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Statics::NewProp_FoundDevices_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Statics::NewProp_FoundDevices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Statics::NewProp_FoundDevices,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "Comment", "// Get a list of all currently tracked devices and their types, index in the array is their device index\n" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Get a list of all currently tracked devices and their types, index in the array is their device index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "GetOpenVRDevices", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventGetOpenVRDevices_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventGetOpenVRDevicesByType_Parms
		{
			EBPOpenVRTrackedDeviceClass TypeToRetreive;
			TArray<int32> FoundIndexs;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TypeToRetreive_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TypeToRetreive;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FoundIndexs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoundIndexs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics::NewProp_TypeToRetreive_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics::NewProp_TypeToRetreive = { "TypeToRetreive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetOpenVRDevicesByType_Parms, TypeToRetreive), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRTrackedDeviceClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics::NewProp_FoundIndexs_Inner = { "FoundIndexs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics::NewProp_FoundIndexs = { "FoundIndexs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetOpenVRDevicesByType_Parms, FoundIndexs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics::NewProp_TypeToRetreive_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics::NewProp_TypeToRetreive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics::NewProp_FoundIndexs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics::NewProp_FoundIndexs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "Comment", "// Get a list of all currently tracked devices of a specific type\n" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Get a list of all currently tracked devices of a specific type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "GetOpenVRDevicesByType", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventGetOpenVRDevicesByType_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventGetOpenVRDeviceType_Parms
		{
			int32 DeviceIndex;
			EBPOpenVRTrackedDeviceClass ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Statics::NewProp_DeviceIndex = { "DeviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetOpenVRDeviceType_Parms, DeviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetOpenVRDeviceType_Parms, ReturnValue), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRTrackedDeviceClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Statics::NewProp_DeviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "Comment", "// Get what type a specific openVR device index is\n" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Get what type a specific openVR device index is" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "GetOpenVRDeviceType", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventGetOpenVRDeviceType_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventGetOpenVRHMDType_Parms
		{
			EBPOpenVRHMDDeviceType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetOpenVRHMDType_Parms, ReturnValue), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRHMDDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "Comment", "// Gets whether an HMD device is connected, this is an expanded version for SteamVR\n" },
		{ "DisplayName", "GetOpenVRHMDType" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets whether an HMD device is connected, this is an expanded version for SteamVR" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "GetOpenVRHMDType", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventGetOpenVRHMDType_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms
		{
			FBPOpenVRCameraHandle CameraHandle;
			EOpenVRCameraFrameType FrameType;
			EBPOVRResultSwitch Result;
			UTexture2D* TargetRenderTarget;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraHandle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrameType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrameType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetRenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::NewProp_CameraHandle = { "CameraHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms, CameraHandle), Z_Construct_UScriptStruct_FBPOpenVRCameraHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::NewProp_FrameType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::NewProp_FrameType = { "FrameType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms, FrameType), Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::NewProp_TargetRenderTarget = { "TargetRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms, TargetRenderTarget), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::NewProp_CameraHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::NewProp_FrameType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::NewProp_FrameType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::NewProp_TargetRenderTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|VRCamera" },
		{ "Comment", "// Gets a screen cap from the HMD camera if there is one\n" },
		{ "CPP_Default_TargetRenderTarget", "None" },
		{ "DisplayName", "GetVRCameraFrame" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets a screen cap from the HMD camera if there is one" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "GetVRCameraFrame", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms
		{
			UObject* WorldContextObject;
			FString RenderModelNameOverride;
			FString RenderModelNameOut;
			EBPOpenVRTrackedDeviceClass DeviceType;
			TArray<UProceduralMeshComponent*> ProceduralMeshComponentsToFill;
			bool bCreateCollision;
			EAsyncBlueprintResultSwitch Result;
			int32 OverrideDeviceID;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RenderModelNameOverride;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RenderModelNameOut;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProceduralMeshComponentsToFill_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshComponentsToFill_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProceduralMeshComponentsToFill;
		static void NewProp_bCreateCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OverrideDeviceID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_RenderModelNameOverride = { "RenderModelNameOverride", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms, RenderModelNameOverride), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_RenderModelNameOut = { "RenderModelNameOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms, RenderModelNameOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms, DeviceType), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOpenVRTrackedDeviceClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_ProceduralMeshComponentsToFill_Inner = { "ProceduralMeshComponentsToFill", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_ProceduralMeshComponentsToFill_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_ProceduralMeshComponentsToFill = { "ProceduralMeshComponentsToFill", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms, ProceduralMeshComponentsToFill), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_ProceduralMeshComponentsToFill_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_ProceduralMeshComponentsToFill_MetaData)) };
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms*)Obj)->bCreateCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_OverrideDeviceID = { "OverrideDeviceID", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms, OverrideDeviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_RenderModelNameOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_RenderModelNameOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_DeviceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_DeviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_ProceduralMeshComponentsToFill_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_ProceduralMeshComponentsToFill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_bCreateCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_OverrideDeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "OverrideDeviceID" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "Comment", "// Gets the model / texture of a SteamVR Device, can use to fill procedural mesh components or just get the texture of them to apply to a pre-made model.\n// If the render model name override is empty then the render model name will be automatically retrieved from SteamVR and RenderModelNameOut will be filled with it.\n" },
		{ "CPP_Default_OverrideDeviceID", "-1" },
		{ "DisplayName", "GetVRDeviceModelAndTexture" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets the model / texture of a SteamVR Device, can use to fill procedural mesh components or just get the texture of them to apply to a pre-made model.\nIf the render model name override is empty then the render model name will be automatically retrieved from SteamVR and RenderModelNameOut will be filled with it." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "GetVRDeviceModelAndTexture", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms
		{
			EVRDeviceProperty_Bool PropertyToRetrieve;
			int32 DeviceID;
			bool BoolValue;
			EBPOVRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyToRetrieve_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyToRetrieve;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static void NewProp_BoolValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::NewProp_PropertyToRetrieve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::NewProp_PropertyToRetrieve = { "PropertyToRetrieve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms, PropertyToRetrieve), Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::NewProp_BoolValue_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms*)Obj)->BoolValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::NewProp_PropertyToRetrieve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::NewProp_PropertyToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::NewProp_DeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::NewProp_BoolValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "Comment", "// Gets a Bool device property\n" },
		{ "DisplayName", "GetVRDevicePropertyBool" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets a Bool device property" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "GetVRDevicePropertyBool", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms
		{
			EVRDeviceProperty_Float PropertyToRetrieve;
			int32 DeviceID;
			float FloatValue;
			EBPOVRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyToRetrieve_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyToRetrieve;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::NewProp_PropertyToRetrieve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::NewProp_PropertyToRetrieve = { "PropertyToRetrieve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms, PropertyToRetrieve), Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms, FloatValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::NewProp_PropertyToRetrieve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::NewProp_PropertyToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::NewProp_DeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::NewProp_FloatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "Comment", "// Gets a Float device property\n" },
		{ "DisplayName", "GetVRDevicePropertyFloat" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets a Float device property" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "GetVRDevicePropertyFloat", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms
		{
			EVRDeviceProperty_Int32 PropertyToRetrieve;
			int32 DeviceID;
			int32 IntValue;
			EBPOVRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyToRetrieve_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyToRetrieve;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::NewProp_PropertyToRetrieve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::NewProp_PropertyToRetrieve = { "PropertyToRetrieve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms, PropertyToRetrieve), Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms, IntValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::NewProp_PropertyToRetrieve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::NewProp_PropertyToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::NewProp_DeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::NewProp_IntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "Comment", "// Gets a Int32 device property\n" },
		{ "DisplayName", "GetVRDevicePropertyInt32" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets a Int32 device property" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "GetVRDevicePropertyInt32", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms
		{
			EVRDeviceProperty_Matrix34 PropertyToRetrieve;
			int32 DeviceID;
			FTransform TransformValue;
			EBPOVRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyToRetrieve_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyToRetrieve;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::NewProp_PropertyToRetrieve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::NewProp_PropertyToRetrieve = { "PropertyToRetrieve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms, PropertyToRetrieve), Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::NewProp_TransformValue = { "TransformValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms, TransformValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::NewProp_PropertyToRetrieve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::NewProp_PropertyToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::NewProp_DeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::NewProp_TransformValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "Comment", "// Gets a Matrix34 device property as a Transform\n" },
		{ "DisplayName", "GetVRDevicePropertyMatrix34AsTransform" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets a Matrix34 device property as a Transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "GetVRDevicePropertyMatrix34AsTransform", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms
		{
			EVRDeviceProperty_String PropertyToRetrieve;
			int32 DeviceID;
			FString StringValue;
			EBPOVRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyToRetrieve_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyToRetrieve;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::NewProp_PropertyToRetrieve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::NewProp_PropertyToRetrieve = { "PropertyToRetrieve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms, PropertyToRetrieve), Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms, StringValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::NewProp_PropertyToRetrieve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::NewProp_PropertyToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::NewProp_DeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::NewProp_StringValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "Comment", "// Gets a String device property\n" },
		{ "DisplayName", "GetVRDevicePropertyString" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets a String device property" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "GetVRDevicePropertyString", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms
		{
			EVRDeviceProperty_UInt64 PropertyToRetrieve;
			int32 DeviceID;
			FString UInt64Value;
			EBPOVRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyToRetrieve_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyToRetrieve;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UInt64Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::NewProp_PropertyToRetrieve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::NewProp_PropertyToRetrieve = { "PropertyToRetrieve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms, PropertyToRetrieve), Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::NewProp_UInt64Value = { "UInt64Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms, UInt64Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::NewProp_PropertyToRetrieve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::NewProp_PropertyToRetrieve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::NewProp_DeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::NewProp_UInt64Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "Comment", "// Gets a UInt64 device property as a string (Blueprints do not support int64)\n" },
		{ "DisplayName", "GetVRDevicePropertyUInt64" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets a UInt64 device property as a string (Blueprints do not support int64)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "GetVRDevicePropertyUInt64", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms
		{
			EOpenVRCameraFrameType FrameType;
			int32 Width;
			int32 Height;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrameType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrameType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::NewProp_FrameType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::NewProp_FrameType = { "FrameType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms, FrameType), Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::NewProp_FrameType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::NewProp_FrameType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|VRCamera" },
		{ "Comment", "// Returns if there is a VR camera and what its pixel height / width is\n" },
		{ "DisplayName", "HasVRCamera" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Returns if there is a VR camera and what its pixel height / width is" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "HasVRCamera", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventIsOpenVRDeviceConnected_Parms
		{
			int32 DeviceIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Statics::NewProp_DeviceIndex = { "DeviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventIsOpenVRDeviceConnected_Parms, DeviceIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventIsOpenVRDeviceConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventIsOpenVRDeviceConnected_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Statics::NewProp_DeviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR" },
		{ "Comment", "// Checks if a specific OpenVR device is connected, index names are assumed, they may not be exact\n" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Checks if a specific OpenVR device is connected, index names are assumed, they may not be exact" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "IsOpenVRDeviceConnected", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventIsOpenVRDeviceConnected_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventIsValid_Parms
		{
			FBPOpenVRCameraHandle CameraHandle;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid_Statics::NewProp_CameraHandle = { "CameraHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventIsValid_Parms, CameraHandle), Z_Construct_UScriptStruct_FBPOpenVRCameraHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventIsValid_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid_Statics::NewProp_CameraHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|VRCamera" },
		{ "Comment", "// Checks if a camera handle is valid\n" },
		{ "DisplayName", "IsValid" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Checks if a camera handle is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "IsValid", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventIsValid_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventReleaseVRCamera_Parms
		{
			FBPOpenVRCameraHandle CameraHandle;
			EBPOVRResultSwitch Result;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraHandle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Statics::NewProp_CameraHandle = { "CameraHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventReleaseVRCamera_Parms, CameraHandle), Z_Construct_UScriptStruct_FBPOpenVRCameraHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventReleaseVRCamera_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Statics::NewProp_CameraHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|VRCamera" },
		{ "Comment", "// Releases the vr camera from access - you MUST call this when done with the camera\n" },
		{ "DisplayName", "ReleaseVRCamera" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Releases the vr camera from access - you MUST call this when done with the camera" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "ReleaseVRCamera", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventReleaseVRCamera_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms
		{
			UTexture* tFront;
			UTexture2D* tBack;
			UTexture* tLeft;
			UTexture* tRight;
			UTexture* tTop;
			UTexture* tBottom;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tFront;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tBack;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tLeft;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tRight;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tTop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tBottom;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::NewProp_tFront = { "tFront", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms, tFront), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::NewProp_tBack = { "tBack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms, tBack), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::NewProp_tLeft = { "tLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms, tLeft), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::NewProp_tRight = { "tRight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms, tRight), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::NewProp_tTop = { "tTop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms, tTop), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::NewProp_tBottom = { "tBottom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms, tBottom), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::NewProp_tFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::NewProp_tBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::NewProp_tLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::NewProp_tRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::NewProp_tTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::NewProp_tBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
		{ "Comment", "// Override the standard skybox texture in steamVR - 6 cardinal textures - need to call ClearSkyboxOverride when finished\n" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Override the standard skybox texture in steamVR - 6 cardinal textures - need to call ClearSkyboxOverride when finished" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "SetSkyboxOverride", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLong_Parms
		{
			UTexture2D* LatLongSkybox;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LatLongSkybox;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Statics::NewProp_LatLongSkybox = { "LatLongSkybox", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLong_Parms, LatLongSkybox), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLong_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLong_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Statics::NewProp_LatLongSkybox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
		{ "Comment", "// Override the standard skybox texture in steamVR - LatLong format - need to call ClearSkyboxOverride when finished\n" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Override the standard skybox texture in steamVR - LatLong format - need to call ClearSkyboxOverride when finished" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "SetSkyboxOverride_LatLong", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLong_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms
		{
			UTexture2D* LatLongSkyboxL;
			UTexture2D* LatLongSkyboxR;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LatLongSkyboxL;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LatLongSkyboxR;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics::NewProp_LatLongSkyboxL = { "LatLongSkyboxL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms, LatLongSkyboxL), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics::NewProp_LatLongSkyboxR = { "LatLongSkyboxR", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms, LatLongSkyboxR), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics::NewProp_LatLongSkyboxL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics::NewProp_LatLongSkyboxR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
		{ "Comment", "// Override the standard skybox texture in steamVR - LatLong stereo pair - need to call ClearSkyboxOverride when finished\n" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Override the standard skybox texture in steamVR - LatLong stereo pair - need to call ClearSkyboxOverride when finished" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "SetSkyboxOverride_LatLongStereoPair", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics
	{
		struct OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms
		{
			bool bSuspendRendering;
			bool ReturnValue;
		};
		static void NewProp_bSuspendRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuspendRendering;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics::NewProp_bSuspendRendering_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms*)Obj)->bSuspendRendering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics::NewProp_bSuspendRendering = { "bSuspendRendering", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics::NewProp_bSuspendRendering_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms), &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics::NewProp_bSuspendRendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
		{ "Comment", "// Sets whether the compositor is allows to render or not (reverts to base compositor / grid when active)\n// Useful to place players out of the app during frame drops/hitches/loading and into the vr skybox.\n" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Sets whether the compositor is allows to render or not (reverts to base compositor / grid when active)\nUseful to place players out of the app during frame drops/hitches/loading and into the vr skybox." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, nullptr, "SetSuspendRendering", nullptr, nullptr, sizeof(OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms), Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_NoRegister()
	{
		return UOpenVRExpansionFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera, "AcquireVRCamera" }, // 3018316073
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride, "ClearSkyboxOverride" }, // 279579031
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D, "CreateCameraTexture2D" }, // 3646170662
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor, "FadeHMDToColor" }, // 1315496922
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid, "FadeVRGrid" }, // 1209019989
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor, "GetCurrentHMDFadeColor" }, // 3691280810
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha, "GetCurrentVRGridAlpha" }, // 584575652
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType, "GetOpenVRControllerType" }, // 1344070104
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevices, "GetOpenVRDevices" }, // 768814909
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType, "GetOpenVRDevicesByType" }, // 19422409
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType, "GetOpenVRDeviceType" }, // 466084918
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType, "GetOpenVRHMDType" }, // 291461325
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame, "GetVRCameraFrame" }, // 1423595217
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture, "GetVRDeviceModelAndTexture" }, // 2115705123
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool, "GetVRDevicePropertyBool" }, // 788673191
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat, "GetVRDevicePropertyFloat" }, // 2245117331
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32, "GetVRDevicePropertyInt32" }, // 3663086289
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform, "GetVRDevicePropertyMatrix34AsTransform" }, // 24197158
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString, "GetVRDevicePropertyString" }, // 1160444212
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64, "GetVRDevicePropertyUInt64" }, // 1948902009
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera, "HasVRCamera" }, // 1165188473
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected, "IsOpenVRDeviceConnected" }, // 3299114040
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid, "IsValid" }, // 1248111973
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera, "ReleaseVRCamera" }, // 3869679165
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride, "SetSkyboxOverride" }, // 4266540124
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong, "SetSkyboxOverride_LatLong" }, // 2432271096
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair, "SetSkyboxOverride_LatLongStereoPair" }, // 23842773
		{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering, "SetSuspendRendering" }, // 1656813088
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "OpenVRExpansionFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenVRExpansionFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_Statics::ClassParams = {
		&UOpenVRExpansionFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenVRExpansionFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenVRExpansionFunctionLibrary, 1415309498);
	template<> OPENVREXPANSIONPLUGIN_API UClass* StaticClass<UOpenVRExpansionFunctionLibrary>()
	{
		return UOpenVRExpansionFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenVRExpansionFunctionLibrary(Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, &UOpenVRExpansionFunctionLibrary::StaticClass, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("UOpenVRExpansionFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenVRExpansionFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
