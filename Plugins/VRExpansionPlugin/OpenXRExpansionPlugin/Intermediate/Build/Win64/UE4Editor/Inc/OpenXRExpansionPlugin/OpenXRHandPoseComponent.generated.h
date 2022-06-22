// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EVRSkeletalHandIndex : uint8;
struct FBPSkeletalRepContainer;
struct FBPOpenXRActionSkeletalData;
struct FOpenXRGesture;
struct FBPOpenXRSkeletalMappingData;
#ifdef OPENXREXPANSIONPLUGIN_OpenXRHandPoseComponent_generated_h
#error "OpenXRHandPoseComponent.generated.h already included, missing '#pragma once' in OpenXRHandPoseComponent.h"
#endif
#define OPENXREXPANSIONPLUGIN_OpenXRHandPoseComponent_generated_h

#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_310_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FOpenXRAnimInstanceProxy>();

#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOpenXRGesture_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FOpenXRGesture>();

#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FOpenXRGestureFingerPosition>();

#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPSkeletalRepContainer>();

#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_149_DELEGATE \
struct _Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms \
{ \
	FName GestureEnded; \
	int32 GestureIndex; \
	EVRSkeletalHandIndex ActionHandType; \
}; \
static inline void FOpenXRGestureEnded_DelegateWrapper(const FMulticastScriptDelegate& OpenXRGestureEnded, FName const& GestureEnded, int32 GestureIndex, EVRSkeletalHandIndex ActionHandType) \
{ \
	_Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms Parms; \
	Parms.GestureEnded=GestureEnded; \
	Parms.GestureIndex=GestureIndex; \
	Parms.ActionHandType=ActionHandType; \
	OpenXRGestureEnded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_148_DELEGATE \
struct _Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms \
{ \
	FName GestureDetected; \
	int32 GestureIndex; \
	EVRSkeletalHandIndex ActionHandType; \
}; \
static inline void FOpenXRGestureDetected_DelegateWrapper(const FMulticastScriptDelegate& OpenXRGestureDetected, FName const& GestureDetected, int32 GestureIndex, EVRSkeletalHandIndex ActionHandType) \
{ \
	_Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms Parms; \
	Parms.GestureDetected=GestureDetected; \
	Parms.GestureIndex=GestureIndex; \
	Parms.ActionHandType=ActionHandType; \
	OpenXRGestureDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_SPARSE_DATA
#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_RPC_WRAPPERS
#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_RPC_WRAPPERS_NO_PURE_DECLS
#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenXRGestureDatabase(); \
	friend struct Z_Construct_UClass_UOpenXRGestureDatabase_Statics; \
public: \
	DECLARE_CLASS(UOpenXRGestureDatabase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenXRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOpenXRGestureDatabase)


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_INCLASS \
private: \
	static void StaticRegisterNativesUOpenXRGestureDatabase(); \
	friend struct Z_Construct_UClass_UOpenXRGestureDatabase_Statics; \
public: \
	DECLARE_CLASS(UOpenXRGestureDatabase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenXRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOpenXRGestureDatabase)


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenXRGestureDatabase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenXRGestureDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenXRGestureDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenXRGestureDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenXRGestureDatabase(UOpenXRGestureDatabase&&); \
	NO_API UOpenXRGestureDatabase(const UOpenXRGestureDatabase&); \
public:


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenXRGestureDatabase(UOpenXRGestureDatabase&&); \
	NO_API UOpenXRGestureDatabase(const UOpenXRGestureDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenXRGestureDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenXRGestureDatabase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenXRGestureDatabase)


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_PRIVATE_PROPERTY_OFFSET
#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_133_PROLOG
#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_PRIVATE_PROPERTY_OFFSET \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_SPARSE_DATA \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_RPC_WRAPPERS \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_INCLASS \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_PRIVATE_PROPERTY_OFFSET \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_SPARSE_DATA \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_INCLASS_NO_PURE_DECLS \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_136_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENXREXPANSIONPLUGIN_API UClass* StaticClass<class UOpenXRGestureDatabase>();

#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_SPARSE_DATA
#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_RPC_WRAPPERS \
	virtual bool Server_SendSkeletalTransforms_Validate(FBPSkeletalRepContainer const& ); \
	virtual void Server_SendSkeletalTransforms_Implementation(FBPSkeletalRepContainer const& SkeletalInfo); \
 \
	DECLARE_FUNCTION(execOnRep_SkeletalTransformRight); \
	DECLARE_FUNCTION(execOnRep_SkeletalTransformLeft); \
	DECLARE_FUNCTION(execServer_SendSkeletalTransforms); \
	DECLARE_FUNCTION(execK2_DetectCurrentPose); \
	DECLARE_FUNCTION(execSaveCurrentPose); \
	DECLARE_FUNCTION(execSetDetectGestures);


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SendSkeletalTransforms_Validate(FBPSkeletalRepContainer const& ); \
	virtual void Server_SendSkeletalTransforms_Implementation(FBPSkeletalRepContainer const& SkeletalInfo); \
 \
	DECLARE_FUNCTION(execOnRep_SkeletalTransformRight); \
	DECLARE_FUNCTION(execOnRep_SkeletalTransformLeft); \
	DECLARE_FUNCTION(execServer_SendSkeletalTransforms); \
	DECLARE_FUNCTION(execK2_DetectCurrentPose); \
	DECLARE_FUNCTION(execSaveCurrentPose); \
	DECLARE_FUNCTION(execSetDetectGestures);


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_EVENT_PARMS \
	struct OpenXRHandPoseComponent_eventServer_SendSkeletalTransforms_Parms \
	{ \
		FBPSkeletalRepContainer SkeletalInfo; \
	};


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_CALLBACK_WRAPPERS
#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenXRHandPoseComponent(); \
	friend struct Z_Construct_UClass_UOpenXRHandPoseComponent_Statics; \
public: \
	DECLARE_CLASS(UOpenXRHandPoseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenXRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOpenXRHandPoseComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LeftHandRep=NETFIELD_REP_START, \
		RightHandRep, \
		NETFIELD_REP_END=RightHandRep	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_INCLASS \
private: \
	static void StaticRegisterNativesUOpenXRHandPoseComponent(); \
	friend struct Z_Construct_UClass_UOpenXRHandPoseComponent_Statics; \
public: \
	DECLARE_CLASS(UOpenXRHandPoseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenXRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOpenXRHandPoseComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LeftHandRep=NETFIELD_REP_START, \
		RightHandRep, \
		NETFIELD_REP_END=RightHandRep	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenXRHandPoseComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenXRHandPoseComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenXRHandPoseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenXRHandPoseComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenXRHandPoseComponent(UOpenXRHandPoseComponent&&); \
	NO_API UOpenXRHandPoseComponent(const UOpenXRHandPoseComponent&); \
public:


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenXRHandPoseComponent(UOpenXRHandPoseComponent&&); \
	NO_API UOpenXRHandPoseComponent(const UOpenXRHandPoseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenXRHandPoseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenXRHandPoseComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenXRHandPoseComponent)


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_PRIVATE_PROPERTY_OFFSET
#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_151_PROLOG \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_EVENT_PARMS


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_PRIVATE_PROPERTY_OFFSET \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_SPARSE_DATA \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_RPC_WRAPPERS \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_CALLBACK_WRAPPERS \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_INCLASS \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_PRIVATE_PROPERTY_OFFSET \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_SPARSE_DATA \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_CALLBACK_WRAPPERS \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_INCLASS_NO_PURE_DECLS \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENXREXPANSIONPLUGIN_API UClass* StaticClass<class UOpenXRHandPoseComponent>();

#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_SPARSE_DATA
#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeCustomBoneMapping);


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeCustomBoneMapping);


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenXRAnimInstance(); \
	friend struct Z_Construct_UClass_UOpenXRAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UOpenXRAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OpenXRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOpenXRAnimInstance)


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_INCLASS \
private: \
	static void StaticRegisterNativesUOpenXRAnimInstance(); \
	friend struct Z_Construct_UClass_UOpenXRAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UOpenXRAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OpenXRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOpenXRAnimInstance)


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenXRAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenXRAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenXRAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenXRAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenXRAnimInstance(UOpenXRAnimInstance&&); \
	NO_API UOpenXRAnimInstance(const UOpenXRAnimInstance&); \
public:


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenXRAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenXRAnimInstance(UOpenXRAnimInstance&&); \
	NO_API UOpenXRAnimInstance(const UOpenXRAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenXRAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenXRAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenXRAnimInstance)


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_PRIVATE_PROPERTY_OFFSET
#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_325_PROLOG
#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_PRIVATE_PROPERTY_OFFSET \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_SPARSE_DATA \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_RPC_WRAPPERS \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_INCLASS \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_PRIVATE_PROPERTY_OFFSET \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_SPARSE_DATA \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_RPC_WRAPPERS_NO_PURE_DECLS \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_INCLASS_NO_PURE_DECLS \
	VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h_328_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENXREXPANSIONPLUGIN_API UClass* StaticClass<class UOpenXRAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRBlockOut_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRHandPoseComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
