// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRStereoWidgetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRStereoWidgetComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRStereoWidgetRenderComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRStereoWidgetRenderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRStereoWidgetComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRStereoWidgetComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShape_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVRStereoWidgetRenderComponent::execSetWidgetAndInit)
	{
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetAndInit(Z_Param_NewWidgetClass);
		P_NATIVE_END;
	}
	void UVRStereoWidgetRenderComponent::StaticRegisterNativesUVRStereoWidgetRenderComponent()
	{
		UClass* Class = UVRStereoWidgetRenderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWidgetAndInit", &UVRStereoWidgetRenderComponent::execSetWidgetAndInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics
	{
		struct VRStereoWidgetRenderComponent_eventSetWidgetAndInit_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRStereoWidgetRenderComponent_eventSetWidgetAndInit_Parms, NewWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::NewProp_NewWidgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "WidgetSettings" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRStereoWidgetRenderComponent, nullptr, "SetWidgetAndInit", nullptr, nullptr, sizeof(VRStereoWidgetRenderComponent_eventSetWidgetAndInit_Parms), Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRStereoWidgetRenderComponent_NoRegister()
	{
		return UVRStereoWidgetRenderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawAtDesiredSize_MetaData[];
#endif
		static void NewProp_bDrawAtDesiredSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawAtDesiredSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetRenderScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WidgetRenderScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetRenderGamma_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WidgetRenderGamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGammaCorrection_MetaData[];
#endif
		static void NewProp_bUseGammaCorrection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGammaCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTargetClearColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderTargetClearColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawWithoutStereo_MetaData[];
#endif
		static void NewProp_bDrawWithoutStereo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawWithoutStereo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStereoLayerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit, "SetWidgetAndInit" }, // 3472144691
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n* A stereo component that displays a widget instead of a texture.\n*/" },
		{ "HideCategories", "Stereoscopic Properties Collision Object LOD Lighting TextureStreaming Trigger PhysicsVolume" },
		{ "IncludePath", "VRStereoWidgetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A stereo component that displays a widget instead of a texture." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** The class of User Widget to create and display an instance of */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "The class of User Widget to create and display an instance of" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0015000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRStereoWidgetRenderComponent, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_Widget_MetaData[] = {
		{ "Comment", "/** The User Widget object displayed and managed by this component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "The User Widget object displayed and managed by this component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRStereoWidgetRenderComponent, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawAtDesiredSize_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** If true then we sample the requested size of the widget and reset the texture to be that size */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true then we sample the requested size of the widget and reset the texture to be that size" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawAtDesiredSize_SetBit(void* Obj)
	{
		((UVRStereoWidgetRenderComponent*)Obj)->bDrawAtDesiredSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawAtDesiredSize = { "bDrawAtDesiredSize", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRStereoWidgetRenderComponent), &Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawAtDesiredSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawAtDesiredSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawAtDesiredSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderScale_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** The desired render scale of the widget */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "The desired render scale of the widget" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderScale = { "WidgetRenderScale", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRStereoWidgetRenderComponent, WidgetRenderScale), METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderGamma_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** The desired render gamma of the widget */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "The desired render gamma of the widget" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderGamma = { "WidgetRenderGamma", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRStereoWidgetRenderComponent, WidgetRenderGamma), METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderGamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bUseGammaCorrection_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** Automatically correct for gamma */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "Automatically correct for gamma" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bUseGammaCorrection_SetBit(void* Obj)
	{
		((UVRStereoWidgetRenderComponent*)Obj)->bUseGammaCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bUseGammaCorrection = { "bUseGammaCorrection", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRStereoWidgetRenderComponent), &Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bUseGammaCorrection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bUseGammaCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bUseGammaCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTargetClearColor_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** The desired clear color of the render target */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "The desired clear color of the render target" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTargetClearColor = { "RenderTargetClearColor", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRStereoWidgetRenderComponent, RenderTargetClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTargetClearColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTargetClearColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawWithoutStereo_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** If true we will draw to the render target even without active stereo layers and skip the stereo tick*/" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true we will draw to the render target even without active stereo layers and skip the stereo tick" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawWithoutStereo_SetBit(void* Obj)
	{
		((UVRStereoWidgetRenderComponent*)Obj)->bDrawWithoutStereo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawWithoutStereo = { "bDrawWithoutStereo", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRStereoWidgetRenderComponent), &Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawWithoutStereo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawWithoutStereo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawWithoutStereo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_DrawRate_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** Rate (HTZ) we should draw the texture at */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "Rate (HTZ) we should draw the texture at" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_DrawRate = { "DrawRate", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRStereoWidgetRenderComponent, DrawRate), METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_DrawRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_DrawRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** The render target being display */" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "The render target being display" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000202014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRStereoWidgetRenderComponent, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawAtDesiredSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderGamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bUseGammaCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTargetClearColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawWithoutStereo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_DrawRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRStereoWidgetRenderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::ClassParams = {
		&UVRStereoWidgetRenderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRStereoWidgetRenderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRStereoWidgetRenderComponent, 916773815);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRStereoWidgetRenderComponent>()
	{
		return UVRStereoWidgetRenderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRStereoWidgetRenderComponent(Z_Construct_UClass_UVRStereoWidgetRenderComponent, &UVRStereoWidgetRenderComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRStereoWidgetRenderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRStereoWidgetRenderComponent);
	DEFINE_FUNCTION(UVRStereoWidgetComponent::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRStereoWidgetComponent::execSetPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriority(Z_Param_InPriority);
		P_NATIVE_END;
	}
	void UVRStereoWidgetComponent::StaticRegisterNativesUVRStereoWidgetComponent()
	{
		UClass* Class = UVRStereoWidgetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPriority", &UVRStereoWidgetComponent::execGetPriority },
			{ "SetPriority", &UVRStereoWidgetComponent::execSetPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics
	{
		struct VRStereoWidgetComponent_eventGetPriority_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRStereoWidgetComponent_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "// @return the render priority\n" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "@return the render priority" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRStereoWidgetComponent, nullptr, "GetPriority", nullptr, nullptr, sizeof(VRStereoWidgetComponent_eventGetPriority_Parms), Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics
	{
		struct VRStereoWidgetComponent_eventSetPriority_Parms
		{
			int32 InPriority;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::NewProp_InPriority = { "InPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRStereoWidgetComponent_eventSetPriority_Parms, InPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::NewProp_InPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/**\n\x09* Change the layer's render priority, higher priorities render on top of lower priorities\n\x09* @param\x09InPriority: Priority value\n\x09*/" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "Change the layer's render priority, higher priorities render on top of lower priorities\n@param        InPriority: Priority value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRStereoWidgetComponent, nullptr, "SetPriority", nullptr, nullptr, sizeof(VRStereoWidgetComponent_eventSetPriority_Parms), Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRStereoWidgetComponent_NoRegister()
	{
		return UVRStereoWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRStereoWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Shape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderBothStereoAndWorld_MetaData[];
#endif
		static void NewProp_bRenderBothStereoAndWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderBothStereoAndWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEpicsWorldLockedStereo_MetaData[];
#endif
		static void NewProp_bUseEpicsWorldLockedStereo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEpicsWorldLockedStereo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDelayForRenderThread_MetaData[];
#endif
		static void NewProp_bDelayForRenderThread_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDelayForRenderThread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSleeping_MetaData[];
#endif
		static void NewProp_bIsSleeping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSleeping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsDepth_MetaData[];
#endif
		static void NewProp_bSupportsDepth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoAlphaChannel_MetaData[];
#endif
		static void NewProp_bNoAlphaChannel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoAlphaChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bQuadPreserveTextureRatio_MetaData[];
#endif
		static void NewProp_bQuadPreserveTextureRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bQuadPreserveTextureRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRStereoWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRStereoWidgetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority, "GetPriority" }, // 3920827130
		{ &Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority, "SetPriority" }, // 3607533215
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n* A widget component that displays the widget in a stereo layer instead of in worldspace.\n* Currently this class uses a custom postion instead of the engines WorldLocked for stereo layers\n* This is because world locked stereo layers don't account for player movement currently.\n*/" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "VRStereoWidgetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A widget component that displays the widget in a stereo layer instead of in worldspace.\nCurrently this class uses a custom postion instead of the engines WorldLocked for stereo layers\nThis is because world locked stereo layers don't account for player movement currently." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** Specifies which shape of layer it is.  Note that some shapes will be supported only on certain platforms! **/" },
		{ "DisplayName", "Stereo Layer Shape" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "Specifies which shape of layer it is.  Note that some shapes will be supported only on certain platforms! *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x001200000208001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRStereoWidgetComponent, Shape), Z_Construct_UClass_UStereoLayerShape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Shape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "// If true forces the widget to render both stereo and world widgets\n// Overriden by the console command vr.ForceNoStereoWithVRWidgets if it is set to 1\n" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true forces the widget to render both stereo and world widgets\nOverriden by the console command vr.ForceNoStereoWithVRWidgets if it is set to 1" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bRenderBothStereoAndWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld = { "bRenderBothStereoAndWorld", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "// If true, use Epics world locked stereo implementation instead of my own temp solution\n" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true, use Epics world locked stereo implementation instead of my own temp solution" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bUseEpicsWorldLockedStereo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo = { "bUseEpicsWorldLockedStereo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "// If true, will cache and delay the transform adjustment for one frame in order to sync with the game thread better\n// Not for use with late updated parents.\n" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true, will cache and delay the transform adjustment for one frame in order to sync with the game thread better\nNot for use with late updated parents." },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bDelayForRenderThread = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread = { "bDelayForRenderThread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "// If true will not render or update until false\n" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true will not render or update until false" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bIsSleeping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping = { "bIsSleeping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bSupportsDepth_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** True if the stereo layer needs to support depth intersections with the scene geometry, if available on the platform */" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "True if the stereo layer needs to support depth intersections with the scene geometry, if available on the platform" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bSupportsDepth_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bSupportsDepth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bSupportsDepth = { "bSupportsDepth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bSupportsDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bSupportsDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bSupportsDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** True if the texture should not use its own alpha channel (1.0 will be substituted) */" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "True if the texture should not use its own alpha channel (1.0 will be substituted)" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bNoAlphaChannel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel = { "bNoAlphaChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** True if the quad should internally set it's Y value based on the set texture's dimensions */" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "True if the quad should internally set it's Y value based on the set texture's dimensions" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bQuadPreserveTextureRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio = { "bQuadPreserveTextureRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** Render priority among all stereo layers, higher priority render on top of lower priority **/" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "Render priority among all stereo layers, higher priority render on top of lower priority *" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x001000000000001d, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRStereoWidgetComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRStereoWidgetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Shape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bSupportsDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Priority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRStereoWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRStereoWidgetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::ClassParams = {
		&UVRStereoWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRStereoWidgetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRStereoWidgetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRStereoWidgetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRStereoWidgetComponent, 4027416939);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRStereoWidgetComponent>()
	{
		return UVRStereoWidgetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRStereoWidgetComponent(Z_Construct_UClass_UVRStereoWidgetComponent, &UVRStereoWidgetComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRStereoWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRStereoWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
