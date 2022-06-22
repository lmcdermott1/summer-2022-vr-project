// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EVRInteractibleAxis : uint8;
struct FVector;
class USceneComponent;
struct FBPActorGripInformation;
struct FBPVRInteractibleBaseData;
struct FTransform;
#ifdef VREXPANSIONPLUGIN_VRInteractibleFunctionLibrary_generated_h
#error "VRInteractibleFunctionLibrary.generated.h already included, missing '#pragma once' in VRInteractibleFunctionLibrary.h"
#endif
#define VREXPANSIONPLUGIN_VRInteractibleFunctionLibrary_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPVRInteractibleBaseData>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInteractible_GetThresholdSnappedValue); \
	DECLARE_FUNCTION(execInteractible_GetAngleAroundAxisDelta); \
	DECLARE_FUNCTION(execInteractible_GetAngleAroundAxis); \
	DECLARE_FUNCTION(execInteractible_OnGripInit); \
	DECLARE_FUNCTION(execInteractible_BeginPlayInit); \
	DECLARE_FUNCTION(execInteractible_GetCurrentRelativeTransform); \
	DECLARE_FUNCTION(execInteractible_GetCurrentParentTransform);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteractible_GetThresholdSnappedValue); \
	DECLARE_FUNCTION(execInteractible_GetAngleAroundAxisDelta); \
	DECLARE_FUNCTION(execInteractible_GetAngleAroundAxis); \
	DECLARE_FUNCTION(execInteractible_OnGripInit); \
	DECLARE_FUNCTION(execInteractible_BeginPlayInit); \
	DECLARE_FUNCTION(execInteractible_GetCurrentRelativeTransform); \
	DECLARE_FUNCTION(execInteractible_GetCurrentParentTransform);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRInteractibleFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVRInteractibleFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRInteractibleFunctionLibrary)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUVRInteractibleFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVRInteractibleFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRInteractibleFunctionLibrary)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRInteractibleFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRInteractibleFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRInteractibleFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRInteractibleFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRInteractibleFunctionLibrary(UVRInteractibleFunctionLibrary&&); \
	NO_API UVRInteractibleFunctionLibrary(const UVRInteractibleFunctionLibrary&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRInteractibleFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRInteractibleFunctionLibrary(UVRInteractibleFunctionLibrary&&); \
	NO_API UVRInteractibleFunctionLibrary(const UVRInteractibleFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRInteractibleFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRInteractibleFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRInteractibleFunctionLibrary)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_65_PROLOG
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRInteractibleFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h


#define FOREACH_ENUM_EVRINTERACTIBLEAXIS(op) \
	op(EVRInteractibleAxis::Axis_X) \
	op(EVRInteractibleAxis::Axis_Y) \
	op(EVRInteractibleAxis::Axis_Z) 

enum class EVRInteractibleAxis : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
