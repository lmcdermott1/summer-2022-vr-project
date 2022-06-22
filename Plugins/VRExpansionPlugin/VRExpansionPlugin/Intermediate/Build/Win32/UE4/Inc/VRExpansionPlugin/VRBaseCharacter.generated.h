// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
struct FVector;
class UNavigationQueryFilter;
struct FHitResult;
enum class EVRMoveAction : uint8;
struct FRotator;
class USceneComponent;
struct FTransform_NetQuantize;
enum class EVRConjoinedMovementModes : uint8;
struct FBPVRComponentPosRep;
#ifdef VREXPANSIONPLUGIN_VRBaseCharacter_generated_h
#error "VRBaseCharacter.generated.h already included, missing '#pragma once' in VRBaseCharacter.h"
#endif
#define VREXPANSIONPLUGIN_VRBaseCharacter_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_205_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRReplicatedCapsuleHeight>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRSeatedCharacterInfo>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRepMovement Super;


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FRepMovementVRCharacter>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_24_DELEGATE \
static inline void FVRPlayerNetworkCorrectedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRPlayerNetworkCorrectedSignature) \
{ \
	VRPlayerNetworkCorrectedSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_23_DELEGATE \
static inline void FVRPlayerTeleportedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRPlayerTeleportedSignature) \
{ \
	VRPlayerTeleportedSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_22_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRPlayerStateReplicatedSignature_Parms \
{ \
	const APlayerState* NewPlayerState; \
}; \
static inline void FVRPlayerStateReplicatedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRPlayerStateReplicatedSignature, const APlayerState* NewPlayerState) \
{ \
	_Script_VRExpansionPlugin_eventVRPlayerStateReplicatedSignature_Parms Parms; \
	Parms.NewPlayerState=NewPlayerState; \
	VRPlayerStateReplicatedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_21_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms \
{ \
	bool bIsWithinThreshold; \
	float ToThresholdScaler; \
}; \
static inline void FVRSeatThresholdChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRSeatThresholdChangedSignature, bool bIsWithinThreshold, float ToThresholdScaler) \
{ \
	_Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms Parms; \
	Parms.bIsWithinThreshold=bIsWithinThreshold ? true : false; \
	Parms.ToThresholdScaler=ToThresholdScaler; \
	VRSeatThresholdChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_RPC_WRAPPERS \
	virtual void OnEndWallPushback_Implementation(); \
	virtual void OnBeginWallPushback_Implementation(FHitResult HitResultOfImpact, bool bHadLocomotionInput, FVector HmdInput); \
	virtual void OnCustomMoveActionPerformed_Implementation(EVRMoveAction MoveActionType, FVector MoveActionVector, FRotator MoveActionRotator); \
	virtual bool Server_SetSeatedMode_Validate(USceneComponent* , bool , FTransform_NetQuantize , FTransform_NetQuantize , float , float , bool , EVRConjoinedMovementModes ); \
	virtual void Server_SetSeatedMode_Implementation(USceneComponent* SeatParent, bool bSetSeatedMode, FTransform_NetQuantize TargetTransform, FTransform_NetQuantize InitialRelCameraTransform, float AllowedRadius, float AllowedRadiusThreshold, bool bZeroToHead, EVRConjoinedMovementModes PostSeatedMovementMode); \
	virtual bool Server_ReZeroSeating_Validate(FTransform_NetQuantize , FTransform_NetQuantize , bool ); \
	virtual void Server_ReZeroSeating_Implementation(FTransform_NetQuantize NewTargetTransform, FTransform_NetQuantize NewInitialRelCameraTransform, bool bZeroToHead); \
	virtual void OnSeatThreshholdChanged_Implementation(bool bIsWithinThreshold, float ToThresholdScaler); \
	virtual void OnSeatedModeChanged_Implementation(bool bNewSeatedMode, bool bWasAlreadySeated); \
	virtual void UpdateClimbingMovement_Implementation(float DeltaTime); \
	virtual void UpdateLowGravMovement_Implementation(float DeltaTime); \
	virtual void OnClimbingSteppedUp_Implementation(); \
	virtual bool Server_SendTransformRightController_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformRightController_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_SendTransformLeftController_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformLeftController_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_SendTransformCamera_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformCamera_Implementation(FBPVRComponentPosRep NewTransform); \
 \
	DECLARE_FUNCTION(execGetCurrentNavigationPathPoints); \
	DECLARE_FUNCTION(execExtendedSimpleMoveToLocation); \
	DECLARE_FUNCTION(execStopNavigationMovement); \
	DECLARE_FUNCTION(execHasPartialPath); \
	DECLARE_FUNCTION(execGetMoveStatus); \
	DECLARE_FUNCTION(execOnEndWallPushback); \
	DECLARE_FUNCTION(execOnBeginWallPushback); \
	DECLARE_FUNCTION(execOnCustomMoveActionPerformed); \
	DECLARE_FUNCTION(execNotifyOfTeleport); \
	DECLARE_FUNCTION(execGetTeleportLocation); \
	DECLARE_FUNCTION(execSetCharacterHalfHeightVR); \
	DECLARE_FUNCTION(execSetCharacterSizeVR); \
	DECLARE_FUNCTION(execRegenerateOffsetComponentToWorld); \
	DECLARE_FUNCTION(execSetActorLocationAndRotationVR); \
	DECLARE_FUNCTION(execSetActorRotationVR); \
	DECLARE_FUNCTION(execAddActorWorldRotationVR); \
	DECLARE_FUNCTION(execServer_SetSeatedMode); \
	DECLARE_FUNCTION(execServer_ReZeroSeating); \
	DECLARE_FUNCTION(execOnRep_SeatedCharInfo); \
	DECLARE_FUNCTION(execOnSeatThreshholdChanged); \
	DECLARE_FUNCTION(execOnSeatedModeChanged); \
	DECLARE_FUNCTION(execK2_GetVRHeadLocation); \
	DECLARE_FUNCTION(execGetVRRotation); \
	DECLARE_FUNCTION(execGetVRLocation); \
	DECLARE_FUNCTION(execGetVRUpVector); \
	DECLARE_FUNCTION(execGetVRRightVector); \
	DECLARE_FUNCTION(execGetVRForwardVector); \
	DECLARE_FUNCTION(execUpdateClimbingMovement); \
	DECLARE_FUNCTION(execUpdateLowGravMovement); \
	DECLARE_FUNCTION(execOnClimbingSteppedUp); \
	DECLARE_FUNCTION(execOnRep_CapsuleHeight); \
	DECLARE_FUNCTION(execServer_SendTransformRightController); \
	DECLARE_FUNCTION(execServer_SendTransformLeftController); \
	DECLARE_FUNCTION(execServer_SendTransformCamera);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetSeatedMode_Validate(USceneComponent* , bool , FTransform_NetQuantize , FTransform_NetQuantize , float , float , bool , EVRConjoinedMovementModes ); \
	virtual void Server_SetSeatedMode_Implementation(USceneComponent* SeatParent, bool bSetSeatedMode, FTransform_NetQuantize TargetTransform, FTransform_NetQuantize InitialRelCameraTransform, float AllowedRadius, float AllowedRadiusThreshold, bool bZeroToHead, EVRConjoinedMovementModes PostSeatedMovementMode); \
	virtual bool Server_ReZeroSeating_Validate(FTransform_NetQuantize , FTransform_NetQuantize , bool ); \
	virtual void Server_ReZeroSeating_Implementation(FTransform_NetQuantize NewTargetTransform, FTransform_NetQuantize NewInitialRelCameraTransform, bool bZeroToHead); \
	virtual bool Server_SendTransformRightController_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformRightController_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_SendTransformLeftController_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformLeftController_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_SendTransformCamera_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformCamera_Implementation(FBPVRComponentPosRep NewTransform); \
 \
	DECLARE_FUNCTION(execGetCurrentNavigationPathPoints); \
	DECLARE_FUNCTION(execExtendedSimpleMoveToLocation); \
	DECLARE_FUNCTION(execStopNavigationMovement); \
	DECLARE_FUNCTION(execHasPartialPath); \
	DECLARE_FUNCTION(execGetMoveStatus); \
	DECLARE_FUNCTION(execOnEndWallPushback); \
	DECLARE_FUNCTION(execOnBeginWallPushback); \
	DECLARE_FUNCTION(execOnCustomMoveActionPerformed); \
	DECLARE_FUNCTION(execNotifyOfTeleport); \
	DECLARE_FUNCTION(execGetTeleportLocation); \
	DECLARE_FUNCTION(execSetCharacterHalfHeightVR); \
	DECLARE_FUNCTION(execSetCharacterSizeVR); \
	DECLARE_FUNCTION(execRegenerateOffsetComponentToWorld); \
	DECLARE_FUNCTION(execSetActorLocationAndRotationVR); \
	DECLARE_FUNCTION(execSetActorRotationVR); \
	DECLARE_FUNCTION(execAddActorWorldRotationVR); \
	DECLARE_FUNCTION(execServer_SetSeatedMode); \
	DECLARE_FUNCTION(execServer_ReZeroSeating); \
	DECLARE_FUNCTION(execOnRep_SeatedCharInfo); \
	DECLARE_FUNCTION(execOnSeatThreshholdChanged); \
	DECLARE_FUNCTION(execOnSeatedModeChanged); \
	DECLARE_FUNCTION(execK2_GetVRHeadLocation); \
	DECLARE_FUNCTION(execGetVRRotation); \
	DECLARE_FUNCTION(execGetVRLocation); \
	DECLARE_FUNCTION(execGetVRUpVector); \
	DECLARE_FUNCTION(execGetVRRightVector); \
	DECLARE_FUNCTION(execGetVRForwardVector); \
	DECLARE_FUNCTION(execUpdateClimbingMovement); \
	DECLARE_FUNCTION(execUpdateLowGravMovement); \
	DECLARE_FUNCTION(execOnClimbingSteppedUp); \
	DECLARE_FUNCTION(execOnRep_CapsuleHeight); \
	DECLARE_FUNCTION(execServer_SendTransformRightController); \
	DECLARE_FUNCTION(execServer_SendTransformLeftController); \
	DECLARE_FUNCTION(execServer_SendTransformCamera);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_EVENT_PARMS \
	struct VRBaseCharacter_eventOnBeginWallPushback_Parms \
	{ \
		FHitResult HitResultOfImpact; \
		bool bHadLocomotionInput; \
		FVector HmdInput; \
	}; \
	struct VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms \
	{ \
		EVRMoveAction MoveActionType; \
		FVector MoveActionVector; \
		FRotator MoveActionRotator; \
	}; \
	struct VRBaseCharacter_eventOnSeatedModeChanged_Parms \
	{ \
		bool bNewSeatedMode; \
		bool bWasAlreadySeated; \
	}; \
	struct VRBaseCharacter_eventOnSeatThreshholdChanged_Parms \
	{ \
		bool bIsWithinThreshold; \
		float ToThresholdScaler; \
	}; \
	struct VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms \
	{ \
		TEnumAsByte<EPathFollowingResult::Type> PathingResult; \
	}; \
	struct VRBaseCharacter_eventServer_ReZeroSeating_Parms \
	{ \
		FTransform_NetQuantize NewTargetTransform; \
		FTransform_NetQuantize NewInitialRelCameraTransform; \
		bool bZeroToHead; \
	}; \
	struct VRBaseCharacter_eventServer_SendTransformCamera_Parms \
	{ \
		FBPVRComponentPosRep NewTransform; \
	}; \
	struct VRBaseCharacter_eventServer_SendTransformLeftController_Parms \
	{ \
		FBPVRComponentPosRep NewTransform; \
	}; \
	struct VRBaseCharacter_eventServer_SendTransformRightController_Parms \
	{ \
		FBPVRComponentPosRep NewTransform; \
	}; \
	struct VRBaseCharacter_eventServer_SetSeatedMode_Parms \
	{ \
		USceneComponent* SeatParent; \
		bool bSetSeatedMode; \
		FTransform_NetQuantize TargetTransform; \
		FTransform_NetQuantize InitialRelCameraTransform; \
		float AllowedRadius; \
		float AllowedRadiusThreshold; \
		bool bZeroToHead; \
		EVRConjoinedMovementModes PostSeatedMovementMode; \
	}; \
	struct VRBaseCharacter_eventUpdateClimbingMovement_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct VRBaseCharacter_eventUpdateLowGravMovement_Parms \
	{ \
		float DeltaTime; \
	};


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_CALLBACK_WRAPPERS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRBaseCharacter(); \
	friend struct Z_Construct_UClass_AVRBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRBaseCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedMovementVR=NETFIELD_REP_START, \
		VRReplicateCapsuleHeight, \
		ReplicatedCapsuleHeight, \
		SeatInformation, \
		NETFIELD_REP_END=SeatInformation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_INCLASS \
private: \
	static void StaticRegisterNativesAVRBaseCharacter(); \
	friend struct Z_Construct_UClass_AVRBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRBaseCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedMovementVR=NETFIELD_REP_START, \
		VRReplicateCapsuleHeight, \
		ReplicatedCapsuleHeight, \
		SeatInformation, \
		NETFIELD_REP_END=SeatInformation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRBaseCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRBaseCharacter(AVRBaseCharacter&&); \
	NO_API AVRBaseCharacter(const AVRBaseCharacter&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRBaseCharacter(AVRBaseCharacter&&); \
	NO_API AVRBaseCharacter(const AVRBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRBaseCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRBaseCharacter)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_241_PROLOG \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_EVENT_PARMS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_244_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class AVRBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
