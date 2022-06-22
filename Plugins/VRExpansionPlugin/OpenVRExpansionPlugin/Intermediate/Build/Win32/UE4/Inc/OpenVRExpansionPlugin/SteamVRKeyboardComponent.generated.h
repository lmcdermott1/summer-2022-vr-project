// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBPOVRResultSwitch : uint8;
#ifdef OPENVREXPANSIONPLUGIN_SteamVRKeyboardComponent_generated_h
#error "SteamVRKeyboardComponent.generated.h already included, missing '#pragma once' in SteamVRKeyboardComponent.h"
#endif
#define OPENVREXPANSIONPLUGIN_SteamVRKeyboardComponent_generated_h

#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_19_DELEGATE \
static inline void FVRKeyboardNullCallbackSignature_DelegateWrapper(const FMulticastScriptDelegate& VRKeyboardNullCallbackSignature) \
{ \
	VRKeyboardNullCallbackSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_18_DELEGATE \
struct _Script_OpenVRExpansionPlugin_eventVRKeyboardStringCallbackSignature_Parms \
{ \
	FString Text; \
}; \
static inline void FVRKeyboardStringCallbackSignature_DelegateWrapper(const FMulticastScriptDelegate& VRKeyboardStringCallbackSignature, const FString& Text) \
{ \
	_Script_OpenVRExpansionPlugin_eventVRKeyboardStringCallbackSignature_Parms Parms; \
	Parms.Text=Text; \
	VRKeyboardStringCallbackSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_SPARSE_DATA
#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVRKeyboardText); \
	DECLARE_FUNCTION(execReOpenVRKeyboardForUser); \
	DECLARE_FUNCTION(execCloseVRKeyboard); \
	DECLARE_FUNCTION(execOpenVRKeyboard);


#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVRKeyboardText); \
	DECLARE_FUNCTION(execReOpenVRKeyboardForUser); \
	DECLARE_FUNCTION(execCloseVRKeyboard); \
	DECLARE_FUNCTION(execOpenVRKeyboard);


#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamVRKeyboardComponent(); \
	friend struct Z_Construct_UClass_USteamVRKeyboardComponent_Statics; \
public: \
	DECLARE_CLASS(USteamVRKeyboardComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenVRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(USteamVRKeyboardComponent)


#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUSteamVRKeyboardComponent(); \
	friend struct Z_Construct_UClass_USteamVRKeyboardComponent_Statics; \
public: \
	DECLARE_CLASS(USteamVRKeyboardComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenVRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(USteamVRKeyboardComponent)


#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamVRKeyboardComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamVRKeyboardComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVRKeyboardComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVRKeyboardComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVRKeyboardComponent(USteamVRKeyboardComponent&&); \
	NO_API USteamVRKeyboardComponent(const USteamVRKeyboardComponent&); \
public:


#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVRKeyboardComponent(USteamVRKeyboardComponent&&); \
	NO_API USteamVRKeyboardComponent(const USteamVRKeyboardComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVRKeyboardComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVRKeyboardComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamVRKeyboardComponent)


#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_25_PROLOG
#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_SPARSE_DATA \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_RPC_WRAPPERS \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_INCLASS \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_SPARSE_DATA \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENVREXPANSIONPLUGIN_API UClass* StaticClass<class USteamVRKeyboardComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
