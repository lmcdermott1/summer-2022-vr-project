// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGripMotionControllerComponent;
struct FBPActorGripInformation;
class UVRGripScriptBase;
class USceneComponent;
struct FTransform_NetQuantize;
struct FBPGripPair;
struct FKey;
struct FVector;
struct FTransform;
struct FBPAdvGripSettings;
enum class EGripMovementReplicationSettings : uint8;
enum class EGripLateUpdateSettings : uint8;
enum class ESecondaryGripType : uint8;
enum class EGripCollisionType : uint8;
enum class EGripInterfaceTeleportBehavior : uint8;
#ifdef VREXPANSIONPLUGIN_VRGripInterface_generated_h
#error "VRGripInterface.generated.h already included, missing '#pragma once' in VRGripInterface.h"
#endif
#define VREXPANSIONPLUGIN_VRGripInterface_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_27_DELEGATE \
struct _Script_VRExpansionPlugin_eventVROnDropSignature_Parms \
{ \
	UGripMotionControllerComponent* GrippingController; \
	FBPActorGripInformation GripInformation; \
	bool bWasSocketed; \
}; \
static inline void FVROnDropSignature_DelegateWrapper(const FMulticastScriptDelegate& VROnDropSignature, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed) \
{ \
	_Script_VRExpansionPlugin_eventVROnDropSignature_Parms Parms; \
	Parms.GrippingController=GrippingController; \
	Parms.GripInformation=GripInformation; \
	Parms.bWasSocketed=bWasSocketed ? true : false; \
	VROnDropSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_24_DELEGATE \
struct _Script_VRExpansionPlugin_eventVROnGripSignature_Parms \
{ \
	UGripMotionControllerComponent* GrippingController; \
	FBPActorGripInformation GripInformation; \
}; \
static inline void FVROnGripSignature_DelegateWrapper(const FMulticastScriptDelegate& VROnGripSignature, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation) \
{ \
	_Script_VRExpansionPlugin_eventVROnGripSignature_Parms Parms; \
	Parms.GrippingController=GrippingController; \
	Parms.GripInformation=GripInformation; \
	VROnGripSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_RPC_WRAPPERS \
	virtual bool GetGripScripts_Implementation(TArray<UVRGripScriptBase*>& ArrayReference) { return false; }; \
	virtual bool RequestsSocketing_Implementation(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform) { return false; }; \
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld) {}; \
	virtual void IsHeld_Implementation(TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld) {}; \
	virtual bool AllowsMultipleGrips_Implementation() { return false; }; \
	virtual void OnInput_Implementation(FKey Key, EInputEvent KeyEvent) {}; \
	virtual void OnEndSecondaryUsed_Implementation() {}; \
	virtual void OnSecondaryUsed_Implementation() {}; \
	virtual void OnEndUsed_Implementation() {}; \
	virtual void OnUsed_Implementation() {}; \
	virtual void OnSecondaryGripRelease_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation) {}; \
	virtual void OnSecondaryGrip_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation) {}; \
	virtual void OnChildGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed) {}; \
	virtual void OnChildGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation) {}; \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed) {}; \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation) {}; \
	virtual void TickGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime) {}; \
	virtual void ClosestGripSlotInRange_Implementation(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix) {}; \
	virtual float GripBreakDistance_Implementation() { return 0; }; \
	virtual FBPAdvGripSettings AdvancedGripSettings_Implementation() { return FBPAdvGripSettings(); }; \
	virtual void GetGripStiffnessAndDamping_Implementation(float& GripStiffnessOut, float& GripDampingOut) {}; \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation() { return (EGripMovementReplicationSettings)0; }; \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation() { return (EGripLateUpdateSettings)0; }; \
	virtual ESecondaryGripType SecondaryGripType_Implementation() { return (ESecondaryGripType)0; }; \
	virtual EGripCollisionType GetPrimaryGripType_Implementation(bool bIsSlot) { return (EGripCollisionType)0; }; \
	virtual bool SimulateOnDrop_Implementation() { return false; }; \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation() { return (EGripInterfaceTeleportBehavior)0; }; \
	virtual bool DenyGripping_Implementation(UGripMotionControllerComponent* GripInitiator) { return false; }; \
 \
	DECLARE_FUNCTION(execGetGripScripts); \
	DECLARE_FUNCTION(execRequestsSocketing); \
	DECLARE_FUNCTION(execSetHeld); \
	DECLARE_FUNCTION(execIsHeld); \
	DECLARE_FUNCTION(execAllowsMultipleGrips); \
	DECLARE_FUNCTION(execOnInput); \
	DECLARE_FUNCTION(execOnEndSecondaryUsed); \
	DECLARE_FUNCTION(execOnSecondaryUsed); \
	DECLARE_FUNCTION(execOnEndUsed); \
	DECLARE_FUNCTION(execOnUsed); \
	DECLARE_FUNCTION(execOnSecondaryGripRelease); \
	DECLARE_FUNCTION(execOnSecondaryGrip); \
	DECLARE_FUNCTION(execOnChildGripRelease); \
	DECLARE_FUNCTION(execOnChildGrip); \
	DECLARE_FUNCTION(execOnGripRelease); \
	DECLARE_FUNCTION(execOnGrip); \
	DECLARE_FUNCTION(execTickGrip); \
	DECLARE_FUNCTION(execClosestGripSlotInRange); \
	DECLARE_FUNCTION(execGripBreakDistance); \
	DECLARE_FUNCTION(execAdvancedGripSettings); \
	DECLARE_FUNCTION(execGetGripStiffnessAndDamping); \
	DECLARE_FUNCTION(execGripMovementReplicationType); \
	DECLARE_FUNCTION(execGripLateUpdateSetting); \
	DECLARE_FUNCTION(execSecondaryGripType); \
	DECLARE_FUNCTION(execGetPrimaryGripType); \
	DECLARE_FUNCTION(execSimulateOnDrop); \
	DECLARE_FUNCTION(execTeleportBehavior); \
	DECLARE_FUNCTION(execDenyGripping);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetGripScripts_Implementation(TArray<UVRGripScriptBase*>& ArrayReference) { return false; }; \
	virtual bool RequestsSocketing_Implementation(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform) { return false; }; \
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld) {}; \
	virtual void IsHeld_Implementation(TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld) {}; \
	virtual bool AllowsMultipleGrips_Implementation() { return false; }; \
	virtual void OnInput_Implementation(FKey Key, EInputEvent KeyEvent) {}; \
	virtual void OnEndSecondaryUsed_Implementation() {}; \
	virtual void OnSecondaryUsed_Implementation() {}; \
	virtual void OnEndUsed_Implementation() {}; \
	virtual void OnUsed_Implementation() {}; \
	virtual void OnSecondaryGripRelease_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation) {}; \
	virtual void OnSecondaryGrip_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation) {}; \
	virtual void OnChildGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed) {}; \
	virtual void OnChildGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation) {}; \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed) {}; \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation) {}; \
	virtual void TickGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime) {}; \
	virtual void ClosestGripSlotInRange_Implementation(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix) {}; \
	virtual float GripBreakDistance_Implementation() { return 0; }; \
	virtual FBPAdvGripSettings AdvancedGripSettings_Implementation() { return FBPAdvGripSettings(); }; \
	virtual void GetGripStiffnessAndDamping_Implementation(float& GripStiffnessOut, float& GripDampingOut) {}; \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation() { return (EGripMovementReplicationSettings)0; }; \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation() { return (EGripLateUpdateSettings)0; }; \
	virtual ESecondaryGripType SecondaryGripType_Implementation() { return (ESecondaryGripType)0; }; \
	virtual EGripCollisionType GetPrimaryGripType_Implementation(bool bIsSlot) { return (EGripCollisionType)0; }; \
	virtual bool SimulateOnDrop_Implementation() { return false; }; \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation() { return (EGripInterfaceTeleportBehavior)0; }; \
	virtual bool DenyGripping_Implementation(UGripMotionControllerComponent* GripInitiator) { return false; }; \
 \
	DECLARE_FUNCTION(execGetGripScripts); \
	DECLARE_FUNCTION(execRequestsSocketing); \
	DECLARE_FUNCTION(execSetHeld); \
	DECLARE_FUNCTION(execIsHeld); \
	DECLARE_FUNCTION(execAllowsMultipleGrips); \
	DECLARE_FUNCTION(execOnInput); \
	DECLARE_FUNCTION(execOnEndSecondaryUsed); \
	DECLARE_FUNCTION(execOnSecondaryUsed); \
	DECLARE_FUNCTION(execOnEndUsed); \
	DECLARE_FUNCTION(execOnUsed); \
	DECLARE_FUNCTION(execOnSecondaryGripRelease); \
	DECLARE_FUNCTION(execOnSecondaryGrip); \
	DECLARE_FUNCTION(execOnChildGripRelease); \
	DECLARE_FUNCTION(execOnChildGrip); \
	DECLARE_FUNCTION(execOnGripRelease); \
	DECLARE_FUNCTION(execOnGrip); \
	DECLARE_FUNCTION(execTickGrip); \
	DECLARE_FUNCTION(execClosestGripSlotInRange); \
	DECLARE_FUNCTION(execGripBreakDistance); \
	DECLARE_FUNCTION(execAdvancedGripSettings); \
	DECLARE_FUNCTION(execGetGripStiffnessAndDamping); \
	DECLARE_FUNCTION(execGripMovementReplicationType); \
	DECLARE_FUNCTION(execGripLateUpdateSetting); \
	DECLARE_FUNCTION(execSecondaryGripType); \
	DECLARE_FUNCTION(execGetPrimaryGripType); \
	DECLARE_FUNCTION(execSimulateOnDrop); \
	DECLARE_FUNCTION(execTeleportBehavior); \
	DECLARE_FUNCTION(execDenyGripping);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_EVENT_PARMS \
	struct VRGripInterface_eventAdvancedGripSettings_Parms \
	{ \
		FBPAdvGripSettings ReturnValue; \
	}; \
	struct VRGripInterface_eventAllowsMultipleGrips_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventAllowsMultipleGrips_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventClosestGripSlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bSecondarySlot; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
		FName SlotName; \
		UGripMotionControllerComponent* CallingController; \
		FName OverridePrefix; \
	}; \
	struct VRGripInterface_eventDenyGripping_Parms \
	{ \
		UGripMotionControllerComponent* GripInitiator; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventDenyGripping_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventGetGripScripts_Parms \
	{ \
		TArray<UVRGripScriptBase*> ArrayReference; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventGetGripScripts_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventGetGripStiffnessAndDamping_Parms \
	{ \
		float GripStiffnessOut; \
		float GripDampingOut; \
	}; \
	struct VRGripInterface_eventGetPrimaryGripType_Parms \
	{ \
		bool bIsSlot; \
		EGripCollisionType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventGetPrimaryGripType_Parms() \
			: ReturnValue((EGripCollisionType)0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventGripBreakDistance_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventGripBreakDistance_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventGripLateUpdateSetting_Parms \
	{ \
		EGripLateUpdateSettings ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventGripLateUpdateSetting_Parms() \
			: ReturnValue((EGripLateUpdateSettings)0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventGripMovementReplicationType_Parms \
	{ \
		EGripMovementReplicationSettings ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventGripMovementReplicationType_Parms() \
			: ReturnValue((EGripMovementReplicationSettings)0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventIsHeld_Parms \
	{ \
		TArray<FBPGripPair> HoldingControllers; \
		bool bIsHeld; \
	}; \
	struct VRGripInterface_eventOnChildGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripInterface_eventOnChildGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
		bool bWasSocketed; \
	}; \
	struct VRGripInterface_eventOnGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripInterface_eventOnGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
		bool bWasSocketed; \
	}; \
	struct VRGripInterface_eventOnInput_Parms \
	{ \
		FKey Key; \
		TEnumAsByte<EInputEvent> KeyEvent; \
	}; \
	struct VRGripInterface_eventOnSecondaryGrip_Parms \
	{ \
		UGripMotionControllerComponent* GripOwningController; \
		USceneComponent* SecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripInterface_eventOnSecondaryGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* GripOwningController; \
		USceneComponent* ReleasingSecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripInterface_eventRequestsSocketing_Parms \
	{ \
		USceneComponent* ParentToSocketTo; \
		FName OptionalSocketName; \
		FTransform_NetQuantize RelativeTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventRequestsSocketing_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventSecondaryGripType_Parms \
	{ \
		ESecondaryGripType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventSecondaryGripType_Parms() \
			: ReturnValue((ESecondaryGripType)0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventSetHeld_Parms \
	{ \
		UGripMotionControllerComponent* HoldingController; \
		uint8 GripID; \
		bool bIsHeld; \
	}; \
	struct VRGripInterface_eventSimulateOnDrop_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventSimulateOnDrop_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventTeleportBehavior_Parms \
	{ \
		EGripInterfaceTeleportBehavior ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventTeleportBehavior_Parms() \
			: ReturnValue((EGripInterfaceTeleportBehavior)0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventTickGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
		float DeltaTime; \
	};


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_CALLBACK_WRAPPERS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGripInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGripInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGripInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGripInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGripInterface(UVRGripInterface&&); \
	NO_API UVRGripInterface(const UVRGripInterface&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGripInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGripInterface(UVRGripInterface&&); \
	NO_API UVRGripInterface(const UVRGripInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGripInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGripInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGripInterface)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVRGripInterface(); \
	friend struct Z_Construct_UClass_UVRGripInterface_Statics; \
public: \
	DECLARE_CLASS(UVRGripInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGripInterface)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVRGripInterface() {} \
public: \
	typedef UVRGripInterface UClassType; \
	typedef IVRGripInterface ThisClass; \
	static FBPAdvGripSettings Execute_AdvancedGripSettings(UObject* O); \
	static bool Execute_AllowsMultipleGrips(UObject* O); \
	static void Execute_ClosestGripSlotInRange(UObject* O, FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	static bool Execute_DenyGripping(UObject* O, UGripMotionControllerComponent* GripInitiator); \
	static bool Execute_GetGripScripts(UObject* O, TArray<UVRGripScriptBase*>& ArrayReference); \
	static void Execute_GetGripStiffnessAndDamping(UObject* O, float& GripStiffnessOut, float& GripDampingOut); \
	static EGripCollisionType Execute_GetPrimaryGripType(UObject* O, bool bIsSlot); \
	static float Execute_GripBreakDistance(UObject* O); \
	static EGripLateUpdateSettings Execute_GripLateUpdateSetting(UObject* O); \
	static EGripMovementReplicationSettings Execute_GripMovementReplicationType(UObject* O); \
	static void Execute_IsHeld(UObject* O, TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld); \
	static void Execute_OnChildGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnChildGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	static void Execute_OnEndSecondaryUsed(UObject* O); \
	static void Execute_OnEndUsed(UObject* O); \
	static void Execute_OnGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	static void Execute_OnInput(UObject* O, FKey Key, EInputEvent KeyEvent); \
	static void Execute_OnSecondaryGrip(UObject* O, UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnSecondaryGripRelease(UObject* O, UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnSecondaryUsed(UObject* O); \
	static void Execute_OnUsed(UObject* O); \
	static bool Execute_RequestsSocketing(UObject* O, USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform); \
	static ESecondaryGripType Execute_SecondaryGripType(UObject* O); \
	static void Execute_SetHeld(UObject* O, UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld); \
	static bool Execute_SimulateOnDrop(UObject* O); \
	static EGripInterfaceTeleportBehavior Execute_TeleportBehavior(UObject* O); \
	static void Execute_TickGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~IVRGripInterface() {} \
public: \
	typedef UVRGripInterface UClassType; \
	typedef IVRGripInterface ThisClass; \
	static FBPAdvGripSettings Execute_AdvancedGripSettings(UObject* O); \
	static bool Execute_AllowsMultipleGrips(UObject* O); \
	static void Execute_ClosestGripSlotInRange(UObject* O, FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	static bool Execute_DenyGripping(UObject* O, UGripMotionControllerComponent* GripInitiator); \
	static bool Execute_GetGripScripts(UObject* O, TArray<UVRGripScriptBase*>& ArrayReference); \
	static void Execute_GetGripStiffnessAndDamping(UObject* O, float& GripStiffnessOut, float& GripDampingOut); \
	static EGripCollisionType Execute_GetPrimaryGripType(UObject* O, bool bIsSlot); \
	static float Execute_GripBreakDistance(UObject* O); \
	static EGripLateUpdateSettings Execute_GripLateUpdateSetting(UObject* O); \
	static EGripMovementReplicationSettings Execute_GripMovementReplicationType(UObject* O); \
	static void Execute_IsHeld(UObject* O, TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld); \
	static void Execute_OnChildGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnChildGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	static void Execute_OnEndSecondaryUsed(UObject* O); \
	static void Execute_OnEndUsed(UObject* O); \
	static void Execute_OnGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	static void Execute_OnInput(UObject* O, FKey Key, EInputEvent KeyEvent); \
	static void Execute_OnSecondaryGrip(UObject* O, UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnSecondaryGripRelease(UObject* O, UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnSecondaryUsed(UObject* O); \
	static void Execute_OnUsed(UObject* O); \
	static bool Execute_RequestsSocketing(UObject* O, USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform); \
	static ESecondaryGripType Execute_SecondaryGripType(UObject* O); \
	static void Execute_SetHeld(UObject* O, UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld); \
	static bool Execute_SimulateOnDrop(UObject* O); \
	static EGripInterfaceTeleportBehavior Execute_TeleportBehavior(UObject* O); \
	static void Execute_TickGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_16_PROLOG \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_EVENT_PARMS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRGripInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
