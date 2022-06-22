// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
#ifdef VREXPANSIONPLUGIN_VRSliderComponent_generated_h
#error "VRSliderComponent.generated.h already included, missing '#pragma once' in VRSliderComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRSliderComponent_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_37_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRSliderFinishedLerpingSignature_Parms \
{ \
	float FinalProgress; \
}; \
static inline void FVRSliderFinishedLerpingSignature_DelegateWrapper(const FMulticastScriptDelegate& VRSliderFinishedLerpingSignature, float FinalProgress) \
{ \
	_Script_VRExpansionPlugin_eventVRSliderFinishedLerpingSignature_Parms Parms; \
	Parms.FinalProgress=FinalProgress; \
	VRSliderFinishedLerpingSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_36_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRSliderHitPointSignature_Parms \
{ \
	float SliderProgressPoint; \
}; \
static inline void FVRSliderHitPointSignature_DelegateWrapper(const FMulticastScriptDelegate& VRSliderHitPointSignature, float SliderProgressPoint) \
{ \
	_Script_VRExpansionPlugin_eventVRSliderHitPointSignature_Parms Parms; \
	Parms.SliderProgressPoint=SliderProgressPoint; \
	VRSliderHitPointSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSplineComponentToFollow); \
	DECLARE_FUNCTION(execResetInitialSliderLocation); \
	DECLARE_FUNCTION(execSetSliderProgress); \
	DECLARE_FUNCTION(execCalculateSliderProgress); \
	DECLARE_FUNCTION(execOnRep_InitialRelativeTransform); \
	DECLARE_FUNCTION(execSetGripPriority); \
	DECLARE_FUNCTION(execSetIsLocked);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSplineComponentToFollow); \
	DECLARE_FUNCTION(execResetInitialSliderLocation); \
	DECLARE_FUNCTION(execSetSliderProgress); \
	DECLARE_FUNCTION(execCalculateSliderProgress); \
	DECLARE_FUNCTION(execOnRep_InitialRelativeTransform); \
	DECLARE_FUNCTION(execSetGripPriority); \
	DECLARE_FUNCTION(execSetIsLocked);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_EVENT_PARMS \
	struct VRSliderComponent_eventReceiveSliderFinishedLerping_Parms \
	{ \
		float FinalProgress; \
	}; \
	struct VRSliderComponent_eventReceiveSliderHitPoint_Parms \
	{ \
		float SliderProgressPoint; \
	};


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_CALLBACK_WRAPPERS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRSliderComponent(); \
	friend struct Z_Construct_UClass_UVRSliderComponent_Statics; \
public: \
	DECLARE_CLASS(UVRSliderComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRSliderComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVRSliderComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SplineComponentToFollow=NETFIELD_REP_START, \
		InitialRelativeTransform, \
		GameplayTags, \
		bRepGameplayTags, \
		bReplicateMovement, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUVRSliderComponent(); \
	friend struct Z_Construct_UClass_UVRSliderComponent_Statics; \
public: \
	DECLARE_CLASS(UVRSliderComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRSliderComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVRSliderComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SplineComponentToFollow=NETFIELD_REP_START, \
		InitialRelativeTransform, \
		GameplayTags, \
		bRepGameplayTags, \
		bReplicateMovement, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRSliderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRSliderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRSliderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRSliderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRSliderComponent(UVRSliderComponent&&); \
	NO_API UVRSliderComponent(const UVRSliderComponent&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRSliderComponent(UVRSliderComponent&&); \
	NO_API UVRSliderComponent(const UVRSliderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRSliderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRSliderComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRSliderComponent)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_42_PROLOG \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_EVENT_PARMS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRSliderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h


#define FOREACH_ENUM_EVRINTERACTIBLESLIDERDROPBEHAVIOR(op) \
	op(EVRInteractibleSliderDropBehavior::Stay) \
	op(EVRInteractibleSliderDropBehavior::RetainMomentum) 

enum class EVRInteractibleSliderDropBehavior : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleSliderDropBehavior>();

#define FOREACH_ENUM_EVRINTERACTIBLESLIDERLERPTYPE(op) \
	op(EVRInteractibleSliderLerpType::Lerp_None) \
	op(EVRInteractibleSliderLerpType::Lerp_Interp) \
	op(EVRInteractibleSliderLerpType::Lerp_InterpConstantTo) 

enum class EVRInteractibleSliderLerpType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleSliderLerpType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
