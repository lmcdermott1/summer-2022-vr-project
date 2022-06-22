// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippableDataTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippableDataTypes() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRepAttachmentWithWeld();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepAttachment();
// End Cross Module References

static_assert(std::is_polymorphic<FRepAttachmentWithWeld>() == std::is_polymorphic<FRepAttachment>(), "USTRUCT FRepAttachmentWithWeld cannot be polymorphic unless super FRepAttachment is polymorphic");

class UScriptStruct* FRepAttachmentWithWeld::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepAttachmentWithWeld, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("RepAttachmentWithWeld"), sizeof(FRepAttachmentWithWeld), Get_Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FRepAttachmentWithWeld>()
{
	return FRepAttachmentWithWeld::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRepAttachmentWithWeld(FRepAttachmentWithWeld::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("RepAttachmentWithWeld"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFRepAttachmentWithWeld
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFRepAttachmentWithWeld()
	{
		UScriptStruct::DeferCppStructOps<FRepAttachmentWithWeld>(FName(TEXT("RepAttachmentWithWeld")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFRepAttachmentWithWeld;
	struct Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWelded_MetaData[];
#endif
		static void NewProp_bIsWelded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWelded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A version of the attachment structure that include welding data\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableDataTypes.h" },
		{ "ToolTip", "A version of the attachment structure that include welding data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepAttachmentWithWeld>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::NewProp_bIsWelded_MetaData[] = {
		{ "Comment", "// Add in the is welded property\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableDataTypes.h" },
		{ "ToolTip", "Add in the is welded property" },
	};
#endif
	void Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::NewProp_bIsWelded_SetBit(void* Obj)
	{
		((FRepAttachmentWithWeld*)Obj)->bIsWelded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::NewProp_bIsWelded = { "bIsWelded", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRepAttachmentWithWeld), &Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::NewProp_bIsWelded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::NewProp_bIsWelded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::NewProp_bIsWelded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::NewProp_bIsWelded,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		Z_Construct_UScriptStruct_FRepAttachment,
		&NewStructOps,
		"RepAttachmentWithWeld",
		sizeof(FRepAttachmentWithWeld),
		alignof(FRepAttachmentWithWeld),
		Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRepAttachmentWithWeld()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RepAttachmentWithWeld"), sizeof(FRepAttachmentWithWeld), Get_Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Hash() { return 957999867U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
