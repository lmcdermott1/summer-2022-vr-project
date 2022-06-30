// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRRenderTargetManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRRenderTargetManager() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FClientRepData();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_ARenderTargetReplicationProxy_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRenderManagerOperation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRenderManagerTri();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRenderDataStore();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_ARenderTargetReplicationProxy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRenderTargetManager_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRenderTargetManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCanvasUVTri();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
// End Cross Module References
	static UEnum* ERenderManagerOperationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("ERenderManagerOperationType"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<ERenderManagerOperationType>()
	{
		return ERenderManagerOperationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERenderManagerOperationType(ERenderManagerOperationType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("ERenderManagerOperationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType_Hash() { return 1689810363U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERenderManagerOperationType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERenderManagerOperationType::Op_LineDraw", (int64)ERenderManagerOperationType::Op_LineDraw },
				{ "ERenderManagerOperationType::Op_TriDraw", (int64)ERenderManagerOperationType::Op_TriDraw },
				{ "ERenderManagerOperationType::Op_TexDraw", (int64)ERenderManagerOperationType::Op_TexDraw },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
				{ "Op_LineDraw.Name", "ERenderManagerOperationType::Op_LineDraw" },
				{ "Op_TexDraw.Name", "ERenderManagerOperationType::Op_TexDraw" },
				{ "Op_TriDraw.Name", "ERenderManagerOperationType::Op_TriDraw" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"ERenderManagerOperationType",
				"ERenderManagerOperationType",
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
class UScriptStruct* FClientRepData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FClientRepData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientRepData, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("ClientRepData"), sizeof(FClientRepData), Get_Z_Construct_UScriptStruct_FClientRepData_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FClientRepData>()
{
	return FClientRepData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientRepData(FClientRepData::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("ClientRepData"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFClientRepData
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFClientRepData()
	{
		UScriptStruct::DeferCppStructOps<FClientRepData>(FName(TEXT("ClientRepData")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFClientRepData;
	struct Z_Construct_UScriptStruct_FClientRepData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PC_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationProxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ReplicationProxy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRelevant_MetaData[];
#endif
		static void NewProp_bIsRelevant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRelevant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDirty_MetaData[];
#endif
		static void NewProp_bIsDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDirty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRepData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientRepData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientRepData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_PC_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRepData, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_PC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_PC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_ReplicationProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_ReplicationProxy = { "ReplicationProxy", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRepData, ReplicationProxy), Z_Construct_UClass_ARenderTargetReplicationProxy_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_ReplicationProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_ReplicationProxy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsRelevant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsRelevant_SetBit(void* Obj)
	{
		((FClientRepData*)Obj)->bIsRelevant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsRelevant = { "bIsRelevant", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClientRepData), &Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsRelevant_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsRelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsRelevant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsDirty_SetBit(void* Obj)
	{
		((FClientRepData*)Obj)->bIsDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsDirty = { "bIsDirty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClientRepData), &Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsDirty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsDirty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientRepData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_PC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_ReplicationProxy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsRelevant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsDirty,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientRepData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"ClientRepData",
		sizeof(FClientRepData),
		alignof(FClientRepData),
		Z_Construct_UScriptStruct_FClientRepData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRepData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRepData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRepData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientRepData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientRepData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientRepData"), sizeof(FClientRepData), Get_Z_Construct_UScriptStruct_FClientRepData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientRepData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientRepData_Hash() { return 1362660326U; }
class UScriptStruct* FRenderManagerOperation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FRenderManagerOperation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderManagerOperation, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("RenderManagerOperation"), sizeof(FRenderManagerOperation), Get_Z_Construct_UScriptStruct_FRenderManagerOperation_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FRenderManagerOperation>()
{
	return FRenderManagerOperation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRenderManagerOperation(FRenderManagerOperation::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("RenderManagerOperation"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFRenderManagerOperation
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFRenderManagerOperation()
	{
		UScriptStruct::DeferCppStructOps<FRenderManagerOperation>(FName(TEXT("RenderManagerOperation")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFRenderManagerOperation;
	struct Z_Construct_UScriptStruct_FRenderManagerOperation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OwnerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OperationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OperationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_P1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_P2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tris_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tris_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tris;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderManagerOperation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OwnerID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OwnerID = { "OwnerID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderManagerOperation, OwnerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OwnerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OwnerID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OperationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OperationType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderManagerOperation, OperationType), Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OperationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OperationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderManagerOperation, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_P1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderManagerOperation, P1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_P1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_P1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_P2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_P2 = { "P2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderManagerOperation, P2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_P2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_P2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Thickness_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderManagerOperation, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Thickness_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Tris_Inner = { "Tris", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRenderManagerTri, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Tris_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Tris = { "Tris", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderManagerOperation, Tris), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Tris_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Tris_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Texture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderManagerOperation, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderManagerOperation, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OwnerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OperationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OperationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_P1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_P2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Tris_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Tris,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Material,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"RenderManagerOperation",
		sizeof(FRenderManagerOperation),
		alignof(FRenderManagerOperation),
		Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderManagerOperation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRenderManagerOperation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RenderManagerOperation"), sizeof(FRenderManagerOperation), Get_Z_Construct_UScriptStruct_FRenderManagerOperation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRenderManagerOperation_Hash() { return 2983929408U; }
class UScriptStruct* FRenderManagerTri::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FRenderManagerTri_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderManagerTri, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("RenderManagerTri"), sizeof(FRenderManagerTri), Get_Z_Construct_UScriptStruct_FRenderManagerTri_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FRenderManagerTri>()
{
	return FRenderManagerTri::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRenderManagerTri(FRenderManagerTri::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("RenderManagerTri"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFRenderManagerTri
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFRenderManagerTri()
	{
		UScriptStruct::DeferCppStructOps<FRenderManagerTri>(FName(TEXT("RenderManagerTri")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFRenderManagerTri;
	struct Z_Construct_UScriptStruct_FRenderManagerTri_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderManagerTri_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderManagerTri_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderManagerTri>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderManagerTri_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"RenderManagerTri",
		sizeof(FRenderManagerTri),
		alignof(FRenderManagerTri),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderManagerTri_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderManagerTri_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderManagerTri()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRenderManagerTri_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RenderManagerTri"), sizeof(FRenderManagerTri), Get_Z_Construct_UScriptStruct_FRenderManagerTri_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRenderManagerTri_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRenderManagerTri_Hash() { return 3892772124U; }
class UScriptStruct* FRenderDataStore::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FRenderDataStore_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderDataStore, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("RenderDataStore"), sizeof(FRenderDataStore), Get_Z_Construct_UScriptStruct_FRenderDataStore_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FRenderDataStore>()
{
	return FRenderDataStore::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRenderDataStore(FRenderDataStore::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("RenderDataStore"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFRenderDataStore
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFRenderDataStore()
	{
		UScriptStruct::DeferCppStructOps<FRenderDataStore>(FName(TEXT("RenderDataStore")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFRenderDataStore;
	struct Z_Construct_UScriptStruct_FRenderDataStore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderDataStore_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderDataStore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderDataStore>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderDataStore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"RenderDataStore",
		sizeof(FRenderDataStore),
		alignof(FRenderDataStore),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderDataStore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderDataStore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderDataStore()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRenderDataStore_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RenderDataStore"), sizeof(FRenderDataStore), Get_Z_Construct_UScriptStruct_FRenderDataStore_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRenderDataStore_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRenderDataStore_Hash() { return 330015127U; }
class UScriptStruct* FBPVRReplicatedTextureStore::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVRReplicatedTextureStore"), sizeof(FBPVRReplicatedTextureStore), Get_Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPVRReplicatedTextureStore>()
{
	return FBPVRReplicatedTextureStore::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPVRReplicatedTextureStore(FBPVRReplicatedTextureStore::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPVRReplicatedTextureStore"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRReplicatedTextureStore
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRReplicatedTextureStore()
	{
		UScriptStruct::DeferCppStructOps<FBPVRReplicatedTextureStore>(FName(TEXT("BPVRReplicatedTextureStore")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRReplicatedTextureStore;
	struct Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PackedData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PackedData;
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_UnpackedData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnpackedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnpackedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsZipped_MetaData[];
#endif
		static void NewProp_bIsZipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsZipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "// #TODO: Dirty rects so don't have to send entire texture?\n" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
		{ "ToolTip", "#TODO: Dirty rects so don't have to send entire texture?" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVRReplicatedTextureStore>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_PackedData_Inner = { "PackedData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_PackedData_MetaData[] = {
		{ "Comment", "// Not automatically replicated, we are skipping it so that the array isn't checked\n// We manually copy the data into the serialization buffer during netserialize and keep\n// a flip flop dirty flag\n" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
		{ "ToolTip", "Not automatically replicated, we are skipping it so that the array isn't checked\nWe manually copy the data into the serialization buffer during netserialize and keep\na flip flop dirty flag" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_PackedData = { "PackedData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRReplicatedTextureStore, PackedData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_PackedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_PackedData_MetaData)) };
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_UnpackedData_Inner = { "UnpackedData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_UnpackedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_UnpackedData = { "UnpackedData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRReplicatedTextureStore, UnpackedData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_UnpackedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_UnpackedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRReplicatedTextureStore, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRReplicatedTextureStore, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_bIsZipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_bIsZipped_SetBit(void* Obj)
	{
		((FBPVRReplicatedTextureStore*)Obj)->bIsZipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_bIsZipped = { "bIsZipped", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPVRReplicatedTextureStore), &Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_bIsZipped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_bIsZipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_bIsZipped_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_PackedData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_PackedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_UnpackedData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_UnpackedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_bIsZipped,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPVRReplicatedTextureStore",
		sizeof(FBPVRReplicatedTextureStore),
		alignof(FBPVRReplicatedTextureStore),
		Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPVRReplicatedTextureStore"), sizeof(FBPVRReplicatedTextureStore), Get_Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Hash() { return 3616418307U; }
	DEFINE_FUNCTION(ARenderTargetReplicationProxy::execReceiveTexture)
	{
		P_GET_STRUCT(FBPVRReplicatedTextureStore,Z_Param_TextureData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveTexture_Implementation(Z_Param_TextureData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARenderTargetReplicationProxy::execAck_ReceiveTextureBlob)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BlobCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Ack_ReceiveTextureBlob_Validate(Z_Param_BlobCount))
		{
			RPC_ValidateFailed(TEXT("Ack_ReceiveTextureBlob_Validate"));
			return;
		}
		P_THIS->Ack_ReceiveTextureBlob_Implementation(Z_Param_BlobCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARenderTargetReplicationProxy::execReceiveTextureBlob)
	{
		P_GET_TARRAY(uint8,Z_Param_TextureBlob);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocationInData);
		P_GET_PROPERTY(FIntProperty,Z_Param_BlobCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveTextureBlob_Implementation(Z_Param_TextureBlob,Z_Param_LocationInData,Z_Param_BlobCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARenderTargetReplicationProxy::execAck_InitTextureSend)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TotalDataCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Ack_InitTextureSend_Validate(Z_Param_TotalDataCount))
		{
			RPC_ValidateFailed(TEXT("Ack_InitTextureSend_Validate"));
			return;
		}
		P_THIS->Ack_InitTextureSend_Implementation(Z_Param_TotalDataCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARenderTargetReplicationProxy::execInitTextureSend)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_PROPERTY(FIntProperty,Z_Param_TotalDataCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_BlobCount);
		P_GET_PROPERTY(FByteProperty,Z_Param_PixelFormat);
		P_GET_UBOOL(Z_Param_bIsZipped);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitTextureSend_Implementation(Z_Param_Width,Z_Param_Height,Z_Param_TotalDataCount,Z_Param_BlobCount,EPixelFormat(Z_Param_PixelFormat),Z_Param_bIsZipped);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARenderTargetReplicationProxy::execSendLocalDrawOperations)
	{
		P_GET_TARRAY(FRenderManagerOperation,Z_Param_LocalRenderOperationStoreList);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SendLocalDrawOperations_Validate(Z_Param_LocalRenderOperationStoreList))
		{
			RPC_ValidateFailed(TEXT("SendLocalDrawOperations_Validate"));
			return;
		}
		P_THIS->SendLocalDrawOperations_Implementation(Z_Param_LocalRenderOperationStoreList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARenderTargetReplicationProxy::execSendNextDataBlob)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendNextDataBlob();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARenderTargetReplicationProxy::execOnRep_Manager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Manager();
		P_NATIVE_END;
	}
	static FName NAME_ARenderTargetReplicationProxy_Ack_InitTextureSend = FName(TEXT("Ack_InitTextureSend"));
	void ARenderTargetReplicationProxy::Ack_InitTextureSend(int32 TotalDataCount)
	{
		RenderTargetReplicationProxy_eventAck_InitTextureSend_Parms Parms;
		Parms.TotalDataCount=TotalDataCount;
		ProcessEvent(FindFunctionChecked(NAME_ARenderTargetReplicationProxy_Ack_InitTextureSend),&Parms);
	}
	static FName NAME_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob = FName(TEXT("Ack_ReceiveTextureBlob"));
	void ARenderTargetReplicationProxy::Ack_ReceiveTextureBlob(int32 BlobCount)
	{
		RenderTargetReplicationProxy_eventAck_ReceiveTextureBlob_Parms Parms;
		Parms.BlobCount=BlobCount;
		ProcessEvent(FindFunctionChecked(NAME_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob),&Parms);
	}
	static FName NAME_ARenderTargetReplicationProxy_InitTextureSend = FName(TEXT("InitTextureSend"));
	void ARenderTargetReplicationProxy::InitTextureSend(int32 Width, int32 Height, int32 TotalDataCount, int32 BlobCount, EPixelFormat PixelFormat, bool bIsZipped)
	{
		RenderTargetReplicationProxy_eventInitTextureSend_Parms Parms;
		Parms.Width=Width;
		Parms.Height=Height;
		Parms.TotalDataCount=TotalDataCount;
		Parms.BlobCount=BlobCount;
		Parms.PixelFormat=PixelFormat;
		Parms.bIsZipped=bIsZipped ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ARenderTargetReplicationProxy_InitTextureSend),&Parms);
	}
	static FName NAME_ARenderTargetReplicationProxy_ReceiveTexture = FName(TEXT("ReceiveTexture"));
	void ARenderTargetReplicationProxy::ReceiveTexture(FBPVRReplicatedTextureStore const& TextureData)
	{
		RenderTargetReplicationProxy_eventReceiveTexture_Parms Parms;
		Parms.TextureData=TextureData;
		ProcessEvent(FindFunctionChecked(NAME_ARenderTargetReplicationProxy_ReceiveTexture),&Parms);
	}
	static FName NAME_ARenderTargetReplicationProxy_ReceiveTextureBlob = FName(TEXT("ReceiveTextureBlob"));
	void ARenderTargetReplicationProxy::ReceiveTextureBlob(TArray<uint8> const& TextureBlob, int32 LocationInData, int32 BlobCount)
	{
		RenderTargetReplicationProxy_eventReceiveTextureBlob_Parms Parms;
		Parms.TextureBlob=TextureBlob;
		Parms.LocationInData=LocationInData;
		Parms.BlobCount=BlobCount;
		ProcessEvent(FindFunctionChecked(NAME_ARenderTargetReplicationProxy_ReceiveTextureBlob),&Parms);
	}
	static FName NAME_ARenderTargetReplicationProxy_SendLocalDrawOperations = FName(TEXT("SendLocalDrawOperations"));
	void ARenderTargetReplicationProxy::SendLocalDrawOperations(TArray<FRenderManagerOperation> const& LocalRenderOperationStoreList)
	{
		RenderTargetReplicationProxy_eventSendLocalDrawOperations_Parms Parms;
		Parms.LocalRenderOperationStoreList=LocalRenderOperationStoreList;
		ProcessEvent(FindFunctionChecked(NAME_ARenderTargetReplicationProxy_SendLocalDrawOperations),&Parms);
	}
	void ARenderTargetReplicationProxy::StaticRegisterNativesARenderTargetReplicationProxy()
	{
		UClass* Class = ARenderTargetReplicationProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Ack_InitTextureSend", &ARenderTargetReplicationProxy::execAck_InitTextureSend },
			{ "Ack_ReceiveTextureBlob", &ARenderTargetReplicationProxy::execAck_ReceiveTextureBlob },
			{ "InitTextureSend", &ARenderTargetReplicationProxy::execInitTextureSend },
			{ "OnRep_Manager", &ARenderTargetReplicationProxy::execOnRep_Manager },
			{ "ReceiveTexture", &ARenderTargetReplicationProxy::execReceiveTexture },
			{ "ReceiveTextureBlob", &ARenderTargetReplicationProxy::execReceiveTextureBlob },
			{ "SendLocalDrawOperations", &ARenderTargetReplicationProxy::execSendLocalDrawOperations },
			{ "SendNextDataBlob", &ARenderTargetReplicationProxy::execSendNextDataBlob },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalDataCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::NewProp_TotalDataCount = { "TotalDataCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventAck_InitTextureSend_Parms, TotalDataCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::NewProp_TotalDataCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARenderTargetReplicationProxy, nullptr, "Ack_InitTextureSend", nullptr, nullptr, sizeof(RenderTargetReplicationProxy_eventAck_InitTextureSend_Parms), Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlobCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::NewProp_BlobCount = { "BlobCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventAck_ReceiveTextureBlob_Parms, BlobCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::NewProp_BlobCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARenderTargetReplicationProxy, nullptr, "Ack_ReceiveTextureBlob", nullptr, nullptr, sizeof(RenderTargetReplicationProxy_eventAck_ReceiveTextureBlob_Parms), Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalDataCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlobCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PixelFormat;
		static void NewProp_bIsZipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsZipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventInitTextureSend_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventInitTextureSend_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_TotalDataCount = { "TotalDataCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventInitTextureSend_Parms, TotalDataCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_BlobCount = { "BlobCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventInitTextureSend_Parms, BlobCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_PixelFormat = { "PixelFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventInitTextureSend_Parms, PixelFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_bIsZipped_SetBit(void* Obj)
	{
		((RenderTargetReplicationProxy_eventInitTextureSend_Parms*)Obj)->bIsZipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_bIsZipped = { "bIsZipped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RenderTargetReplicationProxy_eventInitTextureSend_Parms), &Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_bIsZipped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_TotalDataCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_BlobCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_PixelFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_bIsZipped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*, bool bIsJPG*/" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
		{ "ToolTip", ", bool bIsJPG" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARenderTargetReplicationProxy, nullptr, "InitTextureSend", nullptr, nullptr, sizeof(RenderTargetReplicationProxy_eventInitTextureSend_Parms), Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARenderTargetReplicationProxy_OnRep_Manager_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARenderTargetReplicationProxy_OnRep_Manager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARenderTargetReplicationProxy_OnRep_Manager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARenderTargetReplicationProxy, nullptr, "OnRep_Manager", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARenderTargetReplicationProxy_OnRep_Manager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_OnRep_Manager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARenderTargetReplicationProxy_OnRep_Manager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARenderTargetReplicationProxy_OnRep_Manager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::NewProp_TextureData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::NewProp_TextureData = { "TextureData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventReceiveTexture_Parms, TextureData), Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore, METADATA_PARAMS(Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::NewProp_TextureData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::NewProp_TextureData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::NewProp_TextureData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARenderTargetReplicationProxy, nullptr, "ReceiveTexture", nullptr, nullptr, sizeof(RenderTargetReplicationProxy_eventReceiveTexture_Parms), Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureBlob_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureBlob_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureBlob;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocationInData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlobCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_TextureBlob_Inner = { "TextureBlob", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_TextureBlob_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_TextureBlob = { "TextureBlob", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventReceiveTextureBlob_Parms, TextureBlob), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_TextureBlob_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_TextureBlob_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_LocationInData = { "LocationInData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventReceiveTextureBlob_Parms, LocationInData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_BlobCount = { "BlobCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventReceiveTextureBlob_Parms, BlobCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_TextureBlob_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_TextureBlob,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_LocationInData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_BlobCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARenderTargetReplicationProxy, nullptr, "ReceiveTextureBlob", nullptr, nullptr, sizeof(RenderTargetReplicationProxy_eventReceiveTextureBlob_Parms), Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalRenderOperationStoreList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalRenderOperationStoreList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalRenderOperationStoreList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::NewProp_LocalRenderOperationStoreList_Inner = { "LocalRenderOperationStoreList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRenderManagerOperation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::NewProp_LocalRenderOperationStoreList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::NewProp_LocalRenderOperationStoreList = { "LocalRenderOperationStoreList", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventSendLocalDrawOperations_Parms, LocalRenderOperationStoreList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::NewProp_LocalRenderOperationStoreList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::NewProp_LocalRenderOperationStoreList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::NewProp_LocalRenderOperationStoreList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::NewProp_LocalRenderOperationStoreList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARenderTargetReplicationProxy, nullptr, "SendLocalDrawOperations", nullptr, nullptr, sizeof(RenderTargetReplicationProxy_eventSendLocalDrawOperations_Parms), Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARenderTargetReplicationProxy_SendNextDataBlob_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARenderTargetReplicationProxy_SendNextDataBlob_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARenderTargetReplicationProxy_SendNextDataBlob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARenderTargetReplicationProxy, nullptr, "SendNextDataBlob", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARenderTargetReplicationProxy_SendNextDataBlob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_SendNextDataBlob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARenderTargetReplicationProxy_SendNextDataBlob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARenderTargetReplicationProxy_SendNextDataBlob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARenderTargetReplicationProxy_NoRegister()
	{
		return ARenderTargetReplicationProxy::StaticClass();
	}
	struct Z_Construct_UClass_ARenderTargetReplicationProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_OwningManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnersID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OwnersID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureStore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlobNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlobNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureBlobSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureBlobSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBytesPerSecondRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBytesPerSecondRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend, "Ack_InitTextureSend" }, // 1302534156
		{ &Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob, "Ack_ReceiveTextureBlob" }, // 827338630
		{ &Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend, "InitTextureSend" }, // 2348822418
		{ &Z_Construct_UFunction_ARenderTargetReplicationProxy_OnRep_Manager, "OnRep_Manager" }, // 2596456049
		{ &Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture, "ReceiveTexture" }, // 2684113757
		{ &Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob, "ReceiveTextureBlob" }, // 927564476
		{ &Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations, "SendLocalDrawOperations" }, // 1955917725
		{ &Z_Construct_UFunction_ARenderTargetReplicationProxy_SendNextDataBlob, "SendNextDataBlob" }, // 82535846
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n* This class is used as a proxy to send owner only RPCs\n*/" },
		{ "IncludePath", "Misc/VRRenderTargetManager.h" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This class is used as a proxy to send owner only RPCs" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_OwningManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_OwningManager = { "OwningManager", "OnRep_Manager", (EPropertyFlags)0x0014000100080028, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARenderTargetReplicationProxy, OwningManager), Z_Construct_UClass_UVRRenderTargetManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_OwningManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_OwningManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_OwnersID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_OwnersID = { "OwnersID", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARenderTargetReplicationProxy, OwnersID), METADATA_PARAMS(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_OwnersID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_OwnersID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_TextureStore_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_TextureStore = { "TextureStore", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARenderTargetReplicationProxy, TextureStore), Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore, METADATA_PARAMS(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_TextureStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_TextureStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_BlobNum_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_BlobNum = { "BlobNum", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARenderTargetReplicationProxy, BlobNum), METADATA_PARAMS(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_BlobNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_BlobNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_TextureBlobSize_MetaData[] = {
		{ "Comment", "// Maximum size of texture blobs to use for sending (size of chunks that it gets broken down into)\n" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
		{ "ToolTip", "Maximum size of texture blobs to use for sending (size of chunks that it gets broken down into)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_TextureBlobSize = { "TextureBlobSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARenderTargetReplicationProxy, TextureBlobSize), METADATA_PARAMS(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_TextureBlobSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_TextureBlobSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_MaxBytesPerSecondRate_MetaData[] = {
		{ "Comment", "// Maximum bytes per second to send, you will want to play around with this and the\n// MaxClientRate settings in config in order to balance the bandwidth and avoid saturation\n// If you raise this above the max replication size of a 65k byte size then you will need\n// To adjust the max size in engine network settings.\n" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
		{ "ToolTip", "Maximum bytes per second to send, you will want to play around with this and the\nMaxClientRate settings in config in order to balance the bandwidth and avoid saturation\nIf you raise this above the max replication size of a 65k byte size then you will need\nTo adjust the max size in engine network settings." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_MaxBytesPerSecondRate = { "MaxBytesPerSecondRate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARenderTargetReplicationProxy, MaxBytesPerSecondRate), METADATA_PARAMS(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_MaxBytesPerSecondRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_MaxBytesPerSecondRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_OwningManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_OwnersID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_TextureStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_BlobNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_TextureBlobSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_MaxBytesPerSecondRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARenderTargetReplicationProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::ClassParams = {
		&ARenderTargetReplicationProxy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARenderTargetReplicationProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARenderTargetReplicationProxy, 4293055702);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<ARenderTargetReplicationProxy>()
	{
		return ARenderTargetReplicationProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARenderTargetReplicationProxy(Z_Construct_UClass_ARenderTargetReplicationProxy, &ARenderTargetReplicationProxy::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("ARenderTargetReplicationProxy"), false, nullptr, nullptr, nullptr);

	void ARenderTargetReplicationProxy::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OwningManager(TEXT("OwningManager"));
		static const FName Name_OwnersID(TEXT("OwnersID"));

		const bool bIsValid = true
			&& Name_OwningManager == ClassReps[(int32)ENetFields_Private::OwningManager].Property->GetFName()
			&& Name_OwnersID == ClassReps[(int32)ENetFields_Private::OwnersID].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARenderTargetReplicationProxy"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARenderTargetReplicationProxy);
	DEFINE_FUNCTION(UVRRenderTargetManager::execGenerateTrisFromBoxPlaneIntersection)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimToBoxCheck);
		P_GET_STRUCT(FTransform,Z_Param_WorldTransformOfPlane);
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_LocalProjectionPlane);
		P_GET_STRUCT(FVector2D,Z_Param_PlaneSize);
		P_GET_STRUCT(FColor,Z_Param_UVColor);
		P_GET_TARRAY_REF(FCanvasUVTri,Z_Param_Out_OutTris);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GenerateTrisFromBoxPlaneIntersection(Z_Param_PrimToBoxCheck,Z_Param_WorldTransformOfPlane,Z_Param_Out_LocalProjectionPlane,Z_Param_PlaneSize,Z_Param_UVColor,Z_Param_Out_OutTris);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRRenderTargetManager::execDrawPoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawPoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRRenderTargetManager::execAddMaterialTrianglesDrawOperation)
	{
		P_GET_TARRAY(FCanvasUVTri,Z_Param_Tris);
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMaterialTrianglesDrawOperation(Z_Param_Tris,Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRRenderTargetManager::execAddTextureDrawOperation)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Position);
		P_GET_OBJECT(UTexture2D,Z_Param_TextureToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTextureDrawOperation(Z_Param_Position,Z_Param_TextureToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRRenderTargetManager::execAddLineDrawOperation)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Point1);
		P_GET_STRUCT(FVector2D,Z_Param_Point2);
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_GET_PROPERTY(FIntProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLineDrawOperation(Z_Param_Point1,Z_Param_Point2,Z_Param_Color,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRRenderTargetManager::execSendDrawOperations)
	{
		P_GET_TARRAY(FRenderManagerOperation,Z_Param_RenderOperationStoreList);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SendDrawOperations_Validate(Z_Param_RenderOperationStoreList))
		{
			RPC_ValidateFailed(TEXT("SendDrawOperations_Validate"));
			return;
		}
		P_THIS->SendDrawOperations_Implementation(Z_Param_RenderOperationStoreList);
		P_NATIVE_END;
	}
	static FName NAME_UVRRenderTargetManager_SendDrawOperations = FName(TEXT("SendDrawOperations"));
	void UVRRenderTargetManager::SendDrawOperations(TArray<FRenderManagerOperation> const& RenderOperationStoreList)
	{
		VRRenderTargetManager_eventSendDrawOperations_Parms Parms;
		Parms.RenderOperationStoreList=RenderOperationStoreList;
		ProcessEvent(FindFunctionChecked(NAME_UVRRenderTargetManager_SendDrawOperations),&Parms);
	}
	void UVRRenderTargetManager::StaticRegisterNativesUVRRenderTargetManager()
	{
		UClass* Class = UVRRenderTargetManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLineDrawOperation", &UVRRenderTargetManager::execAddLineDrawOperation },
			{ "AddMaterialTrianglesDrawOperation", &UVRRenderTargetManager::execAddMaterialTrianglesDrawOperation },
			{ "AddTextureDrawOperation", &UVRRenderTargetManager::execAddTextureDrawOperation },
			{ "DrawPoll", &UVRRenderTargetManager::execDrawPoll },
			{ "GenerateTrisFromBoxPlaneIntersection", &UVRRenderTargetManager::execGenerateTrisFromBoxPlaneIntersection },
			{ "SendDrawOperations", &UVRRenderTargetManager::execSendDrawOperations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics
	{
		struct VRRenderTargetManager_eventAddLineDrawOperation_Parms
		{
			FVector2D Point1;
			FVector2D Point2;
			FColor Color;
			int32 Thickness;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::NewProp_Point1 = { "Point1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRenderTargetManager_eventAddLineDrawOperation_Parms, Point1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::NewProp_Point2 = { "Point2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRenderTargetManager_eventAddLineDrawOperation_Parms, Point2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRenderTargetManager_eventAddLineDrawOperation_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRenderTargetManager_eventAddLineDrawOperation_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::NewProp_Point1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::NewProp_Point2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRRenderTargetManager|DrawingFunctions" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRenderTargetManager, nullptr, "AddLineDrawOperation", nullptr, nullptr, sizeof(VRRenderTargetManager_eventAddLineDrawOperation_Parms), Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics
	{
		struct VRRenderTargetManager_eventAddMaterialTrianglesDrawOperation_Parms
		{
			TArray<FCanvasUVTri> Tris;
			UMaterial* Material;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tris_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tris;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::NewProp_Tris_Inner = { "Tris", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCanvasUVTri, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::NewProp_Tris = { "Tris", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRenderTargetManager_eventAddMaterialTrianglesDrawOperation_Parms, Tris), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRenderTargetManager_eventAddMaterialTrianglesDrawOperation_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::NewProp_Tris_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::NewProp_Tris,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRRenderTargetManager|DrawingFunctions" },
		{ "Comment", "// Adds a draw operation for a triangle list, only takes the first vertex's color\n" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
		{ "ToolTip", "Adds a draw operation for a triangle list, only takes the first vertex's color" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRenderTargetManager, nullptr, "AddMaterialTrianglesDrawOperation", nullptr, nullptr, sizeof(VRRenderTargetManager_eventAddMaterialTrianglesDrawOperation_Parms), Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics
	{
		struct VRRenderTargetManager_eventAddTextureDrawOperation_Parms
		{
			FVector2D Position;
			UTexture2D* TextureToDisplay;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureToDisplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRenderTargetManager_eventAddTextureDrawOperation_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::NewProp_TextureToDisplay = { "TextureToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRenderTargetManager_eventAddTextureDrawOperation_Parms, TextureToDisplay), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::NewProp_TextureToDisplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRRenderTargetManager|DrawingFunctions" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRenderTargetManager, nullptr, "AddTextureDrawOperation", nullptr, nullptr, sizeof(VRRenderTargetManager_eventAddTextureDrawOperation_Parms), Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRRenderTargetManager_DrawPoll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRRenderTargetManager_DrawPoll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRenderTargetManager_DrawPoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRenderTargetManager, nullptr, "DrawPoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRRenderTargetManager_DrawPoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_DrawPoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRRenderTargetManager_DrawPoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRRenderTargetManager_DrawPoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics
	{
		struct VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms
		{
			UPrimitiveComponent* PrimToBoxCheck;
			FTransform WorldTransformOfPlane;
			FPlane LocalProjectionPlane;
			FVector2D PlaneSize;
			FColor UVColor;
			TArray<FCanvasUVTri> OutTris;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimToBoxCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimToBoxCheck;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransformOfPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalProjectionPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalProjectionPlane;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTris_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTris;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_PrimToBoxCheck_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_PrimToBoxCheck = { "PrimToBoxCheck", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms, PrimToBoxCheck), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_PrimToBoxCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_PrimToBoxCheck_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_WorldTransformOfPlane = { "WorldTransformOfPlane", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms, WorldTransformOfPlane), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_LocalProjectionPlane_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_LocalProjectionPlane = { "LocalProjectionPlane", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms, LocalProjectionPlane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_LocalProjectionPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_LocalProjectionPlane_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_PlaneSize = { "PlaneSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms, PlaneSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_UVColor = { "UVColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms, UVColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_OutTris_Inner = { "OutTris", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCanvasUVTri, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_OutTris = { "OutTris", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms, OutTris), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms), &Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_PrimToBoxCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_WorldTransformOfPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_LocalProjectionPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_PlaneSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_UVColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_OutTris_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_OutTris,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRRenderTargetManager|UtilityFunctions" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRenderTargetManager, nullptr, "GenerateTrisFromBoxPlaneIntersection", nullptr, nullptr, sizeof(VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms), Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderOperationStoreList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderOperationStoreList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RenderOperationStoreList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::NewProp_RenderOperationStoreList_Inner = { "RenderOperationStoreList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRenderManagerOperation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::NewProp_RenderOperationStoreList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::NewProp_RenderOperationStoreList = { "RenderOperationStoreList", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRRenderTargetManager_eventSendDrawOperations_Parms, RenderOperationStoreList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::NewProp_RenderOperationStoreList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::NewProp_RenderOperationStoreList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::NewProp_RenderOperationStoreList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::NewProp_RenderOperationStoreList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRenderTargetManager, nullptr, "SendDrawOperations", nullptr, nullptr, sizeof(VRRenderTargetManager_eventSendDrawOperations_Parms), Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRRenderTargetManager_NoRegister()
	{
		return UVRRenderTargetManager::StaticClass();
	}
	struct Z_Construct_UClass_UVRRenderTargetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalProxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_LocalProxy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStoringImage_MetaData[];
#endif
		static void NewProp_bIsStoringImage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStoringImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitiallyReplicateTexture_MetaData[];
#endif
		static void NewProp_bInitiallyReplicateTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitiallyReplicateTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingTextureBuffer_MetaData[];
#endif
		static void NewProp_bIsLoadingTextureBuffer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingTextureBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureBlobSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureBlobSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBytesPerSecondRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBytesPerSecondRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTargetWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RenderTargetWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTargetHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RenderTargetHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NetRelevancyLog_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetRelevancyLog_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NetRelevancyLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PollRelevancyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PollRelevancyTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTargetStore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderTargetStore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRRenderTargetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRRenderTargetManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation, "AddLineDrawOperation" }, // 152587197
		{ &Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation, "AddMaterialTrianglesDrawOperation" }, // 3085100368
		{ &Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation, "AddTextureDrawOperation" }, // 1853350094
		{ &Z_Construct_UFunction_UVRRenderTargetManager_DrawPoll, "DrawPoll" }, // 3022029149
		{ &Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection, "GenerateTrisFromBoxPlaneIntersection" }, // 169084189
		{ &Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations, "SendDrawOperations" }, // 2179112753
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRenderTargetManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n* This class stores reading requests for rendertargets and iterates over them\n* It returns the pixel data at the end of processing\n* It references code from: https://github.com/TimmHess/UnrealImageCapture\n*/" },
		{ "IncludePath", "Misc/VRRenderTargetManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This class stores reading requests for rendertargets and iterates over them\nIt returns the pixel data at the end of processing\nIt references code from: https://github.com/TimmHess/UnrealImageCapture" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_LocalProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_LocalProxy = { "LocalProxy", nullptr, (EPropertyFlags)0x0014000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRRenderTargetManager, LocalProxy), Z_Construct_UClass_ARenderTargetReplicationProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_LocalProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_LocalProxy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_DrawRate_MetaData[] = {
		{ "Category", "RenderTargetManager" },
		{ "Comment", "// Rate to poll for drawing new operations\n" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
		{ "ToolTip", "Rate to poll for drawing new operations" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_DrawRate = { "DrawRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRRenderTargetManager, DrawRate), METADATA_PARAMS(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_DrawRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_DrawRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_DrawHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_DrawHandle = { "DrawHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRRenderTargetManager, DrawHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_DrawHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_DrawHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsStoringImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	void Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsStoringImage_SetBit(void* Obj)
	{
		((UVRRenderTargetManager*)Obj)->bIsStoringImage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsStoringImage = { "bIsStoringImage", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRRenderTargetManager), &Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsStoringImage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsStoringImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsStoringImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bInitiallyReplicateTexture_MetaData[] = {
		{ "Category", "RenderTargetManager" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	void Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bInitiallyReplicateTexture_SetBit(void* Obj)
	{
		((UVRRenderTargetManager*)Obj)->bInitiallyReplicateTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bInitiallyReplicateTexture = { "bInitiallyReplicateTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRRenderTargetManager), &Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bInitiallyReplicateTexture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bInitiallyReplicateTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bInitiallyReplicateTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsLoadingTextureBuffer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	void Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsLoadingTextureBuffer_SetBit(void* Obj)
	{
		((UVRRenderTargetManager*)Obj)->bIsLoadingTextureBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsLoadingTextureBuffer = { "bIsLoadingTextureBuffer", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRRenderTargetManager), &Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsLoadingTextureBuffer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsLoadingTextureBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsLoadingTextureBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_TextureBlobSize_MetaData[] = {
		{ "Category", "RenderTargetManager" },
		{ "Comment", "// Maximum size of texture blobs to use for sending (size of chunks that it gets broken down into)\n" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
		{ "ToolTip", "Maximum size of texture blobs to use for sending (size of chunks that it gets broken down into)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_TextureBlobSize = { "TextureBlobSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRRenderTargetManager, TextureBlobSize), METADATA_PARAMS(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_TextureBlobSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_TextureBlobSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_MaxBytesPerSecondRate_MetaData[] = {
		{ "Category", "RenderTargetManager" },
		{ "Comment", "// Maximum bytes per second to send, you will want to play around with this and the\n// MaxClientRate settings in config in order to balance the bandwidth and avoid saturation\n// If you raise this above the max replication size of a 65k byte size then you will need\n// To adjust the max size in engine network settings.\n" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
		{ "ToolTip", "Maximum bytes per second to send, you will want to play around with this and the\nMaxClientRate settings in config in order to balance the bandwidth and avoid saturation\nIf you raise this above the max replication size of a 65k byte size then you will need\nTo adjust the max size in engine network settings." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_MaxBytesPerSecondRate = { "MaxBytesPerSecondRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRRenderTargetManager, MaxBytesPerSecondRate), METADATA_PARAMS(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_MaxBytesPerSecondRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_MaxBytesPerSecondRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "RenderTargetManager" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRRenderTargetManager, RenderTarget), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetWidth_MetaData[] = {
		{ "Category", "RenderTargetManager" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetWidth = { "RenderTargetWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRRenderTargetManager, RenderTargetWidth), METADATA_PARAMS(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetHeight_MetaData[] = {
		{ "Category", "RenderTargetManager" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetHeight = { "RenderTargetHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRRenderTargetManager, RenderTargetHeight), METADATA_PARAMS(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_ClearColor_MetaData[] = {
		{ "Category", "RenderTargetManager" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRRenderTargetManager, ClearColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_ClearColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_ClearColor_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_NetRelevancyLog_Inner = { "NetRelevancyLog", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClientRepData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_NetRelevancyLog_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_NetRelevancyLog = { "NetRelevancyLog", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRRenderTargetManager, NetRelevancyLog), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_NetRelevancyLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_NetRelevancyLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_PollRelevancyTime_MetaData[] = {
		{ "Category", "RenderTargetManager" },
		{ "Comment", "// Rate to poll for actor relevancy\n" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
		{ "ToolTip", "Rate to poll for actor relevancy" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_PollRelevancyTime = { "PollRelevancyTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRRenderTargetManager, PollRelevancyTime), METADATA_PARAMS(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_PollRelevancyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_PollRelevancyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetStore_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetStore = { "RenderTargetStore", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRRenderTargetManager, RenderTargetStore), Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore, METADATA_PARAMS(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetStore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRRenderTargetManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_LocalProxy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_DrawRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_DrawHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsStoringImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bInitiallyReplicateTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsLoadingTextureBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_TextureBlobSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_MaxBytesPerSecondRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_ClearColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_NetRelevancyLog_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_NetRelevancyLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_PollRelevancyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetStore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRRenderTargetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRRenderTargetManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRRenderTargetManager_Statics::ClassParams = {
		&UVRRenderTargetManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRRenderTargetManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRRenderTargetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRRenderTargetManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRRenderTargetManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRRenderTargetManager, 2679561321);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRRenderTargetManager>()
	{
		return UVRRenderTargetManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRRenderTargetManager(Z_Construct_UClass_UVRRenderTargetManager, &UVRRenderTargetManager::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRRenderTargetManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRRenderTargetManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
