// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRGameViewportClient.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGameViewportClient() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGameViewportClient_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGameViewportClient();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
// End Cross Module References
	static UEnum* EVRGameInputMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRGameInputMethod"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRGameInputMethod>()
	{
		return EVRGameInputMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRGameInputMethod(EVRGameInputMethod_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRGameInputMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_Hash() { return 980955914U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRGameInputMethod"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRGameInputMethod::GameInput_Default", (int64)EVRGameInputMethod::GameInput_Default },
				{ "EVRGameInputMethod::GameInput_SharedKeyboardAndMouse", (int64)EVRGameInputMethod::GameInput_SharedKeyboardAndMouse },
				{ "EVRGameInputMethod::GameInput_KeyboardAndMouseToPlayer2", (int64)EVRGameInputMethod::GameInput_KeyboardAndMouseToPlayer2 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GameInput_Default.Name", "EVRGameInputMethod::GameInput_Default" },
				{ "GameInput_KeyboardAndMouseToPlayer2.Name", "EVRGameInputMethod::GameInput_KeyboardAndMouseToPlayer2" },
				{ "GameInput_SharedKeyboardAndMouse.Name", "EVRGameInputMethod::GameInput_SharedKeyboardAndMouse" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRGameInputMethod",
				"EVRGameInputMethod",
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
	void UVRGameViewportClient::StaticRegisterNativesUVRGameViewportClient()
	{
	}
	UClass* Z_Construct_UClass_UVRGameViewportClient_NoRegister()
	{
		return UVRGameViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_UVRGameViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameInputMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInputMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameInputMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlsoChangeGamepPadInput_MetaData[];
#endif
		static void NewProp_bAlsoChangeGamepPadInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlsoChangeGamepPadInput;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GamepadInputCategories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadInputCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GamepadInputCategories;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRGameViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Subclass this in a blueprint to overwrite how default input is passed around in engine between local characters.\n* Generally used for passing keyboard / mouse input to a secondary local player for local mixed gameplay in VR\n*/" },
		{ "IncludePath", "Misc/VRGameViewportClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
		{ "ToolTip", "Subclass this in a blueprint to overwrite how default input is passed around in engine between local characters.\nGenerally used for passing keyboard / mouse input to a secondary local player for local mixed gameplay in VR" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_MetaData[] = {
		{ "Category", "VRExpansionPlugin" },
		{ "Comment", "// Input Method for the viewport\n" },
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
		{ "ToolTip", "Input Method for the viewport" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod = { "GameInputMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGameViewportClient, GameInputMethod), Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod, METADATA_PARAMS(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput_MetaData[] = {
		{ "Category", "VRExpansionPlugin" },
		{ "Comment", "// If true we will also shuffle gamepad input according to the GameInputMethod\n" },
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
		{ "ToolTip", "If true we will also shuffle gamepad input according to the GameInputMethod" },
	};
#endif
	void Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput_SetBit(void* Obj)
	{
		((UVRGameViewportClient*)Obj)->bAlsoChangeGamepPadInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput = { "bAlsoChangeGamepPadInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGameViewportClient), &Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories_Inner = { "GamepadInputCategories", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories_MetaData[] = {
		{ "Category", "VRExpansionPlugin" },
		{ "Comment", "// A List of input categories to consider as valid gamepad ones if bIsGamepad is true on the input event\n" },
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
		{ "ToolTip", "A List of input categories to consider as valid gamepad ones if bIsGamepad is true on the input event" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories = { "GamepadInputCategories", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGameViewportClient, GamepadInputCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRGameViewportClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRGameViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGameViewportClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRGameViewportClient_Statics::ClassParams = {
		&UVRGameViewportClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVRGameViewportClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UVRGameViewportClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRGameViewportClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRGameViewportClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRGameViewportClient, 4078494057);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRGameViewportClient>()
	{
		return UVRGameViewportClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGameViewportClient(Z_Construct_UClass_UVRGameViewportClient, &UVRGameViewportClient::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGameViewportClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGameViewportClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
