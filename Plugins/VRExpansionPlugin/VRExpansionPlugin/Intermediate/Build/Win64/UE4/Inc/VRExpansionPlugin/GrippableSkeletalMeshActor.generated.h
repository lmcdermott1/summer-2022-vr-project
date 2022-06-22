// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRepMovementVR;
#ifdef VREXPANSIONPLUGIN_GrippableSkeletalMeshActor_generated_h
#error "GrippableSkeletalMeshActor.generated.h already included, missing '#pragma once' in GrippableSkeletalMeshActor.h"
#endif
#define VREXPANSIONPLUGIN_GrippableSkeletalMeshActor_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_RPC_WRAPPERS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptionalRepSkeletalMeshComponent(); \
	friend struct Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UOptionalRepSkeletalMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOptionalRepSkeletalMeshComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicateMovement=NETFIELD_REP_START, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUOptionalRepSkeletalMeshComponent(); \
	friend struct Z_Construct_UClass_UOptionalRepSkeletalMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UOptionalRepSkeletalMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOptionalRepSkeletalMeshComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicateMovement=NETFIELD_REP_START, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptionalRepSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptionalRepSkeletalMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptionalRepSkeletalMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptionalRepSkeletalMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOptionalRepSkeletalMeshComponent(UOptionalRepSkeletalMeshComponent&&); \
	NO_API UOptionalRepSkeletalMeshComponent(const UOptionalRepSkeletalMeshComponent&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOptionalRepSkeletalMeshComponent(UOptionalRepSkeletalMeshComponent&&); \
	NO_API UOptionalRepSkeletalMeshComponent(const UOptionalRepSkeletalMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptionalRepSkeletalMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptionalRepSkeletalMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptionalRepSkeletalMeshComponent)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_27_PROLOG
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UOptionalRepSkeletalMeshComponent>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_RPC_WRAPPERS \
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


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_EVENT_PARMS \
	struct GrippableSkeletalMeshActor_eventServer_GetClientAuthReplication_Parms \
	{ \
		FRepMovementVR newMovement; \
	};


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_CALLBACK_WRAPPERS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrippableSkeletalMeshActor(); \
	friend struct Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics; \
public: \
	DECLARE_CLASS(AGrippableSkeletalMeshActor, ASkeletalMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AGrippableSkeletalMeshActor) \
	virtual UObject* _getUObject() const override { return const_cast<AGrippableSkeletalMeshActor*>(this); } \
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


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_INCLASS \
private: \
	static void StaticRegisterNativesAGrippableSkeletalMeshActor(); \
	friend struct Z_Construct_UClass_AGrippableSkeletalMeshActor_Statics; \
public: \
	DECLARE_CLASS(AGrippableSkeletalMeshActor, ASkeletalMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AGrippableSkeletalMeshActor) \
	virtual UObject* _getUObject() const override { return const_cast<AGrippableSkeletalMeshActor*>(this); } \
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


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrippableSkeletalMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrippableSkeletalMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrippableSkeletalMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrippableSkeletalMeshActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrippableSkeletalMeshActor(AGrippableSkeletalMeshActor&&); \
	NO_API AGrippableSkeletalMeshActor(const AGrippableSkeletalMeshActor&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrippableSkeletalMeshActor(AGrippableSkeletalMeshActor&&); \
	NO_API AGrippableSkeletalMeshActor(const AGrippableSkeletalMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrippableSkeletalMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrippableSkeletalMeshActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrippableSkeletalMeshActor)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_48_PROLOG \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_EVENT_PARMS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class AGrippableSkeletalMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
