// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRepMovementVR;
#ifdef VREXPANSIONPLUGIN_GrippableActor_generated_h
#error "GrippableActor.generated.h already included, missing '#pragma once' in GrippableActor.h"
#endif
#define VREXPANSIONPLUGIN_GrippableActor_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_RPC_WRAPPERS \
	virtual bool Server_GetClientAuthReplication_Validate(FRepMovementVR const& ); \
	virtual void Server_GetClientAuthReplication_Implementation(FRepMovementVR const& newMovement); \
	virtual bool Server_EndClientAuthReplication_Validate(); \
	virtual void Server_EndClientAuthReplication_Implementation(); \
 \
	DECLARE_FUNCTION(execIsCurrentlyClientAuthThrowing); \
	DECLARE_FUNCTION(execServer_GetClientAuthReplication); \
	DECLARE_FUNCTION(execServer_EndClientAuthReplication); \
	DECLARE_FUNCTION(execCeaseReplicationBlocking); \
	DECLARE_FUNCTION(execPollReplicationEvent); \
	DECLARE_FUNCTION(execRemoveFromClientReplicationBucket); \
	DECLARE_FUNCTION(execAddToClientReplicationBucket); \
	DECLARE_FUNCTION(execSetGripPriority); \
	DECLARE_FUNCTION(execSetDenyGripping);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_GetClientAuthReplication_Validate(FRepMovementVR const& ); \
	virtual void Server_GetClientAuthReplication_Implementation(FRepMovementVR const& newMovement); \
	virtual bool Server_EndClientAuthReplication_Validate(); \
	virtual void Server_EndClientAuthReplication_Implementation(); \
 \
	DECLARE_FUNCTION(execIsCurrentlyClientAuthThrowing); \
	DECLARE_FUNCTION(execServer_GetClientAuthReplication); \
	DECLARE_FUNCTION(execServer_EndClientAuthReplication); \
	DECLARE_FUNCTION(execCeaseReplicationBlocking); \
	DECLARE_FUNCTION(execPollReplicationEvent); \
	DECLARE_FUNCTION(execRemoveFromClientReplicationBucket); \
	DECLARE_FUNCTION(execAddToClientReplicationBucket); \
	DECLARE_FUNCTION(execSetGripPriority); \
	DECLARE_FUNCTION(execSetDenyGripping);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_EVENT_PARMS \
	struct GrippableActor_eventServer_GetClientAuthReplication_Parms \
	{ \
		FRepMovementVR newMovement; \
	};


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_CALLBACK_WRAPPERS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrippableActor(); \
	friend struct Z_Construct_UClass_AGrippableActor_Statics; \
public: \
	DECLARE_CLASS(AGrippableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AGrippableActor) \
	virtual UObject* _getUObject() const override { return const_cast<AGrippableActor*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AttachmentWeldReplication=NETFIELD_REP_START, \
		GripLogicScripts, \
		ClientAuthReplicationData, \
		GameplayTags, \
		bAllowIgnoringAttachOnOwner, \
		bRepGripSettingsAndGameplayTags, \
		VRGripInterfaceSettings, \
		NETFIELD_REP_END=VRGripInterfaceSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAGrippableActor(); \
	friend struct Z_Construct_UClass_AGrippableActor_Statics; \
public: \
	DECLARE_CLASS(AGrippableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AGrippableActor) \
	virtual UObject* _getUObject() const override { return const_cast<AGrippableActor*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AttachmentWeldReplication=NETFIELD_REP_START, \
		GripLogicScripts, \
		ClientAuthReplicationData, \
		GameplayTags, \
		bAllowIgnoringAttachOnOwner, \
		bRepGripSettingsAndGameplayTags, \
		VRGripInterfaceSettings, \
		NETFIELD_REP_END=VRGripInterfaceSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrippableActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrippableActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrippableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrippableActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrippableActor(AGrippableActor&&); \
	NO_API AGrippableActor(const AGrippableActor&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrippableActor(AGrippableActor&&); \
	NO_API AGrippableActor(const AGrippableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrippableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrippableActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrippableActor)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_24_PROLOG \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_EVENT_PARMS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class AGrippableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
