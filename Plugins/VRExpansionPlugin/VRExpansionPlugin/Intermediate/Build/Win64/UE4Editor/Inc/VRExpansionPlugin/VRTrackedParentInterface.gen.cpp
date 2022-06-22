// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRTrackedParentInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRTrackedParentInterface() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode();
// End Cross Module References
	DEFINE_FUNCTION(IVRTrackedParentInterface::execSetTrackedParent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewParentComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WaistRadius);
		P_GET_ENUM(EBPVRWaistTrackingMode,Z_Param_WaistTrackingMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackedParent(Z_Param_NewParentComponent,Z_Param_WaistRadius,EBPVRWaistTrackingMode(Z_Param_WaistTrackingMode));
		P_NATIVE_END;
	}
	void UVRTrackedParentInterface::StaticRegisterNativesUVRTrackedParentInterface()
	{
		UClass* Class = UVRTrackedParentInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTrackedParent", &IVRTrackedParentInterface::execSetTrackedParent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics
	{
		struct VRTrackedParentInterface_eventSetTrackedParent_Parms
		{
			UPrimitiveComponent* NewParentComponent;
			float WaistRadius;
			EBPVRWaistTrackingMode WaistTrackingMode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewParentComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewParentComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaistRadius;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WaistTrackingMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WaistTrackingMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_NewParentComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_NewParentComponent = { "NewParentComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRTrackedParentInterface_eventSetTrackedParent_Parms, NewParentComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_NewParentComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_NewParentComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistRadius = { "WaistRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRTrackedParentInterface_eventSetTrackedParent_Parms, WaistRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistTrackingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistTrackingMode = { "WaistTrackingMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRTrackedParentInterface_eventSetTrackedParent_Parms, WaistTrackingMode), Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_NewParentComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistTrackingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistTrackingMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTrackedParentInterface" },
		{ "Comment", "// Set a tracked parent\n" },
		{ "ModuleRelativePath", "Public/VRTrackedParentInterface.h" },
		{ "ToolTip", "Set a tracked parent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRTrackedParentInterface, nullptr, "SetTrackedParent", nullptr, nullptr, sizeof(VRTrackedParentInterface_eventSetTrackedParent_Parms), Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister()
	{
		return UVRTrackedParentInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVRTrackedParentInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRTrackedParentInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRTrackedParentInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent, "SetTrackedParent" }, // 3641101502
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRTrackedParentInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/VRTrackedParentInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRTrackedParentInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVRTrackedParentInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRTrackedParentInterface_Statics::ClassParams = {
		&UVRTrackedParentInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVRTrackedParentInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRTrackedParentInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRTrackedParentInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRTrackedParentInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRTrackedParentInterface, 555506736);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRTrackedParentInterface>()
	{
		return UVRTrackedParentInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRTrackedParentInterface(Z_Construct_UClass_UVRTrackedParentInterface, &UVRTrackedParentInterface::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRTrackedParentInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRTrackedParentInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
