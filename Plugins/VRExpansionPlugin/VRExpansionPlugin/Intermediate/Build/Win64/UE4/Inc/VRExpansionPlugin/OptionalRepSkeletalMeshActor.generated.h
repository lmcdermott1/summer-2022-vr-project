// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_OptionalRepSkeletalMeshActor_generated_h
#error "OptionalRepSkeletalMeshActor.generated.h already included, missing '#pragma once' in OptionalRepSkeletalMeshActor.h"
#endif
#define VREXPANSIONPLUGIN_OptionalRepSkeletalMeshActor_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FSkeletalMeshComponentEndPhysicsTickFunctionVR>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_RPC_WRAPPERS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNoRepSphereComponent(); \
	friend struct Z_Construct_UClass_UNoRepSphereComponent_Statics; \
public: \
	DECLARE_CLASS(UNoRepSphereComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UNoRepSphereComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicateMovement=NETFIELD_REP_START, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUNoRepSphereComponent(); \
	friend struct Z_Construct_UClass_UNoRepSphereComponent_Statics; \
public: \
	DECLARE_CLASS(UNoRepSphereComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UNoRepSphereComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicateMovement=NETFIELD_REP_START, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNoRepSphereComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNoRepSphereComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoRepSphereComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoRepSphereComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNoRepSphereComponent(UNoRepSphereComponent&&); \
	NO_API UNoRepSphereComponent(const UNoRepSphereComponent&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNoRepSphereComponent(UNoRepSphereComponent&&); \
	NO_API UNoRepSphereComponent(const UNoRepSphereComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoRepSphereComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoRepSphereComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNoRepSphereComponent)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_15_PROLOG
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UNoRepSphereComponent>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_RPC_WRAPPERS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInversePhysicsSkeletalMeshComponent(); \
	friend struct Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UInversePhysicsSkeletalMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UInversePhysicsSkeletalMeshComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicateMovement=NETFIELD_REP_START, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUInversePhysicsSkeletalMeshComponent(); \
	friend struct Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UInversePhysicsSkeletalMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UInversePhysicsSkeletalMeshComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicateMovement=NETFIELD_REP_START, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInversePhysicsSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInversePhysicsSkeletalMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInversePhysicsSkeletalMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInversePhysicsSkeletalMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInversePhysicsSkeletalMeshComponent(UInversePhysicsSkeletalMeshComponent&&); \
	NO_API UInversePhysicsSkeletalMeshComponent(const UInversePhysicsSkeletalMeshComponent&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInversePhysicsSkeletalMeshComponent(UInversePhysicsSkeletalMeshComponent&&); \
	NO_API UInversePhysicsSkeletalMeshComponent(const UInversePhysicsSkeletalMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInversePhysicsSkeletalMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInversePhysicsSkeletalMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInversePhysicsSkeletalMeshComponent)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_57_PROLOG
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UInversePhysicsSkeletalMeshComponent>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_RPC_WRAPPERS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOptionalRepGrippableSkeletalMeshActor(); \
	friend struct Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics; \
public: \
	DECLARE_CLASS(AOptionalRepGrippableSkeletalMeshActor, ASkeletalMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOptionalRepGrippableSkeletalMeshActor) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIgnoreAttachmentReplication=NETFIELD_REP_START, \
		bIgnorePhysicsReplication, \
		NETFIELD_REP_END=bIgnorePhysicsReplication	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_INCLASS \
private: \
	static void StaticRegisterNativesAOptionalRepGrippableSkeletalMeshActor(); \
	friend struct Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics; \
public: \
	DECLARE_CLASS(AOptionalRepGrippableSkeletalMeshActor, ASkeletalMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOptionalRepGrippableSkeletalMeshActor) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIgnoreAttachmentReplication=NETFIELD_REP_START, \
		bIgnorePhysicsReplication, \
		NETFIELD_REP_END=bIgnorePhysicsReplication	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOptionalRepGrippableSkeletalMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOptionalRepGrippableSkeletalMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOptionalRepGrippableSkeletalMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOptionalRepGrippableSkeletalMeshActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOptionalRepGrippableSkeletalMeshActor(AOptionalRepGrippableSkeletalMeshActor&&); \
	NO_API AOptionalRepGrippableSkeletalMeshActor(const AOptionalRepGrippableSkeletalMeshActor&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOptionalRepGrippableSkeletalMeshActor(AOptionalRepGrippableSkeletalMeshActor&&); \
	NO_API AOptionalRepGrippableSkeletalMeshActor(const AOptionalRepGrippableSkeletalMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOptionalRepGrippableSkeletalMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOptionalRepGrippableSkeletalMeshActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOptionalRepGrippableSkeletalMeshActor)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_93_PROLOG
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class AOptionalRepGrippableSkeletalMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
