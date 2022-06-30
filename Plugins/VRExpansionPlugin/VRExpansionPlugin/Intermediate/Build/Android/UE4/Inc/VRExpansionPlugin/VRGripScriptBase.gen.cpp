// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/VRGripScriptBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGripScriptBase() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBaseBP_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBaseBP();
// End Cross Module References
	static UEnum* EGSTransformOverrideType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGSTransformOverrideType"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGSTransformOverrideType>()
	{
		return EGSTransformOverrideType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGSTransformOverrideType(EGSTransformOverrideType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EGSTransformOverrideType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType_Hash() { return 3451755572U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGSTransformOverrideType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGSTransformOverrideType::None", (int64)EGSTransformOverrideType::None },
				{ "EGSTransformOverrideType::OverridesWorldTransform", (int64)EGSTransformOverrideType::OverridesWorldTransform },
				{ "EGSTransformOverrideType::ModifiesWorldTransform", (int64)EGSTransformOverrideType::ModifiesWorldTransform },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModifiesWorldTransform.Comment", "/* Modifies the world transform*/" },
				{ "ModifiesWorldTransform.Name", "EGSTransformOverrideType::ModifiesWorldTransform" },
				{ "ModifiesWorldTransform.ToolTip", "Modifies the world transform" },
				{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
				{ "None.Comment", "/** Does not alter the world transform */" },
				{ "None.Name", "EGSTransformOverrideType::None" },
				{ "None.ToolTip", "Does not alter the world transform" },
				{ "OverridesWorldTransform.Comment", "/* Overrides the world transform */" },
				{ "OverridesWorldTransform.Name", "EGSTransformOverrideType::OverridesWorldTransform" },
				{ "OverridesWorldTransform.ToolTip", "Overrides the world transform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EGSTransformOverrideType",
				"EGSTransformOverrideType",
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
	DEFINE_FUNCTION(UVRGripScriptBase::execOnSecondaryGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_Controller);
		P_GET_OBJECT(USceneComponent,Z_Param_ReleasingSecondaryGripComponent);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryGripRelease_Implementation(Z_Param_Controller,Z_Param_ReleasingSecondaryGripComponent,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execOnSecondaryGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_Controller);
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryGripComponent);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryGrip_Implementation(Z_Param_Controller,Z_Param_SecondaryGripComponent,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execOnGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_UBOOL(Z_Param_bWasSocketed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execOnGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execGetWorldTransform)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldTransform);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ParentTransform);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_root);
		P_GET_UBOOL(Z_Param_bRootHasInterface);
		P_GET_UBOOL(Z_Param_bActorHasInterface);
		P_GET_UBOOL(Z_Param_bIsForTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWorldTransform_Implementation(Z_Param_GrippingController,Z_Param_DeltaTime,Z_Param_Out_WorldTransform,Z_Param_Out_ParentTransform,Z_Param_Out_Grip,Z_Param_actor,Z_Param_root,Z_Param_bRootHasInterface,Z_Param_bActorHasInterface,Z_Param_bIsForTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execOnBeginPlay)
	{
		P_GET_OBJECT(UObject,Z_Param_CallingOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginPlay_Implementation(Z_Param_CallingOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execOnEndPlay)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndPlay_Implementation(EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execIsServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execHasAuthority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAuthority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execGetParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetParent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execGetParentSceneComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetParentSceneComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execGetParentTransform)
	{
		P_GET_UBOOL(Z_Param_bGetWorldTransform);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetParentTransform(Z_Param_bGetWorldTransform,Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execGetGripTransform)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ParentTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetGripTransform(Z_Param_Out_Grip,Z_Param_Out_ParentTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execSetTickEnabled)
	{
		P_GET_UBOOL(Z_Param_bTickEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickEnabled(Z_Param_bTickEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execWants_DenyTeleport)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Wants_DenyTeleport_Implementation(Z_Param_Controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execForceGripToDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceGripToDrop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRGripScriptBase::execGetGripScriptByClass)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_GripScriptClass);
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVRGripScriptBase**)Z_Param__Result=UVRGripScriptBase::GetGripScriptByClass(Z_Param_WorldContextObject,Z_Param_GripScriptClass,(EBPVRResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	static FName NAME_UVRGripScriptBase_GetWorldTransform = FName(TEXT("GetWorldTransform"));
	bool UVRGripScriptBase::GetWorldTransform(UGripMotionControllerComponent* GrippingController, float DeltaTime, FTransform& WorldTransform, FTransform const& ParentTransform, FBPActorGripInformation& Grip, AActor* actor, UPrimitiveComponent* root, bool bRootHasInterface, bool bActorHasInterface, bool bIsForTeleport)
	{
		VRGripScriptBase_eventGetWorldTransform_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.DeltaTime=DeltaTime;
		Parms.WorldTransform=WorldTransform;
		Parms.ParentTransform=ParentTransform;
		Parms.Grip=Grip;
		Parms.actor=actor;
		Parms.root=root;
		Parms.bRootHasInterface=bRootHasInterface ? true : false;
		Parms.bActorHasInterface=bActorHasInterface ? true : false;
		Parms.bIsForTeleport=bIsForTeleport ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_GetWorldTransform),&Parms);
		WorldTransform=Parms.WorldTransform;
		Grip=Parms.Grip;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UVRGripScriptBase_OnBeginPlay = FName(TEXT("OnBeginPlay"));
	void UVRGripScriptBase::OnBeginPlay(UObject* CallingOwner)
	{
		VRGripScriptBase_eventOnBeginPlay_Parms Parms;
		Parms.CallingOwner=CallingOwner;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnBeginPlay),&Parms);
	}
	static FName NAME_UVRGripScriptBase_OnEndPlay = FName(TEXT("OnEndPlay"));
	void UVRGripScriptBase::OnEndPlay(const EEndPlayReason::Type EndPlayReason)
	{
		VRGripScriptBase_eventOnEndPlay_Parms Parms;
		Parms.EndPlayReason=EndPlayReason;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnEndPlay),&Parms);
	}
	static FName NAME_UVRGripScriptBase_OnGrip = FName(TEXT("OnGrip"));
	void UVRGripScriptBase::OnGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		VRGripScriptBase_eventOnGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnGrip),&Parms);
	}
	static FName NAME_UVRGripScriptBase_OnGripRelease = FName(TEXT("OnGripRelease"));
	void UVRGripScriptBase::OnGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		VRGripScriptBase_eventOnGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		Parms.bWasSocketed=bWasSocketed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnGripRelease),&Parms);
	}
	static FName NAME_UVRGripScriptBase_OnSecondaryGrip = FName(TEXT("OnSecondaryGrip"));
	void UVRGripScriptBase::OnSecondaryGrip(UGripMotionControllerComponent* Controller, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		VRGripScriptBase_eventOnSecondaryGrip_Parms Parms;
		Parms.Controller=Controller;
		Parms.SecondaryGripComponent=SecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnSecondaryGrip),&Parms);
	}
	static FName NAME_UVRGripScriptBase_OnSecondaryGripRelease = FName(TEXT("OnSecondaryGripRelease"));
	void UVRGripScriptBase::OnSecondaryGripRelease(UGripMotionControllerComponent* Controller, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		VRGripScriptBase_eventOnSecondaryGripRelease_Parms Parms;
		Parms.Controller=Controller;
		Parms.ReleasingSecondaryGripComponent=ReleasingSecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnSecondaryGripRelease),&Parms);
	}
	static FName NAME_UVRGripScriptBase_Wants_DenyTeleport = FName(TEXT("Wants_DenyTeleport"));
	bool UVRGripScriptBase::Wants_DenyTeleport(UGripMotionControllerComponent* Controller)
	{
		VRGripScriptBase_eventWants_DenyTeleport_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_Wants_DenyTeleport),&Parms);
		return !!Parms.ReturnValue;
	}
	void UVRGripScriptBase::StaticRegisterNativesUVRGripScriptBase()
	{
		UClass* Class = UVRGripScriptBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceGripToDrop", &UVRGripScriptBase::execForceGripToDrop },
			{ "GetGripScriptByClass", &UVRGripScriptBase::execGetGripScriptByClass },
			{ "GetGripTransform", &UVRGripScriptBase::execGetGripTransform },
			{ "GetOwner", &UVRGripScriptBase::execGetOwner },
			{ "GetParent", &UVRGripScriptBase::execGetParent },
			{ "GetParentSceneComp", &UVRGripScriptBase::execGetParentSceneComp },
			{ "GetParentTransform", &UVRGripScriptBase::execGetParentTransform },
			{ "GetWorldTransform", &UVRGripScriptBase::execGetWorldTransform },
			{ "HasAuthority", &UVRGripScriptBase::execHasAuthority },
			{ "IsServer", &UVRGripScriptBase::execIsServer },
			{ "OnBeginPlay", &UVRGripScriptBase::execOnBeginPlay },
			{ "OnEndPlay", &UVRGripScriptBase::execOnEndPlay },
			{ "OnGrip", &UVRGripScriptBase::execOnGrip },
			{ "OnGripRelease", &UVRGripScriptBase::execOnGripRelease },
			{ "OnSecondaryGrip", &UVRGripScriptBase::execOnSecondaryGrip },
			{ "OnSecondaryGripRelease", &UVRGripScriptBase::execOnSecondaryGripRelease },
			{ "SetTickEnabled", &UVRGripScriptBase::execSetTickEnabled },
			{ "Wants_DenyTeleport", &UVRGripScriptBase::execWants_DenyTeleport },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "Comment", "// Flags the grip to be dropped as soon as possible\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Flags the grip to be dropped as soon as possible" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "ForceGripToDrop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics
	{
		struct VRGripScriptBase_eventGetGripScriptByClass_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<UVRGripScriptBase>  GripScriptClass;
			EBPVRResultSwitch Result;
			UVRGripScriptBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GripScriptClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripScriptByClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_GripScriptClass = { "GripScriptClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripScriptByClass_Parms, GripScriptClass), Z_Construct_UClass_UVRGripScriptBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripScriptByClass_Parms, Result), Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripScriptByClass_Parms, ReturnValue), Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_GripScriptClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRGripScript|Functions" },
		{ "Comment", "// Gets the first grip script of the specified type in this object, do NOT call this on tick, save out and store the reference given\n" },
		{ "DisplayName", "GetGripScriptByClass" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Gets the first grip script of the specified type in this object, do NOT call this on tick, save out and store the reference given" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetGripScriptByClass", nullptr, nullptr, sizeof(VRGripScriptBase_eventGetGripScriptByClass_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics
	{
		struct VRGripScriptBase_eventGetGripTransform_Parms
		{
			FBPActorGripInformation Grip;
			FTransform ParentTransform;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripTransform_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform = { "ParentTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripTransform_Parms, ParentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "Comment", "// Returns the expected grip transform (relative * controller + addition)\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns the expected grip transform (relative * controller + addition)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetGripTransform", nullptr, nullptr, sizeof(VRGripScriptBase_eventGetGripTransform_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics
	{
		struct VRGripScriptBase_eventGetOwner_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "Comment", "// Returns the owning actor \n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns the owning actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetOwner", nullptr, nullptr, sizeof(VRGripScriptBase_eventGetOwner_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics
	{
		struct VRGripScriptBase_eventGetParent_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "Comment", "// Returns the parent component or actor to this\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns the parent component or actor to this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetParent", nullptr, nullptr, sizeof(VRGripScriptBase_eventGetParent_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics
	{
		struct VRGripScriptBase_eventGetParentSceneComp_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetParentSceneComp_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "Comment", "// Returns the scene component of the parent, either being the parent itself or the root comp of it.\n// Nullptr if there is no valid scene component\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns the scene component of the parent, either being the parent itself or the root comp of it.\nNullptr if there is no valid scene component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetParentSceneComp", nullptr, nullptr, sizeof(VRGripScriptBase_eventGetParentSceneComp_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics
	{
		struct VRGripScriptBase_eventGetParentTransform_Parms
		{
			bool bGetWorldTransform;
			FName BoneName;
			FTransform ReturnValue;
		};
		static void NewProp_bGetWorldTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetWorldTransform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_bGetWorldTransform_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventGetParentTransform_Parms*)Obj)->bGetWorldTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_bGetWorldTransform = { "bGetWorldTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventGetParentTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_bGetWorldTransform_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetParentTransform_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetParentTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_bGetWorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "Comment", "// Returns the current world transform of the owning object (or root comp of if it is an actor)\n" },
		{ "CPP_Default_bGetWorldTransform", "true" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns the current world transform of the owning object (or root comp of if it is an actor)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetParentTransform", nullptr, nullptr, sizeof(VRGripScriptBase_eventGetParentTransform_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grip;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_root;
		static void NewProp_bRootHasInterface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRootHasInterface;
		static void NewProp_bActorHasInterface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActorHasInterface;
		static void NewProp_bIsForTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsForTeleport;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform = { "ParentTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, ParentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, root), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root_MetaData)) };
	void Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bRootHasInterface_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventGetWorldTransform_Parms*)Obj)->bRootHasInterface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bRootHasInterface = { "bRootHasInterface", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bRootHasInterface_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bActorHasInterface_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventGetWorldTransform_Parms*)Obj)->bActorHasInterface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bActorHasInterface = { "bActorHasInterface", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bActorHasInterface_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bIsForTeleport_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventGetWorldTransform_Parms*)Obj)->bIsForTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bIsForTeleport = { "bIsForTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bIsForTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventGetWorldTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_WorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_Grip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bRootHasInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bActorHasInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bIsForTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "Comment", "// Overrides or Modifies the world transform with this grip script\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Overrides or Modifies the world transform with this grip script" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetWorldTransform", nullptr, nullptr, sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics
	{
		struct VRGripScriptBase_eventHasAuthority_Parms
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
	void Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventHasAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventHasAuthority_Parms), &Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "Comment", "// If the owning actor has authority on this connection \n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "If the owning actor has authority on this connection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "HasAuthority", nullptr, nullptr, sizeof(VRGripScriptBase_eventHasAuthority_Parms), Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_HasAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics
	{
		struct VRGripScriptBase_eventIsServer_Parms
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
	void Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventIsServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventIsServer_Parms), &Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "Comment", "// If the owning actor is on the server on this connection \n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "If the owning actor is on the server on this connection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "IsServer", nullptr, nullptr, sizeof(VRGripScriptBase_eventIsServer_Parms), Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_IsServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallingOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::NewProp_CallingOwner = { "CallingOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnBeginPlay_Parms, CallingOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::NewProp_CallingOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "Comment", "// Not all scripts will require this function, specific ones that use things like Lever logic however will. Best to call it.\n// Grippables will automatically call this, however if you manually spawn a grip script during play or you make your own\n// Interfaced grip object and give it grippables, YOU will be required to call this event on them.\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Not all scripts will require this function, specific ones that use things like Lever logic however will. Best to call it.\nGrippables will automatically call this, however if you manually spawn a grip script during play or you make your own\nInterfaced grip object and give it grippables, YOU will be required to call this event on them." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnBeginPlay", nullptr, nullptr, sizeof(VRGripScriptBase_eventOnBeginPlay_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPlayReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::NewProp_EndPlayReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::NewProp_EndPlayReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::NewProp_EndPlayReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "Comment", "// Not all scripts will require this function, specific ones that use things like Lever logic however will. Best to call it.\n// Grippables will automatically call this, however if you manually spawn a grip script during play or you make your own\n// Interfaced grip object and give it grippables, YOU will be required to call this event on them.\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Not all scripts will require this function, specific ones that use things like Lever logic however will. Best to call it.\nGrippables will automatically call this, however if you manually spawn a grip script during play or you make your own\nInterfaced grip object and give it grippables, YOU will be required to call this event on them." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnEndPlay", nullptr, nullptr, sizeof(VRGripScriptBase_eventOnEndPlay_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "Comment", "// Event triggered on the interfaced object when gripped\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Event triggered on the interfaced object when gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnGrip", nullptr, nullptr, sizeof(VRGripScriptBase_eventOnGrip_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
		static void NewProp_bWasSocketed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation_MetaData)) };
	void Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventOnGripRelease_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventOnGripRelease_Parms), &Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_bWasSocketed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "Comment", "// Event triggered on the interfaced object when grip is released\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Event triggered on the interfaced object when grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnGripRelease", nullptr, nullptr, sizeof(VRGripScriptBase_eventOnGripRelease_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryGripComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGrip_Parms, Controller), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent = { "SecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGrip_Parms, SecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when secondary gripped\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnSecondaryGrip", nullptr, nullptr, sizeof(VRGripScriptBase_eventOnSecondaryGrip_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingSecondaryGripComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingSecondaryGripComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGripRelease_Parms, Controller), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent = { "ReleasingSecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGripRelease_Parms, ReleasingSecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when secondary grip is released\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnSecondaryGripRelease", nullptr, nullptr, sizeof(VRGripScriptBase_eventOnSecondaryGripRelease_Parms), Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics
	{
		struct VRGripScriptBase_eventSetTickEnabled_Parms
		{
			bool bTickEnabled;
		};
		static void NewProp_bTickEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::NewProp_bTickEnabled_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventSetTickEnabled_Parms*)Obj)->bTickEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::NewProp_bTickEnabled = { "bTickEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventSetTickEnabled_Parms), &Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::NewProp_bTickEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::NewProp_bTickEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "TickSettings" },
		{ "Comment", "// Set whether the grip script can tick or not\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Set whether the grip script can tick or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "SetTickEnabled", nullptr, nullptr, sizeof(VRGripScriptBase_eventSetTickEnabled_Parms), Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBase_eventWants_DenyTeleport_Parms, Controller), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::NewProp_Controller_MetaData)) };
	void Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGripScriptBase_eventWants_DenyTeleport_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGripScriptBase_eventWants_DenyTeleport_Parms), &Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
		{ "Comment", "// Returns if the script is currently active and should be used\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns if the script is currently active and should be used" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "Wants_DenyTeleport", nullptr, nullptr, sizeof(VRGripScriptBase_eventWants_DenyTeleport_Parms), Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister()
	{
		return UVRGripScriptBase::StaticClass();
	}
	struct Z_Construct_UClass_UVRGripScriptBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorldTransformOverrideType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransformOverrideType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WorldTransformOverrideType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDenyAutoDrop_MetaData[];
#endif
		static void NewProp_bDenyAutoDrop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDenyAutoDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceDrop_MetaData[];
#endif
		static void NewProp_bForceDrop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDenyLateUpdates_MetaData[];
#endif
		static void NewProp_bDenyLateUpdates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDenyLateUpdates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInjectPrePhysicsHandle_MetaData[];
#endif
		static void NewProp_bInjectPrePhysicsHandle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInjectPrePhysicsHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInjectPostPhysicsHandle_MetaData[];
#endif
		static void NewProp_bInjectPostPhysicsHandle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInjectPostPhysicsHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEverTick_MetaData[];
#endif
		static void NewProp_bCanEverTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEverTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowTicking_MetaData[];
#endif
		static void NewProp_bAllowTicking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowTicking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRGripScriptBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRGripScriptBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop, "ForceGripToDrop" }, // 13372429
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass, "GetGripScriptByClass" }, // 4098843033
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform, "GetGripTransform" }, // 1361717021
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetOwner, "GetOwner" }, // 4258408283
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetParent, "GetParent" }, // 45082534
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp, "GetParentSceneComp" }, // 1376548901
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform, "GetParentTransform" }, // 824790668
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform, "GetWorldTransform" }, // 2333941578
		{ &Z_Construct_UFunction_UVRGripScriptBase_HasAuthority, "HasAuthority" }, // 1843229560
		{ &Z_Construct_UFunction_UVRGripScriptBase_IsServer, "IsServer" }, // 4113845399
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay, "OnBeginPlay" }, // 2640932120
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay, "OnEndPlay" }, // 1223863698
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnGrip, "OnGrip" }, // 3464634100
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease, "OnGripRelease" }, // 2179375846
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip, "OnSecondaryGrip" }, // 2704869746
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease, "OnSecondaryGripRelease" }, // 3481003511
		{ &Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled, "SetTickEnabled" }, // 8277510
		{ &Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport, "Wants_DenyTeleport" }, // 2990535596
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "HideCategories", "DefaultSettings" },
		{ "IncludePath", "GripScripts/VRGripScriptBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "GSSettings" },
		{ "Comment", "// Is currently active helper variable, returned from IsScriptActive()\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Is currently active helper variable, returned from IsScriptActive()" },
	};
#endif
	void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((UVRGripScriptBase*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_MetaData[] = {
		{ "Category", "GSSettings" },
		{ "Comment", "// Whether this script overrides or modifies the world transform\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Whether this script overrides or modifies the world transform" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType = { "WorldTransformOverrideType", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGripScriptBase, WorldTransformOverrideType), Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_MetaData[] = {
		{ "Category", "GSSettings" },
		{ "Comment", "// Returns if we want to deny auto dropping\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns if we want to deny auto dropping" },
	};
#endif
	void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_SetBit(void* Obj)
	{
		((UVRGripScriptBase*)Obj)->bDenyAutoDrop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop = { "bDenyAutoDrop", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop_MetaData[] = {
		{ "Category", "GSSettings" },
		{ "Comment", "// Returns if we want to force a drop\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns if we want to force a drop" },
	};
#endif
	void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop_SetBit(void* Obj)
	{
		((UVRGripScriptBase*)Obj)->bForceDrop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop = { "bForceDrop", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates_MetaData[] = {
		{ "Category", "GSSettings" },
		{ "Comment", "// Returns if we want to inject changes prior to the physics handle\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns if we want to inject changes prior to the physics handle" },
	};
#endif
	void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates_SetBit(void* Obj)
	{
		((UVRGripScriptBase*)Obj)->bDenyLateUpdates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates = { "bDenyLateUpdates", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPrePhysicsHandle_MetaData[] = {
		{ "Category", "GSSettings" },
		{ "Comment", "// Returns if we want to inject changes prior to the physics handle\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns if we want to inject changes prior to the physics handle" },
	};
#endif
	void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPrePhysicsHandle_SetBit(void* Obj)
	{
		((UVRGripScriptBase*)Obj)->bInjectPrePhysicsHandle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPrePhysicsHandle = { "bInjectPrePhysicsHandle", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPrePhysicsHandle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPrePhysicsHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPrePhysicsHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPostPhysicsHandle_MetaData[] = {
		{ "Category", "GSSettings" },
		{ "Comment", "// Returns if we want to inject changes after the physics handle\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Returns if we want to inject changes after the physics handle" },
	};
#endif
	void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPostPhysicsHandle_SetBit(void* Obj)
	{
		((UVRGripScriptBase*)Obj)->bInjectPostPhysicsHandle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPostPhysicsHandle = { "bInjectPostPhysicsHandle", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPostPhysicsHandle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPostPhysicsHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPostPhysicsHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bCanEverTick_MetaData[] = {
		{ "Category", "TickSettings" },
		{ "Comment", "// If true then this scrip can tick when bAllowticking is true\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "If true then this scrip can tick when bAllowticking is true" },
	};
#endif
	void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bCanEverTick_SetBit(void* Obj)
	{
		((UVRGripScriptBase*)Obj)->bCanEverTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bCanEverTick = { "bCanEverTick", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bCanEverTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bCanEverTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bCanEverTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bAllowTicking_MetaData[] = {
		{ "Category", "TickSettings" },
		{ "Comment", "// If true and we bCanEverTick, then will fire off the tick function\n" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "If true and we bCanEverTick, then will fire off the tick function" },
	};
#endif
	void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bAllowTicking_SetBit(void* Obj)
	{
		((UVRGripScriptBase*)Obj)->bAllowTicking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bAllowTicking = { "bAllowTicking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bAllowTicking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bAllowTicking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bAllowTicking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRGripScriptBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPrePhysicsHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPostPhysicsHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bCanEverTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bAllowTicking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRGripScriptBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGripScriptBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRGripScriptBase_Statics::ClassParams = {
		&UVRGripScriptBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRGripScriptBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRGripScriptBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRGripScriptBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRGripScriptBase, 1405505374);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRGripScriptBase>()
	{
		return UVRGripScriptBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGripScriptBase(Z_Construct_UClass_UVRGripScriptBase, &UVRGripScriptBase::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGripScriptBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGripScriptBase);
	static FName NAME_UVRGripScriptBaseBP_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UVRGripScriptBaseBP::ReceiveTick(float DeltaSeconds)
	{
		VRGripScriptBaseBP_eventReceiveTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBaseBP_ReceiveTick),&Parms);
	}
	void UVRGripScriptBaseBP::StaticRegisterNativesUVRGripScriptBaseBP()
	{
	}
	struct Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGripScriptBaseBP_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame if ticking is enabled */" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ToolTip", "Event called every frame if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBaseBP, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(VRGripScriptBaseBP_eventReceiveTick_Parms), Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRGripScriptBaseBP_NoRegister()
	{
		return UVRGripScriptBaseBP::StaticClass();
	}
	struct Z_Construct_UClass_UVRGripScriptBaseBP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRGripScriptBaseBP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVRGripScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRGripScriptBaseBP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick, "ReceiveTick" }, // 491091606
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGripScriptBaseBP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "HideCategories", "DefaultSettings" },
		{ "IncludePath", "GripScripts/VRGripScriptBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRGripScriptBaseBP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGripScriptBaseBP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRGripScriptBaseBP_Statics::ClassParams = {
		&UVRGripScriptBaseBP::StaticClass,
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
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVRGripScriptBaseBP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBaseBP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRGripScriptBaseBP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRGripScriptBaseBP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRGripScriptBaseBP, 1180655790);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRGripScriptBaseBP>()
	{
		return UVRGripScriptBaseBP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGripScriptBaseBP(Z_Construct_UClass_UVRGripScriptBaseBP, &UVRGripScriptBaseBP::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGripScriptBaseBP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGripScriptBaseBP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
