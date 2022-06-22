// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
class UTexture;
class UTexture2D;
struct FBPOpenVRCameraHandle;
enum class EBPOVRResultSwitch : uint8;
enum class EOpenVRCameraFrameType : uint8;
enum class EVRDeviceProperty_Matrix34 : uint8;
struct FTransform;
enum class EVRDeviceProperty_UInt64 : uint8;
enum class EVRDeviceProperty_Int32 : uint8;
enum class EVRDeviceProperty_Float : uint8;
enum class EVRDeviceProperty_Bool : uint8;
enum class EVRDeviceProperty_String : uint8;
class UObject;
enum class EBPOpenVRTrackedDeviceClass : uint8;
class UProceduralMeshComponent;
enum class EAsyncBlueprintResultSwitch : uint8;
enum class EBPOpenVRControllerDeviceType : uint8;
enum class EBPOpenVRHMDDeviceType : uint8;
#ifdef OPENVREXPANSIONPLUGIN_OpenVRExpansionFunctionLibrary_generated_h
#error "OpenVRExpansionFunctionLibrary.generated.h already included, missing '#pragma once' in OpenVRExpansionFunctionLibrary.h"
#endif
#define OPENVREXPANSIONPLUGIN_OpenVRExpansionFunctionLibrary_generated_h

#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPENVREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPOpenVRCameraHandle>();

#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_SPARSE_DATA
#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSuspendRendering); \
	DECLARE_FUNCTION(execGetCurrentVRGridAlpha); \
	DECLARE_FUNCTION(execFadeVRGrid); \
	DECLARE_FUNCTION(execGetCurrentHMDFadeColor); \
	DECLARE_FUNCTION(execFadeHMDToColor); \
	DECLARE_FUNCTION(execClearSkyboxOverride); \
	DECLARE_FUNCTION(execSetSkyboxOverride); \
	DECLARE_FUNCTION(execSetSkyboxOverride_LatLongStereoPair); \
	DECLARE_FUNCTION(execSetSkyboxOverride_LatLong); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execReleaseVRCamera); \
	DECLARE_FUNCTION(execAcquireVRCamera); \
	DECLARE_FUNCTION(execCreateCameraTexture2D); \
	DECLARE_FUNCTION(execGetVRCameraFrame); \
	DECLARE_FUNCTION(execHasVRCamera); \
	DECLARE_FUNCTION(execGetVRDevicePropertyMatrix34AsTransform); \
	DECLARE_FUNCTION(execGetVRDevicePropertyUInt64); \
	DECLARE_FUNCTION(execGetVRDevicePropertyInt32); \
	DECLARE_FUNCTION(execGetVRDevicePropertyFloat); \
	DECLARE_FUNCTION(execGetVRDevicePropertyBool); \
	DECLARE_FUNCTION(execGetVRDevicePropertyString); \
	DECLARE_FUNCTION(execGetVRDeviceModelAndTexture); \
	DECLARE_FUNCTION(execGetOpenVRDevicesByType); \
	DECLARE_FUNCTION(execGetOpenVRDevices); \
	DECLARE_FUNCTION(execGetOpenVRDeviceType); \
	DECLARE_FUNCTION(execIsOpenVRDeviceConnected); \
	DECLARE_FUNCTION(execGetOpenVRControllerType); \
	DECLARE_FUNCTION(execGetOpenVRHMDType);


#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSuspendRendering); \
	DECLARE_FUNCTION(execGetCurrentVRGridAlpha); \
	DECLARE_FUNCTION(execFadeVRGrid); \
	DECLARE_FUNCTION(execGetCurrentHMDFadeColor); \
	DECLARE_FUNCTION(execFadeHMDToColor); \
	DECLARE_FUNCTION(execClearSkyboxOverride); \
	DECLARE_FUNCTION(execSetSkyboxOverride); \
	DECLARE_FUNCTION(execSetSkyboxOverride_LatLongStereoPair); \
	DECLARE_FUNCTION(execSetSkyboxOverride_LatLong); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execReleaseVRCamera); \
	DECLARE_FUNCTION(execAcquireVRCamera); \
	DECLARE_FUNCTION(execCreateCameraTexture2D); \
	DECLARE_FUNCTION(execGetVRCameraFrame); \
	DECLARE_FUNCTION(execHasVRCamera); \
	DECLARE_FUNCTION(execGetVRDevicePropertyMatrix34AsTransform); \
	DECLARE_FUNCTION(execGetVRDevicePropertyUInt64); \
	DECLARE_FUNCTION(execGetVRDevicePropertyInt32); \
	DECLARE_FUNCTION(execGetVRDevicePropertyFloat); \
	DECLARE_FUNCTION(execGetVRDevicePropertyBool); \
	DECLARE_FUNCTION(execGetVRDevicePropertyString); \
	DECLARE_FUNCTION(execGetVRDeviceModelAndTexture); \
	DECLARE_FUNCTION(execGetOpenVRDevicesByType); \
	DECLARE_FUNCTION(execGetOpenVRDevices); \
	DECLARE_FUNCTION(execGetOpenVRDeviceType); \
	DECLARE_FUNCTION(execIsOpenVRDeviceConnected); \
	DECLARE_FUNCTION(execGetOpenVRControllerType); \
	DECLARE_FUNCTION(execGetOpenVRHMDType);


#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenVRExpansionFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOpenVRExpansionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenVRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOpenVRExpansionFunctionLibrary)


#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_INCLASS \
private: \
	static void StaticRegisterNativesUOpenVRExpansionFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOpenVRExpansionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenVRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOpenVRExpansionFunctionLibrary)


#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenVRExpansionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenVRExpansionFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenVRExpansionFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenVRExpansionFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenVRExpansionFunctionLibrary(UOpenVRExpansionFunctionLibrary&&); \
	NO_API UOpenVRExpansionFunctionLibrary(const UOpenVRExpansionFunctionLibrary&); \
public:


#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenVRExpansionFunctionLibrary(UOpenVRExpansionFunctionLibrary&&); \
	NO_API UOpenVRExpansionFunctionLibrary(const UOpenVRExpansionFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenVRExpansionFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenVRExpansionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenVRExpansionFunctionLibrary)


#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_534_PROLOG
#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_SPARSE_DATA \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_RPC_WRAPPERS \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_INCLASS \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_SPARSE_DATA \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_538_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENVREXPANSIONPLUGIN_API UClass* StaticClass<class UOpenVRExpansionFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h


#define FOREACH_ENUM_EBPOPENVRCONTROLLERDEVICETYPE(op) \
	op(EBPOpenVRControllerDeviceType::DT_IndexController) \
	op(EBPOpenVRControllerDeviceType::DT_ViveController) \
	op(EBPOpenVRControllerDeviceType::DT_CosmosController) \
	op(EBPOpenVRControllerDeviceType::DT_RiftController) \
	op(EBPOpenVRControllerDeviceType::DT_RiftSController) \
	op(EBPOpenVRControllerDeviceType::DT_QuestController) \
	op(EBPOpenVRControllerDeviceType::DT_WMRController) \
	op(EBPOpenVRControllerDeviceType::DT_UnknownController) 

enum class EBPOpenVRControllerDeviceType : uint8;
template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPOpenVRControllerDeviceType>();

#define FOREACH_ENUM_EBPOPENVRHMDDEVICETYPE(op) \
	op(EBPOpenVRHMDDeviceType::DT_SteamVR) \
	op(EBPOpenVRHMDDeviceType::DT_ValveIndex) \
	op(EBPOpenVRHMDDeviceType::DT_Vive) \
	op(EBPOpenVRHMDDeviceType::DT_ViveCosmos) \
	op(EBPOpenVRHMDDeviceType::DT_OculusQuestHMD) \
	op(EBPOpenVRHMDDeviceType::DT_OculusHMD) \
	op(EBPOpenVRHMDDeviceType::DT_WindowsMR) \
	op(EBPOpenVRHMDDeviceType::DT_Unknown) 

enum class EBPOpenVRHMDDeviceType : uint8;
template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPOpenVRHMDDeviceType>();

#define FOREACH_ENUM_EVRDEVICEPROPERTY_MATRIX34(op) \
	op(EVRDeviceProperty_Matrix34::Prop_StatusDisplayTransform_Matrix34_1013) \
	op(EVRDeviceProperty_Matrix34::HMDProp_CameraToHeadTransform_Matrix34_2016) \
	op(EVRDeviceProperty_Matrix34::HMDProp_CameraToHeadTransforms_Matrix34_2055) \
	op(EVRDeviceProperty_Matrix34::HMDProp_ImuToHeadTransform_Matrix34_2063) 

enum class EVRDeviceProperty_Matrix34 : uint8;
template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRDeviceProperty_Matrix34>();

#define FOREACH_ENUM_EVRDEVICEPROPERTY_UINT64(op) \
	op(EVRDeviceProperty_UInt64::Prop_HardwareRevision_Uint64_1017) \
	op(EVRDeviceProperty_UInt64::Prop_FirmwareVersion_Uint64_1018) \
	op(EVRDeviceProperty_UInt64::Prop_FPGAVersion_Uint64_1019) \
	op(EVRDeviceProperty_UInt64::Prop_VRCVersion_Uint64_1020) \
	op(EVRDeviceProperty_UInt64::Prop_RadioVersion_Uint64_1021) \
	op(EVRDeviceProperty_UInt64::Prop_DongleVersion_Uint64_1022) \
	op(EVRDeviceProperty_UInt64::Prop_ParentDriver_Uint64_1034) \
	op(EVRDeviceProperty_UInt64::Prop_BootloaderVersion_Uint64_1044) \
	op(EVRDeviceProperty_UInt64::HMDProp_CurrentUniverseId_Uint64_2004) \
	op(EVRDeviceProperty_UInt64::HMDProp_PreviousUniverseId_Uint64_2005) \
	op(EVRDeviceProperty_UInt64::HMDProp_DisplayFirmwareVersion_Uint64_2006) \
	op(EVRDeviceProperty_UInt64::HMDProp_CameraFirmwareVersion_Uint64_2027) \
	op(EVRDeviceProperty_UInt64::HMDProp_DisplayFPGAVersion_Uint64_2029) \
	op(EVRDeviceProperty_UInt64::HMDProp_DisplayBootloaderVersion_Uint64_2030) \
	op(EVRDeviceProperty_UInt64::HMDProp_DisplayHardwareVersion_Uint64_2031) \
	op(EVRDeviceProperty_UInt64::HMDProp_AudioFirmwareVersion_Uint64_2032) \
	op(EVRDeviceProperty_UInt64::HMDProp_GraphicsAdapterLuid_Uint64_2045) \
	op(EVRDeviceProperty_UInt64::HMDProp_AudioBridgeFirmwareVersion_Uint64_2061) \
	op(EVRDeviceProperty_UInt64::HMDProp_ImageBridgeFirmwareVersion_Uint64_2062) \
	op(EVRDeviceProperty_UInt64::HMDProp_AdditionalRadioFeatures_Uint64_2070) \
	op(EVRDeviceProperty_UInt64::ControllerProp_SupportedButtons_Uint64_3001) 

enum class EVRDeviceProperty_UInt64 : uint8;
template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRDeviceProperty_UInt64>();

#define FOREACH_ENUM_EVRDEVICEPROPERTY_INT32(op) \
	op(EVRDeviceProperty_Int32::Prop_DeviceClass_Int32_1029) \
	op(EVRDeviceProperty_Int32::Prop_NumCameras_Int32_1039) \
	op(EVRDeviceProperty_Int32::Prop_CameraFrameLayout_Int32_1040) \
	op(EVRDeviceProperty_Int32::Prop_CameraStreamFormat_Int32_1041) \
	op(EVRDeviceProperty_Int32::HMDProp_DisplayMCType_Int32_2008) \
	op(EVRDeviceProperty_Int32::HMDProp_EdidVendorID_Int32_2011) \
	op(EVRDeviceProperty_Int32::HMDProp_EdidProductID_Int32_2015) \
	op(EVRDeviceProperty_Int32::HMDProp_DisplayGCType_Int32_2017) \
	op(EVRDeviceProperty_Int32::HMDProp_CameraCompatibilityMode_Int32_2033) \
	op(EVRDeviceProperty_Int32::HMDProp_DisplayMCImageWidth_Int32_2038) \
	op(EVRDeviceProperty_Int32::HMDProp_DisplayMCImageHeight_Int32_2039) \
	op(EVRDeviceProperty_Int32::HMDProp_DisplayMCImageNumChannels_Int32_2040) \
	op(EVRDeviceProperty_Int32::HMDProp_ExpectedTrackingReferenceCount_Int32_2049) \
	op(EVRDeviceProperty_Int32::HMDProp_ExpectedControllerCount_Int32_2050) \
	op(EVRDeviceProperty_Int32::HMDProp_DistortionMeshResolution_Int32_2056) \
	op(EVRDeviceProperty_Int32::HMDProp_HmdTrackingStyle_Int32_2075) \
	op(EVRDeviceProperty_Int32::ControllerProp_Axis0Type_Int32_3002) \
	op(EVRDeviceProperty_Int32::ControllerPropProp_Axis1Type_Int32_3003) \
	op(EVRDeviceProperty_Int32::ControllerPropProp_Axis2Type_Int32_3004) \
	op(EVRDeviceProperty_Int32::ControllerPropProp_Axis3Type_Int32_3005) \
	op(EVRDeviceProperty_Int32::ControllerPropProp_Axis4Type_Int32_3006) \
	op(EVRDeviceProperty_Int32::ControllerProp_ControllerRoleHint_Int32_3007) \
	op(EVRDeviceProperty_Int32::TrackRefProp_Nonce_Int32_4008) \
	op(EVRDeviceProperty_Int32::DriverProp_ControllerHandSelectionPriority_Int32_7002) 

enum class EVRDeviceProperty_Int32 : uint8;
template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRDeviceProperty_Int32>();

#define FOREACH_ENUM_EVRDEVICEPROPERTY_FLOAT(op) \
	op(EVRDeviceProperty_Float::Prop_DeviceBatteryPercentage_Float_1012) \
	op(EVRDeviceProperty_Float::HMDProp_SecondsFromVsyncToPhotons_Float_2001) \
	op(EVRDeviceProperty_Float::HMDProp_DisplayFrequency_Float_2002) \
	op(EVRDeviceProperty_Float::HMDProp_UserIpdMeters_Float_2003) \
	op(EVRDeviceProperty_Float::HMDProp_DisplayMCOffset_Float_2009) \
	op(EVRDeviceProperty_Float::HMDProp_DisplayMCScale_Float_2010) \
	op(EVRDeviceProperty_Float::HMDProp_DisplayGCBlackClamp_Float_2014) \
	op(EVRDeviceProperty_Float::HMDProp_DisplayGCOffset_Float_2018) \
	op(EVRDeviceProperty_Float::HMDProp_DisplayGCScale_Float_2019) \
	op(EVRDeviceProperty_Float::HMDProp_DisplayGCPrescale_Float_2020) \
	op(EVRDeviceProperty_Float::HMDProp_LensCenterLeftU_Float_2022) \
	op(EVRDeviceProperty_Float::HMDProp_LensCenterLeftV_Float_2023) \
	op(EVRDeviceProperty_Float::HMDProp_LensCenterRightU_Float_2024) \
	op(EVRDeviceProperty_Float::HMDProp_LensCenterRightV_Float_2025) \
	op(EVRDeviceProperty_Float::HMDProp_UserHeadToEyeDepthMeters_Float_2026) \
	op(EVRDeviceProperty_Float::HMDProp_ScreenshotHorizontalFieldOfViewDegrees_Float_2034) \
	op(EVRDeviceProperty_Float::HMDProp_ScreenshotVerticalFieldOfViewDegrees_Float_2035) \
	op(EVRDeviceProperty_Float::HMDProp_SecondsFromPhotonsToVblank_Float_2042) \
	op(EVRDeviceProperty_Float::HMDProp_MinimumIpdStepMeters_Float_2060) \
	op(EVRDeviceProperty_Float::TrackRefProp_FieldOfViewLeftDegrees_Float_4000) \
	op(EVRDeviceProperty_Float::TrackRefProp_FieldOfViewRightDegrees_Float_4001) \
	op(EVRDeviceProperty_Float::TrackRefProp_FieldOfViewTopDegrees_Float_4002) \
	op(EVRDeviceProperty_Float::TrackRefProp_FieldOfViewBottomDegrees_Float_4003) \
	op(EVRDeviceProperty_Float::TrackRefProp_TrackingRangeMinimumMeters_Float_4004) \
	op(EVRDeviceProperty_Float::TrackRefProp_TrackingRangeMaximumMeters_Float_4005) 

enum class EVRDeviceProperty_Float : uint8;
template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRDeviceProperty_Float>();

#define FOREACH_ENUM_EVRDEVICEPROPERTY_BOOL(op) \
	op(EVRDeviceProperty_Bool::Prop_WillDriftInYaw_Bool_1004) \
	op(EVRDeviceProperty_Bool::Prop_DeviceIsWireless_Bool_1010) \
	op(EVRDeviceProperty_Bool::Prop_DeviceIsCharging_Bool_1011) \
	op(EVRDeviceProperty_Bool::Prop_Firmware_UpdateAvailable_Bool_1014) \
	op(EVRDeviceProperty_Bool::Prop_Firmware_ManualUpdate_Bool_1015) \
	op(EVRDeviceProperty_Bool::Prop_BlockServerShutdown_Bool_1023) \
	op(EVRDeviceProperty_Bool::Prop_CanUnifyCoordinateSystemWithHmd_Bool_1024) \
	op(EVRDeviceProperty_Bool::Prop_ContainsProximitySensor_Bool_1025) \
	op(EVRDeviceProperty_Bool::Prop_DeviceProvidesBatteryStatus_Bool_1026) \
	op(EVRDeviceProperty_Bool::Prop_DeviceCanPowerOff_Bool_1027) \
	op(EVRDeviceProperty_Bool::Prop_HasCamera_Bool_1030) \
	op(EVRDeviceProperty_Bool::Prop_Firmware_ForceUpdateRequired_Bool_1032) \
	op(EVRDeviceProperty_Bool::Prop_ViveSystemButtonFixRequired_Bool_1033) \
	op(EVRDeviceProperty_Bool::Prop_NeverTracked_Bool_1038) \
	op(EVRDeviceProperty_Bool::Prop_Identifiable_Bool_1043) \
	op(EVRDeviceProperty_Bool::Prop_Firmware_RemindUpdate_Bool_1047) \
	op(EVRDeviceProperty_Bool::HMDProp_ReportsTimeSinceVSync_Bool_2000) \
	op(EVRDeviceProperty_Bool::HMDProp_IsOnDesktop_Bool_2007) \
	op(EVRDeviceProperty_Bool::HMDProp_DisplaySuppressed_Bool_2036) \
	op(EVRDeviceProperty_Bool::HMDProp_DisplayAllowNightMode_Bool_2037) \
	op(EVRDeviceProperty_Bool::HMDProp_DriverDirectModeSendsVsyncEvents_Bool_2043) \
	op(EVRDeviceProperty_Bool::HMDProp_DisplayDebugMode_Bool_2044) \
	op(EVRDeviceProperty_Bool::HMDProp_DoNotApplyPrediction_Bool_2054) \
	op(EVRDeviceProperty_Bool::HMDProp_DriverIsDrawingControllers_Bool_2057) \
	op(EVRDeviceProperty_Bool::HMDProp_DriverRequestsApplicationPause_Bool_2058) \
	op(EVRDeviceProperty_Bool::HMDProp_DriverRequestsReducedRendering_Bool_2059) \
	op(EVRDeviceProperty_Bool::HMDProp_ConfigurationIncludesLighthouse20Features_Bool_2069) \
	op(EVRDeviceProperty_Bool::HMDProp_DriverProvidedChaperoneVisibility_Bool_2076) \
	op(EVRDeviceProperty_Bool::HMDProp_DisplaySupportsMultipleFramerates_Bool_2081) \
	op(EVRDeviceProperty_Bool::TrackRefProp_CanWirelessIdentify_Bool_4007) \
	op(EVRDeviceProperty_Bool::DriverProp_HasDisplayComponent_Bool_6002) \
	op(EVRDeviceProperty_Bool::DriverProp_HasControllerComponent_Bool_6003) \
	op(EVRDeviceProperty_Bool::DriverProp_HasCameraComponent_Bool_6004) \
	op(EVRDeviceProperty_Bool::DriverProp_HasDriverDirectModeComponent_Bool_6005) \
	op(EVRDeviceProperty_Bool::DriverProp_HasVirtualDisplayComponent_Bool_6006) \
	op(EVRDeviceProperty_Bool::DriverProp_HasSpatialAnchorsSupport_Bool_6007) 

enum class EVRDeviceProperty_Bool : uint8;
template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRDeviceProperty_Bool>();

#define FOREACH_ENUM_EVRDEVICEPROPERTY_STRING(op) \
	op(EVRDeviceProperty_String::Prop_TrackingSystemName_String_1000) \
	op(EVRDeviceProperty_String::Prop_ModelNumber_String_1001) \
	op(EVRDeviceProperty_String::Prop_SerialNumber_String_1002) \
	op(EVRDeviceProperty_String::Prop_RenderModelName_String_1003) \
	op(EVRDeviceProperty_String::Prop_ManufacturerName_String_1005) \
	op(EVRDeviceProperty_String::Prop_TrackingFirmwareVersion_String_1006) \
	op(EVRDeviceProperty_String::Prop_HardwareRevision_String_1007) \
	op(EVRDeviceProperty_String::Prop_AllWirelessDongleDescriptions_String_1008) \
	op(EVRDeviceProperty_String::Prop_ConnectedWirelessDongle_String_1009) \
	op(EVRDeviceProperty_String::Prop_Firmware_ManualUpdateURL_String_1016) \
	op(EVRDeviceProperty_String::Prop_Firmware_ProgrammingTarget_String_1028) \
	op(EVRDeviceProperty_String::Prop_DriverVersion_String_1031) \
	op(EVRDeviceProperty_String::Prop_ResourceRoot_String_1035) \
	op(EVRDeviceProperty_String::Prop_RegisteredDeviceType_String_1036) \
	op(EVRDeviceProperty_String::Prop_InputProfileName_String_1037) \
	op(EVRDeviceProperty_String::Prop_AdditionalDeviceSettingsPath_String_1042) \
	op(EVRDeviceProperty_String::Prop_AdditionalSystemReportData_String_1045) \
	op(EVRDeviceProperty_String::Prop_CompositeFirmwareVersion_String_1046) \
	op(EVRDeviceProperty_String::HMDProp_DisplayMCImageLeft_String_2012) \
	op(EVRDeviceProperty_String::HMDProp_DisplayMCImageRight_String_2013) \
	op(EVRDeviceProperty_String::HMDProp_DisplayGCImage_String_2021) \
	op(EVRDeviceProperty_String::HMDProp_CameraFirmwareDescription_String_2028) \
	op(EVRDeviceProperty_String::HMDProp_DriverProvidedChaperonePath_String_2048) \
	op(EVRDeviceProperty_String::HMDProp_ExpectedControllerType_String_2074) \
	op(EVRDeviceProperty_String::HMDProp_DashboardLayoutPathName_String_2090) \
	op(EVRDeviceProperty_String::ControllerProp_AttachedDeviceId_String_3000) \
	op(EVRDeviceProperty_String::TrackRefProp_ModeLabel_String_4006) \
	op(EVRDeviceProperty_String::UIProp_NamedIconPathDeviceOff_String_5001) \
	op(EVRDeviceProperty_String::UIProp_NamedIconPathDeviceSearching_String_5002) \
	op(EVRDeviceProperty_String::UIProp_NamedIconPathDeviceSearchingAlert_String_5003) \
	op(EVRDeviceProperty_String::UIProp_NamedIconPathDeviceReady_String_5004) \
	op(EVRDeviceProperty_String::UIProp_NamedIconPathDeviceReadyAlert_String_5005) \
	op(EVRDeviceProperty_String::UIProp_NamedIconPathDeviceNotReady_String_5006) \
	op(EVRDeviceProperty_String::UIProp_NamedIconPathDeviceStandby_String_5007) \
	op(EVRDeviceProperty_String::UIProp_NamedIconPathDeviceAlertLow_String_5008) \
	op(EVRDeviceProperty_String::DriverProp_UserConfigPath_String_6000) \
	op(EVRDeviceProperty_String::DriverProp_InstallPath_String_6001) \
	op(EVRDeviceProperty_String::DriverProp_ControllerType_String_7000) 

enum class EVRDeviceProperty_String : uint8;
template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRDeviceProperty_String>();

#define FOREACH_ENUM_EBPSTEAMVRTRACKEDDEVICETYPE(op) \
	op(EBPSteamVRTrackedDeviceType::Controller) \
	op(EBPSteamVRTrackedDeviceType::TrackingReference) \
	op(EBPSteamVRTrackedDeviceType::Other) \
	op(EBPSteamVRTrackedDeviceType::Invalid) 

enum class EBPSteamVRTrackedDeviceType : uint8;
template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPSteamVRTrackedDeviceType>();

#define FOREACH_ENUM_EASYNCBLUEPRINTRESULTSWITCH(op) \
	op(EAsyncBlueprintResultSwitch::OnSuccess) \
	op(EAsyncBlueprintResultSwitch::AsyncLoading) \
	op(EAsyncBlueprintResultSwitch::OnFailure) 

enum class EAsyncBlueprintResultSwitch : uint8;
template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EAsyncBlueprintResultSwitch>();

#define FOREACH_ENUM_EOPENVRCAMERAFRAMETYPE(op) \
	op(EOpenVRCameraFrameType::VRFrameType_Distorted) \
	op(EOpenVRCameraFrameType::VRFrameType_Undistorted) \
	op(EOpenVRCameraFrameType::VRFrameType_MaximumUndistorted) 

enum class EOpenVRCameraFrameType : uint8;
template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EOpenVRCameraFrameType>();

#define FOREACH_ENUM_EBPOVRRESULTSWITCH(op) \
	op(EBPOVRResultSwitch::OnSucceeded) \
	op(EBPOVRResultSwitch::OnFailed) 

enum class EBPOVRResultSwitch : uint8;
template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPOVRResultSwitch>();

#define FOREACH_ENUM_EBPOPENVRTRACKEDDEVICECLASS(op) \
	op(EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_Invalid) \
	op(EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_HMD) \
	op(EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_Controller) \
	op(EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_GenericTracker) \
	op(EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_TrackingReference) \
	op(EBPOpenVRTrackedDeviceClass::TrackedDeviceClass_DisplayRedirect) 

enum class EBPOpenVRTrackedDeviceClass : uint8;
template<> OPENVREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPOpenVRTrackedDeviceClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
