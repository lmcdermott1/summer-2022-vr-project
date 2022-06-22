// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
enum class EVRConjoinedMovementModes : uint8;
enum class EVRMoveAction : uint8;
enum class EVRMoveActionDataReq : uint8;
struct FRotator;
enum class EVRMoveActionVelocityRetention : uint8;
#ifdef VREXPANSIONPLUGIN_VRBaseCharacterMovementComponent_generated_h
#error "VRBaseCharacterMovementComponent.generated.h already included, missing '#pragma once' in VRBaseCharacterMovementComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRBaseCharacterMovementComponent_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_21_DELEGATE \
struct _Script_VRExpansionPlugin_eventVROnPerformClimbingStepUp_Parms \
{ \
	FVector FinalStepUpLocation; \
}; \
static inline void FVROnPerformClimbingStepUp_DelegateWrapper(const FMulticastScriptDelegate& VROnPerformClimbingStepUp, FVector FinalStepUpLocation) \
{ \
	_Script_VRExpansionPlugin_eventVROnPerformClimbingStepUp_Parms Parms; \
	Parms.FinalStepUpLocation=FinalStepUpLocation; \
	VROnPerformClimbingStepUp.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetReplicatedMovementMode); \
	DECLARE_FUNCTION(execSetReplicatedMovementMode); \
	DECLARE_FUNCTION(execSetClimbingMode); \
	DECLARE_FUNCTION(execGetCustomInputVector); \
	DECLARE_FUNCTION(execRewindVRMovement); \
	DECLARE_FUNCTION(execPerformMoveAction_Custom); \
	DECLARE_FUNCTION(execPerformMoveAction_StopAllMovement); \
	DECLARE_FUNCTION(execPerformMoveAction_Teleport); \
	DECLARE_FUNCTION(execPerformMoveAction_SetRotation); \
	DECLARE_FUNCTION(execPerformMoveAction_SnapTurn); \
	DECLARE_FUNCTION(execClearCustomReplicatedMovement); \
	DECLARE_FUNCTION(execAddCustomReplicatedMovement); \
	DECLARE_FUNCTION(execSetCrouchedHalfHeight);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetReplicatedMovementMode); \
	DECLARE_FUNCTION(execSetReplicatedMovementMode); \
	DECLARE_FUNCTION(execSetClimbingMode); \
	DECLARE_FUNCTION(execGetCustomInputVector); \
	DECLARE_FUNCTION(execRewindVRMovement); \
	DECLARE_FUNCTION(execPerformMoveAction_Custom); \
	DECLARE_FUNCTION(execPerformMoveAction_StopAllMovement); \
	DECLARE_FUNCTION(execPerformMoveAction_Teleport); \
	DECLARE_FUNCTION(execPerformMoveAction_SetRotation); \
	DECLARE_FUNCTION(execPerformMoveAction_SnapTurn); \
	DECLARE_FUNCTION(execClearCustomReplicatedMovement); \
	DECLARE_FUNCTION(execAddCustomReplicatedMovement); \
	DECLARE_FUNCTION(execSetCrouchedHalfHeight);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRBaseCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UVRBaseCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRBaseCharacterMovementComponent)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUVRBaseCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UVRBaseCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRBaseCharacterMovementComponent)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRBaseCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRBaseCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRBaseCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRBaseCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRBaseCharacterMovementComponent(UVRBaseCharacterMovementComponent&&); \
	NO_API UVRBaseCharacterMovementComponent(const UVRBaseCharacterMovementComponent&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRBaseCharacterMovementComponent(UVRBaseCharacterMovementComponent&&); \
	NO_API UVRBaseCharacterMovementComponent(const UVRBaseCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRBaseCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRBaseCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRBaseCharacterMovementComponent)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_PROLOG
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRBaseCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
