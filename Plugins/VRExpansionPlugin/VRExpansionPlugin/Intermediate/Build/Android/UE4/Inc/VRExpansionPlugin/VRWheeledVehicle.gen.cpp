// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRWheeledVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRWheeledVehicle() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRWheeledVehicle_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRWheeledVehicle();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVRWheeledVehicle::execForceSecondaryPossession)
	{
		P_GET_OBJECT(AController,Z_Param_NewController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ForceSecondaryPossession(Z_Param_NewController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRWheeledVehicle::execSetOverrideController)
	{
		P_GET_OBJECT(AController,Z_Param_NewController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetOverrideController(Z_Param_NewController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRWheeledVehicle::execSetBindToInput)
	{
		P_GET_OBJECT(AController,Z_Param_CController);
		P_GET_UBOOL(Z_Param_bBindToInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBindToInput(Z_Param_CController,Z_Param_bBindToInput);
		P_NATIVE_END;
	}
	void AVRWheeledVehicle::StaticRegisterNativesAVRWheeledVehicle()
	{
		UClass* Class = AVRWheeledVehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceSecondaryPossession", &AVRWheeledVehicle::execForceSecondaryPossession },
			{ "SetBindToInput", &AVRWheeledVehicle::execSetBindToInput },
			{ "SetOverrideController", &AVRWheeledVehicle::execSetOverrideController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession_Statics
	{
		struct VRWheeledVehicle_eventForceSecondaryPossession_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRWheeledVehicle_eventForceSecondaryPossession_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRWheeledVehicle_eventForceSecondaryPossession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRWheeledVehicle_eventForceSecondaryPossession_Parms), &Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession_Statics::NewProp_NewController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRWheeledVehicle, nullptr, "ForceSecondaryPossession", nullptr, nullptr, sizeof(VRWheeledVehicle_eventForceSecondaryPossession_Parms), Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics
	{
		struct VRWheeledVehicle_eventSetBindToInput_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_CController = { "CController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRWheeledVehicle_eventSetBindToInput_Parms, CController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_bBindToInput_SetBit(void* Obj)
	{
		((VRWheeledVehicle_eventSetBindToInput_Parms*)Obj)->bBindToInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_bBindToInput = { "bBindToInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRWheeledVehicle_eventSetBindToInput_Parms), &Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_bBindToInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRWheeledVehicle_eventSetBindToInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRWheeledVehicle_eventSetBindToInput_Parms), &Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_CController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_bBindToInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRWheeledVehicle, nullptr, "SetBindToInput", nullptr, nullptr, sizeof(VRWheeledVehicle_eventSetBindToInput_Parms), Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics
	{
		struct VRWheeledVehicle_eventSetOverrideController_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRWheeledVehicle_eventSetOverrideController_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRWheeledVehicle_eventSetOverrideController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRWheeledVehicle_eventSetOverrideController_Parms), &Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_NewController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// Calls the movement components override controller function\n" },
		{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
		{ "ToolTip", "Calls the movement components override controller function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRWheeledVehicle, nullptr, "SetOverrideController", nullptr, nullptr, sizeof(VRWheeledVehicle_eventSetOverrideController_Parms), Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRWheeledVehicle_NoRegister()
	{
		return AVRWheeledVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AVRWheeledVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRWheeledVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVRWheeledVehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession, "ForceSecondaryPossession" }, // 4162429523
		{ &Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput, "SetBindToInput" }, // 1223723401
		{ &Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController, "SetOverrideController" }, // 1799829254
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRWheeledVehicle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This override of the base wheeled vehicle allows for dual pawn usage in engine.\n* It adds two new functions: SetBindToInput to bind input locally to the pawn and ForceSecondaryPossession which fakes possession so the \n* player can control the vehicle as if they were locally possessed into it in a multiplayer enviroment (no lag).\n*/" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Misc/VRWheeledVehicle.h" },
		{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
		{ "ToolTip", "This override of the base wheeled vehicle allows for dual pawn usage in engine.\nIt adds two new functions: SetBindToInput to bind input locally to the pawn and ForceSecondaryPossession which fakes possession so the\nplayer can control the vehicle as if they were locally possessed into it in a multiplayer enviroment (no lag)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRWheeledVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRWheeledVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRWheeledVehicle_Statics::ClassParams = {
		&AVRWheeledVehicle::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVRWheeledVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRWheeledVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRWheeledVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRWheeledVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRWheeledVehicle, 2776283808);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRWheeledVehicle>()
	{
		return AVRWheeledVehicle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRWheeledVehicle(Z_Construct_UClass_AVRWheeledVehicle, &AVRWheeledVehicle::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRWheeledVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRWheeledVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
