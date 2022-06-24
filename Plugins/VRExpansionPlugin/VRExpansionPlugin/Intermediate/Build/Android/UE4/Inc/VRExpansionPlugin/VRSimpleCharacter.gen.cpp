// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/SimpleChar/VRSimpleCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRSimpleCharacter() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRSimpleCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRSimpleCharacter();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AVRSimpleCharacter::StaticRegisterNativesAVRSimpleCharacter()
	{
	}
	UClass* Z_Construct_UClass_AVRSimpleCharacter_NoRegister()
	{
		return AVRSimpleCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AVRSimpleCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRSceneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRSimpleCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVRBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRSimpleCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SimpleChar/VRSimpleCharacter.h" },
		{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRSimpleCharacter_Statics::NewProp_VRSceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRSimpleCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRSimpleCharacter_Statics::NewProp_VRSceneComponent = { "VRSceneComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRSimpleCharacter, VRSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRSimpleCharacter_Statics::NewProp_VRSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRSimpleCharacter_Statics::NewProp_VRSceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRSimpleCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRSimpleCharacter_Statics::NewProp_VRSceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRSimpleCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRSimpleCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRSimpleCharacter_Statics::ClassParams = {
		&AVRSimpleCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVRSimpleCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVRSimpleCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVRSimpleCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRSimpleCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRSimpleCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRSimpleCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRSimpleCharacter, 327780823);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRSimpleCharacter>()
	{
		return AVRSimpleCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRSimpleCharacter(Z_Construct_UClass_AVRSimpleCharacter, &AVRSimpleCharacter::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRSimpleCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRSimpleCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
