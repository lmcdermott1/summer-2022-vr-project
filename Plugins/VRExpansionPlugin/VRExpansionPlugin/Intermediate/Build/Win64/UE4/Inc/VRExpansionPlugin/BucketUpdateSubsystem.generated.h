// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef VREXPANSIONPLUGIN_BucketUpdateSubsystem_generated_h
#error "BucketUpdateSubsystem.generated.h already included, missing '#pragma once' in BucketUpdateSubsystem.h"
#endif
#define VREXPANSIONPLUGIN_BucketUpdateSubsystem_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FUpdateBucketContainer>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpdateBucket_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FUpdateBucket>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FUpdateBucketDrop>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_23_DELEGATE \
static inline void FDynamicBucketUpdateTickSignature_DelegateWrapper(const FScriptDelegate& DynamicBucketUpdateTickSignature) \
{ \
	DynamicBucketUpdateTickSignature.ProcessDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsObjectFunctionInBucket); \
	DECLARE_FUNCTION(execRemoveObjectFromAllBuckets); \
	DECLARE_FUNCTION(execRemoveObjectFromBucketByEvent); \
	DECLARE_FUNCTION(execRemoveObjectFromBucketByFunctionName); \
	DECLARE_FUNCTION(execK2_AddObjectEventToBucket); \
	DECLARE_FUNCTION(execK2_AddObjectToBucket);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsObjectFunctionInBucket); \
	DECLARE_FUNCTION(execRemoveObjectFromAllBuckets); \
	DECLARE_FUNCTION(execRemoveObjectFromBucketByEvent); \
	DECLARE_FUNCTION(execRemoveObjectFromBucketByFunctionName); \
	DECLARE_FUNCTION(execK2_AddObjectEventToBucket); \
	DECLARE_FUNCTION(execK2_AddObjectToBucket);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBucketUpdateSubsystem(); \
	friend struct Z_Construct_UClass_UBucketUpdateSubsystem_Statics; \
public: \
	DECLARE_CLASS(UBucketUpdateSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBucketUpdateSubsystem)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_INCLASS \
private: \
	static void StaticRegisterNativesUBucketUpdateSubsystem(); \
	friend struct Z_Construct_UClass_UBucketUpdateSubsystem_Statics; \
public: \
	DECLARE_CLASS(UBucketUpdateSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBucketUpdateSubsystem)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBucketUpdateSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBucketUpdateSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBucketUpdateSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBucketUpdateSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBucketUpdateSubsystem(UBucketUpdateSubsystem&&); \
	NO_API UBucketUpdateSubsystem(const UBucketUpdateSubsystem&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBucketUpdateSubsystem(UBucketUpdateSubsystem&&); \
	NO_API UBucketUpdateSubsystem(const UBucketUpdateSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBucketUpdateSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBucketUpdateSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBucketUpdateSubsystem)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_105_PROLOG
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UBucketUpdateSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
