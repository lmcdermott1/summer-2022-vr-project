// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRExpansionEditor/Public/AnimGraphNode_ApplyOpenXRHandPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_ApplyOpenXRHandPose() {}
// Cross Module References
	OPENXREXPANSIONEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_NoRegister();
	OPENXREXPANSIONEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_OpenXRExpansionEditor();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose();
// End Cross Module References
	void UAnimGraphNode_ApplyOpenXRHandPose::StaticRegisterNativesUAnimGraphNode_ApplyOpenXRHandPose()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_NoRegister()
	{
		return UAnimGraphNode_ApplyOpenXRHandPose::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_ApplyOpenXRHandPose.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_ApplyOpenXRHandPose.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_ApplyOpenXRHandPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_ApplyOpenXRHandPose, Node), Z_Construct_UScriptStruct_FAnimNode_ApplyOpenXRHandPose, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_ApplyOpenXRHandPose>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::ClassParams = {
		&UAnimGraphNode_ApplyOpenXRHandPose::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_ApplyOpenXRHandPose, 1110271750);
	template<> OPENXREXPANSIONEDITOR_API UClass* StaticClass<UAnimGraphNode_ApplyOpenXRHandPose>()
	{
		return UAnimGraphNode_ApplyOpenXRHandPose::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_ApplyOpenXRHandPose(Z_Construct_UClass_UAnimGraphNode_ApplyOpenXRHandPose, &UAnimGraphNode_ApplyOpenXRHandPose::StaticClass, TEXT("/Script/OpenXRExpansionEditor"), TEXT("UAnimGraphNode_ApplyOpenXRHandPose"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_ApplyOpenXRHandPose);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
