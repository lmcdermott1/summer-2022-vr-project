// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_VRDialComponent_generated_h
#error "VRDialComponent.generated.h already included, missing '#pragma once' in VRDialComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRDialComponent_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_20_DELEGATE \
static inline void FVRDialFinishedLerpingSignature_DelegateWrapper(const FMulticastScriptDelegate& VRDialFinishedLerpingSignature) \
{ \
	VRDialFinishedLerpingSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_19_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRDialStateChangedSignature_Parms \
{ \
	float DialMilestoneAngle; \
}; \
static inline void FVRDialStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRDialStateChangedSignature, float DialMilestoneAngle) \
{ \
	_Script_VRExpansionPlugin_eventVRDialStateChangedSignature_Parms Parms; \
	Parms.DialMilestoneAngle=DialMilestoneAngle; \
	VRDialStateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDialAngle); \
	DECLARE_FUNCTION(execAddDialAngle); \
	DECLARE_FUNCTION(execResetInitialDialLocation); \
	DECLARE_FUNCTION(execOnRep_InitialRelativeTransform); \
	DECLARE_FUNCTION(execSetGripPriority);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDialAngle); \
	DECLARE_FUNCTION(execAddDialAngle); \
	DECLARE_FUNCTION(execResetInitialDialLocation); \
	DECLARE_FUNCTION(execOnRep_InitialRelativeTransform); \
	DECLARE_FUNCTION(execSetGripPriority);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_EVENT_PARMS \
	struct VRDialComponent_eventReceiveDialHitSnapAngle_Parms \
	{ \
		float DialMilestoneAngle; \
	};


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_CALLBACK_WRAPPERS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRDialComponent(); \
	friend struct Z_Construct_UClass_UVRDialComponent_Statics; \
public: \
	DECLARE_CLASS(UVRDialComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRDialComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVRDialComponent*>(this); } \
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


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUVRDialComponent(); \
	friend struct Z_Construct_UClass_UVRDialComponent_Statics; \
public: \
	DECLARE_CLASS(UVRDialComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRDialComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVRDialComponent*>(this); } \
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


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRDialComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRDialComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRDialComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRDialComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRDialComponent(UVRDialComponent&&); \
	NO_API UVRDialComponent(const UVRDialComponent&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRDialComponent(UVRDialComponent&&); \
	NO_API UVRDialComponent(const UVRDialComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRDialComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRDialComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRDialComponent)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_22_PROLOG \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_EVENT_PARMS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRDialComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
