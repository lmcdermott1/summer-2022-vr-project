// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRExpansionPlugin/Public/OpenXRHandPoseComponent.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRHandPoseComponent() {}
// Cross Module References
	OPENXREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
	OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex();
	OPENXREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOpenXRGesture();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition();
	OPENXREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPSkeletalRepContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRGestureDatabase_NoRegister();
	OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRGestureDatabase();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRHandPoseComponent_NoRegister();
	OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRHandPoseComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData();
	OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRAnimInstance_NoRegister();
	OPENXREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenXRAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	OPENXREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics
	{
		struct _Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms
		{
			FName GestureEnded;
			int32 GestureIndex;
			EVRSkeletalHandIndex ActionHandType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GestureEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GestureEnded;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GestureIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionHandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionHandType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureEnded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureEnded = { "GestureEnded", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms, GestureEnded), METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureEnded_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureIndex = { "GestureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms, GestureIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_ActionHandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_ActionHandType = { "ActionHandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms, ActionHandType), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_GestureIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_ActionHandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::NewProp_ActionHandType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin, nullptr, "OpenXRGestureEnded__DelegateSignature", nullptr, nullptr, sizeof(_Script_OpenXRExpansionPlugin_eventOpenXRGestureEnded_Parms), Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics
	{
		struct _Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms
		{
			FName GestureDetected;
			int32 GestureIndex;
			EVRSkeletalHandIndex ActionHandType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GestureDetected_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GestureDetected;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GestureIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionHandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionHandType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureDetected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureDetected = { "GestureDetected", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms, GestureDetected), METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureDetected_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureIndex = { "GestureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms, GestureIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_ActionHandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_ActionHandType = { "ActionHandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms, ActionHandType), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureDetected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_GestureIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_ActionHandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::NewProp_ActionHandType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin, nullptr, "OpenXRGestureDetected__DelegateSignature", nullptr, nullptr, sizeof(_Script_OpenXRExpansionPlugin_eventOpenXRGestureDetected_Parms), Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}

static_assert(std::is_polymorphic<FOpenXRAnimInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FOpenXRAnimInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

class UScriptStruct* FOpenXRAnimInstanceProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENXREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("OpenXRAnimInstanceProxy"), sizeof(FOpenXRAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Hash());
	}
	return Singleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FOpenXRAnimInstanceProxy>()
{
	return FOpenXRAnimInstanceProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOpenXRAnimInstanceProxy(FOpenXRAnimInstanceProxy::StaticStruct, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("OpenXRAnimInstanceProxy"), false, nullptr, nullptr);
static struct FScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFOpenXRAnimInstanceProxy
{
	FScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFOpenXRAnimInstanceProxy()
	{
		UScriptStruct::DeferCppStructOps<FOpenXRAnimInstanceProxy>(FName(TEXT("OpenXRAnimInstanceProxy")));
	}
} ScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFOpenXRAnimInstanceProxy;
	struct Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenXRAnimInstanceProxy>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"OpenXRAnimInstanceProxy",
		sizeof(FOpenXRAnimInstanceProxy),
		alignof(FOpenXRAnimInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OpenXRAnimInstanceProxy"), sizeof(FOpenXRAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOpenXRAnimInstanceProxy_Hash() { return 2258343426U; }
class UScriptStruct* FOpenXRGesture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENXREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FOpenXRGesture_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenXRGesture, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("OpenXRGesture"), sizeof(FOpenXRGesture), Get_Z_Construct_UScriptStruct_FOpenXRGesture_Hash());
	}
	return Singleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FOpenXRGesture>()
{
	return FOpenXRGesture::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOpenXRGesture(FOpenXRGesture::StaticStruct, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("OpenXRGesture"), false, nullptr, nullptr);
static struct FScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFOpenXRGesture
{
	FScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFOpenXRGesture()
	{
		UScriptStruct::DeferCppStructOps<FOpenXRGesture>(FName(TEXT("OpenXRGesture")));
	}
} ScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFOpenXRGesture;
	struct Z_Construct_UScriptStruct_FOpenXRGesture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FingerValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FingerValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenXRGesture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenXRGesture>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "Comment", "// Name of the recorded gesture\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "Name of the recorded gesture" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenXRGesture, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues_Inner = { "FingerValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "Comment", "// Samples in the recorded gesture\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "Samples in the recorded gesture" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues = { "FingerValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenXRGesture, FingerValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenXRGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGesture_Statics::NewProp_FingerValues,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenXRGesture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"OpenXRGesture",
		sizeof(FOpenXRGesture),
		alignof(FOpenXRGesture),
		Z_Construct_UScriptStruct_FOpenXRGesture_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGesture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenXRGesture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOpenXRGesture_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OpenXRGesture"), sizeof(FOpenXRGesture), Get_Z_Construct_UScriptStruct_FOpenXRGesture_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOpenXRGesture_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOpenXRGesture_Hash() { return 2973243967U; }
class UScriptStruct* FOpenXRGestureFingerPosition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENXREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("OpenXRGestureFingerPosition"), sizeof(FOpenXRGestureFingerPosition), Get_Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Hash());
	}
	return Singleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FOpenXRGestureFingerPosition>()
{
	return FOpenXRGestureFingerPosition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOpenXRGestureFingerPosition(FOpenXRGestureFingerPosition::StaticStruct, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("OpenXRGestureFingerPosition"), false, nullptr, nullptr);
static struct FScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFOpenXRGestureFingerPosition
{
	FScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFOpenXRGestureFingerPosition()
	{
		UScriptStruct::DeferCppStructOps<FOpenXRGestureFingerPosition>(FName(TEXT("OpenXRGestureFingerPosition")));
	}
} ScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFOpenXRGestureFingerPosition;
	struct Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IndexType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IndexType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenXRGestureFingerPosition>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "Comment", "// The Finger index, not editable\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "The Finger index, not editable" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType = { "IndexType", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenXRGestureFingerPosition, IndexType), Z_Construct_UEnum_OpenXRExpansionPlugin_EXRHandJointType, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "Comment", "// The locational value of this element 0.f - 1.f\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "The locational value of this element 0.f - 1.f" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenXRGestureFingerPosition, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The threshold within which this finger value will be detected as matching (1.0 would be always matching, IE: finger doesn't count)\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "The threshold within which this finger value will be detected as matching (1.0 would be always matching, IE: finger doesn't count)" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenXRGestureFingerPosition, Threshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Threshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_IndexType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::NewProp_Threshold,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"OpenXRGestureFingerPosition",
		sizeof(FOpenXRGestureFingerPosition),
		alignof(FOpenXRGestureFingerPosition),
		Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OpenXRGestureFingerPosition"), sizeof(FOpenXRGestureFingerPosition), Get_Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOpenXRGestureFingerPosition_Hash() { return 233866069U; }
class UScriptStruct* FBPSkeletalRepContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENXREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPSkeletalRepContainer, Z_Construct_UPackage__Script_OpenXRExpansionPlugin(), TEXT("BPSkeletalRepContainer"), sizeof(FBPSkeletalRepContainer), Get_Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Hash());
	}
	return Singleton;
}
template<> OPENXREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPSkeletalRepContainer>()
{
	return FBPSkeletalRepContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPSkeletalRepContainer(FBPSkeletalRepContainer::StaticStruct, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("BPSkeletalRepContainer"), false, nullptr, nullptr);
static struct FScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFBPSkeletalRepContainer
{
	FScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFBPSkeletalRepContainer()
	{
		UScriptStruct::DeferCppStructOps<FBPSkeletalRepContainer>(FName(TEXT("BPSkeletalRepContainer")));
	}
} ScriptStruct_OpenXRExpansionPlugin_StaticRegisterNativesFBPSkeletalRepContainer;
	struct Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDeformingMesh_MetaData[];
#endif
		static void NewProp_bAllowDeformingMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDeformingMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableUE4HandRepSavings_MetaData[];
#endif
		static void NewProp_bEnableUE4HandRepSavings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableUE4HandRepSavings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletalTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkeletalTransforms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionFunctions|OpenXR|HandSkeleton" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPSkeletalRepContainer>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_TargetHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_TargetHand_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_TargetHand = { "TargetHand", nullptr, (EPropertyFlags)0x0010000080002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSkeletalRepContainer, TargetHand), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_TargetHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_TargetHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh_SetBit(void* Obj)
	{
		((FBPSkeletalRepContainer*)Obj)->bAllowDeformingMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh = { "bAllowDeformingMesh", nullptr, (EPropertyFlags)0x0010000080002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPSkeletalRepContainer), &Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings_MetaData[] = {
		{ "Comment", "// If true we will skip sending the 4 metacarpal bones that ue4 doesn't need, (STEAMVR skeletons need this disabled!)\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "If true we will skip sending the 4 metacarpal bones that ue4 doesn't need, (STEAMVR skeletons need this disabled!)" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings_SetBit(void* Obj)
	{
		((FBPSkeletalRepContainer*)Obj)->bEnableUE4HandRepSavings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings = { "bEnableUE4HandRepSavings", nullptr, (EPropertyFlags)0x0010000080002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPSkeletalRepContainer), &Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_SkeletalTransforms_Inner = { "SkeletalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_SkeletalTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_SkeletalTransforms = { "SkeletalTransforms", nullptr, (EPropertyFlags)0x0010000080002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSkeletalRepContainer, SkeletalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_SkeletalTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_SkeletalTransforms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_BoneCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_BoneCount = { "BoneCount", nullptr, (EPropertyFlags)0x0010000080002000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSkeletalRepContainer, BoneCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_BoneCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_BoneCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_TargetHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_TargetHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_bAllowDeformingMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_bEnableUE4HandRepSavings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_SkeletalTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_SkeletalTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::NewProp_BoneCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPSkeletalRepContainer",
		sizeof(FBPSkeletalRepContainer),
		alignof(FBPSkeletalRepContainer),
		Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPSkeletalRepContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPSkeletalRepContainer"), sizeof(FBPSkeletalRepContainer), Get_Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPSkeletalRepContainer_Hash() { return 568917309U; }
	void UOpenXRGestureDatabase::StaticRegisterNativesUOpenXRGestureDatabase()
	{
	}
	UClass* Z_Construct_UClass_UOpenXRGestureDatabase_NoRegister()
	{
		return UOpenXRGestureDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UOpenXRGestureDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gestures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gestures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Gestures;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenXRGestureDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRGestureDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
		{ "Comment", "/**\n* Items Database DataAsset, here we can save all of our game items\n*/" },
		{ "IncludePath", "OpenXRHandPoseComponent.h" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "Items Database DataAsset, here we can save all of our game items" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures_Inner = { "Gestures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOpenXRGesture, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "Comment", "// Gestures in this database\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "Gestures in this database" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures = { "Gestures", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRGestureDatabase, Gestures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenXRGestureDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRGestureDatabase_Statics::NewProp_Gestures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenXRGestureDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRGestureDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRGestureDatabase_Statics::ClassParams = {
		&UOpenXRGestureDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOpenXRGestureDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRGestureDatabase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenXRGestureDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRGestureDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenXRGestureDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenXRGestureDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenXRGestureDatabase, 61852067);
	template<> OPENXREXPANSIONPLUGIN_API UClass* StaticClass<UOpenXRGestureDatabase>()
	{
		return UOpenXRGestureDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenXRGestureDatabase(Z_Construct_UClass_UOpenXRGestureDatabase, &UOpenXRGestureDatabase::StaticClass, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("UOpenXRGestureDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRGestureDatabase);
	DEFINE_FUNCTION(UOpenXRHandPoseComponent::execOnRep_SkeletalTransformRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SkeletalTransformRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenXRHandPoseComponent::execOnRep_SkeletalTransformLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SkeletalTransformLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenXRHandPoseComponent::execServer_SendSkeletalTransforms)
	{
		P_GET_STRUCT(FBPSkeletalRepContainer,Z_Param_SkeletalInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SendSkeletalTransforms_Validate(Z_Param_SkeletalInfo))
		{
			RPC_ValidateFailed(TEXT("Server_SendSkeletalTransforms_Validate"));
			return;
		}
		P_THIS->Server_SendSkeletalTransforms_Implementation(Z_Param_SkeletalInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenXRHandPoseComponent::execK2_DetectCurrentPose)
	{
		P_GET_STRUCT_REF(FBPOpenXRActionSkeletalData,Z_Param_Out_SkeletalAction);
		P_GET_STRUCT_REF(FOpenXRGesture,Z_Param_Out_GestureOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_DetectCurrentPose(Z_Param_Out_SkeletalAction,Z_Param_Out_GestureOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenXRHandPoseComponent::execSaveCurrentPose)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RecordingName);
		P_GET_ENUM(EVRSkeletalHandIndex,Z_Param_HandToSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveCurrentPose(Z_Param_RecordingName,EVRSkeletalHandIndex(Z_Param_HandToSave));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenXRHandPoseComponent::execSetDetectGestures)
	{
		P_GET_UBOOL(Z_Param_bNewDetectGestures);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDetectGestures(Z_Param_bNewDetectGestures);
		P_NATIVE_END;
	}
	static FName NAME_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms = FName(TEXT("Server_SendSkeletalTransforms"));
	void UOpenXRHandPoseComponent::Server_SendSkeletalTransforms(FBPSkeletalRepContainer const& SkeletalInfo)
	{
		OpenXRHandPoseComponent_eventServer_SendSkeletalTransforms_Parms Parms;
		Parms.SkeletalInfo=SkeletalInfo;
		ProcessEvent(FindFunctionChecked(NAME_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms),&Parms);
	}
	void UOpenXRHandPoseComponent::StaticRegisterNativesUOpenXRHandPoseComponent()
	{
		UClass* Class = UOpenXRHandPoseComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_DetectCurrentPose", &UOpenXRHandPoseComponent::execK2_DetectCurrentPose },
			{ "OnRep_SkeletalTransformLeft", &UOpenXRHandPoseComponent::execOnRep_SkeletalTransformLeft },
			{ "OnRep_SkeletalTransformRight", &UOpenXRHandPoseComponent::execOnRep_SkeletalTransformRight },
			{ "SaveCurrentPose", &UOpenXRHandPoseComponent::execSaveCurrentPose },
			{ "Server_SendSkeletalTransforms", &UOpenXRHandPoseComponent::execServer_SendSkeletalTransforms },
			{ "SetDetectGestures", &UOpenXRHandPoseComponent::execSetDetectGestures },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics
	{
		struct OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms
		{
			FBPOpenXRActionSkeletalData SkeletalAction;
			FOpenXRGesture GestureOut;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletalAction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GestureOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_SkeletalAction = { "SkeletalAction", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms, SkeletalAction), Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_GestureOut = { "GestureOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms, GestureOut), Z_Construct_UScriptStruct_FOpenXRGesture, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms), &Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_SkeletalAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_GestureOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "DisplayName", "DetectCurrentPose" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "K2_DetectCurrentPose", nullptr, nullptr, sizeof(OpenXRHandPoseComponent_eventK2_DetectCurrentPose_Parms), Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "OnRep_SkeletalTransformLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "OnRep_SkeletalTransformRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics
	{
		struct OpenXRHandPoseComponent_eventSaveCurrentPose_Parms
		{
			FName RecordingName;
			EVRSkeletalHandIndex HandToSave;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RecordingName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandToSave_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandToSave;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_RecordingName = { "RecordingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRHandPoseComponent_eventSaveCurrentPose_Parms, RecordingName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_HandToSave_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_HandToSave = { "HandToSave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRHandPoseComponent_eventSaveCurrentPose_Parms, HandToSave), Z_Construct_UEnum_OpenXRExpansionPlugin_EVRSkeletalHandIndex, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenXRHandPoseComponent_eventSaveCurrentPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenXRHandPoseComponent_eventSaveCurrentPose_Parms), &Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_RecordingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_HandToSave_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_HandToSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "CPP_Default_HandToSave", "EActionHandIndex_Right" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "SaveCurrentPose", nullptr, nullptr, sizeof(OpenXRHandPoseComponent_eventSaveCurrentPose_Parms), Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletalInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::NewProp_SkeletalInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::NewProp_SkeletalInfo = { "SkeletalInfo", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRHandPoseComponent_eventServer_SendSkeletalTransforms_Parms, SkeletalInfo), Z_Construct_UScriptStruct_FBPSkeletalRepContainer, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::NewProp_SkeletalInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::NewProp_SkeletalInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::NewProp_SkeletalInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "Server_SendSkeletalTransforms", nullptr, nullptr, sizeof(OpenXRHandPoseComponent_eventServer_SendSkeletalTransforms_Parms), Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics
	{
		struct OpenXRHandPoseComponent_eventSetDetectGestures_Parms
		{
			bool bNewDetectGestures;
		};
		static void NewProp_bNewDetectGestures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewDetectGestures;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::NewProp_bNewDetectGestures_SetBit(void* Obj)
	{
		((OpenXRHandPoseComponent_eventSetDetectGestures_Parms*)Obj)->bNewDetectGestures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::NewProp_bNewDetectGestures = { "bNewDetectGestures", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenXRHandPoseComponent_eventSetDetectGestures_Parms), &Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::NewProp_bNewDetectGestures_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::NewProp_bNewDetectGestures,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRHandPoseComponent, nullptr, "SetDetectGestures", nullptr, nullptr, sizeof(OpenXRHandPoseComponent_eventSetDetectGestures_Parms), Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenXRHandPoseComponent_NoRegister()
	{
		return UOpenXRHandPoseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOpenXRHandPoseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDetectGestures_MetaData[];
#endif
		static void NewProp_bDetectGestures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDetectGestures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNewGestureDetected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewGestureDetected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGestureEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGestureEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GesturesDB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GesturesDB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGetMockUpPoseForDebugging_MetaData[];
#endif
		static void NewProp_bGetMockUpPoseForDebugging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetMockUpPoseForDebugging;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandSkeletalActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandSkeletalActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HandSkeletalActions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandRep_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandRep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandRep_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandRep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateSkeletalData_MetaData[];
#endif
		static void NewProp_bReplicateSkeletalData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateSkeletalData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothReplicatedSkeletalData_MetaData[];
#endif
		static void NewProp_bSmoothReplicatedSkeletalData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothReplicatedSkeletalData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationRateForSkeletalAnimations_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReplicationRateForSkeletalAnimations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_K2_DetectCurrentPose, "K2_DetectCurrentPose" }, // 1388955159
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformLeft, "OnRep_SkeletalTransformLeft" }, // 434479
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_OnRep_SkeletalTransformRight, "OnRep_SkeletalTransformRight" }, // 739723111
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_SaveCurrentPose, "SaveCurrentPose" }, // 3429695247
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_Server_SendSkeletalTransforms, "Server_SendSkeletalTransforms" }, // 1728381104
		{ &Z_Construct_UFunction_UOpenXRHandPoseComponent_SetDetectGestures, "SetDetectGestures" }, // 2762484139
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "OpenXRHandPoseComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "Comment", "// Says whether we should run gesture detection\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "Says whether we should run gesture detection" },
	};
#endif
	void Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures_SetBit(void* Obj)
	{
		((UOpenXRHandPoseComponent*)Obj)->bDetectGestures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures = { "bDetectGestures", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenXRHandPoseComponent), &Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnNewGestureDetected_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnNewGestureDetected = { "OnNewGestureDetected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, OnNewGestureDetected), Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnNewGestureDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnNewGestureDetected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnGestureEnded_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnGestureEnded = { "OnGestureEnded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, OnGestureEnded), Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnGestureEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnGestureEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_GesturesDB_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "Comment", "// Known sequences\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "Known sequences" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_GesturesDB = { "GesturesDB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, GesturesDB), Z_Construct_UClass_UOpenXRGestureDatabase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_GesturesDB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_GesturesDB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging_MetaData[] = {
		{ "Category", "SkeletalData|Actions" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging_SetBit(void* Obj)
	{
		((UOpenXRHandPoseComponent*)Obj)->bGetMockUpPoseForDebugging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging = { "bGetMockUpPoseForDebugging", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenXRHandPoseComponent), &Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions_Inner = { "HandSkeletalActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPOpenXRActionSkeletalData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions_MetaData[] = {
		{ "Category", "SkeletalData|Actions" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions = { "HandSkeletalActions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, HandSkeletalActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_LeftHandRep_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_LeftHandRep = { "LeftHandRep", "OnRep_SkeletalTransformLeft", (EPropertyFlags)0x0010000100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, LeftHandRep), Z_Construct_UScriptStruct_FBPSkeletalRepContainer, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_LeftHandRep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_LeftHandRep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_RightHandRep_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_RightHandRep = { "RightHandRep", "OnRep_SkeletalTransformRight", (EPropertyFlags)0x0010000100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, RightHandRep), Z_Construct_UScriptStruct_FBPSkeletalRepContainer, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_RightHandRep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_RightHandRep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData_MetaData[] = {
		{ "Category", "SkeletalData" },
		{ "Comment", "// If we should replicate the skeletal transform data\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "If we should replicate the skeletal transform data" },
	};
#endif
	void Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData_SetBit(void* Obj)
	{
		((UOpenXRHandPoseComponent*)Obj)->bReplicateSkeletalData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData = { "bReplicateSkeletalData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenXRHandPoseComponent), &Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData_MetaData[] = {
		{ "Category", "SkeletalData" },
		{ "Comment", "// If true we will lerp between updates of the skeletal mesh transforms and smooth the result\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "If true we will lerp between updates of the skeletal mesh transforms and smooth the result" },
	};
#endif
	void Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData_SetBit(void* Obj)
	{
		((UOpenXRHandPoseComponent*)Obj)->bSmoothReplicatedSkeletalData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData = { "bSmoothReplicatedSkeletalData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenXRHandPoseComponent), &Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_ReplicationRateForSkeletalAnimations_MetaData[] = {
		{ "Category", "SkeletalData" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_ReplicationRateForSkeletalAnimations = { "ReplicationRateForSkeletalAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandPoseComponent, ReplicationRateForSkeletalAnimations), METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_ReplicationRateForSkeletalAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_ReplicationRateForSkeletalAnimations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bDetectGestures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnNewGestureDetected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_OnGestureEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_GesturesDB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bGetMockUpPoseForDebugging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_HandSkeletalActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_LeftHandRep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_RightHandRep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bReplicateSkeletalData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_bSmoothReplicatedSkeletalData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::NewProp_ReplicationRateForSkeletalAnimations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRHandPoseComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::ClassParams = {
		&UOpenXRHandPoseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenXRHandPoseComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenXRHandPoseComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenXRHandPoseComponent, 2069420168);
	template<> OPENXREXPANSIONPLUGIN_API UClass* StaticClass<UOpenXRHandPoseComponent>()
	{
		return UOpenXRHandPoseComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenXRHandPoseComponent(Z_Construct_UClass_UOpenXRHandPoseComponent, &UOpenXRHandPoseComponent::StaticClass, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("UOpenXRHandPoseComponent"), false, nullptr, nullptr, nullptr);

	void UOpenXRHandPoseComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_LeftHandRep(TEXT("LeftHandRep"));
		static const FName Name_RightHandRep(TEXT("RightHandRep"));

		const bool bIsValid = true
			&& Name_LeftHandRep == ClassReps[(int32)ENetFields_Private::LeftHandRep].Property->GetFName()
			&& Name_RightHandRep == ClassReps[(int32)ENetFields_Private::RightHandRep].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UOpenXRHandPoseComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRHandPoseComponent);
	DEFINE_FUNCTION(UOpenXRAnimInstance::execInitializeCustomBoneMapping)
	{
		P_GET_STRUCT_REF(FBPOpenXRSkeletalMappingData,Z_Param_Out_SkeletalMappingData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeCustomBoneMapping(Z_Param_Out_SkeletalMappingData);
		P_NATIVE_END;
	}
	void UOpenXRAnimInstance::StaticRegisterNativesUOpenXRAnimInstance()
	{
		UClass* Class = UOpenXRAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeCustomBoneMapping", &UOpenXRAnimInstance::execInitializeCustomBoneMapping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics
	{
		struct OpenXRAnimInstance_eventInitializeCustomBoneMapping_Parms
		{
			FBPOpenXRSkeletalMappingData SkeletalMappingData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletalMappingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::NewProp_SkeletalMappingData = { "SkeletalMappingData", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenXRAnimInstance_eventInitializeCustomBoneMapping_Parms, SkeletalMappingData), Z_Construct_UScriptStruct_FBPOpenXRSkeletalMappingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::NewProp_SkeletalMappingData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "BoneMappings" },
		{ "Comment", "//virtual void NativeInitializeAnimation() override;\n" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
		{ "ToolTip", "virtual void NativeInitializeAnimation() override;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRAnimInstance, nullptr, "InitializeCustomBoneMapping", nullptr, nullptr, sizeof(OpenXRAnimInstance_eventInitializeCustomBoneMapping_Parms), Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenXRAnimInstance_NoRegister()
	{
		return UOpenXRAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UOpenXRAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningPoseComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningPoseComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenXRAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenXRAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenXRAnimInstance_InitializeCustomBoneMapping, "InitializeCustomBoneMapping" }, // 3345348984
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance AnimInstance" },
		{ "IncludePath", "OpenXRHandPoseComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRAnimInstance_Statics::NewProp_OwningPoseComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OpenXRHandPoseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenXRAnimInstance_Statics::NewProp_OwningPoseComp = { "OwningPoseComp", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRAnimInstance, OwningPoseComp), Z_Construct_UClass_UOpenXRHandPoseComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOpenXRAnimInstance_Statics::NewProp_OwningPoseComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRAnimInstance_Statics::NewProp_OwningPoseComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenXRAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRAnimInstance_Statics::NewProp_OwningPoseComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenXRAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRAnimInstance_Statics::ClassParams = {
		&UOpenXRAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOpenXRAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenXRAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenXRAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenXRAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenXRAnimInstance, 713687977);
	template<> OPENXREXPANSIONPLUGIN_API UClass* StaticClass<UOpenXRAnimInstance>()
	{
		return UOpenXRAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenXRAnimInstance(Z_Construct_UClass_UOpenXRAnimInstance, &UOpenXRAnimInstance::StaticClass, TEXT("/Script/OpenXRExpansionPlugin"), TEXT("UOpenXRAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
