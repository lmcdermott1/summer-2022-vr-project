// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EVRInteractibleLeverEventType : uint8;
struct FVector;
#ifdef VREXPANSIONPLUGIN_VRLeverComponent_generated_h
#error "VRLeverComponent.generated.h already included, missing '#pragma once' in VRLeverComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRLeverComponent_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_68_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRLeverFinishedLerpingSignature_Parms \
{ \
	float FinalAngle; \
}; \
static inline void FVRLeverFinishedLerpingSignature_DelegateWrapper(const FMulticastScriptDelegate& VRLeverFinishedLerpingSignature, float FinalAngle) \
{ \
	_Script_VRExpansionPlugin_eventVRLeverFinishedLerpingSignature_Parms Parms; \
	Parms.FinalAngle=FinalAngle; \
	VRLeverFinishedLerpingSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_67_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms \
{ \
	bool LeverStatus; \
	EVRInteractibleLeverEventType LeverStatusType; \
	float LeverAngleAtTime; \
	float FullLeverAngleAtTime; \
}; \
static inline void FVRLeverStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRLeverStateChangedSignature, bool LeverStatus, EVRInteractibleLeverEventType LeverStatusType, float LeverAngleAtTime, float FullLeverAngleAtTime) \
{ \
	_Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms Parms; \
	Parms.LeverStatus=LeverStatus ? true : false; \
	Parms.LeverStatusType=LeverStatusType; \
	Parms.LeverAngleAtTime=LeverAngleAtTime; \
	Parms.FullLeverAngleAtTime=FullLeverAngleAtTime; \
	VRLeverStateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReCalculateCurrentAngle); \
	DECLARE_FUNCTION(execSetLeverAngle); \
	DECLARE_FUNCTION(execResetInitialLeverLocation); \
	DECLARE_FUNCTION(execOnRep_InitialRelativeTransform); \
	DECLARE_FUNCTION(execSetGripPriority); \
	DECLARE_FUNCTION(execSetIsLocked);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReCalculateCurrentAngle); \
	DECLARE_FUNCTION(execSetLeverAngle); \
	DECLARE_FUNCTION(execResetInitialLeverLocation); \
	DECLARE_FUNCTION(execOnRep_InitialRelativeTransform); \
	DECLARE_FUNCTION(execSetGripPriority); \
	DECLARE_FUNCTION(execSetIsLocked);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_EVENT_PARMS \
	struct VRLeverComponent_eventReceiveLeverFinishedLerping_Parms \
	{ \
		float LeverFinalAngle; \
	}; \
	struct VRLeverComponent_eventReceiveLeverStateChanged_Parms \
	{ \
		bool LeverStatus; \
		EVRInteractibleLeverEventType LeverStatusType; \
		float LeverAngleAtTime; \
		float FullLeverAngleAttime; \
	};


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_CALLBACK_WRAPPERS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRLeverComponent(); \
	friend struct Z_Construct_UClass_UVRLeverComponent_Statics; \
public: \
	DECLARE_CLASS(UVRLeverComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRLeverComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVRLeverComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InitialRelativeTransform=NETFIELD_REP_START, \
		GameplayTags, \
		bRepGameplayTags, \
		bReplicateMovement, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUVRLeverComponent(); \
	friend struct Z_Construct_UClass_UVRLeverComponent_Statics; \
public: \
	DECLARE_CLASS(UVRLeverComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRLeverComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVRLeverComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InitialRelativeTransform=NETFIELD_REP_START, \
		GameplayTags, \
		bRepGameplayTags, \
		bReplicateMovement, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRLeverComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRLeverComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRLeverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRLeverComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRLeverComponent(UVRLeverComponent&&); \
	NO_API UVRLeverComponent(const UVRLeverComponent&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRLeverComponent(UVRLeverComponent&&); \
	NO_API UVRLeverComponent(const UVRLeverComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRLeverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRLeverComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRLeverComponent)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_74_PROLOG \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_EVENT_PARMS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRLeverComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h


#define FOREACH_ENUM_EVRINTERACTIBLELEVERRETURNTYPE(op) \
	op(EVRInteractibleLeverReturnType::Stay) \
	op(EVRInteractibleLeverReturnType::ReturnToZero) \
	op(EVRInteractibleLeverReturnType::LerpToMax) \
	op(EVRInteractibleLeverReturnType::LerpToMaxIfOverThreshold) \
	op(EVRInteractibleLeverReturnType::RetainMomentum) 

enum class EVRInteractibleLeverReturnType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleLeverReturnType>();

#define FOREACH_ENUM_EVRINTERACTIBLELEVEREVENTTYPE(op) \
	op(EVRInteractibleLeverEventType::LeverPositive) \
	op(EVRInteractibleLeverEventType::LeverNegative) 

enum class EVRInteractibleLeverEventType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleLeverEventType>();

#define FOREACH_ENUM_EVRINTERACTIBLELEVERAXIS(op) \
	op(EVRInteractibleLeverAxis::Axis_X) \
	op(EVRInteractibleLeverAxis::Axis_Y) \
	op(EVRInteractibleLeverAxis::Axis_Z) \
	op(EVRInteractibleLeverAxis::Axis_XY) \
	op(EVRInteractibleLeverAxis::FlightStick_XY) 

enum class EVRInteractibleLeverAxis : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleLeverAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
