// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_GrippableSphereComponent_generated_h
#error "GrippableSphereComponent.generated.h already included, missing '#pragma once' in GrippableSphereComponent.h"
#endif
#define VREXPANSIONPLUGIN_GrippableSphereComponent_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGripPriority); \
	DECLARE_FUNCTION(execSetDenyGripping);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGripPriority); \
	DECLARE_FUNCTION(execSetDenyGripping);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrippableSphereComponent(); \
	friend struct Z_Construct_UClass_UGrippableSphereComponent_Statics; \
public: \
	DECLARE_CLASS(UGrippableSphereComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGrippableSphereComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGrippableSphereComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GripLogicScripts=NETFIELD_REP_START, \
		GameplayTags, \
		bRepGripSettingsAndGameplayTags, \
		bReplicateMovement, \
		VRGripInterfaceSettings, \
		NETFIELD_REP_END=VRGripInterfaceSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUGrippableSphereComponent(); \
	friend struct Z_Construct_UClass_UGrippableSphereComponent_Statics; \
public: \
	DECLARE_CLASS(UGrippableSphereComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGrippableSphereComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGrippableSphereComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GripLogicScripts=NETFIELD_REP_START, \
		GameplayTags, \
		bRepGripSettingsAndGameplayTags, \
		bReplicateMovement, \
		VRGripInterfaceSettings, \
		NETFIELD_REP_END=VRGripInterfaceSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrippableSphereComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrippableSphereComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrippableSphereComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrippableSphereComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrippableSphereComponent(UGrippableSphereComponent&&); \
	NO_API UGrippableSphereComponent(const UGrippableSphereComponent&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrippableSphereComponent(UGrippableSphereComponent&&); \
	NO_API UGrippableSphereComponent(const UGrippableSphereComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrippableSphereComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrippableSphereComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrippableSphereComponent)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_21_PROLOG
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UGrippableSphereComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSphereComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
