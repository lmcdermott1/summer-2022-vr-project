// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FVector;
class USceneComponent;
#ifdef VREXPANSIONPLUGIN_GS_GunTools_generated_h
#error "GS_GunTools.generated.h already included, missing '#pragma once' in GS_GunTools.h"
#endif
#define VREXPANSIONPLUGIN_GS_GunTools_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FGunTools_AdvSecondarySettings>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPVirtualStockSettings>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_14_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRVirtualStockModeChangedSignature_Parms \
{ \
	bool IsVirtualStockEngaged; \
}; \
static inline void FVRVirtualStockModeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRVirtualStockModeChangedSignature, bool IsVirtualStockEngaged) \
{ \
	_Script_VRExpansionPlugin_eventVRVirtualStockModeChangedSignature_Parms Parms; \
	Parms.IsVirtualStockEngaged=IsVirtualStockEngaged ? true : false; \
	VRVirtualStockModeChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetRecoil); \
	DECLARE_FUNCTION(execAddRecoilInstance); \
	DECLARE_FUNCTION(execSetVirtualStockEnabled); \
	DECLARE_FUNCTION(execSetVirtualStockComponent);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetRecoil); \
	DECLARE_FUNCTION(execAddRecoilInstance); \
	DECLARE_FUNCTION(execSetVirtualStockEnabled); \
	DECLARE_FUNCTION(execSetVirtualStockComponent);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGS_GunTools(); \
	friend struct Z_Construct_UClass_UGS_GunTools_Statics; \
public: \
	DECLARE_CLASS(UGS_GunTools, UGS_Default, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGS_GunTools)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_INCLASS \
private: \
	static void StaticRegisterNativesUGS_GunTools(); \
	friend struct Z_Construct_UClass_UGS_GunTools_Statics; \
public: \
	DECLARE_CLASS(UGS_GunTools, UGS_Default, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGS_GunTools)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGS_GunTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGS_GunTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGS_GunTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGS_GunTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGS_GunTools(UGS_GunTools&&); \
	NO_API UGS_GunTools(const UGS_GunTools&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGS_GunTools(UGS_GunTools&&); \
	NO_API UGS_GunTools(const UGS_GunTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGS_GunTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGS_GunTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGS_GunTools)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_151_PROLOG
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UGS_GunTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
