// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippableActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippableActor() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableActor_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovementVR();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRepAttachmentWithWeld();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRClientAuthReplicationData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGrippableActor::execIsCurrentlyClientAuthThrowing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCurrentlyClientAuthThrowing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableActor::execServer_GetClientAuthReplication)
	{
		P_GET_STRUCT(FRepMovementVR,Z_Param_newMovement);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_GetClientAuthReplication_Validate(Z_Param_newMovement))
		{
			RPC_ValidateFailed(TEXT("Server_GetClientAuthReplication_Validate"));
			return;
		}
		P_THIS->Server_GetClientAuthReplication_Implementation(Z_Param_newMovement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableActor::execServer_EndClientAuthReplication)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_EndClientAuthReplication_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_EndClientAuthReplication_Validate"));
			return;
		}
		P_THIS->Server_EndClientAuthReplication_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableActor::execCeaseReplicationBlocking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CeaseReplicationBlocking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableActor::execPollReplicationEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PollReplicationEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableActor::execRemoveFromClientReplicationBucket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveFromClientReplicationBucket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableActor::execAddToClientReplicationBucket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddToClientReplicationBucket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableActor::execSetGripPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewGripPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripPriority(Z_Param_NewGripPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrippableActor::execSetDenyGripping)
	{
		P_GET_UBOOL(Z_Param_bDenyGripping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDenyGripping(Z_Param_bDenyGripping);
		P_NATIVE_END;
	}
	static FName NAME_AGrippableActor_Server_EndClientAuthReplication = FName(TEXT("Server_EndClientAuthReplication"));
	void AGrippableActor::Server_EndClientAuthReplication()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGrippableActor_Server_EndClientAuthReplication),NULL);
	}
	static FName NAME_AGrippableActor_Server_GetClientAuthReplication = FName(TEXT("Server_GetClientAuthReplication"));
	void AGrippableActor::Server_GetClientAuthReplication(FRepMovementVR const& newMovement)
	{
		GrippableActor_eventServer_GetClientAuthReplication_Parms Parms;
		Parms.newMovement=newMovement;
		ProcessEvent(FindFunctionChecked(NAME_AGrippableActor_Server_GetClientAuthReplication),&Parms);
	}
	void AGrippableActor::StaticRegisterNativesAGrippableActor()
	{
		UClass* Class = AGrippableActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToClientReplicationBucket", &AGrippableActor::execAddToClientReplicationBucket },
			{ "CeaseReplicationBlocking", &AGrippableActor::execCeaseReplicationBlocking },
			{ "IsCurrentlyClientAuthThrowing", &AGrippableActor::execIsCurrentlyClientAuthThrowing },
			{ "PollReplicationEvent", &AGrippableActor::execPollReplicationEvent },
			{ "RemoveFromClientReplicationBucket", &AGrippableActor::execRemoveFromClientReplicationBucket },
			{ "Server_EndClientAuthReplication", &AGrippableActor::execServer_EndClientAuthReplication },
			{ "Server_GetClientAuthReplication", &AGrippableActor::execServer_GetClientAuthReplication },
			{ "SetDenyGripping", &AGrippableActor::execSetDenyGripping },
			{ "SetGripPriority", &AGrippableActor::execSetGripPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGrippableActor_AddToClientReplicationBucket_Statics
	{
		struct GrippableActor_eventAddToClientReplicationBucket_Parms
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
	void Z_Construct_UFunction_AGrippableActor_AddToClientReplicationBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableActor_eventAddToClientReplicationBucket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableActor_AddToClientReplicationBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableActor_eventAddToClientReplicationBucket_Parms), &Z_Construct_UFunction_AGrippableActor_AddToClientReplicationBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableActor_AddToClientReplicationBucket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableActor_AddToClientReplicationBucket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableActor_AddToClientReplicationBucket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "// Add this to client side physics replication (until coming to rest or timeout period is hit)\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
		{ "ToolTip", "Add this to client side physics replication (until coming to rest or timeout period is hit)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableActor_AddToClientReplicationBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableActor, nullptr, "AddToClientReplicationBucket", nullptr, nullptr, sizeof(GrippableActor_eventAddToClientReplicationBucket_Parms), Z_Construct_UFunction_AGrippableActor_AddToClientReplicationBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_AddToClientReplicationBucket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableActor_AddToClientReplicationBucket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_AddToClientReplicationBucket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableActor_AddToClientReplicationBucket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableActor_AddToClientReplicationBucket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableActor_CeaseReplicationBlocking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableActor_CeaseReplicationBlocking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableActor_CeaseReplicationBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableActor, nullptr, "CeaseReplicationBlocking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableActor_CeaseReplicationBlocking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_CeaseReplicationBlocking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableActor_CeaseReplicationBlocking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableActor_CeaseReplicationBlocking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableActor_IsCurrentlyClientAuthThrowing_Statics
	{
		struct GrippableActor_eventIsCurrentlyClientAuthThrowing_Parms
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
	void Z_Construct_UFunction_AGrippableActor_IsCurrentlyClientAuthThrowing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableActor_eventIsCurrentlyClientAuthThrowing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableActor_IsCurrentlyClientAuthThrowing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableActor_eventIsCurrentlyClientAuthThrowing_Parms), &Z_Construct_UFunction_AGrippableActor_IsCurrentlyClientAuthThrowing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableActor_IsCurrentlyClientAuthThrowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableActor_IsCurrentlyClientAuthThrowing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableActor_IsCurrentlyClientAuthThrowing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "// Returns if this object is currently client auth throwing\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
		{ "ToolTip", "Returns if this object is currently client auth throwing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableActor_IsCurrentlyClientAuthThrowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableActor, nullptr, "IsCurrentlyClientAuthThrowing", nullptr, nullptr, sizeof(GrippableActor_eventIsCurrentlyClientAuthThrowing_Parms), Z_Construct_UFunction_AGrippableActor_IsCurrentlyClientAuthThrowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_IsCurrentlyClientAuthThrowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableActor_IsCurrentlyClientAuthThrowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_IsCurrentlyClientAuthThrowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableActor_IsCurrentlyClientAuthThrowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableActor_IsCurrentlyClientAuthThrowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableActor_PollReplicationEvent_Statics
	{
		struct GrippableActor_eventPollReplicationEvent_Parms
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
	void Z_Construct_UFunction_AGrippableActor_PollReplicationEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableActor_eventPollReplicationEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableActor_PollReplicationEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableActor_eventPollReplicationEvent_Parms), &Z_Construct_UFunction_AGrippableActor_PollReplicationEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableActor_PollReplicationEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableActor_PollReplicationEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableActor_PollReplicationEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableActor_PollReplicationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableActor, nullptr, "PollReplicationEvent", nullptr, nullptr, sizeof(GrippableActor_eventPollReplicationEvent_Parms), Z_Construct_UFunction_AGrippableActor_PollReplicationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_PollReplicationEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableActor_PollReplicationEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_PollReplicationEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableActor_PollReplicationEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableActor_PollReplicationEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableActor_RemoveFromClientReplicationBucket_Statics
	{
		struct GrippableActor_eventRemoveFromClientReplicationBucket_Parms
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
	void Z_Construct_UFunction_AGrippableActor_RemoveFromClientReplicationBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableActor_eventRemoveFromClientReplicationBucket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableActor_RemoveFromClientReplicationBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableActor_eventRemoveFromClientReplicationBucket_Parms), &Z_Construct_UFunction_AGrippableActor_RemoveFromClientReplicationBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableActor_RemoveFromClientReplicationBucket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableActor_RemoveFromClientReplicationBucket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableActor_RemoveFromClientReplicationBucket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "// Remove this from client side physics replication\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
		{ "ToolTip", "Remove this from client side physics replication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableActor_RemoveFromClientReplicationBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableActor, nullptr, "RemoveFromClientReplicationBucket", nullptr, nullptr, sizeof(GrippableActor_eventRemoveFromClientReplicationBucket_Parms), Z_Construct_UFunction_AGrippableActor_RemoveFromClientReplicationBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_RemoveFromClientReplicationBucket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableActor_RemoveFromClientReplicationBucket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_RemoveFromClientReplicationBucket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableActor_RemoveFromClientReplicationBucket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableActor_RemoveFromClientReplicationBucket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableActor_Server_EndClientAuthReplication_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableActor_Server_EndClientAuthReplication_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "// Notify the server that we are no longer trying to run the throwing auth\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
		{ "ToolTip", "Notify the server that we are no longer trying to run the throwing auth" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableActor_Server_EndClientAuthReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableActor, nullptr, "Server_EndClientAuthReplication", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableActor_Server_EndClientAuthReplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_Server_EndClientAuthReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableActor_Server_EndClientAuthReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableActor_Server_EndClientAuthReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableActor_Server_GetClientAuthReplication_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement = { "newMovement", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableActor_eventServer_GetClientAuthReplication_Parms, newMovement), Z_Construct_UScriptStruct_FRepMovementVR, METADATA_PARAMS(Z_Construct_UFunction_AGrippableActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableActor_Server_GetClientAuthReplication_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableActor_Server_GetClientAuthReplication_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "// Notify the server about a new movement rep\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
		{ "ToolTip", "Notify the server about a new movement rep" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableActor_Server_GetClientAuthReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableActor, nullptr, "Server_GetClientAuthReplication", nullptr, nullptr, sizeof(GrippableActor_eventServer_GetClientAuthReplication_Parms), Z_Construct_UFunction_AGrippableActor_Server_GetClientAuthReplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_Server_GetClientAuthReplication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableActor_Server_GetClientAuthReplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_Server_GetClientAuthReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableActor_Server_GetClientAuthReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableActor_Server_GetClientAuthReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableActor_SetDenyGripping_Statics
	{
		struct GrippableActor_eventSetDenyGripping_Parms
		{
			bool bDenyGripping;
		};
		static void NewProp_bDenyGripping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGrippableActor_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
	{
		((GrippableActor_eventSetDenyGripping_Parms*)Obj)->bDenyGripping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableActor_SetDenyGripping_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableActor_eventSetDenyGripping_Parms), &Z_Construct_UFunction_AGrippableActor_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableActor_SetDenyGripping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableActor_SetDenyGripping_Statics::NewProp_bDenyGripping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableActor_SetDenyGripping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Sets the Deny Gripping variable on the FBPInterfaceSettings struct\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
		{ "ToolTip", "Sets the Deny Gripping variable on the FBPInterfaceSettings struct" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableActor_SetDenyGripping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableActor, nullptr, "SetDenyGripping", nullptr, nullptr, sizeof(GrippableActor_eventSetDenyGripping_Parms), Z_Construct_UFunction_AGrippableActor_SetDenyGripping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_SetDenyGripping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableActor_SetDenyGripping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_SetDenyGripping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableActor_SetDenyGripping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableActor_SetDenyGripping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrippableActor_SetGripPriority_Statics
	{
		struct GrippableActor_eventSetGripPriority_Parms
		{
			int32 NewGripPriority;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NewGripPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGrippableActor_SetGripPriority_Statics::NewProp_NewGripPriority = { "NewGripPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableActor_eventSetGripPriority_Parms, NewGripPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableActor_SetGripPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableActor_SetGripPriority_Statics::NewProp_NewGripPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrippableActor_SetGripPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Sets the grip priority on the FBPInterfaceSettings struct\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
		{ "ToolTip", "Sets the grip priority on the FBPInterfaceSettings struct" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableActor_SetGripPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableActor, nullptr, "SetGripPriority", nullptr, nullptr, sizeof(GrippableActor_eventSetGripPriority_Parms), Z_Construct_UFunction_AGrippableActor_SetGripPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_SetGripPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrippableActor_SetGripPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableActor_SetGripPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrippableActor_SetGripPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrippableActor_SetGripPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGrippableActor_NoRegister()
	{
		return AGrippableActor::StaticClass();
	}
	struct Z_Construct_UClass_AGrippableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentWeldReplication_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachmentWeldReplication;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripLogicScripts_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripLogicScripts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripLogicScripts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GripLogicScripts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGripped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGripped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDropped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientAuthReplicationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientAuthReplicationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowIgnoringAttachOnOwner_MetaData[];
#endif
		static void NewProp_bAllowIgnoringAttachOnOwner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowIgnoringAttachOnOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRepGripSettingsAndGameplayTags_MetaData[];
#endif
		static void NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepGripSettingsAndGameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRGripInterfaceSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VRGripInterfaceSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrippableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGrippableActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGrippableActor_AddToClientReplicationBucket, "AddToClientReplicationBucket" }, // 329801982
		{ &Z_Construct_UFunction_AGrippableActor_CeaseReplicationBlocking, "CeaseReplicationBlocking" }, // 1057557947
		{ &Z_Construct_UFunction_AGrippableActor_IsCurrentlyClientAuthThrowing, "IsCurrentlyClientAuthThrowing" }, // 3169449032
		{ &Z_Construct_UFunction_AGrippableActor_PollReplicationEvent, "PollReplicationEvent" }, // 539639923
		{ &Z_Construct_UFunction_AGrippableActor_RemoveFromClientReplicationBucket, "RemoveFromClientReplicationBucket" }, // 1967075094
		{ &Z_Construct_UFunction_AGrippableActor_Server_EndClientAuthReplication, "Server_EndClientAuthReplication" }, // 3991010105
		{ &Z_Construct_UFunction_AGrippableActor_Server_GetClientAuthReplication, "Server_GetClientAuthReplication" }, // 440103379
		{ &Z_Construct_UFunction_AGrippableActor_SetDenyGripping, "SetDenyGripping" }, // 633939457
		{ &Z_Construct_UFunction_AGrippableActor_SetGripPriority, "SetGripPriority" }, // 3285077051
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Grippables/GrippableActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableActor_Statics::NewProp_AttachmentWeldReplication_MetaData[] = {
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrippableActor_Statics::NewProp_AttachmentWeldReplication = { "AttachmentWeldReplication", "OnRep_AttachmentReplication", (EPropertyFlags)0x0010008100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableActor, AttachmentWeldReplication), Z_Construct_UScriptStruct_FRepAttachmentWithWeld, METADATA_PARAMS(Z_Construct_UClass_AGrippableActor_Statics::NewProp_AttachmentWeldReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableActor_Statics::NewProp_AttachmentWeldReplication_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableActor_Statics::NewProp_GripLogicScripts_Inner_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrippableActor_Statics::NewProp_GripLogicScripts_Inner = { "GripLogicScripts", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrippableActor_Statics::NewProp_GripLogicScripts_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableActor_Statics::NewProp_GripLogicScripts_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableActor_Statics::NewProp_GripLogicScripts_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGrippableActor_Statics::NewProp_GripLogicScripts = { "GripLogicScripts", nullptr, (EPropertyFlags)0x001000800000003d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableActor, GripLogicScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGrippableActor_Statics::NewProp_GripLogicScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableActor_Statics::NewProp_GripLogicScripts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnGripped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is gripped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
		{ "ToolTip", "Called when a object is gripped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnGripped = { "OnGripped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableActor, OnGripped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnGripped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnGripped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnDropped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is dropped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
		{ "ToolTip", "Called when a object is dropped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableActor, OnDropped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnSecondaryGripAdded_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold is secondary gripped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
		{ "ToolTip", "Called when an object we hold is secondary gripped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnSecondaryGripAdded = { "OnSecondaryGripAdded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableActor, OnSecondaryGripAdded), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnSecondaryGripAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnSecondaryGripAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnSecondaryGripRemoved_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold is secondary dropped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
		{ "ToolTip", "Called when an object we hold is secondary dropped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnSecondaryGripRemoved = { "OnSecondaryGripRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableActor, OnSecondaryGripRemoved), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnSecondaryGripRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnSecondaryGripRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableActor_Statics::NewProp_ClientAuthReplicationData_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "// ------------------------------------------------\n// Client Auth Throwing Data and functions \n// ------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
		{ "ToolTip", "Client Auth Throwing Data and functions" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrippableActor_Statics::NewProp_ClientAuthReplicationData = { "ClientAuthReplicationData", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableActor, ClientAuthReplicationData), Z_Construct_UScriptStruct_FVRClientAuthReplicationData, METADATA_PARAMS(Z_Construct_UClass_AGrippableActor_Statics::NewProp_ClientAuthReplicationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableActor_Statics::NewProp_ClientAuthReplicationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableActor_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Tags that are set on this object */" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
		{ "ToolTip", "Tags that are set on this object" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrippableActor_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableActor, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_AGrippableActor_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableActor_Statics::NewProp_GameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "// Skips the attachment replication if we are locally owned and our grip settings say that we are a client authed grip.\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
		{ "ToolTip", "Skips the attachment replication if we are locally owned and our grip settings say that we are a client authed grip." },
	};
#endif
	void Z_Construct_UClass_AGrippableActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_SetBit(void* Obj)
	{
		((AGrippableActor*)Obj)->bAllowIgnoringAttachOnOwner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrippableActor_Statics::NewProp_bAllowIgnoringAttachOnOwner = { "bAllowIgnoringAttachOnOwner", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGrippableActor), &Z_Construct_UClass_AGrippableActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrippableActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
	};
#endif
	void Z_Construct_UClass_AGrippableActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj)
	{
		((AGrippableActor*)Obj)->bRepGripSettingsAndGameplayTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrippableActor_Statics::NewProp_bRepGripSettingsAndGameplayTags = { "bRepGripSettingsAndGameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGrippableActor), &Z_Construct_UClass_AGrippableActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrippableActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableActor_Statics::NewProp_VRGripInterfaceSettings_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrippableActor_Statics::NewProp_VRGripInterfaceSettings = { "VRGripInterfaceSettings", nullptr, (EPropertyFlags)0x0010008000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableActor, VRGripInterfaceSettings), Z_Construct_UScriptStruct_FBPInterfaceProperties, METADATA_PARAMS(Z_Construct_UClass_AGrippableActor_Statics::NewProp_VRGripInterfaceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableActor_Statics::NewProp_VRGripInterfaceSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrippableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableActor_Statics::NewProp_AttachmentWeldReplication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableActor_Statics::NewProp_GripLogicScripts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableActor_Statics::NewProp_GripLogicScripts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnGripped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnSecondaryGripAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableActor_Statics::NewProp_OnSecondaryGripRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableActor_Statics::NewProp_ClientAuthReplicationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableActor_Statics::NewProp_GameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableActor_Statics::NewProp_bAllowIgnoringAttachOnOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableActor_Statics::NewProp_bRepGripSettingsAndGameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableActor_Statics::NewProp_VRGripInterfaceSettings,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGrippableActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(AGrippableActor, IVRGripInterface), false },
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(AGrippableActor, IGameplayTagAssetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrippableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrippableActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrippableActor_Statics::ClassParams = {
		&AGrippableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGrippableActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrippableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrippableActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrippableActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrippableActor, 4136805409);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AGrippableActor>()
	{
		return AGrippableActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrippableActor(Z_Construct_UClass_AGrippableActor, &AGrippableActor::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AGrippableActor"), false, nullptr, nullptr, nullptr);

	void AGrippableActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_AttachmentWeldReplication(TEXT("AttachmentWeldReplication"));
		static const FName Name_GripLogicScripts(TEXT("GripLogicScripts"));
		static const FName Name_ClientAuthReplicationData(TEXT("ClientAuthReplicationData"));
		static const FName Name_GameplayTags(TEXT("GameplayTags"));
		static const FName Name_bAllowIgnoringAttachOnOwner(TEXT("bAllowIgnoringAttachOnOwner"));
		static const FName Name_bRepGripSettingsAndGameplayTags(TEXT("bRepGripSettingsAndGameplayTags"));
		static const FName Name_VRGripInterfaceSettings(TEXT("VRGripInterfaceSettings"));

		const bool bIsValid = true
			&& Name_AttachmentWeldReplication == ClassReps[(int32)ENetFields_Private::AttachmentWeldReplication].Property->GetFName()
			&& Name_GripLogicScripts == ClassReps[(int32)ENetFields_Private::GripLogicScripts].Property->GetFName()
			&& Name_ClientAuthReplicationData == ClassReps[(int32)ENetFields_Private::ClientAuthReplicationData].Property->GetFName()
			&& Name_GameplayTags == ClassReps[(int32)ENetFields_Private::GameplayTags].Property->GetFName()
			&& Name_bAllowIgnoringAttachOnOwner == ClassReps[(int32)ENetFields_Private::bAllowIgnoringAttachOnOwner].Property->GetFName()
			&& Name_bRepGripSettingsAndGameplayTags == ClassReps[(int32)ENetFields_Private::bRepGripSettingsAndGameplayTags].Property->GetFName()
			&& Name_VRGripInterfaceSettings == ClassReps[(int32)ENetFields_Private::VRGripInterfaceSettings].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGrippableActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrippableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
