// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRExpansionPlugin/Public/AnimNode_ApplyOpenXRHandPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ApplyOpenXRHandPose() {}
// Cross Module References
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose();
	UPackage* Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_ApplyOpenXRHandPose>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_ApplyOpenXRHandPose cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_ApplyOpenXRHandPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENXREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("AnimNode_ApplyOpenXRHandPose"), sizeof(FAnimNode_ApplyOpenXRHandPose), Get_Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Hash());
	}
	return Singleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FAnimNode_ApplyOpenXRHandPose>()
{
	return FAnimNode_ApplyOpenXRHandPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose(FAnimNode_ApplyOpenXRHandPose::StaticStruct, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("AnimNode_ApplyOpenXRHandPose"), false, nullptr, nullptr);
static struct FScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFAnimNode_ApplyOpenXRHandPose
{
	FScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFAnimNode_ApplyOpenXRHandPose()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_ApplyOpenXRHandPose>(FName(TEXT("AnimNode_ApplyOpenXRHandPose")));
	}
} ScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFAnimNode_ApplyOpenXRHandPose;
	struct Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipRootBone_MetaData[];
#endif
		static void NewProp_bSkipRootBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipRootBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyApplyWristTransform_MetaData[];
#endif
		static void NewProp_bOnlyApplyWristTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyApplyWristTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalStoredActionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalStoredActionInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappedBonePairs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MappedBonePairs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ApplyOpenXRHandPose>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType_MetaData[] = {
		{ "Category", "Skeletal" },
		{ "Comment", "// Generally used when not passing in custom bone mappings, defines the auto mapping style\n" },
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Generally used when not passing in custom bone mappings, defines the auto mapping style" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ApplyOpenXRHandPose, SkeletonType), Z_Construct_UEnum_OpenXRExpansionPlugin_EVROpenXRSkeletonType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone_MetaData[] = {
		{ "Category", "Skeletal" },
		{ "Comment", "// If your hand is part of a full body or arm skeleton and you don't have a proxy bone to retain the position enable this\n" },
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "If your hand is part of a full body or arm skeleton and you don't have a proxy bone to retain the position enable this" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone_SetBit(void* Obj)
	{
		((FAnimNode_ApplyOpenXRHandPose*)Obj)->bSkipRootBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone = { "bSkipRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_ApplyOpenXRHandPose), &Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform_MetaData[] = {
		{ "Category", "Skeletal" },
		{ "Comment", "// If you only want to use the wrist transform part of this\n// This will also automatically add the deform to the wrist as it doesn't make much sense without it\n" },
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "If you only want to use the wrist transform part of this\nThis will also automatically add the deform to the wrist as it doesn't make much sense without it" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform_SetBit(void* Obj)
	{
		((FAnimNode_ApplyOpenXRHandPose*)Obj)->bOnlyApplyWristTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform = { "bOnlyApplyWristTransform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_ApplyOpenXRHandPose), &Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_OptionalStoredActionInfo_MetaData[] = {
		{ "Category", "Skeletal" },
		{ "Comment", "// Generally used when not passing in custom bone mappings, defines the auto mapping style\n" },
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Generally used when not passing in custom bone mappings, defines the auto mapping style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_OptionalStoredActionInfo = { "OptionalStoredActionInfo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ApplyOpenXRHandPose, OptionalStoredActionInfo), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_OptionalStoredActionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_OptionalStoredActionInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_MappedBonePairs_MetaData[] = {
		{ "Category", "Skeletal" },
		{ "Comment", "// MappedBonePairs, if you leave it blank then they will auto generate based off of the SkeletonType\n// Otherwise, fill out yourself.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_ApplyOpenXRHandPose.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "MappedBonePairs, if you leave it blank then they will auto generate based off of the SkeletonType\nOtherwise, fill out yourself." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_MappedBonePairs = { "MappedBonePairs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ApplyOpenXRHandPose, MappedBonePairs), Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_MappedBonePairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_MappedBonePairs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_SkeletonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bSkipRootBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_bOnlyApplyWristTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_OptionalStoredActionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::NewProp_MappedBonePairs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_ApplyOpenXRHandPose",
		sizeof(FAnimNode_ApplyOpenXRHandPose),
		alignof(FAnimNode_ApplyOpenXRHandPose),
		Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ApplyOpenXRHandPose"), sizeof(FAnimNode_ApplyOpenXRHandPose), Get_Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose_Hash() { return 4284977630U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
