// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPVRControllerProfile;
struct FTransform;
struct FBPVirtualStockSettings;
struct FBPHitSurfaceProperties;
#ifdef VREXPANSIONPLUGIN_VRGlobalSettings_generated_h
#error "VRGlobalSettings.generated.h already included, missing '#pragma once' in VRGlobalSettings.h"
#endif
#define VREXPANSIONPLUGIN_VRGlobalSettings_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPVRControllerProfile>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadControllerProfile); \
	DECLARE_FUNCTION(execLoadControllerProfileByName); \
	DECLARE_FUNCTION(execGetControllerProfile); \
	DECLARE_FUNCTION(execGetCurrentProfile); \
	DECLARE_FUNCTION(execGetCurrentProfileName); \
	DECLARE_FUNCTION(execSaveControllerProfiles); \
	DECLARE_FUNCTION(execDeleteControllerProfile); \
	DECLARE_FUNCTION(execAddControllerProfile); \
	DECLARE_FUNCTION(execOverwriteControllerProfile); \
	DECLARE_FUNCTION(execGetControllerProfiles); \
	DECLARE_FUNCTION(execAdjustTransformByGivenControllerProfile); \
	DECLARE_FUNCTION(execAdjustTransformByControllerProfile); \
	DECLARE_FUNCTION(execSaveVirtualStockGlobalSettings); \
	DECLARE_FUNCTION(execGetVirtualStockGlobalSettings); \
	DECLARE_FUNCTION(execGetMeleeSurfaceGlobalSettings); \
	DECLARE_FUNCTION(execIsGlobalLerpEnabled);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadControllerProfile); \
	DECLARE_FUNCTION(execLoadControllerProfileByName); \
	DECLARE_FUNCTION(execGetControllerProfile); \
	DECLARE_FUNCTION(execGetCurrentProfile); \
	DECLARE_FUNCTION(execGetCurrentProfileName); \
	DECLARE_FUNCTION(execSaveControllerProfiles); \
	DECLARE_FUNCTION(execDeleteControllerProfile); \
	DECLARE_FUNCTION(execAddControllerProfile); \
	DECLARE_FUNCTION(execOverwriteControllerProfile); \
	DECLARE_FUNCTION(execGetControllerProfiles); \
	DECLARE_FUNCTION(execAdjustTransformByGivenControllerProfile); \
	DECLARE_FUNCTION(execAdjustTransformByControllerProfile); \
	DECLARE_FUNCTION(execSaveVirtualStockGlobalSettings); \
	DECLARE_FUNCTION(execGetVirtualStockGlobalSettings); \
	DECLARE_FUNCTION(execGetMeleeSurfaceGlobalSettings); \
	DECLARE_FUNCTION(execIsGlobalLerpEnabled);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRGlobalSettings(); \
	friend struct Z_Construct_UClass_UVRGlobalSettings_Statics; \
public: \
	DECLARE_CLASS(UVRGlobalSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGlobalSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUVRGlobalSettings(); \
	friend struct Z_Construct_UClass_UVRGlobalSettings_Statics; \
public: \
	DECLARE_CLASS(UVRGlobalSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGlobalSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGlobalSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGlobalSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGlobalSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGlobalSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGlobalSettings(UVRGlobalSettings&&); \
	NO_API UVRGlobalSettings(const UVRGlobalSettings&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGlobalSettings(UVRGlobalSettings&&); \
	NO_API UVRGlobalSettings(const UVRGlobalSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGlobalSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGlobalSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGlobalSettings)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_112_PROLOG
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRGlobalSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
