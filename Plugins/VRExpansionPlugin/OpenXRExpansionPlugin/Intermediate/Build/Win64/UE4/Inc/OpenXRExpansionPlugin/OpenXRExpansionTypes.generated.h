// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPENXREXPANSIONPLUGIN_OpenXRExpansionTypes_generated_h
#error "OpenXRExpansionTypes.generated.h already included, missing '#pragma once' in OpenXRExpansionTypes.h"
#endif
#define OPENXREXPANSIONPLUGIN_OpenXRExpansionTypes_generated_h

#define HostProject_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionTypes_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPOpenXRSkeletalMappingData>();

#define HostProject_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionTypes_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPOpenXRSkeletalPair>();

#define HostProject_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionTypes_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPOpenXRActionSkeletalData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionTypes_h


#define FOREACH_ENUM_EVROPENXRSKELETONTYPE(op) \
	op(EVROpenXRSkeletonType::OXR_SkeletonType_UE4Default_Right) \
	op(EVROpenXRSkeletonType::OXR_SkeletonType_UE4Default_Left) \
	op(EVROpenXRSkeletonType::OXR_SkeletonType_OpenVRDefault_Right) \
	op(EVROpenXRSkeletonType::OXR_SkeletonType_OpenVRDefault_Left) \
	op(EVROpenXRSkeletonType::OXR_SkeletonType_Custom) 

enum class EVROpenXRSkeletonType : uint8;
template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EVROpenXRSkeletonType>();

#define FOREACH_ENUM_EXRHANDJOINTTYPE(op) \
	op(EXRHandJointType::OXR_HAND_JOINT_PALM_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_WRIST_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_THUMB_METACARPAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_THUMB_PROXIMAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_THUMB_DISTAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_THUMB_TIP_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_INDEX_METACARPAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_INDEX_PROXIMAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_INDEX_INTERMEDIATE_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_INDEX_DISTAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_INDEX_TIP_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_MIDDLE_METACARPAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_MIDDLE_PROXIMAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_MIDDLE_INTERMEDIATE_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_MIDDLE_DISTAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_MIDDLE_TIP_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_RING_METACARPAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_RING_PROXIMAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_RING_INTERMEDIATE_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_RING_DISTAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_RING_TIP_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_LITTLE_METACARPAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_LITTLE_PROXIMAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_LITTLE_INTERMEDIATE_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_LITTLE_DISTAL_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_LITTLE_TIP_EXT) \
	op(EXRHandJointType::OXR_HAND_JOINT_MAX_ENUM_EXT) 

enum class EXRHandJointType : uint8;
template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EXRHandJointType>();

#define FOREACH_ENUM_EVRSKELETALHANDINDEX(op) \
	op(EVRSkeletalHandIndex::EActionHandIndex_Left) \
	op(EVRSkeletalHandIndex::EActionHandIndex_Right) 

enum class EVRSkeletalHandIndex : uint8;
template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRSkeletalHandIndex>();

#define FOREACH_ENUM_EBPXRRESULTSWITCH(op) \
	op(EBPXRResultSwitch::OnSucceeded) \
	op(EBPXRResultSwitch::OnFailed) 

enum class EBPXRResultSwitch : uint8;
template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPXRResultSwitch>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
