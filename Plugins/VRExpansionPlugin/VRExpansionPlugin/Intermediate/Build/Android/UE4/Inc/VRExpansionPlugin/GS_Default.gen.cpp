// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/GS_Default.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_Default() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Default_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Default();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_ExtendedDefault_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_ExtendedDefault();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
// End Cross Module References
	void UGS_Default::StaticRegisterNativesUGS_Default()
	{
	}
	UClass* Z_Construct_UClass_UGS_Default_NoRegister()
	{
		return UGS_Default::StaticClass();
	}
	struct Z_Construct_UClass_UGS_Default_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGS_Default_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVRGripScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Default_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n* The default grip transform logic for the motion controllers\n*/" },
		{ "HideCategories", "DefaultSettings" },
		{ "IncludePath", "GripScripts/GS_Default.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Default.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The default grip transform logic for the motion controllers" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGS_Default_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGS_Default>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGS_Default_Statics::ClassParams = {
		&UGS_Default::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGS_Default_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Default_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGS_Default()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGS_Default_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGS_Default, 2405152103);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGS_Default>()
	{
		return UGS_Default::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGS_Default(Z_Construct_UClass_UGS_Default, &UGS_Default::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UGS_Default"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGS_Default);
	void UGS_ExtendedDefault::StaticRegisterNativesUGS_ExtendedDefault()
	{
	}
	UClass* Z_Construct_UClass_UGS_ExtendedDefault_NoRegister()
	{
		return UGS_ExtendedDefault::StaticClass();
	}
	struct Z_Construct_UClass_UGS_ExtendedDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitGripScaling_MetaData[];
#endif
		static void NewProp_bLimitGripScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitGripScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumGripScaling_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinimumGripScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumGripScaling_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaximumGripScaling;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGS_ExtendedDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGS_Default,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_ExtendedDefault_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "// An extended default grip script that adds less common grip features that were moved out of the default implementation\n" },
		{ "HideCategories", "TickSettings DefaultSettings" },
		{ "IncludePath", "GripScripts/GS_Default.h" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Default.h" },
		{ "ToolTip", "An extended default grip script that adds less common grip features that were moved out of the default implementation" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_bLimitGripScaling_MetaData[] = {
		{ "Category", "SecondaryGripSettings" },
		{ "Comment", "// Whether clamp the grip scaling in scaling grips\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Default.h" },
		{ "ToolTip", "Whether clamp the grip scaling in scaling grips" },
	};
#endif
	void Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_bLimitGripScaling_SetBit(void* Obj)
	{
		((UGS_ExtendedDefault*)Obj)->bLimitGripScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_bLimitGripScaling = { "bLimitGripScaling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGS_ExtendedDefault), &Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_bLimitGripScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_bLimitGripScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_bLimitGripScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MinimumGripScaling_MetaData[] = {
		{ "Category", "SecondaryGripSettings" },
		{ "Comment", "// Minimum size to allow scaling in double grip to reach\n" },
		{ "editcondition", "bLimitGripScaling" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Default.h" },
		{ "ToolTip", "Minimum size to allow scaling in double grip to reach" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MinimumGripScaling = { "MinimumGripScaling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_ExtendedDefault, MinimumGripScaling), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MinimumGripScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MinimumGripScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MaximumGripScaling_MetaData[] = {
		{ "Category", "SecondaryGripSettings" },
		{ "Comment", "// Maximum size to allow scaling in double grip to reach\n" },
		{ "editcondition", "bLimitGripScaling" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Default.h" },
		{ "ToolTip", "Maximum size to allow scaling in double grip to reach" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MaximumGripScaling = { "MaximumGripScaling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_ExtendedDefault, MaximumGripScaling), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MaximumGripScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MaximumGripScaling_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGS_ExtendedDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_bLimitGripScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MinimumGripScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_ExtendedDefault_Statics::NewProp_MaximumGripScaling,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGS_ExtendedDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGS_ExtendedDefault>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGS_ExtendedDefault_Statics::ClassParams = {
		&UGS_ExtendedDefault::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGS_ExtendedDefault_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGS_ExtendedDefault_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGS_ExtendedDefault_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_ExtendedDefault_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGS_ExtendedDefault()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGS_ExtendedDefault_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGS_ExtendedDefault, 3779407802);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGS_ExtendedDefault>()
	{
		return UGS_ExtendedDefault::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGS_ExtendedDefault(Z_Construct_UClass_UGS_ExtendedDefault, &UGS_ExtendedDefault::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UGS_ExtendedDefault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGS_ExtendedDefault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
