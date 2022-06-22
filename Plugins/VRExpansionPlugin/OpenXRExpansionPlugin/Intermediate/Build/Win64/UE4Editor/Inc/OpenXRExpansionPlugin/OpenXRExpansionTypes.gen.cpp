// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRExpansionPlugin/Public/OpenXRExpansionTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRExpansionTypes() {}
// Cross Module References
	OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType();
	UPackage* Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
	OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType();
	OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex();
	OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static UEnum* EVROpenXRSkeletonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("EVROpenXRSkeletonType"));
		}
		return Singleton;
	}
	template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EVROpenXRSkeletonType>()
	{
		return EVROpenXRSkeletonType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVROpenXRSkeletonType(EVROpenXRSkeletonType_StaticEnum, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("EVROpenXRSkeletonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType_Hash() { return 1188261719U; }
	UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVROpenXRSkeletonType"), 0, Get_Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVROpenXRSkeletonType::OXR_SkeletonType_UE4Default_Right", (int64)EVROpenXRSkeletonType::OXR_SkeletonType_UE4Default_Right },
				{ "EVROpenXRSkeletonType::OXR_SkeletonType_UE4Default_Left", (int64)EVROpenXRSkeletonType::OXR_SkeletonType_UE4Default_Left },
				{ "EVROpenXRSkeletonType::OXR_SkeletonType_OpenVRDefault_Right", (int64)EVROpenXRSkeletonType::OXR_SkeletonType_OpenVRDefault_Right },
				{ "EVROpenXRSkeletonType::OXR_SkeletonType_OpenVRDefault_Left", (int64)EVROpenXRSkeletonType::OXR_SkeletonType_OpenVRDefault_Left },
				{ "EVROpenXRSkeletonType::OXR_SkeletonType_Custom", (int64)EVROpenXRSkeletonType::OXR_SkeletonType_Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
				{ "OXR_SkeletonType_Custom.Name", "EVROpenXRSkeletonType::OXR_SkeletonType_Custom" },
				{ "OXR_SkeletonType_OpenVRDefault_Left.Name", "EVROpenXRSkeletonType::OXR_SkeletonType_OpenVRDefault_Left" },
				{ "OXR_SkeletonType_OpenVRDefault_Right.Name", "EVROpenXRSkeletonType::OXR_SkeletonType_OpenVRDefault_Right" },
				{ "OXR_SkeletonType_UE4Default_Left.Name", "EVROpenXRSkeletonType::OXR_SkeletonType_UE4Default_Left" },
				{ "OXR_SkeletonType_UE4Default_Right.Name", "EVROpenXRSkeletonType::OXR_SkeletonType_UE4Default_Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
				nullptr,
				"EVROpenXRSkeletonType",
				"EVROpenXRSkeletonType",
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
	static UEnum* EXRHandJointType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("EXRHandJointType"));
		}
		return Singleton;
	}
	template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EXRHandJointType>()
	{
		return EXRHandJointType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EXRHandJointType(EXRHandJointType_StaticEnum, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("EXRHandJointType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType_Hash() { return 601058464U; }
	UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EXRHandJointType"), 0, Get_Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EXRHandJointType::OXR_HAND_JOINT_PALM_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_PALM_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_WRIST_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_WRIST_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_THUMB_METACARPAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_THUMB_METACARPAL_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_THUMB_PROXIMAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_THUMB_PROXIMAL_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_THUMB_DISTAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_THUMB_DISTAL_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_THUMB_TIP_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_THUMB_TIP_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_INDEX_METACARPAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_INDEX_METACARPAL_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_INDEX_PROXIMAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_INDEX_PROXIMAL_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_INDEX_INTERMEDIATE_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_INDEX_INTERMEDIATE_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_INDEX_DISTAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_INDEX_DISTAL_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_INDEX_TIP_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_INDEX_TIP_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_METACARPAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_MIDDLE_METACARPAL_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_PROXIMAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_MIDDLE_PROXIMAL_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_INTERMEDIATE_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_MIDDLE_INTERMEDIATE_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_DISTAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_MIDDLE_DISTAL_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_TIP_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_MIDDLE_TIP_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_RING_METACARPAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_RING_METACARPAL_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_RING_PROXIMAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_RING_PROXIMAL_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_RING_INTERMEDIATE_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_RING_INTERMEDIATE_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_RING_DISTAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_RING_DISTAL_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_RING_TIP_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_RING_TIP_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_LITTLE_METACARPAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_LITTLE_METACARPAL_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_LITTLE_PROXIMAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_LITTLE_PROXIMAL_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_LITTLE_INTERMEDIATE_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_LITTLE_INTERMEDIATE_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_LITTLE_DISTAL_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_LITTLE_DISTAL_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_LITTLE_TIP_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_LITTLE_TIP_EXT },
				{ "EXRHandJointType::OXR_HAND_JOINT_MAX_ENUM_EXT", (int64)EXRHandJointType::OXR_HAND_JOINT_MAX_ENUM_EXT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
				{ "OXR_HAND_JOINT_INDEX_DISTAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_INDEX_DISTAL_EXT" },
				{ "OXR_HAND_JOINT_INDEX_INTERMEDIATE_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_INDEX_INTERMEDIATE_EXT" },
				{ "OXR_HAND_JOINT_INDEX_METACARPAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_INDEX_METACARPAL_EXT" },
				{ "OXR_HAND_JOINT_INDEX_PROXIMAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_INDEX_PROXIMAL_EXT" },
				{ "OXR_HAND_JOINT_INDEX_TIP_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_INDEX_TIP_EXT" },
				{ "OXR_HAND_JOINT_LITTLE_DISTAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_LITTLE_DISTAL_EXT" },
				{ "OXR_HAND_JOINT_LITTLE_INTERMEDIATE_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_LITTLE_INTERMEDIATE_EXT" },
				{ "OXR_HAND_JOINT_LITTLE_METACARPAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_LITTLE_METACARPAL_EXT" },
				{ "OXR_HAND_JOINT_LITTLE_PROXIMAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_LITTLE_PROXIMAL_EXT" },
				{ "OXR_HAND_JOINT_LITTLE_TIP_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_LITTLE_TIP_EXT" },
				{ "OXR_HAND_JOINT_MAX_ENUM_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_MAX_ENUM_EXT" },
				{ "OXR_HAND_JOINT_MIDDLE_DISTAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_DISTAL_EXT" },
				{ "OXR_HAND_JOINT_MIDDLE_INTERMEDIATE_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_INTERMEDIATE_EXT" },
				{ "OXR_HAND_JOINT_MIDDLE_METACARPAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_METACARPAL_EXT" },
				{ "OXR_HAND_JOINT_MIDDLE_PROXIMAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_PROXIMAL_EXT" },
				{ "OXR_HAND_JOINT_MIDDLE_TIP_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_MIDDLE_TIP_EXT" },
				{ "OXR_HAND_JOINT_PALM_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_PALM_EXT" },
				{ "OXR_HAND_JOINT_RING_DISTAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_RING_DISTAL_EXT" },
				{ "OXR_HAND_JOINT_RING_INTERMEDIATE_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_RING_INTERMEDIATE_EXT" },
				{ "OXR_HAND_JOINT_RING_METACARPAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_RING_METACARPAL_EXT" },
				{ "OXR_HAND_JOINT_RING_PROXIMAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_RING_PROXIMAL_EXT" },
				{ "OXR_HAND_JOINT_RING_TIP_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_RING_TIP_EXT" },
				{ "OXR_HAND_JOINT_THUMB_DISTAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_THUMB_DISTAL_EXT" },
				{ "OXR_HAND_JOINT_THUMB_METACARPAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_THUMB_METACARPAL_EXT" },
				{ "OXR_HAND_JOINT_THUMB_PROXIMAL_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_THUMB_PROXIMAL_EXT" },
				{ "OXR_HAND_JOINT_THUMB_TIP_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_THUMB_TIP_EXT" },
				{ "OXR_HAND_JOINT_WRIST_EXT.Name", "EXRHandJointType::OXR_HAND_JOINT_WRIST_EXT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
				nullptr,
				"EXRHandJointType",
				"EXRHandJointType",
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
	static UEnum* EVRSkeletalHandIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("EVRSkeletalHandIndex"));
		}
		return Singleton;
	}
	template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRSkeletalHandIndex>()
	{
		return EVRSkeletalHandIndex_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRSkeletalHandIndex(EVRSkeletalHandIndex_StaticEnum, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("EVRSkeletalHandIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex_Hash() { return 1780539627U; }
	UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRSkeletalHandIndex"), 0, Get_Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRSkeletalHandIndex::EActionHandIndex_Left", (int64)EVRSkeletalHandIndex::EActionHandIndex_Left },
				{ "EVRSkeletalHandIndex::EActionHandIndex_Right", (int64)EVRSkeletalHandIndex::EActionHandIndex_Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EActionHandIndex_Left.Name", "EVRSkeletalHandIndex::EActionHandIndex_Left" },
				{ "EActionHandIndex_Right.Name", "EVRSkeletalHandIndex::EActionHandIndex_Right" },
				{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
				nullptr,
				"EVRSkeletalHandIndex",
				"EVRSkeletalHandIndex",
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
	static UEnum* EBPXRResultSwitch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("EBPXRResultSwitch"));
		}
		return Singleton;
	}
	template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPXRResultSwitch>()
	{
		return EBPXRResultSwitch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPXRResultSwitch(EBPXRResultSwitch_StaticEnum, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("EBPXRResultSwitch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch_Hash() { return 2426416756U; }
	UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPXRResultSwitch"), 0, Get_Z_Construct_UEnum_OpenXRExpansionPlugin_EBPXRResultSwitch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPXRResultSwitch::OnSucceeded", (int64)EBPXRResultSwitch::OnSucceeded },
				{ "EBPXRResultSwitch::OnFailed", (int64)EBPXRResultSwitch::OnFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// This makes a lot of the blueprint functions cleaner\n" },
				{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
				{ "OnFailed.Comment", "// On Failure\n" },
				{ "OnFailed.Name", "EBPXRResultSwitch::OnFailed" },
				{ "OnFailed.ToolTip", "On Failure" },
				{ "OnSucceeded.Comment", "// On Success\n" },
				{ "OnSucceeded.Name", "EBPXRResultSwitch::OnSucceeded" },
				{ "OnSucceeded.ToolTip", "On Success" },
				{ "ToolTip", "This makes a lot of the blueprint functions cleaner" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
				nullptr,
				"EBPXRResultSwitch",
				"EBPXRResultSwitch",
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
class UScriptStruct* FBPOpenXRSkeletalMappingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENXREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("BPOpenXRSkeletalMappingData"), sizeof(FBPOpenXRSkeletalMappingData), Get_Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Hash());
	}
	return Singleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPOpenXRSkeletalMappingData>()
{
	return FBPOpenXRSkeletalMappingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPOpenXRSkeletalMappingData(FBPOpenXRSkeletalMappingData::StaticStruct, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("BPOpenXRSkeletalMappingData"), false, nullptr, nullptr);
static struct FScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFBPOpenXRSkeletalMappingData
{
	FScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFBPOpenXRSkeletalMappingData()
	{
		UScriptStruct::DeferCppStructOps<FBPOpenXRSkeletalMappingData>(FName(TEXT("BPOpenXRSkeletalMappingData")));
	}
} ScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFBPOpenXRSkeletalMappingData;
	struct Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BonePairs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonePairs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BonePairs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergeMissingBonesUE4_MetaData[];
#endif
		static void NewProp_bMergeMissingBonesUE4_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergeMissingBonesUE4;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|HandSkeleton" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPOpenXRSkeletalMappingData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_BonePairs_Inner = { "BonePairs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_BonePairs_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_BonePairs = { "BonePairs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOpenXRSkeletalMappingData, BonePairs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_BonePairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_BonePairs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_bMergeMissingBonesUE4_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// Merge the transforms of bones that are missing from the OpenVR skeleton to the UE4 one.\n// This should be always enabled for UE4 skeletons generally.\n" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
		{ "ToolTip", "Merge the transforms of bones that are missing from the OpenVR skeleton to the UE4 one.\nThis should be always enabled for UE4 skeletons generally." },
	};
#endif
	void Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_bMergeMissingBonesUE4_SetBit(void* Obj)
	{
		((FBPOpenXRSkeletalMappingData*)Obj)->bMergeMissingBonesUE4 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_bMergeMissingBonesUE4 = { "bMergeMissingBonesUE4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPOpenXRSkeletalMappingData), &Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_bMergeMissingBonesUE4_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_bMergeMissingBonesUE4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_bMergeMissingBonesUE4_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_TargetHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_TargetHand_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// The hand data to get, if not using a custom bone mapping then this value will be auto filled\n" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
		{ "ToolTip", "The hand data to get, if not using a custom bone mapping then this value will be auto filled" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_TargetHand = { "TargetHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOpenXRSkeletalMappingData, TargetHand), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_TargetHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_TargetHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_BonePairs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_BonePairs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_bMergeMissingBonesUE4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_TargetHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::NewProp_TargetHand,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPOpenXRSkeletalMappingData",
		sizeof(FBPOpenXRSkeletalMappingData),
		alignof(FBPOpenXRSkeletalMappingData),
		Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPOpenXRSkeletalMappingData"), sizeof(FBPOpenXRSkeletalMappingData), Get_Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData_Hash() { return 3203272900U; }
class UScriptStruct* FBPOpenXRSkeletalPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENXREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("BPOpenXRSkeletalPair"), sizeof(FBPOpenXRSkeletalPair), Get_Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Hash());
	}
	return Singleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPOpenXRSkeletalPair>()
{
	return FBPOpenXRSkeletalPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPOpenXRSkeletalPair(FBPOpenXRSkeletalPair::StaticStruct, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("BPOpenXRSkeletalPair"), false, nullptr, nullptr);
static struct FScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFBPOpenXRSkeletalPair
{
	FScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFBPOpenXRSkeletalPair()
	{
		UScriptStruct::DeferCppStructOps<FBPOpenXRSkeletalPair>(FName(TEXT("BPOpenXRSkeletalPair")));
	}
} ScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFBPOpenXRSkeletalPair;
	struct Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OpenXRBone_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenXRBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OpenXRBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneToTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneToTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionFunctions|SteamVR|HandSkeleton" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPOpenXRSkeletalPair>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_OpenXRBone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_OpenXRBone_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_OpenXRBone = { "OpenXRBone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOpenXRSkeletalPair, OpenXRBone), Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_OpenXRBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_OpenXRBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_BoneToTarget_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_BoneToTarget = { "BoneToTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOpenXRSkeletalPair, BoneToTarget), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_BoneToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_BoneToTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_OpenXRBone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_OpenXRBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::NewProp_BoneToTarget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPOpenXRSkeletalPair",
		sizeof(FBPOpenXRSkeletalPair),
		alignof(FBPOpenXRSkeletalPair),
		Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPOpenXRSkeletalPair"), sizeof(FBPOpenXRSkeletalPair), Get_Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPOpenXRSkeletalPair_Hash() { return 1117728639U; }
class UScriptStruct* FBPOpenXRActionSkeletalData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENXREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("BPOpenXRActionSkeletalData"), sizeof(FBPOpenXRActionSkeletalData), Get_Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Hash());
	}
	return Singleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPOpenXRActionSkeletalData>()
{
	return FBPOpenXRActionSkeletalData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPOpenXRActionSkeletalData(FBPOpenXRActionSkeletalData::StaticStruct, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("BPOpenXRActionSkeletalData"), false, nullptr, nullptr);
static struct FScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFBPOpenXRActionSkeletalData
{
	FScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFBPOpenXRActionSkeletalData()
	{
		UScriptStruct::DeferCppStructOps<FBPOpenXRActionSkeletalData>(FName(TEXT("BPOpenXRActionSkeletalData")));
	}
} ScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFBPOpenXRActionSkeletalData;
	struct Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldScaleOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldScaleOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDeformingMesh_MetaData[];
#endif
		static void NewProp_bAllowDeformingMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDeformingMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMirrorLeftRight_MetaData[];
#endif
		static void NewProp_bMirrorLeftRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMirrorLeftRight;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletalTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkeletalTransforms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableUE4HandRepSavings_MetaData[];
#endif
		static void NewProp_bEnableUE4HandRepSavings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableUE4HandRepSavings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldSkeletalTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldSkeletalTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OldSkeletalTransforms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasValidData_MetaData[];
#endif
		static void NewProp_bHasValidData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasValidData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionFunctions|OpenXR|HandSkeleton" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPOpenXRActionSkeletalData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_TargetHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_TargetHand_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_TargetHand = { "TargetHand", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOpenXRActionSkeletalData, TargetHand), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_TargetHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_TargetHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_WorldScaleOverride_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// A world scale override that will replace the engines current value and force into the tracked data if non zero\n" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
		{ "ToolTip", "A world scale override that will replace the engines current value and force into the tracked data if non zero" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_WorldScaleOverride = { "WorldScaleOverride", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOpenXRActionSkeletalData, WorldScaleOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_WorldScaleOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_WorldScaleOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bAllowDeformingMesh_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bAllowDeformingMesh_SetBit(void* Obj)
	{
		((FBPOpenXRActionSkeletalData*)Obj)->bAllowDeformingMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bAllowDeformingMesh = { "bAllowDeformingMesh", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPOpenXRActionSkeletalData), &Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bAllowDeformingMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bAllowDeformingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bAllowDeformingMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bMirrorLeftRight_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// If true then the bones will be mirrored from left/right, to allow you to swap a hand mesh or apply to a full body mesh\n" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
		{ "ToolTip", "If true then the bones will be mirrored from left/right, to allow you to swap a hand mesh or apply to a full body mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bMirrorLeftRight_SetBit(void* Obj)
	{
		((FBPOpenXRActionSkeletalData*)Obj)->bMirrorLeftRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bMirrorLeftRight = { "bMirrorLeftRight", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPOpenXRActionSkeletalData), &Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bMirrorLeftRight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bMirrorLeftRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bMirrorLeftRight_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_SkeletalTransforms_Inner = { "SkeletalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_SkeletalTransforms_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_SkeletalTransforms = { "SkeletalTransforms", nullptr, (EPropertyFlags)0x0010000080002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOpenXRActionSkeletalData, SkeletalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_SkeletalTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_SkeletalTransforms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bEnableUE4HandRepSavings_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// If true we will assume that the target skeleton does not have the metacarpal bones and we will not replicate them\n" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
		{ "ToolTip", "If true we will assume that the target skeleton does not have the metacarpal bones and we will not replicate them" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bEnableUE4HandRepSavings_SetBit(void* Obj)
	{
		((FBPOpenXRActionSkeletalData*)Obj)->bEnableUE4HandRepSavings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bEnableUE4HandRepSavings = { "bEnableUE4HandRepSavings", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPOpenXRActionSkeletalData), &Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bEnableUE4HandRepSavings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bEnableUE4HandRepSavings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bEnableUE4HandRepSavings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_OldSkeletalTransforms_Inner = { "OldSkeletalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_OldSkeletalTransforms_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_OldSkeletalTransforms = { "OldSkeletalTransforms", nullptr, (EPropertyFlags)0x0010000080002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOpenXRActionSkeletalData, OldSkeletalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_OldSkeletalTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_OldSkeletalTransforms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_AdditionTransform_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// The rotation required to rotate the finger bones back to X+\n" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
		{ "ToolTip", "The rotation required to rotate the finger bones back to X+" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_AdditionTransform = { "AdditionTransform", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOpenXRActionSkeletalData, AdditionTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_AdditionTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_AdditionTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bHasValidData_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/OpenXRExpansionTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bHasValidData_SetBit(void* Obj)
	{
		((FBPOpenXRActionSkeletalData*)Obj)->bHasValidData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bHasValidData = { "bHasValidData", nullptr, (EPropertyFlags)0x0010000080000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPOpenXRActionSkeletalData), &Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bHasValidData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bHasValidData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bHasValidData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_TargetHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_TargetHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_WorldScaleOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bAllowDeformingMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bMirrorLeftRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_SkeletalTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_SkeletalTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bEnableUE4HandRepSavings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_OldSkeletalTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_OldSkeletalTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_AdditionTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::NewProp_bHasValidData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPOpenXRActionSkeletalData",
		sizeof(FBPOpenXRActionSkeletalData),
		alignof(FBPOpenXRActionSkeletalData),
		Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPOpenXRActionSkeletalData"), sizeof(FBPOpenXRActionSkeletalData), Get_Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData_Hash() { return 2820946915U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
