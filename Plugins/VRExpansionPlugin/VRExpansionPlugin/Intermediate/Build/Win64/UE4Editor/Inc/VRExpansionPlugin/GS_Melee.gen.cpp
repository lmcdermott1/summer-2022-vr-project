// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/GS_Melee.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_Melee() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPLodgeComponentInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPHitSurfaceProperties();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Melee_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Melee();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Default();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms
		{
			FBPLodgeComponentInfo LogComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			TEnumAsByte<ECollisionChannel> OtherCompCollisionChannel;
			FBPHitSurfaceProperties HitSurfaceProperties;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LogComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OtherCompCollisionChannel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitSurfaceProperties;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_LogComponent = { "LogComponent", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms, LogComponent), Z_Construct_UScriptStruct_FBPLodgeComponentInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherCompCollisionChannel = { "OtherCompCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms, OtherCompCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_HitSurfaceProperties = { "HitSurfaceProperties", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms, HitSurfaceProperties), Z_Construct_UScriptStruct_FBPHitSurfaceProperties, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_LogComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_OtherCompCollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_HitSurfaceProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VROnMeleeOnHit__DelegateSignature", nullptr, nullptr, sizeof(_Script_VRExpansionPlugin_eventVROnMeleeOnHit_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms
		{
			FBPLodgeComponentInfo LogComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			TEnumAsByte<ECollisionChannel> OtherCompCollisionChannel;
			FBPHitSurfaceProperties HitSurfaceProperties;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LogComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OtherCompCollisionChannel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitSurfaceProperties;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_LogComponent = { "LogComponent", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms, LogComponent), Z_Construct_UScriptStruct_FBPLodgeComponentInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherCompCollisionChannel = { "OtherCompCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms, OtherCompCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_HitSurfaceProperties = { "HitSurfaceProperties", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms, HitSurfaceProperties), Z_Construct_UScriptStruct_FBPHitSurfaceProperties, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_LogComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_OtherCompCollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_HitSurfaceProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Event thrown when we the melee weapon becomes lodged\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "Event thrown when we the melee weapon becomes lodged" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VROnMeleeShouldLodgeSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EVRMeleePrimaryHandType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMeleePrimaryHandType"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMeleePrimaryHandType>()
	{
		return EVRMeleePrimaryHandType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMeleePrimaryHandType(EVRMeleePrimaryHandType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRMeleePrimaryHandType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType_Hash() { return 857576868U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMeleePrimaryHandType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMeleePrimaryHandType::VRPHAND_Rear", (int64)EVRMeleePrimaryHandType::VRPHAND_Rear },
				{ "EVRMeleePrimaryHandType::VRPHAND_Front", (int64)EVRMeleePrimaryHandType::VRPHAND_Front },
				{ "EVRMeleePrimaryHandType::VRPHAND_Slotted", (int64)EVRMeleePrimaryHandType::VRPHAND_Slotted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// The type of primary hand selection to use\n" },
				{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
				{ "ToolTip", "The type of primary hand selection to use" },
				{ "VRPHAND_Front.Comment", "// Uses the foremost hand as the primary hand\n" },
				{ "VRPHAND_Front.DisplayName", "Front" },
				{ "VRPHAND_Front.Name", "EVRMeleePrimaryHandType::VRPHAND_Front" },
				{ "VRPHAND_Front.ToolTip", "Uses the foremost hand as the primary hand" },
				{ "VRPHAND_Rear.Comment", "// Uses the rearmost hand as the primary hand\n" },
				{ "VRPHAND_Rear.DisplayName", "Rear" },
				{ "VRPHAND_Rear.Name", "EVRMeleePrimaryHandType::VRPHAND_Rear" },
				{ "VRPHAND_Rear.ToolTip", "Uses the rearmost hand as the primary hand" },
				{ "VRPHAND_Slotted.Comment", "// Uses the first slotted hand as the primary hand\n// If neither are slotted then its first come first serve and both hannds load the secondary settings\n" },
				{ "VRPHAND_Slotted.DisplayName", "Slotted" },
				{ "VRPHAND_Slotted.Name", "EVRMeleePrimaryHandType::VRPHAND_Slotted" },
				{ "VRPHAND_Slotted.ToolTip", "Uses the first slotted hand as the primary hand\nIf neither are slotted then its first come first serve and both hannds load the secondary settings" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRMeleePrimaryHandType",
				"EVRMeleePrimaryHandType",
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
	static UEnum* EVRMeleeComType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMeleeComType"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMeleeComType>()
	{
		return EVRMeleeComType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMeleeComType(EVRMeleeComType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRMeleeComType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType_Hash() { return 3177799088U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMeleeComType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMeleeComType::VRPMELEECOM_Normal", (int64)EVRMeleeComType::VRPMELEECOM_Normal },
				{ "EVRMeleeComType::VRPMELEECOM_BetweenHands", (int64)EVRMeleeComType::VRPMELEECOM_BetweenHands },
				{ "EVRMeleeComType::VRPMELEECOM_PrimaryHand", (int64)EVRMeleeComType::VRPMELEECOM_PrimaryHand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// The type of COM selection to use\n" },
				{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
				{ "ToolTip", "The type of COM selection to use" },
				{ "VRPMELEECOM_BetweenHands.Comment", "// Sets COM to between hands\n" },
				{ "VRPMELEECOM_BetweenHands.DisplayName", "BetweenHands" },
				{ "VRPMELEECOM_BetweenHands.Name", "EVRMeleeComType::VRPMELEECOM_BetweenHands" },
				{ "VRPMELEECOM_BetweenHands.ToolTip", "Sets COM to between hands" },
				{ "VRPMELEECOM_Normal.Comment", "// Does not set COM\n" },
				{ "VRPMELEECOM_Normal.DisplayName", "Normal" },
				{ "VRPMELEECOM_Normal.Name", "EVRMeleeComType::VRPMELEECOM_Normal" },
				{ "VRPMELEECOM_Normal.ToolTip", "Does not set COM" },
				{ "VRPMELEECOM_PrimaryHand.Comment", "// Uses the primary hand as com location\n" },
				{ "VRPMELEECOM_PrimaryHand.DisplayName", "PrimaryHand" },
				{ "VRPMELEECOM_PrimaryHand.Name", "EVRMeleeComType::VRPMELEECOM_PrimaryHand" },
				{ "VRPMELEECOM_PrimaryHand.ToolTip", "Uses the primary hand as com location" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRMeleeComType",
				"EVRMeleeComType",
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
	static UEnum* EVRMeleeZoneType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMeleeZoneType"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMeleeZoneType>()
	{
		return EVRMeleeZoneType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMeleeZoneType(EVRMeleeZoneType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRMeleeZoneType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType_Hash() { return 37418183U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMeleeZoneType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMeleeZoneType::VRPMELLE_ZONETYPE_Stab", (int64)EVRMeleeZoneType::VRPMELLE_ZONETYPE_Stab },
				{ "EVRMeleeZoneType::VRPMELLE_ZONETYPE_Hit", (int64)EVRMeleeZoneType::VRPMELLE_ZONETYPE_Hit },
				{ "EVRMeleeZoneType::VRPMELLE_ZONETYPE_StabAndHit", (int64)EVRMeleeZoneType::VRPMELLE_ZONETYPE_StabAndHit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// The type of melee hit zone we are\n" },
				{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
				{ "ToolTip", "The type of melee hit zone we are" },
				{ "VRPMELLE_ZONETYPE_Hit.Comment", "// This zone is only valid for hits\n" },
				{ "VRPMELLE_ZONETYPE_Hit.DisplayName", "Hit" },
				{ "VRPMELLE_ZONETYPE_Hit.Name", "EVRMeleeZoneType::VRPMELLE_ZONETYPE_Hit" },
				{ "VRPMELLE_ZONETYPE_Hit.ToolTip", "This zone is only valid for hits" },
				{ "VRPMELLE_ZONETYPE_Stab.Comment", "// This zone is only valid for stabs\n" },
				{ "VRPMELLE_ZONETYPE_Stab.DisplayName", "Stab" },
				{ "VRPMELLE_ZONETYPE_Stab.Name", "EVRMeleeZoneType::VRPMELLE_ZONETYPE_Stab" },
				{ "VRPMELLE_ZONETYPE_Stab.ToolTip", "This zone is only valid for stabs" },
				{ "VRPMELLE_ZONETYPE_StabAndHit.Comment", "// This zone is valid for both stabs and hits\n" },
				{ "VRPMELLE_ZONETYPE_StabAndHit.DisplayName", "StabAndHit" },
				{ "VRPMELLE_ZONETYPE_StabAndHit.Name", "EVRMeleeZoneType::VRPMELLE_ZONETYPE_StabAndHit" },
				{ "VRPMELLE_ZONETYPE_StabAndHit.ToolTip", "This zone is valid for both stabs and hits" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRMeleeZoneType",
				"EVRMeleeZoneType",
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
class UScriptStruct* FBPLodgeComponentInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPLodgeComponentInfo, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPLodgeComponentInfo"), sizeof(FBPLodgeComponentInfo), Get_Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPLodgeComponentInfo>()
{
	return FBPLodgeComponentInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPLodgeComponentInfo(FBPLodgeComponentInfo::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPLodgeComponentInfo"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPLodgeComponentInfo
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPLodgeComponentInfo()
	{
		UScriptStruct::DeferCppStructOps<FBPLodgeComponentInfo>(FName(TEXT("BPLodgeComponentInfo")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPLodgeComponentInfo;
	struct Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ComponentName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ZoneType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ZoneType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreForwardVectorForHitImpulse_MetaData[];
#endif
		static void NewProp_bIgnoreForwardVectorForHitImpulse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreForwardVectorForHitImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageScaler_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageScaler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PenetrationDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PenetrationDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowPenetrationInReverseAsWell_MetaData[];
#endif
		static void NewProp_bAllowPenetrationInReverseAsWell_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPenetrationInReverseAsWell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PenetrationVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PenetrationVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumHitVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumHitVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableForwardProductRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptableForwardProductRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableForwardProductRangeForHits_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptableForwardProductRangeForHits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_TargetComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Lodging" },
		{ "Comment", "// A Lodge component data struct\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "A Lodge component data struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPLodgeComponentInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Category", "LodgeComponentInfo" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ComponentName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ZoneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ZoneType_MetaData[] = {
		{ "Category", "LodgeComponentInfo" },
		{ "Comment", "// Type of collision zone we are\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "Type of collision zone we are" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ZoneType = { "ZoneType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, ZoneType), Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeZoneType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ZoneType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ZoneType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bIgnoreForwardVectorForHitImpulse_MetaData[] = {
		{ "Category", "LodgeComponentInfo" },
		{ "Comment", "// If true than we will calculate hit impulse off of its total value and not just off of it axially aligned to the forward of this body\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "If true than we will calculate hit impulse off of its total value and not just off of it axially aligned to the forward of this body" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bIgnoreForwardVectorForHitImpulse_SetBit(void* Obj)
	{
		((FBPLodgeComponentInfo*)Obj)->bIgnoreForwardVectorForHitImpulse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bIgnoreForwardVectorForHitImpulse = { "bIgnoreForwardVectorForHitImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPLodgeComponentInfo), &Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bIgnoreForwardVectorForHitImpulse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bIgnoreForwardVectorForHitImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bIgnoreForwardVectorForHitImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_DamageScaler_MetaData[] = {
		{ "Category", "LodgeComponentInfo" },
		{ "Comment", "// For end users to provide a base damage per zone if they want\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "For end users to provide a base damage per zone if they want" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_DamageScaler = { "DamageScaler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, DamageScaler), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_DamageScaler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_DamageScaler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationDepth_MetaData[] = {
		{ "Category", "LodgeComponentInfo" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationDepth = { "PenetrationDepth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, PenetrationDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bAllowPenetrationInReverseAsWell_MetaData[] = {
		{ "Category", "LodgeComponentInfo" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bAllowPenetrationInReverseAsWell_SetBit(void* Obj)
	{
		((FBPLodgeComponentInfo*)Obj)->bAllowPenetrationInReverseAsWell = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bAllowPenetrationInReverseAsWell = { "bAllowPenetrationInReverseAsWell", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPLodgeComponentInfo), &Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bAllowPenetrationInReverseAsWell_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bAllowPenetrationInReverseAsWell_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bAllowPenetrationInReverseAsWell_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationVelocity_MetaData[] = {
		{ "Category", "Weapon Settings" },
		{ "Comment", "// This is the impulse velocity (along forward axis of component) required to throw an OnPenetrated event from a PenetrationNotifierComponent\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "This is the impulse velocity (along forward axis of component) required to throw an OnPenetrated event from a PenetrationNotifierComponent" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationVelocity = { "PenetrationVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, PenetrationVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_MinimumHitVelocity_MetaData[] = {
		{ "Category", "Weapon Settings" },
		{ "Comment", "// This is the impulse velocity required to throw an OnHit event from a PenetrationNotifierComponent (If a stab didn't take place)\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "This is the impulse velocity required to throw an OnHit event from a PenetrationNotifierComponent (If a stab didn't take place)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_MinimumHitVelocity = { "MinimumHitVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, MinimumHitVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_MinimumHitVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_MinimumHitVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRange_MetaData[] = {
		{ "Category", "Weapon Settings" },
		{ "Comment", "// The acceptable range of the dot product of the forward vector and the impact normal to define a valid facing\n// Subtracted from the 1.0f forward facing value\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "The acceptable range of the dot product of the forward vector and the impact normal to define a valid facing\nSubtracted from the 1.0f forward facing value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRange = { "AcceptableForwardProductRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, AcceptableForwardProductRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRangeForHits_MetaData[] = {
		{ "Category", "Weapon Settings" },
		{ "Comment", "// The acceptable range of the dot product of the forward vector and the impact normal to define a valid facing\n// Subtracted from the 1.0f forward facing value\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "The acceptable range of the dot product of the forward vector and the impact normal to define a valid facing\nSubtracted from the 1.0f forward facing value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRangeForHits = { "AcceptableForwardProductRangeForHits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, AcceptableForwardProductRangeForHits), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRangeForHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRangeForHits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "Category", "LodgeComponentInfo" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x001400000008001d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPLodgeComponentInfo, TargetComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_TargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_TargetComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ZoneType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_ZoneType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bIgnoreForwardVectorForHitImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_DamageScaler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_bAllowPenetrationInReverseAsWell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_PenetrationVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_MinimumHitVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_AcceptableForwardProductRangeForHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::NewProp_TargetComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPLodgeComponentInfo",
		sizeof(FBPLodgeComponentInfo),
		alignof(FBPLodgeComponentInfo),
		Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPLodgeComponentInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPLodgeComponentInfo"), sizeof(FBPLodgeComponentInfo), Get_Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Hash() { return 2282972199U; }
class UScriptStruct* FBPHitSurfaceProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPHitSurfaceProperties, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPHitSurfaceProperties"), sizeof(FBPHitSurfaceProperties), Get_Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPHitSurfaceProperties>()
{
	return FBPHitSurfaceProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPHitSurfaceProperties(FBPHitSurfaceProperties::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("BPHitSurfaceProperties"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPHitSurfaceProperties
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPHitSurfaceProperties()
	{
		UScriptStruct::DeferCppStructOps<FBPHitSurfaceProperties>(FName(TEXT("BPHitSurfaceProperties")));
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFBPHitSurfaceProperties;
	struct Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSurfaceAllowsPenetration_MetaData[];
#endif
		static void NewProp_bSurfaceAllowsPenetration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSurfaceAllowsPenetration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BluntDamageScaler_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BluntDamageScaler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharpDamageScaler_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SharpDamageScaler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabVelocityScaler_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StabVelocityScaler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Lodging" },
		{ "Comment", "// A Lodge component data struct\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "A Lodge component data struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPHitSurfaceProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_bSurfaceAllowsPenetration_MetaData[] = {
		{ "Category", "Surface Property" },
		{ "Comment", "// Does this surface type allow penetration\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "Does this surface type allow penetration" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_bSurfaceAllowsPenetration_SetBit(void* Obj)
	{
		((FBPHitSurfaceProperties*)Obj)->bSurfaceAllowsPenetration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_bSurfaceAllowsPenetration = { "bSurfaceAllowsPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPHitSurfaceProperties), &Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_bSurfaceAllowsPenetration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_bSurfaceAllowsPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_bSurfaceAllowsPenetration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_BluntDamageScaler_MetaData[] = {
		{ "Category", "Surface Property" },
		{ "Comment", "// Scaler to damage applied from hitting this surface with blunt damage\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "Scaler to damage applied from hitting this surface with blunt damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_BluntDamageScaler = { "BluntDamageScaler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPHitSurfaceProperties, BluntDamageScaler), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_BluntDamageScaler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_BluntDamageScaler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SharpDamageScaler_MetaData[] = {
		{ "Category", "Surface Property" },
		{ "Comment", "// Scaler to damage applied from hitting this surface with sharp damage\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "Scaler to damage applied from hitting this surface with sharp damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SharpDamageScaler = { "SharpDamageScaler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPHitSurfaceProperties, SharpDamageScaler), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SharpDamageScaler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SharpDamageScaler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_StabVelocityScaler_MetaData[] = {
		{ "Category", "Surface Property" },
		{ "Comment", "// Alters the stab velocity to let you make it harder or easier to stab this surface\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "Alters the stab velocity to let you make it harder or easier to stab this surface" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_StabVelocityScaler = { "StabVelocityScaler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPHitSurfaceProperties, StabVelocityScaler), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_StabVelocityScaler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_StabVelocityScaler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "Category", "Surface Property" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPHitSurfaceProperties, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SurfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SurfaceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_bSurfaceAllowsPenetration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_BluntDamageScaler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SharpDamageScaler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_StabVelocityScaler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::NewProp_SurfaceType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"BPHitSurfaceProperties",
		sizeof(FBPHitSurfaceProperties),
		alignof(FBPHitSurfaceProperties),
		Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPHitSurfaceProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPHitSurfaceProperties"), sizeof(FBPHitSurfaceProperties), Get_Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Hash() { return 1842136654U; }
	DEFINE_FUNCTION(UGS_Melee::execSetPrimaryAndSecondaryHands)
	{
		P_GET_STRUCT_REF(FBPGripPair,Z_Param_Out_PrimaryGrip);
		P_GET_STRUCT_REF(FBPGripPair,Z_Param_Out_SecondaryGrip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrimaryAndSecondaryHands(Z_Param_Out_PrimaryGrip,Z_Param_Out_SecondaryGrip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGS_Melee::execUpdateHandPositionAndRotation)
	{
		P_GET_STRUCT(FBPGripPair,Z_Param_HandPair);
		P_GET_STRUCT(FTransform,Z_Param_HandWorldTransform);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocDifference);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RotDifference);
		P_GET_UBOOL(Z_Param_bUpdateLocation);
		P_GET_UBOOL(Z_Param_bUpdateRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHandPositionAndRotation(Z_Param_HandPair,Z_Param_HandWorldTransform,Z_Param_Out_LocDifference,Z_Param_Out_RotDifference,Z_Param_bUpdateLocation,Z_Param_bUpdateRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGS_Melee::execUpdateHandPosition)
	{
		P_GET_STRUCT(FBPGripPair,Z_Param_HandPair);
		P_GET_STRUCT(FVector,Z_Param_HandWorldPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocDifference);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHandPosition(Z_Param_HandPair,Z_Param_HandWorldPosition,Z_Param_Out_LocDifference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGS_Melee::execSetIsLodged)
	{
		P_GET_UBOOL(Z_Param_IsLodged);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_LodgeComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsLodged(Z_Param_IsLodged,Z_Param_LodgeComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGS_Melee::execOnLodgeHitCallback)
	{
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLodgeHitCallback(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void UGS_Melee::StaticRegisterNativesUGS_Melee()
	{
		UClass* Class = UGS_Melee::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLodgeHitCallback", &UGS_Melee::execOnLodgeHitCallback },
			{ "SetIsLodged", &UGS_Melee::execSetIsLodged },
			{ "SetPrimaryAndSecondaryHands", &UGS_Melee::execSetPrimaryAndSecondaryHands },
			{ "UpdateHandPosition", &UGS_Melee::execUpdateHandPosition },
			{ "UpdateHandPositionAndRotation", &UGS_Melee::execUpdateHandPositionAndRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics
	{
		struct GS_Melee_eventOnLodgeHitCallback_Parms
		{
			AActor* SelfActor;
			AActor* OtherActor;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GS_Melee_eventOnLodgeHitCallback_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GS_Melee_eventOnLodgeHitCallback_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GS_Melee_eventOnLodgeHitCallback_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GS_Melee_eventOnLodgeHitCallback_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_SelfActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGS_Melee, nullptr, "OnLodgeHitCallback", nullptr, nullptr, sizeof(GS_Melee_eventOnLodgeHitCallback_Parms), Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics
	{
		struct GS_Melee_eventSetIsLodged_Parms
		{
			bool IsLodged;
			UPrimitiveComponent* LodgeComponent;
		};
		static void NewProp_IsLodged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLodged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodgeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LodgeComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_IsLodged_SetBit(void* Obj)
	{
		((GS_Melee_eventSetIsLodged_Parms*)Obj)->IsLodged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_IsLodged = { "IsLodged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GS_Melee_eventSetIsLodged_Parms), &Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_IsLodged_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_LodgeComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_LodgeComponent = { "LodgeComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GS_Melee_eventSetIsLodged_Parms, LodgeComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_LodgeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_LodgeComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_IsLodged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::NewProp_LodgeComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Settings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGS_Melee, nullptr, "SetIsLodged", nullptr, nullptr, sizeof(GS_Melee_eventSetIsLodged_Parms), Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGS_Melee_SetIsLodged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGS_Melee_SetIsLodged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics
	{
		struct GS_Melee_eventSetPrimaryAndSecondaryHands_Parms
		{
			FBPGripPair PrimaryGrip;
			FBPGripPair SecondaryGrip;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryGrip;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryGrip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::NewProp_PrimaryGrip = { "PrimaryGrip", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GS_Melee_eventSetPrimaryAndSecondaryHands_Parms, PrimaryGrip), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::NewProp_SecondaryGrip = { "SecondaryGrip", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GS_Melee_eventSetPrimaryAndSecondaryHands_Parms, SecondaryGrip), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::NewProp_PrimaryGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::NewProp_SecondaryGrip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Settings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGS_Melee, nullptr, "SetPrimaryAndSecondaryHands", nullptr, nullptr, sizeof(GS_Melee_eventSetPrimaryAndSecondaryHands_Parms), Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics
	{
		struct GS_Melee_eventUpdateHandPosition_Parms
		{
			FBPGripPair HandPair;
			FVector HandWorldPosition;
			FVector LocDifference;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandPair;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandWorldPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocDifference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::NewProp_HandPair = { "HandPair", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GS_Melee_eventUpdateHandPosition_Parms, HandPair), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::NewProp_HandWorldPosition = { "HandWorldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GS_Melee_eventUpdateHandPosition_Parms, HandWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::NewProp_LocDifference = { "LocDifference", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GS_Melee_eventUpdateHandPosition_Parms, LocDifference), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::NewProp_HandPair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::NewProp_HandWorldPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::NewProp_LocDifference,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Settings" },
		{ "Comment", "// UpdateHand location on the shaft in the X axis\n// If primary hand is false then it will do the secondary hand\n// World location is of the pivot generally, I have it passing in so people can snap\n// LocDifference returns the relative distance of the change in position (or zero if there was none).\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "UpdateHand location on the shaft in the X axis\nIf primary hand is false then it will do the secondary hand\nWorld location is of the pivot generally, I have it passing in so people can snap\nLocDifference returns the relative distance of the change in position (or zero if there was none)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGS_Melee, nullptr, "UpdateHandPosition", nullptr, nullptr, sizeof(GS_Melee_eventUpdateHandPosition_Parms), Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGS_Melee_UpdateHandPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGS_Melee_UpdateHandPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics
	{
		struct GS_Melee_eventUpdateHandPositionAndRotation_Parms
		{
			FBPGripPair HandPair;
			FTransform HandWorldTransform;
			FVector LocDifference;
			float RotDifference;
			bool bUpdateLocation;
			bool bUpdateRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandPair;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandWorldTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocDifference;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotDifference;
		static void NewProp_bUpdateLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateLocation;
		static void NewProp_bUpdateRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_HandPair = { "HandPair", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GS_Melee_eventUpdateHandPositionAndRotation_Parms, HandPair), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_HandWorldTransform = { "HandWorldTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GS_Melee_eventUpdateHandPositionAndRotation_Parms, HandWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_LocDifference = { "LocDifference", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GS_Melee_eventUpdateHandPositionAndRotation_Parms, LocDifference), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_RotDifference = { "RotDifference", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GS_Melee_eventUpdateHandPositionAndRotation_Parms, RotDifference), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_bUpdateLocation_SetBit(void* Obj)
	{
		((GS_Melee_eventUpdateHandPositionAndRotation_Parms*)Obj)->bUpdateLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_bUpdateLocation = { "bUpdateLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GS_Melee_eventUpdateHandPositionAndRotation_Parms), &Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_bUpdateLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_bUpdateRotation_SetBit(void* Obj)
	{
		((GS_Melee_eventUpdateHandPositionAndRotation_Parms*)Obj)->bUpdateRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_bUpdateRotation = { "bUpdateRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GS_Melee_eventUpdateHandPositionAndRotation_Parms), &Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_bUpdateRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_HandPair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_HandWorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_LocDifference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_RotDifference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_bUpdateLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::NewProp_bUpdateRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Settings" },
		{ "Comment", "// UpdateHand location and rotation on the shaft in the X axis\n// If primary hand is false then it will do the secondary hand\n// World location is of the pivot generally, I have it passing in so people can snap\n// LocDifference returns the relative distance of the change in position (or zero if there was none).\n" },
		{ "CPP_Default_bUpdateLocation", "true" },
		{ "CPP_Default_bUpdateRotation", "true" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "UpdateHand location and rotation on the shaft in the X axis\nIf primary hand is false then it will do the secondary hand\nWorld location is of the pivot generally, I have it passing in so people can snap\nLocDifference returns the relative distance of the change in position (or zero if there was none)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGS_Melee, nullptr, "UpdateHandPositionAndRotation", nullptr, nullptr, sizeof(GS_Melee_eventUpdateHandPositionAndRotation_Parms), Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGS_Melee_NoRegister()
	{
		return UGS_Melee::StaticClass();
	}
	struct Z_Construct_UClass_UGS_Melee_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnShouldLodgeInObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShouldLodgeInObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMeleeHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMeleeHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysTickPenetration_MetaData[];
#endif
		static void NewProp_bAlwaysTickPenetration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysTickPenetration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyPenetrateWithTwoHands_MetaData[];
#endif
		static void NewProp_bOnlyPenetrateWithTwoHands_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyPenetrateWithTwoHands;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideMeleeSurfaceSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMeleeSurfaceSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverrideMeleeSurfaceSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponRootOrientationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponRootOrientationComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PenetrationNotifierComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PenetrationNotifierComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PenetrationNotifierComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipGripMassChecks_MetaData[];
#endif
		static void NewProp_bSkipGripMassChecks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipGripMassChecks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSetPrimaryAndSecondaryHands_MetaData[];
#endif
		static void NewProp_bAutoSetPrimaryAndSecondaryHands_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSetPrimaryAndSecondaryHands;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrimaryHandSelectionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryHandSelectionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PrimaryHandSelectionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_COMType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_COMType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_COMType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryHandPhysicsSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryHandPhysicsSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryHandPhysicsSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryHandPhysicsSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGS_Melee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGS_Default,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGS_Melee_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGS_Melee_OnLodgeHitCallback, "OnLodgeHitCallback" }, // 2244131484
		{ &Z_Construct_UFunction_UGS_Melee_SetIsLodged, "SetIsLodged" }, // 4133672273
		{ &Z_Construct_UFunction_UGS_Melee_SetPrimaryAndSecondaryHands, "SetPrimaryAndSecondaryHands" }, // 1675125743
		{ &Z_Construct_UFunction_UGS_Melee_UpdateHandPosition, "UpdateHandPosition" }, // 471086427
		{ &Z_Construct_UFunction_UGS_Melee_UpdateHandPositionAndRotation, "UpdateHandPositionAndRotation" }, // 2931004299
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n* A Melee grip script that hands multi hand interactions and penetration notifications*\n* The per surface damage and penetration options have been moved to the project settings unless the per script override is set\n*/" },
		{ "HideCategories", "TickSettings DefaultSettings" },
		{ "IncludePath", "GripScripts/GS_Melee.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A Melee grip script that hands multi hand interactions and penetration notifications*\nThe per surface damage and penetration options have been moved to the project settings unless the per script override is set" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnShouldLodgeInObject_MetaData[] = {
		{ "Category", "Melee|Lodging" },
		{ "Comment", "// Thrown if we should lodge into a hit object\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "Thrown if we should lodge into a hit object" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnShouldLodgeInObject = { "OnShouldLodgeInObject", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_Melee, OnShouldLodgeInObject), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeShouldLodgeSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnShouldLodgeInObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnShouldLodgeInObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnMeleeHit_MetaData[] = {
		{ "Category", "Melee|Hit" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnMeleeHit = { "OnMeleeHit", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_Melee, OnMeleeHit), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnMeleeOnHit__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnMeleeHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnMeleeHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAlwaysTickPenetration_MetaData[] = {
		{ "Category", "Melee|Lodging" },
		{ "Comment", "// Always tick for penetration\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "Always tick for penetration" },
	};
#endif
	void Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAlwaysTickPenetration_SetBit(void* Obj)
	{
		((UGS_Melee*)Obj)->bAlwaysTickPenetration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAlwaysTickPenetration = { "bAlwaysTickPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGS_Melee), &Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAlwaysTickPenetration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAlwaysTickPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAlwaysTickPenetration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_bOnlyPenetrateWithTwoHands_MetaData[] = {
		{ "Category", "Melee|Lodging" },
		{ "Comment", "// Only penetrate with two hands on the weapon\n// Mostly for very large weapons\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "Only penetrate with two hands on the weapon\nMostly for very large weapons" },
	};
#endif
	void Z_Construct_UClass_UGS_Melee_Statics::NewProp_bOnlyPenetrateWithTwoHands_SetBit(void* Obj)
	{
		((UGS_Melee*)Obj)->bOnlyPenetrateWithTwoHands = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_bOnlyPenetrateWithTwoHands = { "bOnlyPenetrateWithTwoHands", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGS_Melee), &Z_Construct_UClass_UGS_Melee_Statics::NewProp_bOnlyPenetrateWithTwoHands_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGS_Melee_Statics::NewProp_bOnlyPenetrateWithTwoHands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_bOnlyPenetrateWithTwoHands_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_OverrideMeleeSurfaceSettings_Inner = { "OverrideMeleeSurfaceSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPHitSurfaceProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_OverrideMeleeSurfaceSettings_MetaData[] = {
		{ "Category", "Melee|Lodging" },
		{ "Comment", "// A list of surface types that allow penetration and their properties\n// If empty then the script will use the global settings, if filled with anything then it will override the global settings\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "A list of surface types that allow penetration and their properties\nIf empty then the script will use the global settings, if filled with anything then it will override the global settings" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_OverrideMeleeSurfaceSettings = { "OverrideMeleeSurfaceSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_Melee, OverrideMeleeSurfaceSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGS_Melee_Statics::NewProp_OverrideMeleeSurfaceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_OverrideMeleeSurfaceSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_WeaponRootOrientationComponent_MetaData[] = {
		{ "Category", "Weapon Settings" },
		{ "Comment", "// The name of the component that is used to orient the weapon along its primary axis\n// If it does not exist then the weapon is assumed to be X+ facing.\n// Also used to perform some calculations, make sure it is parented to the gripped object (root component for actors).\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "The name of the component that is used to orient the weapon along its primary axis\nIf it does not exist then the weapon is assumed to be X+ facing.\nAlso used to perform some calculations, make sure it is parented to the gripped object (root component for actors)." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_WeaponRootOrientationComponent = { "WeaponRootOrientationComponent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_Melee, WeaponRootOrientationComponent), METADATA_PARAMS(Z_Construct_UClass_UGS_Melee_Statics::NewProp_WeaponRootOrientationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_WeaponRootOrientationComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_PenetrationNotifierComponents_Inner = { "PenetrationNotifierComponents", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPLodgeComponentInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_PenetrationNotifierComponents_MetaData[] = {
		{ "Category", "Weapon Settings" },
		{ "Comment", "// This is a built list of components that act as penetration notifiers, they will have their OnHit bound too and we will handle penetration logic\n// off of it.\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "This is a built list of components that act as penetration notifiers, they will have their OnHit bound too and we will handle penetration logic\noff of it." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_PenetrationNotifierComponents = { "PenetrationNotifierComponents", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_Melee, PenetrationNotifierComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGS_Melee_Statics::NewProp_PenetrationNotifierComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_PenetrationNotifierComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_bSkipGripMassChecks_MetaData[] = {
		{ "Category", "Weapon Settings" },
		{ "Comment", "// If true then we won't bind to the objects mass updates, we don't expect thing to attach to us\n// This is a perf savings when possible\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "If true then we won't bind to the objects mass updates, we don't expect thing to attach to us\nThis is a perf savings when possible" },
	};
#endif
	void Z_Construct_UClass_UGS_Melee_Statics::NewProp_bSkipGripMassChecks_SetBit(void* Obj)
	{
		((UGS_Melee*)Obj)->bSkipGripMassChecks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_bSkipGripMassChecks = { "bSkipGripMassChecks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGS_Melee), &Z_Construct_UClass_UGS_Melee_Statics::NewProp_bSkipGripMassChecks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGS_Melee_Statics::NewProp_bSkipGripMassChecks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_bSkipGripMassChecks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAutoSetPrimaryAndSecondaryHands_MetaData[] = {
		{ "Category", "Weapon Settings" },
		{ "Comment", "// When true, will auto set the primary and secondary hands by the WeaponRootOrientationComponents X Axis distance.\n// Smallest value along the X Axis will be considered the primary hand.\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "When true, will auto set the primary and secondary hands by the WeaponRootOrientationComponents X Axis distance.\nSmallest value along the X Axis will be considered the primary hand." },
	};
#endif
	void Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAutoSetPrimaryAndSecondaryHands_SetBit(void* Obj)
	{
		((UGS_Melee*)Obj)->bAutoSetPrimaryAndSecondaryHands = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAutoSetPrimaryAndSecondaryHands = { "bAutoSetPrimaryAndSecondaryHands", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGS_Melee), &Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAutoSetPrimaryAndSecondaryHands_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAutoSetPrimaryAndSecondaryHands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAutoSetPrimaryAndSecondaryHands_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandSelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandSelectionType_MetaData[] = {
		{ "Category", "Weapon Settings" },
		{ "Comment", "// Which method of primary hand to select\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "Which method of primary hand to select" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandSelectionType = { "PrimaryHandSelectionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_Melee, PrimaryHandSelectionType), Z_Construct_UEnum_VRExpansionPlugin_EVRMeleePrimaryHandType, METADATA_PARAMS(Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandSelectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandSelectionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHand_MetaData[] = {
		{ "Category", "Weapon Settings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHand = { "PrimaryHand", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_Melee, PrimaryHand), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHand_MetaData[] = {
		{ "Category", "Weapon Settings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHand = { "SecondaryHand", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_Melee, SecondaryHand), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_COMType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_COMType_MetaData[] = {
		{ "Category", "Weapon Settings" },
		{ "Comment", "// To select the type of com setting to use\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "To select the type of com setting to use" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_COMType = { "COMType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_Melee, COMType), Z_Construct_UEnum_VRExpansionPlugin_EVRMeleeComType, METADATA_PARAMS(Z_Construct_UClass_UGS_Melee_Statics::NewProp_COMType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_COMType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandPhysicsSettings_MetaData[] = {
		{ "Category", "Weapon Settings" },
		{ "Comment", "// Grip settings to use on the primary hand when multiple grips are active\n// Falls back to the standard grip settings when only one grip is active\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "Grip settings to use on the primary hand when multiple grips are active\nFalls back to the standard grip settings when only one grip is active" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandPhysicsSettings = { "PrimaryHandPhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_Melee, PrimaryHandPhysicsSettings), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings, METADATA_PARAMS(Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandPhysicsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandPhysicsSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHandPhysicsSettings_MetaData[] = {
		{ "Category", "Weapon Settings" },
		{ "Comment", "// Grip settings to use on the secondary hand when multiple grips are active\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Melee.h" },
		{ "ToolTip", "Grip settings to use on the secondary hand when multiple grips are active" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHandPhysicsSettings = { "SecondaryHandPhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_Melee, SecondaryHandPhysicsSettings), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings, METADATA_PARAMS(Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHandPhysicsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHandPhysicsSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGS_Melee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnShouldLodgeInObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_OnMeleeHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAlwaysTickPenetration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_bOnlyPenetrateWithTwoHands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_OverrideMeleeSurfaceSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_OverrideMeleeSurfaceSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_WeaponRootOrientationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_PenetrationNotifierComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_PenetrationNotifierComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_bSkipGripMassChecks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_bAutoSetPrimaryAndSecondaryHands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandSelectionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandSelectionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_COMType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_COMType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_PrimaryHandPhysicsSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Melee_Statics::NewProp_SecondaryHandPhysicsSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGS_Melee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGS_Melee>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGS_Melee_Statics::ClassParams = {
		&UGS_Melee::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGS_Melee_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGS_Melee_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Melee_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGS_Melee()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGS_Melee_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGS_Melee, 2715158815);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGS_Melee>()
	{
		return UGS_Melee::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGS_Melee(Z_Construct_UClass_UGS_Melee, &UGS_Melee::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UGS_Melee"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGS_Melee);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
