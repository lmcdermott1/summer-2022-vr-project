// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBPVRConsoleDrawType : uint8;
class UTextureRenderTarget2D;
struct FKey;
#ifdef VREXPANSIONPLUGIN_VRLogComponent_generated_h
#error "VRLogComponent.generated.h already included, missing '#pragma once' in VRLogComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRLogComponent_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawConsoleToRenderTarget2D); \
	DECLARE_FUNCTION(execAppendTextToConsole); \
	DECLARE_FUNCTION(execSendKeyEventToConsole); \
	DECLARE_FUNCTION(execSetConsoleText);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawConsoleToRenderTarget2D); \
	DECLARE_FUNCTION(execAppendTextToConsole); \
	DECLARE_FUNCTION(execSendKeyEventToConsole); \
	DECLARE_FUNCTION(execSetConsoleText);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRLogComponent(); \
	friend struct Z_Construct_UClass_UVRLogComponent_Statics; \
public: \
	DECLARE_CLASS(UVRLogComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRLogComponent)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_INCLASS \
private: \
	static void StaticRegisterNativesUVRLogComponent(); \
	friend struct Z_Construct_UClass_UVRLogComponent_Statics; \
public: \
	DECLARE_CLASS(UVRLogComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRLogComponent)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRLogComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRLogComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRLogComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRLogComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRLogComponent(UVRLogComponent&&); \
	NO_API UVRLogComponent(const UVRLogComponent&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRLogComponent(UVRLogComponent&&); \
	NO_API UVRLogComponent(const UVRLogComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRLogComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRLogComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRLogComponent)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_196_PROLOG
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_199_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRLogComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h


#define FOREACH_ENUM_EBPVRCONSOLEDRAWTYPE(op) \
	op(EBPVRConsoleDrawType::VRConsole_Draw_ConsoleOnly) \
	op(EBPVRConsoleDrawType::VRConsole_Draw_OutputLogOnly) 

enum class EBPVRConsoleDrawType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPVRConsoleDrawType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
