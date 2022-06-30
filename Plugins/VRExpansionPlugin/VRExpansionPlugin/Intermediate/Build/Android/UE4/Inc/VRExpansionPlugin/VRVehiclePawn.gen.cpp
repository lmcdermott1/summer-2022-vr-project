// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRVehiclePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRVehiclePawn() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRVehiclePawn_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRVehiclePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVRVehiclePawn::execForceSecondaryPossession)
	{
		P_GET_OBJECT(AController,Z_Param_NewController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ForceSecondaryPossession(Z_Param_NewController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRVehiclePawn::execSetBindToInput)
	{
		P_GET_OBJECT(AController,Z_Param_CController);
		P_GET_UBOOL(Z_Param_bBindToInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBindToInput(Z_Param_CController,Z_Param_bBindToInput);
		P_NATIVE_END;
	}
	void AVRVehiclePawn::StaticRegisterNativesAVRVehiclePawn()
	{
		UClass* Class = AVRVehiclePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceSecondaryPossession", &AVRVehiclePawn::execForceSecondaryPossession },
			{ "SetBindToInput", &AVRVehiclePawn::execSetBindToInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics
	{
		struct VRVehiclePawn_eventForceSecondaryPossession_Parms
		{
			AController* NewController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRVehiclePawn_eventForceSecondaryPossession_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRVehiclePawn_eventForceSecondaryPossession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRVehiclePawn_eventForceSecondaryPossession_Parms), &Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::NewProp_NewController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Public/Misc/VRVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRVehiclePawn, nullptr, "ForceSecondaryPossession", nullptr, nullptr, sizeof(VRVehiclePawn_eventForceSecondaryPossession_Parms), Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics
	{
		struct VRVehiclePawn_eventSetBindToInput_Parms
		{
			AController* CController;
			bool bBindToInput;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CController;
		static void NewProp_bBindToInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBindToInput;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_CController = { "CController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRVehiclePawn_eventSetBindToInput_Parms, CController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_bBindToInput_SetBit(void* Obj)
	{
		((VRVehiclePawn_eventSetBindToInput_Parms*)Obj)->bBindToInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_bBindToInput = { "bBindToInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRVehiclePawn_eventSetBindToInput_Parms), &Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_bBindToInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRVehiclePawn_eventSetBindToInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRVehiclePawn_eventSetBindToInput_Parms), &Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_CController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_bBindToInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Public/Misc/VRVehiclePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRVehiclePawn, nullptr, "SetBindToInput", nullptr, nullptr, sizeof(VRVehiclePawn_eventSetBindToInput_Parms), Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRVehiclePawn_NoRegister()
	{
		return AVRVehiclePawn::StaticClass();
	}
	struct Z_Construct_UClass_AVRVehiclePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRVehiclePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVRVehiclePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession, "ForceSecondaryPossession" }, // 3268653483
		{ &Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput, "SetBindToInput" }, // 3184001842
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRVehiclePawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This override of the base pawn allows for dual pawn usage in engine.\n* It adds two new functions: SetBindToInput to bind input locally to the pawn and ForceSecondaryPossession which fakes possession so the \n* player can control the pawn as if they were locally possessed into it in a multiplayer enviroment (no lag).\n*/" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Misc/VRVehiclePawn.h" },
		{ "ModuleRelativePath", "Public/Misc/VRVehiclePawn.h" },
		{ "ToolTip", "This override of the base pawn allows for dual pawn usage in engine.\nIt adds two new functions: SetBindToInput to bind input locally to the pawn and ForceSecondaryPossession which fakes possession so the\nplayer can control the pawn as if they were locally possessed into it in a multiplayer enviroment (no lag)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRVehiclePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRVehiclePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRVehiclePawn_Statics::ClassParams = {
		&AVRVehiclePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVRVehiclePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRVehiclePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRVehiclePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRVehiclePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRVehiclePawn, 24182129);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRVehiclePawn>()
	{
		return AVRVehiclePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRVehiclePawn(Z_Construct_UClass_AVRVehiclePawn, &AVRVehiclePawn::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRVehiclePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRVehiclePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
