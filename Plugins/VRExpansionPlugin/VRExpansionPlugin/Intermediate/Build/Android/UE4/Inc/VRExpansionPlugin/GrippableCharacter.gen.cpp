// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippableCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippableCharacter() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableSkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AGrippableCharacter::StaticRegisterNativesAGrippableCharacter()
	{
	}
	UClass* Z_Construct_UClass_AGrippableCharacter_NoRegister()
	{
		return AGrippableCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGrippableCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippableMeshReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippableMeshReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewOriginationSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ViewOriginationSocket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrippableCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Grippables/GrippableCharacter.h" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_GrippableMeshReference_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GrippableCharacter" },
		{ "Comment", "// A reference to the grippable character that can be used instead of casting the root, BP doesn't like the class override.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCharacter.h" },
		{ "ToolTip", "A reference to the grippable character that can be used instead of casting the root, BP doesn't like the class override." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_GrippableMeshReference = { "GrippableMeshReference", nullptr, (EPropertyFlags)0x00100000000a201d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableCharacter, GrippableMeshReference), Z_Construct_UClass_UGrippableSkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_GrippableMeshReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_GrippableMeshReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_ViewOriginationSocket_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "// A Custom bone to use on the character mesh as the originator for the perception systems sight sense\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCharacter.h" },
		{ "ToolTip", "A Custom bone to use on the character mesh as the originator for the perception systems sight sense" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_ViewOriginationSocket = { "ViewOriginationSocket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableCharacter, ViewOriginationSocket), METADATA_PARAMS(Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_ViewOriginationSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_ViewOriginationSocket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrippableCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_GrippableMeshReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_ViewOriginationSocket,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrippableCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrippableCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrippableCharacter_Statics::ClassParams = {
		&AGrippableCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGrippableCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrippableCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrippableCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrippableCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrippableCharacter, 196741913);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AGrippableCharacter>()
	{
		return AGrippableCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrippableCharacter(Z_Construct_UClass_AGrippableCharacter, &AGrippableCharacter::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AGrippableCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrippableCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
