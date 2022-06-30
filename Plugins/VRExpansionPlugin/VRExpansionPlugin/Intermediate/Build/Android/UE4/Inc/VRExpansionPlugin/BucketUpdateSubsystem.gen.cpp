// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/BucketUpdateSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBucketUpdateSubsystem() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucketContainer();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucket();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucketDrop();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UBucketUpdateSubsystem_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UBucketUpdateSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "DynamicBucketUpdateTickSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FUpdateBucketContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FUpdateBucketContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateBucketContainer, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("UpdateBucketContainer"), sizeof(FUpdateBucketContainer), Get_Z_Construct_UScriptStruct_FUpdateBucketContainer_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FUpdateBucketContainer>()
{
	return FUpdateBucketContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUpdateBucketContainer(FUpdateBucketContainer::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("UpdateBucketContainer"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFUpdateBucketContainer
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFUpdateBucketContainer()
	{
		UScriptStruct::DeferCppStructOps<FUpdateBucketContainer>(FName(TEXT("UpdateBucketContainer")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFUpdateBucketContainer;
	struct Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateBucketContainer>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"UpdateBucketContainer",
		sizeof(FUpdateBucketContainer),
		alignof(FUpdateBucketContainer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucketContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUpdateBucketContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UpdateBucketContainer"), sizeof(FUpdateBucketContainer), Get_Z_Construct_UScriptStruct_FUpdateBucketContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUpdateBucketContainer_Hash() { return 17370130U; }
class UScriptStruct* FUpdateBucket::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FUpdateBucket_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateBucket, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("UpdateBucket"), sizeof(FUpdateBucket), Get_Z_Construct_UScriptStruct_FUpdateBucket_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FUpdateBucket>()
{
	return FUpdateBucket::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUpdateBucket(FUpdateBucket::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("UpdateBucket"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFUpdateBucket
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFUpdateBucket()
	{
		UScriptStruct::DeferCppStructOps<FUpdateBucket>(FName(TEXT("UpdateBucket")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFUpdateBucket;
	struct Z_Construct_UScriptStruct_FUpdateBucket_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateBucket_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpdateBucket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateBucket>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateBucket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"UpdateBucket",
		sizeof(FUpdateBucket),
		alignof(FUpdateBucket),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateBucket_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateBucket_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucket()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUpdateBucket_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UpdateBucket"), sizeof(FUpdateBucket), Get_Z_Construct_UScriptStruct_FUpdateBucket_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUpdateBucket_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUpdateBucket_Hash() { return 439577001U; }
class UScriptStruct* FUpdateBucketDrop::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FUpdateBucketDrop_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateBucketDrop, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("UpdateBucketDrop"), sizeof(FUpdateBucketDrop), Get_Z_Construct_UScriptStruct_FUpdateBucketDrop_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FUpdateBucketDrop>()
{
	return FUpdateBucketDrop::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUpdateBucketDrop(FUpdateBucketDrop::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("UpdateBucketDrop"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFUpdateBucketDrop
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFUpdateBucketDrop()
	{
		UScriptStruct::DeferCppStructOps<FUpdateBucketDrop>(FName(TEXT("UpdateBucketDrop")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFUpdateBucketDrop;
	struct Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateBucketDrop>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"UpdateBucketDrop",
		sizeof(FUpdateBucketDrop),
		alignof(FUpdateBucketDrop),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucketDrop()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUpdateBucketDrop_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UpdateBucketDrop"), sizeof(FUpdateBucketDrop), Get_Z_Construct_UScriptStruct_FUpdateBucketDrop_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUpdateBucketDrop_Hash() { return 3365490542U; }
	DEFINE_FUNCTION(UBucketUpdateSubsystem::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBucketUpdateSubsystem::execIsObjectFunctionInBucket)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsObjectFunctionInBucket(Z_Param_InObject,Z_Param_FunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBucketUpdateSubsystem::execRemoveObjectFromAllBuckets)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveObjectFromAllBuckets(Z_Param_InObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBucketUpdateSubsystem::execRemoveObjectFromBucketByEvent)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveObjectFromBucketByEvent(FDynamicBucketUpdateTickSignature(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBucketUpdateSubsystem::execRemoveObjectFromBucketByFunctionName)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveObjectFromBucketByFunctionName(Z_Param_InObject,Z_Param_FunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBucketUpdateSubsystem::execK2_AddObjectEventToBucket)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_GET_PROPERTY(FIntProperty,Z_Param_UpdateHTZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_AddObjectEventToBucket(FDynamicBucketUpdateTickSignature(Z_Param_Delegate),Z_Param_UpdateHTZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBucketUpdateSubsystem::execK2_AddObjectToBucket)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_UpdateHTZ);
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_AddObjectToBucket(Z_Param_UpdateHTZ,Z_Param_InObject,Z_Param_FunctionName);
		P_NATIVE_END;
	}
	void UBucketUpdateSubsystem::StaticRegisterNativesUBucketUpdateSubsystem()
	{
		UClass* Class = UBucketUpdateSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActive", &UBucketUpdateSubsystem::execIsActive },
			{ "IsObjectFunctionInBucket", &UBucketUpdateSubsystem::execIsObjectFunctionInBucket },
			{ "K2_AddObjectEventToBucket", &UBucketUpdateSubsystem::execK2_AddObjectEventToBucket },
			{ "K2_AddObjectToBucket", &UBucketUpdateSubsystem::execK2_AddObjectToBucket },
			{ "RemoveObjectFromAllBuckets", &UBucketUpdateSubsystem::execRemoveObjectFromAllBuckets },
			{ "RemoveObjectFromBucketByEvent", &UBucketUpdateSubsystem::execRemoveObjectFromBucketByEvent },
			{ "RemoveObjectFromBucketByFunctionName", &UBucketUpdateSubsystem::execRemoveObjectFromBucketByFunctionName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics
	{
		struct BucketUpdateSubsystem_eventIsActive_Parms
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
	void Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BucketUpdateSubsystem_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventIsActive_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
		{ "Comment", "// Returns if an update bucket contains an entry with the passed in function\n" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ToolTip", "Returns if an update bucket contains an entry with the passed in function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "IsActive", nullptr, nullptr, sizeof(BucketUpdateSubsystem_eventIsActive_Parms), Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics
	{
		struct BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms
		{
			UObject* InObject;
			FName FunctionName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_InObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
		{ "Comment", "// Returns if an update bucket contains an entry with the passed in function\n" },
		{ "CPP_Default_FunctionName", "None" },
		{ "CPP_Default_InObject", "None" },
		{ "DisplayName", "Is Object In Bucket" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "IsObjectInBucket" },
		{ "ToolTip", "Returns if an update bucket contains an entry with the passed in function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "IsObjectFunctionInBucket", nullptr, nullptr, sizeof(BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms), Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics
	{
		struct BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms
		{
			FScriptDelegate Delegate;
			int32 UpdateHTZ;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpdateHTZ;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_Delegate_MetaData[] = {
		{ "DisplayName", "Event" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms, Delegate), Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_Delegate_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_UpdateHTZ = { "UpdateHTZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms, UpdateHTZ), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_Delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_UpdateHTZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
		{ "CPP_Default_UpdateHTZ", "100" },
		{ "DisplayName", "Add Object to Bucket Updates by Event" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "AddBucketObjectEvent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "K2_AddObjectEventToBucket", nullptr, nullptr, sizeof(BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms), Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics
	{
		struct BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms
		{
			int32 UpdateHTZ;
			UObject* InObject;
			FName FunctionName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpdateHTZ;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_UpdateHTZ = { "UpdateHTZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms, UpdateHTZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_UpdateHTZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_InObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
		{ "Comment", "// Adds an object to an update bucket with the set HTZ, calls the passed in UFUNCTION name\n// If one of the bucket contains an entry with the function already then the existing one is removed and the new one is added\n" },
		{ "CPP_Default_FunctionName", "None" },
		{ "CPP_Default_InObject", "None" },
		{ "CPP_Default_UpdateHTZ", "100" },
		{ "DisplayName", "Add Object to Bucket Updates" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "AddObjectToBucket" },
		{ "ToolTip", "Adds an object to an update bucket with the set HTZ, calls the passed in UFUNCTION name\nIf one of the bucket contains an entry with the function already then the existing one is removed and the new one is added" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "K2_AddObjectToBucket", nullptr, nullptr, sizeof(BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms), Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics
	{
		struct BucketUpdateSubsystem_eventRemoveObjectFromAllBuckets_Parms
		{
			UObject* InObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventRemoveObjectFromAllBuckets_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BucketUpdateSubsystem_eventRemoveObjectFromAllBuckets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventRemoveObjectFromAllBuckets_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_InObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
		{ "Comment", "// Removes ALL entries in the bucket update system with the specified object\n" },
		{ "CPP_Default_InObject", "None" },
		{ "DisplayName", "Remove Object From All Bucket Updates" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "RemoveObjectFromAllBuckets" },
		{ "ToolTip", "Removes ALL entries in the bucket update system with the specified object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "RemoveObjectFromAllBuckets", nullptr, nullptr, sizeof(BucketUpdateSubsystem_eventRemoveObjectFromAllBuckets_Parms), Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics
	{
		struct BucketUpdateSubsystem_eventRemoveObjectFromBucketByEvent_Parms
		{
			FScriptDelegate Delegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_Delegate_MetaData[] = {
		{ "DisplayName", "Event" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventRemoveObjectFromBucketByEvent_Parms, Delegate), Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_Delegate_MetaData)) };
	void Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BucketUpdateSubsystem_eventRemoveObjectFromBucketByEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventRemoveObjectFromBucketByEvent_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_Delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
		{ "Comment", "// Remove the entry in the bucket updates with the passed in UFUNCTION name\n" },
		{ "DisplayName", "Remove Object From Bucket Updates By Event" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "RemoveObjectFromBucketByEvent" },
		{ "ToolTip", "Remove the entry in the bucket updates with the passed in UFUNCTION name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "RemoveObjectFromBucketByEvent", nullptr, nullptr, sizeof(BucketUpdateSubsystem_eventRemoveObjectFromBucketByEvent_Parms), Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics
	{
		struct BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms
		{
			UObject* InObject;
			FName FunctionName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_InObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
		{ "Comment", "// Remove the entry in the bucket updates with the passed in UFUNCTION name\n" },
		{ "CPP_Default_FunctionName", "None" },
		{ "CPP_Default_InObject", "None" },
		{ "DisplayName", "Remove Object From Bucket Updates By Function" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "RemoveObjectFromBucketByFunction" },
		{ "ToolTip", "Remove the entry in the bucket updates with the passed in UFUNCTION name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "RemoveObjectFromBucketByFunctionName", nullptr, nullptr, sizeof(BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms), Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBucketUpdateSubsystem_NoRegister()
	{
		return UBucketUpdateSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UBucketUpdateSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBucketUpdateSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBucketUpdateSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive, "IsActive" }, // 1536683212
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket, "IsObjectFunctionInBucket" }, // 3154491628
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket, "K2_AddObjectEventToBucket" }, // 4084681251
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket, "K2_AddObjectToBucket" }, // 3646546394
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets, "RemoveObjectFromAllBuckets" }, // 3273120646
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent, "RemoveObjectFromBucketByEvent" }, // 505613198
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName, "RemoveObjectFromBucketByFunctionName" }, // 3392736620
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBucketUpdateSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Misc/BucketUpdateSubsystem.h" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBucketUpdateSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBucketUpdateSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBucketUpdateSubsystem_Statics::ClassParams = {
		&UBucketUpdateSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBucketUpdateSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBucketUpdateSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBucketUpdateSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBucketUpdateSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBucketUpdateSubsystem, 1253079852);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UBucketUpdateSubsystem>()
	{
		return UBucketUpdateSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBucketUpdateSubsystem(Z_Construct_UClass_UBucketUpdateSubsystem, &UBucketUpdateSubsystem::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UBucketUpdateSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBucketUpdateSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
