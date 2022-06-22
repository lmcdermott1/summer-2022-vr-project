// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRGlobalSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGlobalSettings() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRControllerProfile();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGlobalSettings_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGlobalSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPHitSurfaceProperties();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVirtualStockSettings();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
class UScriptStruct* FBPVRControllerProfile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPVRControllerProfile_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVRControllerProfile, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVRControllerProfile"), sizeof(FBPVRControllerProfile), Get_Z_Construct_UScriptStruct_FBPVRControllerProfile_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPVRControllerProfile>()
{
	return FBPVRControllerProfile::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPVRControllerProfile(FBPVRControllerProfile::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPVRControllerProfile"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRControllerProfile
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRControllerProfile()
	{
		UScriptStruct::DeferCppStructOps<FBPVRControllerProfile>(FName(TEXT("BPVRControllerProfile")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPVRControllerProfile;
	struct Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ControllerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOffsetTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketOffsetTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSeperateHandOffsetTransforms_MetaData[];
#endif
		static void NewProp_bUseSeperateHandOffsetTransforms_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSeperateHandOffsetTransforms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOffsetTransformRightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketOffsetTransformRightHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ControllerProfiles" },
		{ "Comment", "/*USTRUCT(BlueprintType, Category = \"VRGlobalSettings\")\nstruct FAxisMappingDetails\n{\n\x09GENERATED_BODY()\npublic:\n\n\x09// List of all axis key mappings that correspond to the axis name in the containing map \n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Input\")\n\x09TArray<FInputAxisKeyMapping> AxisMappings;\n\n};\n\n// As of 4.24 these do nothing, they are left for a few versions as a reference of old bindings\n// #TODO: Delete around 4.26\nUSTRUCT(BlueprintType, Category = \"VRGlobalSettings\")\nstruct FActionMappingDetails\n{\n\x09GENERATED_BODY()\npublic:\n\n\x09// List of all axis key mappings that correspond to the axis name in the containing map \n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Input\")\n\x09\x09TArray<FInputActionKeyMapping> ActionMappings;\n};*/" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "USTRUCT(BlueprintType, Category = \"VRGlobalSettings\")\nstruct FAxisMappingDetails\n{\n       GENERATED_BODY()\npublic:\n\n       // List of all axis key mappings that correspond to the axis name in the containing map\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Input\")\n       TArray<FInputAxisKeyMapping> AxisMappings;\n\n};\n\n// As of 4.24 these do nothing, they are left for a few versions as a reference of old bindings\n// #TODO: Delete around 4.26\nUSTRUCT(BlueprintType, Category = \"VRGlobalSettings\")\nstruct FActionMappingDetails\n{\n       GENERATED_BODY()\npublic:\n\n       // List of all axis key mappings that correspond to the axis name in the containing map\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Input\")\n               TArray<FInputActionKeyMapping> ActionMappings;\n};" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVRControllerProfile>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ControllerName_MetaData[] = {
		{ "Category", "ControllerProfiles" },
		{ "Comment", "// Name of controller profile\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Name of controller profile" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ControllerName = { "ControllerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRControllerProfile, ControllerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ControllerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ControllerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransform_MetaData[] = {
		{ "Category", "ControllerProfiles" },
		{ "Comment", "// Offset to use with this controller\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Offset to use with this controller" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransform = { "SocketOffsetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRControllerProfile, SocketOffsetTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms_MetaData[] = {
		{ "Category", "ControllerProfiles" },
		{ "Comment", "// Offset to use with this controller\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Offset to use with this controller" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms_SetBit(void* Obj)
	{
		((FBPVRControllerProfile*)Obj)->bUseSeperateHandOffsetTransforms = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms = { "bUseSeperateHandOffsetTransforms", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPVRControllerProfile), &Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransformRightHand_MetaData[] = {
		{ "Category", "ControllerProfiles" },
		{ "Comment", "// Offset to use with this controller\n" },
		{ "editcondition", "bUseSeperateHandOffsetTransforms" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Offset to use with this controller" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransformRightHand = { "SocketOffsetTransformRightHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVRControllerProfile, SocketOffsetTransformRightHand), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransformRightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransformRightHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ControllerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransformRightHand,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPVRControllerProfile",
		sizeof(FBPVRControllerProfile),
		alignof(FBPVRControllerProfile),
		Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPVRControllerProfile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPVRControllerProfile_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPVRControllerProfile"), sizeof(FBPVRControllerProfile), Get_Z_Construct_UScriptStruct_FBPVRControllerProfile_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPVRControllerProfile_Hash() { return 746919999U; }
	DEFINE_FUNCTION(UVRGlobalSettings::execLoadControllerProfile)
	{
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_ControllerProfile);
		P_GET_UBOOL(Z_Param_bSetAsCurrentProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVRGlobalSettings::LoadControllerProfile(Z_Param_Out_ControllerProfile,Z_Param_bSetAsCurrentProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGlobalSettings::execLoadControllerProfileByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ControllerProfileName);
		P_GET_UBOOL(Z_Param_bSetAsCurrentProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVRGlobalSettings::LoadControllerProfileByName(Z_Param_ControllerProfileName,Z_Param_bSetAsCurrentProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGlobalSettings::execGetControllerProfile)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ControllerProfileName);
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_OutProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVRGlobalSettings::GetControllerProfile(Z_Param_ControllerProfileName,Z_Param_Out_OutProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGlobalSettings::execGetCurrentProfile)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bHadLoadedProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBPVRControllerProfile*)Z_Param__Result=UVRGlobalSettings::GetCurrentProfile(Z_Param_Out_bHadLoadedProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGlobalSettings::execGetCurrentProfileName)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bHadLoadedProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UVRGlobalSettings::GetCurrentProfileName(Z_Param_Out_bHadLoadedProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGlobalSettings::execSaveControllerProfiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRGlobalSettings::SaveControllerProfiles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGlobalSettings::execDeleteControllerProfile)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ControllerProfileName);
		P_GET_UBOOL(Z_Param_bSaveOutToConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRGlobalSettings::DeleteControllerProfile(Z_Param_ControllerProfileName,Z_Param_bSaveOutToConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGlobalSettings::execAddControllerProfile)
	{
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_NewProfile);
		P_GET_UBOOL(Z_Param_bSaveOutToConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRGlobalSettings::AddControllerProfile(Z_Param_Out_NewProfile,Z_Param_bSaveOutToConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGlobalSettings::execOverwriteControllerProfile)
	{
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_OverwritingProfile);
		P_GET_UBOOL(Z_Param_bSaveOutToConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRGlobalSettings::OverwriteControllerProfile(Z_Param_Out_OverwritingProfile,Z_Param_bSaveOutToConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGlobalSettings::execGetControllerProfiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FBPVRControllerProfile>*)Z_Param__Result=UVRGlobalSettings::GetControllerProfiles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGlobalSettings::execAdjustTransformByGivenControllerProfile)
	{
		P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_ControllerProfile);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SocketTransform);
		P_GET_UBOOL(Z_Param_bIsRightHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UVRGlobalSettings::AdjustTransformByGivenControllerProfile(Z_Param_Out_ControllerProfile,Z_Param_Out_SocketTransform,Z_Param_bIsRightHand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGlobalSettings::execAdjustTransformByControllerProfile)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalControllerProfileName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SocketTransform);
		P_GET_UBOOL(Z_Param_bIsRightHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UVRGlobalSettings::AdjustTransformByControllerProfile(Z_Param_OptionalControllerProfileName,Z_Param_Out_SocketTransform,Z_Param_bIsRightHand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGlobalSettings::execSaveVirtualStockGlobalSettings)
	{
		P_GET_STRUCT(FBPVirtualStockSettings,Z_Param_NewVirtualStockSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRGlobalSettings::SaveVirtualStockGlobalSettings(Z_Param_NewVirtualStockSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGlobalSettings::execGetVirtualStockGlobalSettings)
	{
		P_GET_STRUCT_REF(FBPVirtualStockSettings,Z_Param_Out_OutVirtualStockSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRGlobalSettings::GetVirtualStockGlobalSettings(Z_Param_Out_OutVirtualStockSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGlobalSettings::execGetMeleeSurfaceGlobalSettings)
	{
		P_GET_TARRAY_REF(FBPHitSurfaceProperties,Z_Param_Out_OutMeleeSurfaceSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRGlobalSettings::GetMeleeSurfaceGlobalSettings(Z_Param_Out_OutMeleeSurfaceSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGlobalSettings::execIsGlobalLerpEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVRGlobalSettings::IsGlobalLerpEnabled();
		P_NATIVE_END;
	}
	void UVRGlobalSettings::StaticRegisterNativesUVRGlobalSettings()
	{
		UClass* Class = UVRGlobalSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddControllerProfile", &UVRGlobalSettings::execAddControllerProfile },
			{ "AdjustTransformByControllerProfile", &UVRGlobalSettings::execAdjustTransformByControllerProfile },
			{ "AdjustTransformByGivenControllerProfile", &UVRGlobalSettings::execAdjustTransformByGivenControllerProfile },
			{ "DeleteControllerProfile", &UVRGlobalSettings::execDeleteControllerProfile },
			{ "GetControllerProfile", &UVRGlobalSettings::execGetControllerProfile },
			{ "GetControllerProfiles", &UVRGlobalSettings::execGetControllerProfiles },
			{ "GetCurrentProfile", &UVRGlobalSettings::execGetCurrentProfile },
			{ "GetCurrentProfileName", &UVRGlobalSettings::execGetCurrentProfileName },
			{ "GetMeleeSurfaceGlobalSettings", &UVRGlobalSettings::execGetMeleeSurfaceGlobalSettings },
			{ "GetVirtualStockGlobalSettings", &UVRGlobalSettings::execGetVirtualStockGlobalSettings },
			{ "IsGlobalLerpEnabled", &UVRGlobalSettings::execIsGlobalLerpEnabled },
			{ "LoadControllerProfile", &UVRGlobalSettings::execLoadControllerProfile },
			{ "LoadControllerProfileByName", &UVRGlobalSettings::execLoadControllerProfileByName },
			{ "OverwriteControllerProfile", &UVRGlobalSettings::execOverwriteControllerProfile },
			{ "SaveControllerProfiles", &UVRGlobalSettings::execSaveControllerProfiles },
			{ "SaveVirtualStockGlobalSettings", &UVRGlobalSettings::execSaveVirtualStockGlobalSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics
	{
		struct VRGlobalSettings_eventAddControllerProfile_Parms
		{
			FBPVRControllerProfile NewProfile;
			bool bSaveOutToConfig;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewProfile;
		static void NewProp_bSaveOutToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveOutToConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_NewProfile = { "NewProfile", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventAddControllerProfile_Parms, NewProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventAddControllerProfile_Parms*)Obj)->bSaveOutToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_bSaveOutToConfig = { "bSaveOutToConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGlobalSettings_eventAddControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_NewProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_bSaveOutToConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles|Operations" },
		{ "Comment", "// Add a controller profile\n" },
		{ "CPP_Default_bSaveOutToConfig", "true" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Add a controller profile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "AddControllerProfile", nullptr, nullptr, sizeof(VRGlobalSettings_eventAddControllerProfile_Parms), Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics
	{
		struct VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms
		{
			FName OptionalControllerProfileName;
			FTransform SocketTransform;
			bool bIsRightHand;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalControllerProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketTransform;
		static void NewProp_bIsRightHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_OptionalControllerProfileName = { "OptionalControllerProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms, OptionalControllerProfileName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_SocketTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_SocketTransform = { "SocketTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms, SocketTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_SocketTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_SocketTransform_MetaData)) };
	void Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_bIsRightHand_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms*)Obj)->bIsRightHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_bIsRightHand = { "bIsRightHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_bIsRightHand_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_OptionalControllerProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_SocketTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_bIsRightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
		{ "Comment", "// Adjust the transform of a socket for a particular controller model, if a name is not sent in, it will use the currently loaded one\n// If there is no currently loaded one, it will return the input transform as is.\n// If bIsRightHand and the target profile uses seperate hand transforms it will use the right hand transform\n" },
		{ "CPP_Default_bIsRightHand", "false" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Adjust the transform of a socket for a particular controller model, if a name is not sent in, it will use the currently loaded one\nIf there is no currently loaded one, it will return the input transform as is.\nIf bIsRightHand and the target profile uses seperate hand transforms it will use the right hand transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "AdjustTransformByControllerProfile", nullptr, nullptr, sizeof(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms), Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics
	{
		struct VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms
		{
			FBPVRControllerProfile ControllerProfile;
			FTransform SocketTransform;
			bool bIsRightHand;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControllerProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketTransform;
		static void NewProp_bIsRightHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_ControllerProfile = { "ControllerProfile", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms, ControllerProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_SocketTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_SocketTransform = { "SocketTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms, SocketTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_SocketTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_SocketTransform_MetaData)) };
	void Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_bIsRightHand_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms*)Obj)->bIsRightHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_bIsRightHand = { "bIsRightHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_bIsRightHand_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_ControllerProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_SocketTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_bIsRightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
		{ "Comment", "// Adjust the transform of a socket for a particular controller model\n// If there is no currently loaded one, it will return the input transform as is.\n// If bIsRightHand and the target profile uses seperate hand transforms it will use the right hand transform\n" },
		{ "CPP_Default_bIsRightHand", "false" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Adjust the transform of a socket for a particular controller model\nIf there is no currently loaded one, it will return the input transform as is.\nIf bIsRightHand and the target profile uses seperate hand transforms it will use the right hand transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "AdjustTransformByGivenControllerProfile", nullptr, nullptr, sizeof(VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms), Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics
	{
		struct VRGlobalSettings_eventDeleteControllerProfile_Parms
		{
			FName ControllerProfileName;
			bool bSaveOutToConfig;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ControllerProfileName;
		static void NewProp_bSaveOutToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveOutToConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_ControllerProfileName = { "ControllerProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventDeleteControllerProfile_Parms, ControllerProfileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventDeleteControllerProfile_Parms*)Obj)->bSaveOutToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_bSaveOutToConfig = { "bSaveOutToConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGlobalSettings_eventDeleteControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_ControllerProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_bSaveOutToConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles|Operations" },
		{ "Comment", "// Overwrite a controller profile\n" },
		{ "CPP_Default_bSaveOutToConfig", "true" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Overwrite a controller profile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "DeleteControllerProfile", nullptr, nullptr, sizeof(VRGlobalSettings_eventDeleteControllerProfile_Parms), Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics
	{
		struct VRGlobalSettings_eventGetControllerProfile_Parms
		{
			FName ControllerProfileName;
			FBPVRControllerProfile OutProfile;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ControllerProfileName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutProfile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ControllerProfileName = { "ControllerProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventGetControllerProfile_Parms, ControllerProfileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_OutProfile = { "OutProfile", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventGetControllerProfile_Parms, OutProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventGetControllerProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGlobalSettings_eventGetControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ControllerProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_OutProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
		{ "Comment", "// Get a controller profile by name\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Get a controller profile by name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "GetControllerProfile", nullptr, nullptr, sizeof(VRGlobalSettings_eventGetControllerProfile_Parms), Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics
	{
		struct VRGlobalSettings_eventGetControllerProfiles_Parms
		{
			TArray<FBPVRControllerProfile> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventGetControllerProfiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
		{ "Comment", "// Get array of controller profiles\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Get array of controller profiles" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "GetControllerProfiles", nullptr, nullptr, sizeof(VRGlobalSettings_eventGetControllerProfiles_Parms), Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics
	{
		struct VRGlobalSettings_eventGetCurrentProfile_Parms
		{
			bool bHadLoadedProfile;
			FBPVRControllerProfile ReturnValue;
		};
		static void NewProp_bHadLoadedProfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadLoadedProfile;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_bHadLoadedProfile_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventGetCurrentProfile_Parms*)Obj)->bHadLoadedProfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_bHadLoadedProfile = { "bHadLoadedProfile", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGlobalSettings_eventGetCurrentProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_bHadLoadedProfile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventGetCurrentProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_bHadLoadedProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
		{ "Comment", "// Get name of currently loaded profile (if one is loaded)\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Get name of currently loaded profile (if one is loaded)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "GetCurrentProfile", nullptr, nullptr, sizeof(VRGlobalSettings_eventGetCurrentProfile_Parms), Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics
	{
		struct VRGlobalSettings_eventGetCurrentProfileName_Parms
		{
			bool bHadLoadedProfile;
			FName ReturnValue;
		};
		static void NewProp_bHadLoadedProfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadLoadedProfile;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_bHadLoadedProfile_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventGetCurrentProfileName_Parms*)Obj)->bHadLoadedProfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_bHadLoadedProfile = { "bHadLoadedProfile", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGlobalSettings_eventGetCurrentProfileName_Parms), &Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_bHadLoadedProfile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventGetCurrentProfileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_bHadLoadedProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
		{ "Comment", "// Get name of currently loaded profile (if one is loaded)\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Get name of currently loaded profile (if one is loaded)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "GetCurrentProfileName", nullptr, nullptr, sizeof(VRGlobalSettings_eventGetCurrentProfileName_Parms), Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics
	{
		struct VRGlobalSettings_eventGetMeleeSurfaceGlobalSettings_Parms
		{
			TArray<FBPHitSurfaceProperties> OutMeleeSurfaceSettings;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutMeleeSurfaceSettings_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutMeleeSurfaceSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::NewProp_OutMeleeSurfaceSettings_Inner = { "OutMeleeSurfaceSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPHitSurfaceProperties, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::NewProp_OutMeleeSurfaceSettings = { "OutMeleeSurfaceSettings", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventGetMeleeSurfaceGlobalSettings_Parms, OutMeleeSurfaceSettings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::NewProp_OutMeleeSurfaceSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::NewProp_OutMeleeSurfaceSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeleeSettings" },
		{ "Comment", "// Get the values of the virtual stock settings\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Get the values of the virtual stock settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "GetMeleeSurfaceGlobalSettings", nullptr, nullptr, sizeof(VRGlobalSettings_eventGetMeleeSurfaceGlobalSettings_Parms), Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics
	{
		struct VRGlobalSettings_eventGetVirtualStockGlobalSettings_Parms
		{
			FBPVirtualStockSettings OutVirtualStockSettings;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutVirtualStockSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::NewProp_OutVirtualStockSettings = { "OutVirtualStockSettings", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventGetVirtualStockGlobalSettings_Parms, OutVirtualStockSettings), Z_Construct_UScriptStruct_FBPVirtualStockSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::NewProp_OutVirtualStockSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "GunSettings|VirtualStock" },
		{ "Comment", "// Get the values of the virtual stock settings\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Get the values of the virtual stock settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "GetVirtualStockGlobalSettings", nullptr, nullptr, sizeof(VRGlobalSettings_eventGetVirtualStockGlobalSettings_Parms), Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics
	{
		struct VRGlobalSettings_eventIsGlobalLerpEnabled_Parms
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
	void Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventIsGlobalLerpEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGlobalSettings_eventIsGlobalLerpEnabled_Parms), &Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "GlobalLerpToHand" },
		{ "Comment", "// Alter the values of the virtual stock settings and save them out\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Alter the values of the virtual stock settings and save them out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "IsGlobalLerpEnabled", nullptr, nullptr, sizeof(VRGlobalSettings_eventIsGlobalLerpEnabled_Parms), Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics
	{
		struct VRGlobalSettings_eventLoadControllerProfile_Parms
		{
			FBPVRControllerProfile ControllerProfile;
			bool bSetAsCurrentProfile;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControllerProfile;
		static void NewProp_bSetAsCurrentProfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetAsCurrentProfile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ControllerProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ControllerProfile = { "ControllerProfile", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventLoadControllerProfile_Parms, ControllerProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ControllerProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ControllerProfile_MetaData)) };
	void Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_bSetAsCurrentProfile_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventLoadControllerProfile_Parms*)Obj)->bSetAsCurrentProfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_bSetAsCurrentProfile = { "bSetAsCurrentProfile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGlobalSettings_eventLoadControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_bSetAsCurrentProfile_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventLoadControllerProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGlobalSettings_eventLoadControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ControllerProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_bSetAsCurrentProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
		{ "Comment", "// Load a controller profile\n// Action / Axis mappings overwrite ones with the same action/axis name in the input settings.\n// If you have an action/axis override but don't assign buttons to it then it will just delete it.\n// This can be useful for removing actions and using multiple actions (IE: Grip Touch, Grip Vive actions)\n// For when just changing the buttons isn't good enough\n// If bSetDefaults is true, will set this as the currently loaded profile\n// Otherwise will just load it (useful for Left/Right handed profile additions and the like to have it false)\n// AS OF 4.25 AXIS and ACTION mappings do nothing, will be deleting around 4.26 #TODO: Delete around 4.26\n" },
		{ "CPP_Default_bSetAsCurrentProfile", "true" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Load a controller profile\nAction / Axis mappings overwrite ones with the same action/axis name in the input settings.\nIf you have an action/axis override but don't assign buttons to it then it will just delete it.\nThis can be useful for removing actions and using multiple actions (IE: Grip Touch, Grip Vive actions)\nFor when just changing the buttons isn't good enough\nIf bSetDefaults is true, will set this as the currently loaded profile\nOtherwise will just load it (useful for Left/Right handed profile additions and the like to have it false)\nAS OF 4.25 AXIS and ACTION mappings do nothing, will be deleting around 4.26 #TODO: Delete around 4.26" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "LoadControllerProfile", nullptr, nullptr, sizeof(VRGlobalSettings_eventLoadControllerProfile_Parms), Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics
	{
		struct VRGlobalSettings_eventLoadControllerProfileByName_Parms
		{
			FName ControllerProfileName;
			bool bSetAsCurrentProfile;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ControllerProfileName;
		static void NewProp_bSetAsCurrentProfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetAsCurrentProfile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ControllerProfileName = { "ControllerProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventLoadControllerProfileByName_Parms, ControllerProfileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_bSetAsCurrentProfile_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventLoadControllerProfileByName_Parms*)Obj)->bSetAsCurrentProfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_bSetAsCurrentProfile = { "bSetAsCurrentProfile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGlobalSettings_eventLoadControllerProfileByName_Parms), &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_bSetAsCurrentProfile_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventLoadControllerProfileByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGlobalSettings_eventLoadControllerProfileByName_Parms), &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ControllerProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_bSetAsCurrentProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
		{ "Comment", "// Load a controller profile by name\n// Action / Axis mappings overwrite ones with the same action/axis name in the input settings.\n// If you have an action/axis override but don't assign buttons to it then it will just delete it.\n// This can be useful for removing actions and using multiple actions (IE: Grip Touch, Grip Vive actions)\n// For when just changing the buttons isn't good enough\n// If bSetDefaults is true, will set this as the currently loaded profile\n// Otherwise will just load it (useful for Left/Right handed profile additions and the like to have it false)\n" },
		{ "CPP_Default_bSetAsCurrentProfile", "true" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Load a controller profile by name\nAction / Axis mappings overwrite ones with the same action/axis name in the input settings.\nIf you have an action/axis override but don't assign buttons to it then it will just delete it.\nThis can be useful for removing actions and using multiple actions (IE: Grip Touch, Grip Vive actions)\nFor when just changing the buttons isn't good enough\nIf bSetDefaults is true, will set this as the currently loaded profile\nOtherwise will just load it (useful for Left/Right handed profile additions and the like to have it false)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "LoadControllerProfileByName", nullptr, nullptr, sizeof(VRGlobalSettings_eventLoadControllerProfileByName_Parms), Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics
	{
		struct VRGlobalSettings_eventOverwriteControllerProfile_Parms
		{
			FBPVRControllerProfile OverwritingProfile;
			bool bSaveOutToConfig;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverwritingProfile;
		static void NewProp_bSaveOutToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveOutToConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_OverwritingProfile = { "OverwritingProfile", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventOverwriteControllerProfile_Parms, OverwritingProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit(void* Obj)
	{
		((VRGlobalSettings_eventOverwriteControllerProfile_Parms*)Obj)->bSaveOutToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_bSaveOutToConfig = { "bSaveOutToConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGlobalSettings_eventOverwriteControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_OverwritingProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_bSaveOutToConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles|Operations" },
		{ "Comment", "// Overwrite a controller profile\n" },
		{ "CPP_Default_bSaveOutToConfig", "true" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Overwrite a controller profile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "OverwriteControllerProfile", nullptr, nullptr, sizeof(VRGlobalSettings_eventOverwriteControllerProfile_Parms), Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles|Operations" },
		{ "Comment", "// Saved the VRGlobalSettings out to its config file, will include any alterations that you made to the profile\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Saved the VRGlobalSettings out to its config file, will include any alterations that you made to the profile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "SaveControllerProfiles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics
	{
		struct VRGlobalSettings_eventSaveVirtualStockGlobalSettings_Parms
		{
			FBPVirtualStockSettings NewVirtualStockSettings;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVirtualStockSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::NewProp_NewVirtualStockSettings = { "NewVirtualStockSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGlobalSettings_eventSaveVirtualStockGlobalSettings_Parms, NewVirtualStockSettings), Z_Construct_UScriptStruct_FBPVirtualStockSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::NewProp_NewVirtualStockSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "GunSettings|VirtualStock" },
		{ "Comment", "// Alter the values of the virtual stock settings and save them out\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Alter the values of the virtual stock settings and save them out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "SaveVirtualStockGlobalSettings", nullptr, nullptr, sizeof(VRGlobalSettings_eventSaveVirtualStockGlobalSettings_Parms), Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRGlobalSettings_NoRegister()
	{
		return UVRGlobalSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVRGlobalSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDriveStiffnessScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDriveStiffnessScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDriveDampingScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDriveDampingScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDriveStiffnessScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDriveStiffnessScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDriveDampingScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDriveDampingScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGlobalLerpToHand_MetaData[];
#endif
		static void NewProp_bUseGlobalLerpToHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGlobalLerpToHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistanceForLerp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistanceForLerp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LerpDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeedForLerp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeedForLerp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedForLerp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedForLerp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LerpInterpolationMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LerpInterpolationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LerpInterpolationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCurve_MetaData[];
#endif
		static void NewProp_bUseCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalCurveToFollow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalCurveToFollow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCCDPasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxCCDPasses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeleeSurfaceSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeSurfaceSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeleeSurfaceSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualStockSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VirtualStockSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneEuroMinCutoff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneEuroMinCutoff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneEuroCutoffSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneEuroCutoffSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneEuroDeltaCutoff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneEuroDeltaCutoff;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControllerProfiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerProfiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControllerProfiles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRGlobalSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRGlobalSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile, "AddControllerProfile" }, // 2748542860
		{ &Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile, "AdjustTransformByControllerProfile" }, // 3423774010
		{ &Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile, "AdjustTransformByGivenControllerProfile" }, // 1991154968
		{ &Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile, "DeleteControllerProfile" }, // 1240116432
		{ &Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile, "GetControllerProfile" }, // 23497220
		{ &Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles, "GetControllerProfiles" }, // 3989421309
		{ &Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile, "GetCurrentProfile" }, // 2700327629
		{ &Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName, "GetCurrentProfileName" }, // 956881222
		{ &Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings, "GetMeleeSurfaceGlobalSettings" }, // 2451761743
		{ &Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings, "GetVirtualStockGlobalSettings" }, // 975202500
		{ &Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled, "IsGlobalLerpEnabled" }, // 2228092817
		{ &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile, "LoadControllerProfile" }, // 860064077
		{ &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName, "LoadControllerProfileByName" }, // 3174970815
		{ &Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile, "OverwriteControllerProfile" }, // 799891660
		{ &Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles, "SaveControllerProfiles" }, // 2216049227
		{ &Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings, "SaveVirtualStockGlobalSettings" }, // 1704225259
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRGlobalSettings.h" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LinearDriveStiffnessScale_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "// A scaler to apply to constraint drives when chaos is active\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "A scaler to apply to constraint drives when chaos is active" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LinearDriveStiffnessScale = { "LinearDriveStiffnessScale", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, LinearDriveStiffnessScale), METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LinearDriveStiffnessScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LinearDriveStiffnessScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LinearDriveDampingScale_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "// A scaler to apply to constraint drives when chaos is active\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "A scaler to apply to constraint drives when chaos is active" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LinearDriveDampingScale = { "LinearDriveDampingScale", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, LinearDriveDampingScale), METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LinearDriveDampingScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LinearDriveDampingScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_AngularDriveStiffnessScale_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "// A scaler to apply to constraint drives when chaos is active\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "A scaler to apply to constraint drives when chaos is active" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_AngularDriveStiffnessScale = { "AngularDriveStiffnessScale", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, AngularDriveStiffnessScale), METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_AngularDriveStiffnessScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_AngularDriveStiffnessScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_AngularDriveDampingScale_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "// A scaler to apply to constraint drives when chaos is active\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "A scaler to apply to constraint drives when chaos is active" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_AngularDriveDampingScale = { "AngularDriveDampingScale", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, AngularDriveDampingScale), METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_AngularDriveDampingScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_AngularDriveDampingScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseGlobalLerpToHand_MetaData[] = {
		{ "Category", "GlobalLerpToHand" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
	};
#endif
	void Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseGlobalLerpToHand_SetBit(void* Obj)
	{
		((UVRGlobalSettings*)Obj)->bUseGlobalLerpToHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseGlobalLerpToHand = { "bUseGlobalLerpToHand", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGlobalSettings), &Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseGlobalLerpToHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseGlobalLerpToHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseGlobalLerpToHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MinDistanceForLerp_MetaData[] = {
		{ "Category", "GlobalLerpToHand" },
		{ "Comment", "// If the initial grip distance is closer than this value then the lerping will not be performed.\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "If the initial grip distance is closer than this value then the lerping will not be performed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MinDistanceForLerp = { "MinDistanceForLerp", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, MinDistanceForLerp), METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MinDistanceForLerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MinDistanceForLerp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpDuration_MetaData[] = {
		{ "Category", "GlobalLerpToHand" },
		{ "Comment", "// How many seconds the lerp should take\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "How many seconds the lerp should take" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpDuration = { "LerpDuration", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, LerpDuration), METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MinSpeedForLerp_MetaData[] = {
		{ "Category", "GlobalLerpToHand" },
		{ "Comment", "// The minimum speed (in UU per second) that that the lerp should have across the initial grip distance\n// Will speed the LerpSpeed up to try and maintain this initial speed if required\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "The minimum speed (in UU per second) that that the lerp should have across the initial grip distance\nWill speed the LerpSpeed up to try and maintain this initial speed if required" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MinSpeedForLerp = { "MinSpeedForLerp", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, MinSpeedForLerp), METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MinSpeedForLerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MinSpeedForLerp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MaxSpeedForLerp_MetaData[] = {
		{ "Category", "GlobalLerpToHand" },
		{ "Comment", "// The maximum speed (in UU per second) that the lerp should have across the initial grip distance\n// Will slow the LerpSpeed down to try and maintain this initial speed if required\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "The maximum speed (in UU per second) that the lerp should have across the initial grip distance\nWill slow the LerpSpeed down to try and maintain this initial speed if required" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MaxSpeedForLerp = { "MaxSpeedForLerp", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, MaxSpeedForLerp), METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MaxSpeedForLerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MaxSpeedForLerp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpInterpolationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpInterpolationMode_MetaData[] = {
		{ "Category", "GlobalLerpToHand" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpInterpolationMode = { "LerpInterpolationMode", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, LerpInterpolationMode), Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode, METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpInterpolationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpInterpolationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseCurve_MetaData[] = {
		{ "Category", "GlobalLerpToHand|Curve" },
		{ "Comment", "// Whether to use a curve map to map the lerp to\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Whether to use a curve map to map the lerp to" },
	};
#endif
	void Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseCurve_SetBit(void* Obj)
	{
		((UVRGlobalSettings*)Obj)->bUseCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseCurve = { "bUseCurve", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGlobalSettings), &Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OptionalCurveToFollow_MetaData[] = {
		{ "Category", "GlobalLerpToHand|Curve" },
		{ "Comment", "// The curve to follow when using a curve map, only uses from 0.0 - 1.0 of the curve timeline and maps it across the entire duration\n" },
		{ "editcondition", "bUseCurve" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "The curve to follow when using a curve map, only uses from 0.0 - 1.0 of the curve timeline and maps it across the entire duration" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OptionalCurveToFollow = { "OptionalCurveToFollow", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, OptionalCurveToFollow), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OptionalCurveToFollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OptionalCurveToFollow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MaxCCDPasses_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "// How many passes CCD will take during simulation, larger values significantly increase the cost of CCD calculation but also prevent tunneling artifacts\n// Physx only\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "How many passes CCD will take during simulation, larger values significantly increase the cost of CCD calculation but also prevent tunneling artifacts\nPhysx only" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MaxCCDPasses = { "MaxCCDPasses", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, MaxCCDPasses), METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MaxCCDPasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MaxCCDPasses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MeleeSurfaceSettings_Inner = { "MeleeSurfaceSettings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPHitSurfaceProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MeleeSurfaceSettings_MetaData[] = {
		{ "Category", "MeleeSettings" },
		{ "Comment", "// List of surfaces and their properties for the melee script\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "List of surfaces and their properties for the melee script" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MeleeSurfaceSettings = { "MeleeSurfaceSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, MeleeSurfaceSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MeleeSurfaceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MeleeSurfaceSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_VirtualStockSettings_MetaData[] = {
		{ "Category", "GunSettings" },
		{ "Comment", "// Default global virtual stock settings for the gun script\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Default global virtual stock settings for the gun script" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_VirtualStockSettings = { "VirtualStockSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, VirtualStockSettings), Z_Construct_UScriptStruct_FBPVirtualStockSettings, METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_VirtualStockSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_VirtualStockSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroMinCutoff_MetaData[] = {
		{ "Category", "GunSettings|Secondary Grip 1Euro Settings" },
		{ "Comment", "// Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroMinCutoff = { "OneEuroMinCutoff", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, OneEuroMinCutoff), METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroMinCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroMinCutoff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroCutoffSlope_MetaData[] = {
		{ "Category", "GunSettings|Secondary Grip 1Euro Settings" },
		{ "Comment", "// Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroCutoffSlope = { "OneEuroCutoffSlope", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, OneEuroCutoffSlope), METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroCutoffSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroCutoffSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroDeltaCutoff_MetaData[] = {
		{ "Category", "GunSettings|Secondary Grip 1Euro Settings" },
		{ "Comment", "// Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroDeltaCutoff = { "OneEuroDeltaCutoff", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, OneEuroDeltaCutoff), METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroDeltaCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroDeltaCutoff_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles_Inner = { "ControllerProfiles", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles_MetaData[] = {
		{ "Category", "ControllerProfiles" },
		{ "Comment", "// Controller profiles to store related information on a per profile basis\n" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ToolTip", "Controller profiles to store related information on a per profile basis" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles = { "ControllerProfiles", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGlobalSettings, ControllerProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRGlobalSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LinearDriveStiffnessScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LinearDriveDampingScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_AngularDriveStiffnessScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_AngularDriveDampingScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseGlobalLerpToHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MinDistanceForLerp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MinSpeedForLerp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MaxSpeedForLerp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpInterpolationMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpInterpolationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OptionalCurveToFollow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MaxCCDPasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MeleeSurfaceSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MeleeSurfaceSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_VirtualStockSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroMinCutoff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroCutoffSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroDeltaCutoff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRGlobalSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGlobalSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRGlobalSettings_Statics::ClassParams = {
		&UVRGlobalSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRGlobalSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UVRGlobalSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRGlobalSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRGlobalSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRGlobalSettings, 2951992449);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRGlobalSettings>()
	{
		return UVRGlobalSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGlobalSettings(Z_Construct_UClass_UVRGlobalSettings, &UVRGlobalSettings::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGlobalSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGlobalSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
