// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VREPhysicalAnimationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREPhysicalAnimationComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWeldedBoneDriverData();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVREPhysicalAnimationComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVREPhysicalAnimationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalAnimationComponent();
// End Cross Module References
class UScriptStruct* FWeldedBoneDriverData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FWeldedBoneDriverData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeldedBoneDriverData, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("WeldedBoneDriverData"), sizeof(FWeldedBoneDriverData), Get_Z_Construct_UScriptStruct_FWeldedBoneDriverData_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FWeldedBoneDriverData>()
{
	return FWeldedBoneDriverData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeldedBoneDriverData(FWeldedBoneDriverData::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("WeldedBoneDriverData"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFWeldedBoneDriverData
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFWeldedBoneDriverData()
	{
		UScriptStruct::DeferCppStructOps<FWeldedBoneDriverData>(FName(TEXT("WeldedBoneDriverData")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFWeldedBoneDriverData;
	struct Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeldedBoneDriverData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"WeldedBoneDriverData",
		sizeof(FWeldedBoneDriverData),
		alignof(FWeldedBoneDriverData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeldedBoneDriverData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeldedBoneDriverData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeldedBoneDriverData"), sizeof(FWeldedBoneDriverData), Get_Z_Construct_UScriptStruct_FWeldedBoneDriverData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeldedBoneDriverData_Hash() { return 571449358U; }
	DEFINE_FUNCTION(UVREPhysicalAnimationComponent::execIsWeldedBoneDriverPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWeldedBoneDriverPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREPhysicalAnimationComponent::execSetWeldedBoneDriverPaused)
	{
		P_GET_UBOOL(Z_Param_bPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeldedBoneDriverPaused(Z_Param_bPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREPhysicalAnimationComponent::execRefreshWeldedBoneDriver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshWeldedBoneDriver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREPhysicalAnimationComponent::execSetupWeldedBoneDriver)
	{
		P_GET_TARRAY(FName,Z_Param_BaseBoneNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupWeldedBoneDriver(Z_Param_BaseBoneNames);
		P_NATIVE_END;
	}
	void UVREPhysicalAnimationComponent::StaticRegisterNativesUVREPhysicalAnimationComponent()
	{
		UClass* Class = UVREPhysicalAnimationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsWeldedBoneDriverPaused", &UVREPhysicalAnimationComponent::execIsWeldedBoneDriverPaused },
			{ "RefreshWeldedBoneDriver", &UVREPhysicalAnimationComponent::execRefreshWeldedBoneDriver },
			{ "SetupWeldedBoneDriver", &UVREPhysicalAnimationComponent::execSetupWeldedBoneDriver },
			{ "SetWeldedBoneDriverPaused", &UVREPhysicalAnimationComponent::execSetWeldedBoneDriverPaused },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics
	{
		struct VREPhysicalAnimationComponent_eventIsWeldedBoneDriverPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VREPhysicalAnimationComponent_eventIsWeldedBoneDriverPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VREPhysicalAnimationComponent_eventIsWeldedBoneDriverPaused_Parms), &Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicalAnimationComponent, nullptr, "IsWeldedBoneDriverPaused", nullptr, nullptr, sizeof(VREPhysicalAnimationComponent_eventIsWeldedBoneDriverPaused_Parms), Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "// Refreshes the welded bone driver, use this in cases where the body may have changed (such as welding to another body or switching physics)\n" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
		{ "ToolTip", "Refreshes the welded bone driver, use this in cases where the body may have changed (such as welding to another body or switching physics)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicalAnimationComponent, nullptr, "RefreshWeldedBoneDriver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics
	{
		struct VREPhysicalAnimationComponent_eventSetupWeldedBoneDriver_Parms
		{
			TArray<FName> BaseBoneNames;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BaseBoneNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BaseBoneNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::NewProp_BaseBoneNames_Inner = { "BaseBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::NewProp_BaseBoneNames = { "BaseBoneNames", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREPhysicalAnimationComponent_eventSetupWeldedBoneDriver_Parms, BaseBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::NewProp_BaseBoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::NewProp_BaseBoneNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "// Call to setup the welded body driver, initializes all mappings and caches shape contexts\n// Requires that SetSkeletalMesh be called first\n" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
		{ "ToolTip", "Call to setup the welded body driver, initializes all mappings and caches shape contexts\nRequires that SetSkeletalMesh be called first" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicalAnimationComponent, nullptr, "SetupWeldedBoneDriver", nullptr, nullptr, sizeof(VREPhysicalAnimationComponent_eventSetupWeldedBoneDriver_Parms), Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics
	{
		struct VREPhysicalAnimationComponent_eventSetWeldedBoneDriverPaused_Parms
		{
			bool bPaused;
		};
		static void NewProp_bPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::NewProp_bPaused_SetBit(void* Obj)
	{
		((VREPhysicalAnimationComponent_eventSetWeldedBoneDriverPaused_Parms*)Obj)->bPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VREPhysicalAnimationComponent_eventSetWeldedBoneDriverPaused_Parms), &Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::NewProp_bPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::NewProp_bPaused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
		{ "Comment", "// Sets the welded bone driver to be paused, you can also stop the component from ticking but that will also stop any physical animations going on\n" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
		{ "ToolTip", "Sets the welded bone driver to be paused, you can also stop the component from ticking but that will also stop any physical animations going on" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicalAnimationComponent, nullptr, "SetWeldedBoneDriverPaused", nullptr, nullptr, sizeof(VREPhysicalAnimationComponent_eventSetWeldedBoneDriverPaused_Parms), Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVREPhysicalAnimationComponent_NoRegister()
	{
		return UVREPhysicalAnimationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPaused_MetaData[];
#endif
		static void NewProp_bIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSetPhysicsSleepSensitivity_MetaData[];
#endif
		static void NewProp_bAutoSetPhysicsSleepSensitivity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSetPhysicsSleepSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepThresholdMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SleepThresholdMultiplier;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BaseWeldedBoneDriverNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseWeldedBoneDriverNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BaseWeldedBoneDriverNames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneDriverMap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneDriverMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneDriverMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicalAnimationComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused, "IsWeldedBoneDriverPaused" }, // 3350640200
		{ &Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver, "RefreshWeldedBoneDriver" }, // 1788573068
		{ &Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver, "SetupWeldedBoneDriver" }, // 13511397
		{ &Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused, "SetWeldedBoneDriverPaused" }, // 3634678229
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "IncludePath", "Misc/VREPhysicalAnimationComponent.h" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused_MetaData[] = {
		{ "Category", "WeldedBoneDriver" },
		{ "Comment", "/** Is the welded bone driver paused */" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
		{ "ToolTip", "Is the welded bone driver paused" },
	};
#endif
	void Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused_SetBit(void* Obj)
	{
		((UVREPhysicalAnimationComponent*)Obj)->bIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVREPhysicalAnimationComponent), &Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity_MetaData[] = {
		{ "Category", "WeldedBoneDriver" },
		{ "Comment", "/** IF true then we will auto adjust the sleep settings of the body so that it won't rest during welded bone driving */" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
		{ "ToolTip", "IF true then we will auto adjust the sleep settings of the body so that it won't rest during welded bone driving" },
	};
#endif
	void Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity_SetBit(void* Obj)
	{
		((UVREPhysicalAnimationComponent*)Obj)->bAutoSetPhysicsSleepSensitivity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity = { "bAutoSetPhysicsSleepSensitivity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVREPhysicalAnimationComponent), &Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_SleepThresholdMultiplier_MetaData[] = {
		{ "Category", "WeldedBoneDriver" },
		{ "Comment", "/** The threshold multiplier to set on the body */" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
		{ "ToolTip", "The threshold multiplier to set on the body" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_SleepThresholdMultiplier = { "SleepThresholdMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREPhysicalAnimationComponent, SleepThresholdMultiplier), METADATA_PARAMS(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_SleepThresholdMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_SleepThresholdMultiplier_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames_Inner = { "BaseWeldedBoneDriverNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames_MetaData[] = {
		{ "Category", "WeldedBoneDriver" },
		{ "Comment", "/** The Base bone to use as the bone driver root */" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
		{ "ToolTip", "The Base bone to use as the bone driver root" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames = { "BaseWeldedBoneDriverNames", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREPhysicalAnimationComponent, BaseWeldedBoneDriverNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap_Inner = { "BoneDriverMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWeldedBoneDriverData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap = { "BoneDriverMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREPhysicalAnimationComponent, BoneDriverMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_SleepThresholdMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREPhysicalAnimationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::ClassParams = {
		&UVREPhysicalAnimationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREPhysicalAnimationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVREPhysicalAnimationComponent, 2551278836);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVREPhysicalAnimationComponent>()
	{
		return UVREPhysicalAnimationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVREPhysicalAnimationComponent(Z_Construct_UClass_UVREPhysicalAnimationComponent, &UVREPhysicalAnimationComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVREPhysicalAnimationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREPhysicalAnimationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
