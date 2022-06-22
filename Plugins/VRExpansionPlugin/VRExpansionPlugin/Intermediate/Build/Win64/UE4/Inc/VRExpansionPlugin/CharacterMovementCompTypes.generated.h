// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_CharacterMovementCompTypes_generated_h
#error "CharacterMovementCompTypes.generated.h already included, missing '#pragma once' in CharacterMovementCompTypes.h"
#endif
#define VREXPANSIONPLUGIN_CharacterMovementCompTypes_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_422_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRConditionalMoveRep2>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_338_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRConditionalMoveRep>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_264_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRMoveActionArray_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRMoveActionArray>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRMoveActionContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h


#define FOREACH_ENUM_EVRMOVEACTIONDATAREQ(op) \
	op(EVRMoveActionDataReq::VRMOVEACTIONDATA_None) \
	op(EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC) \
	op(EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT) \
	op(EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT) 

enum class EVRMoveActionDataReq : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveActionDataReq>();

#define FOREACH_ENUM_EVRMOVEACTIONVELOCITYRETENTION(op) \
	op(EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_None) \
	op(EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Clear) \
	op(EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Turn) 

enum class EVRMoveActionVelocityRetention : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveActionVelocityRetention>();

#define FOREACH_ENUM_EVRMOVEACTION(op) \
	op(EVRMoveAction::VRMOVEACTION_None) \
	op(EVRMoveAction::VRMOVEACTION_SnapTurn) \
	op(EVRMoveAction::VRMOVEACTION_Teleport) \
	op(EVRMoveAction::VRMOVEACTION_StopAllMovement) \
	op(EVRMoveAction::VRMOVEACTION_SetRotation) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM1) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM2) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM3) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM4) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM5) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM6) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM7) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM8) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM9) \
	op(EVRMoveAction::VRMOVEACTION_CUSTOM10) 

enum class EVRMoveAction : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
