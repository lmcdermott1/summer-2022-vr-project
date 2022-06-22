// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/CharacterMovementCompTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovementCompTypes() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep2();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionArray();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static UEnum* EVRMoveActionDataReq_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMoveActionDataReq"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveActionDataReq>()
	{
		return EVRMoveActionDataReq_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMoveActionDataReq(EVRMoveActionDataReq_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRMoveActionDataReq"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Hash() { return 221752244U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMoveActionDataReq"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_None", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_None },
				{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC },
				{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT },
				{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
				{ "VRMOVEACTIONDATA_LOC.Name", "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC" },
				{ "VRMOVEACTIONDATA_LOC_AND_ROT.Name", "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT" },
				{ "VRMOVEACTIONDATA_None.Name", "EVRMoveActionDataReq::VRMOVEACTIONDATA_None" },
				{ "VRMOVEACTIONDATA_ROT.Name", "EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRMoveActionDataReq",
				"EVRMoveActionDataReq",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRMoveActionVelocityRetention_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMoveActionVelocityRetention"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveActionVelocityRetention>()
	{
		return EVRMoveActionVelocityRetention_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMoveActionVelocityRetention(EVRMoveActionVelocityRetention_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRMoveActionVelocityRetention"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Hash() { return 3690973066U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMoveActionVelocityRetention"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_None", (int64)EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_None },
				{ "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Clear", (int64)EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Clear },
				{ "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Turn", (int64)EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Turn },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// What to do with the players velocity when specific move actions are called\n// Default of none leaves it as is, for people with 0 ramp up time on acelleration\n// This likely won't be that useful.\n" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
				{ "ToolTip", "What to do with the players velocity when specific move actions are called\nDefault of none leaves it as is, for people with 0 ramp up time on acelleration\nThis likely won't be that useful." },
				{ "VRMOVEACTION_Velocity_Clear.Comment", "// Clears velocity entirely\n" },
				{ "VRMOVEACTION_Velocity_Clear.Name", "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Clear" },
				{ "VRMOVEACTION_Velocity_Clear.ToolTip", "Clears velocity entirely" },
				{ "VRMOVEACTION_Velocity_None.Comment", "// Leaves velocity as is\n" },
				{ "VRMOVEACTION_Velocity_None.Name", "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_None" },
				{ "VRMOVEACTION_Velocity_None.ToolTip", "Leaves velocity as is" },
				{ "VRMOVEACTION_Velocity_Turn.Comment", "// Rotates the velocity to match new heading\n" },
				{ "VRMOVEACTION_Velocity_Turn.Name", "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Turn" },
				{ "VRMOVEACTION_Velocity_Turn.ToolTip", "Rotates the velocity to match new heading" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRMoveActionVelocityRetention",
				"EVRMoveActionVelocityRetention",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRMoveAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMoveAction"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveAction>()
	{
		return EVRMoveAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMoveAction(EVRMoveAction_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRMoveAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Hash() { return 1040539948U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMoveAction"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMoveAction::VRMOVEACTION_None", (int64)EVRMoveAction::VRMOVEACTION_None },
				{ "EVRMoveAction::VRMOVEACTION_SnapTurn", (int64)EVRMoveAction::VRMOVEACTION_SnapTurn },
				{ "EVRMoveAction::VRMOVEACTION_Teleport", (int64)EVRMoveAction::VRMOVEACTION_Teleport },
				{ "EVRMoveAction::VRMOVEACTION_StopAllMovement", (int64)EVRMoveAction::VRMOVEACTION_StopAllMovement },
				{ "EVRMoveAction::VRMOVEACTION_SetRotation", (int64)EVRMoveAction::VRMOVEACTION_SetRotation },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM1", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM1 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM2", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM2 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM3", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM3 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM4", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM4 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM5", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM5 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM6", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM6 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM7", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM7 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM8", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM8 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM9", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM9 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM10", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM10 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
				{ "VRMOVEACTION_CUSTOM1.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM1" },
				{ "VRMOVEACTION_CUSTOM10.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM10" },
				{ "VRMOVEACTION_CUSTOM2.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM2" },
				{ "VRMOVEACTION_CUSTOM3.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM3" },
				{ "VRMOVEACTION_CUSTOM4.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM4" },
				{ "VRMOVEACTION_CUSTOM5.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM5" },
				{ "VRMOVEACTION_CUSTOM6.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM6" },
				{ "VRMOVEACTION_CUSTOM7.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM7" },
				{ "VRMOVEACTION_CUSTOM8.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM8" },
				{ "VRMOVEACTION_CUSTOM9.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM9" },
				{ "VRMOVEACTION_None.Name", "EVRMoveAction::VRMOVEACTION_None" },
				{ "VRMOVEACTION_SetRotation.Name", "EVRMoveAction::VRMOVEACTION_SetRotation" },
				{ "VRMOVEACTION_SnapTurn.Name", "EVRMoveAction::VRMOVEACTION_SnapTurn" },
				{ "VRMOVEACTION_StopAllMovement.Name", "EVRMoveAction::VRMOVEACTION_StopAllMovement" },
				{ "VRMOVEACTION_Teleport.Name", "EVRMoveAction::VRMOVEACTION_Teleport" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRMoveAction",
				"EVRMoveAction",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVRConditionalMoveRep2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRConditionalMoveRep2, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRConditionalMoveRep2"), sizeof(FVRConditionalMoveRep2), Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRConditionalMoveRep2>()
{
	return FVRConditionalMoveRep2::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRConditionalMoveRep2(FVRConditionalMoveRep2::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRConditionalMoveRep2"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep2
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep2()
	{
		UScriptStruct::DeferCppStructOps<FVRConditionalMoveRep2>(FName(TEXT("VRConditionalMoveRep2")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep2;
	struct Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientBaseBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_ClientYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_ClientPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientRoll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// #TODO: DELETE THIS\n" },
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
		{ "ToolTip", "#TODO: DELETE THIS" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRConditionalMoveRep2>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase_MetaData[] = {
		{ "Comment", "// Moved these here to avoid having to duplicate tons of properties\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
		{ "ToolTip", "Moved these here to avoid having to duplicate tons of properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase = { "ClientMovementBase", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName = { "ClientBaseBoneName", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientBaseBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw = { "ClientYaw", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch = { "ClientPitch", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll = { "ClientRoll", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientRoll), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRConditionalMoveRep2",
		sizeof(FVRConditionalMoveRep2),
		alignof(FVRConditionalMoveRep2),
		Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep2()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRConditionalMoveRep2"), sizeof(FVRConditionalMoveRep2), Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Hash() { return 3415393742U; }
class UScriptStruct* FVRConditionalMoveRep::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRConditionalMoveRep, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRConditionalMoveRep"), sizeof(FVRConditionalMoveRep), Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRConditionalMoveRep>()
{
	return FVRConditionalMoveRep::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRConditionalMoveRep(FVRConditionalMoveRep::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRConditionalMoveRep"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep()
	{
		UScriptStruct::DeferCppStructOps<FVRConditionalMoveRep>(FName(TEXT("VRConditionalMoveRep")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep;
	struct Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomVRInputVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomVRInputVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestedVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRConditionalMoveRep>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector = { "CustomVRInputVector", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep, CustomVRInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity = { "RequestedVelocity", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep, RequestedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray = { "MoveActionArray", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep, MoveActionArray), Z_Construct_UScriptStruct_FVRMoveActionArray, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRConditionalMoveRep",
		sizeof(FVRConditionalMoveRep),
		alignof(FVRConditionalMoveRep),
		Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRConditionalMoveRep"), sizeof(FVRConditionalMoveRep), Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_Hash() { return 1823200094U; }
class UScriptStruct* FVRMoveActionArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMoveActionArray, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRMoveActionArray"), sizeof(FVRMoveActionArray), Get_Z_Construct_UScriptStruct_FVRMoveActionArray_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRMoveActionArray>()
{
	return FVRMoveActionArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMoveActionArray(FVRMoveActionArray::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRMoveActionArray"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionArray
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionArray()
	{
		UScriptStruct::DeferCppStructOps<FVRMoveActionArray>(FName(TEXT("VRMoveActionArray")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionArray;
	struct Z_Construct_UScriptStruct_FVRMoveActionArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MoveActions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMoveActionArray>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_Inner = { "MoveActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVRMoveActionContainer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions = { "MoveActions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionArray, MoveActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRMoveActionArray",
		sizeof(FVRMoveActionArray),
		alignof(FVRMoveActionArray),
		Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMoveActionArray"), sizeof(FVRMoveActionArray), Get_Z_Construct_UScriptStruct_FVRMoveActionArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionArray_Hash() { return 1226396665U; }
class UScriptStruct* FVRMoveActionContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMoveActionContainer, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRMoveActionContainer"), sizeof(FVRMoveActionContainer), Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRMoveActionContainer>()
{
	return FVRMoveActionContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMoveActionContainer(FVRMoveActionContainer::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRMoveActionContainer"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionContainer
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionContainer()
	{
		UScriptStruct::DeferCppStructOps<FVRMoveActionContainer>(FName(TEXT("VRMoveActionContainer")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionContainer;
	struct Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveAction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveAction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveActionDataReq_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionDataReq_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveActionDataReq;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionVel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionVel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionRot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionRot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveActionFlags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VelRetentionSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelRetentionSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VelRetentionSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMoveActionContainer>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveAction), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq = { "MoveActionDataReq", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionDataReq), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc = { "MoveActionLoc", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionVel_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionVel = { "MoveActionVel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionVel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionVel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot = { "MoveActionRot", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionFlags = { "MoveActionFlags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionFlags), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionFlags_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting = { "VelRetentionSetting", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, VelRetentionSetting), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionVel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRMoveActionContainer",
		sizeof(FVRMoveActionContainer),
		alignof(FVRMoveActionContainer),
		Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMoveActionContainer"), sizeof(FVRMoveActionContainer), Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_Hash() { return 325387103U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
