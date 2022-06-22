// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_VRMountComponent_generated_h
#error "VRMountComponent.generated.h already included, missing '#pragma once' in VRMountComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRMountComponent_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetInitialMountLocation); \
	DECLARE_FUNCTION(execSetGripPriority);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetInitialMountLocation); \
	DECLARE_FUNCTION(execSetGripPriority);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRMountComponent(); \
	friend struct Z_Construct_UClass_UVRMountComponent_Statics; \
public: \
	DECLARE_CLASS(UVRMountComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRMountComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVRMountComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameplayTags=NETFIELD_REP_START, \
		bRepGameplayTags, \
		bReplicateMovement, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUVRMountComponent(); \
	friend struct Z_Construct_UClass_UVRMountComponent_Statics; \
public: \
	DECLARE_CLASS(UVRMountComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRMountComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVRMountComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameplayTags=NETFIELD_REP_START, \
		bRepGameplayTags, \
		bReplicateMovement, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRMountComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRMountComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRMountComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRMountComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRMountComponent(UVRMountComponent&&); \
	NO_API UVRMountComponent(const UVRMountComponent&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRMountComponent(UVRMountComponent&&); \
	NO_API UVRMountComponent(const UVRMountComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRMountComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRMountComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRMountComponent)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_32_PROLOG
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRMountComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h


#define FOREACH_ENUM_EVRINTERACTIBLEMOUNTAXIS(op) \
	op(EVRInteractibleMountAxis::Axis_XZ) 

enum class EVRInteractibleMountAxis : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleMountAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
