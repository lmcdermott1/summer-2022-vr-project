// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPVRReplicatedTextureStore;
struct FRenderManagerOperation;
class UPrimitiveComponent;
struct FTransform;
struct FPlane;
struct FVector2D;
struct FColor;
struct FCanvasUVTri;
class UMaterial;
class UTexture2D;
#ifdef VREXPANSIONPLUGIN_VRRenderTargetManager_generated_h
#error "VRRenderTargetManager.generated.h already included, missing '#pragma once' in VRRenderTargetManager.h"
#endif
#define VREXPANSIONPLUGIN_VRRenderTargetManager_generated_h

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_262_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClientRepData_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FClientRepData>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRenderManagerOperation_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FRenderManagerOperation>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRenderManagerTri_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FRenderManagerTri>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRenderDataStore_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FRenderDataStore>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPVRReplicatedTextureStore>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_RPC_WRAPPERS \
	virtual void ReceiveTexture_Implementation(FBPVRReplicatedTextureStore const& TextureData); \
	virtual bool Ack_ReceiveTextureBlob_Validate(int32 ); \
	virtual void Ack_ReceiveTextureBlob_Implementation(int32 BlobCount); \
	virtual void ReceiveTextureBlob_Implementation(TArray<uint8> const& TextureBlob, int32 LocationInData, int32 BlobCount); \
	virtual bool Ack_InitTextureSend_Validate(int32 ); \
	virtual void Ack_InitTextureSend_Implementation(int32 TotalDataCount); \
	virtual void InitTextureSend_Implementation(int32 Width, int32 Height, int32 TotalDataCount, int32 BlobCount, EPixelFormat PixelFormat, bool bIsZipped); \
	virtual bool SendLocalDrawOperations_Validate(TArray<FRenderManagerOperation> const& ); \
	virtual void SendLocalDrawOperations_Implementation(TArray<FRenderManagerOperation> const& LocalRenderOperationStoreList); \
 \
	DECLARE_FUNCTION(execReceiveTexture); \
	DECLARE_FUNCTION(execAck_ReceiveTextureBlob); \
	DECLARE_FUNCTION(execReceiveTextureBlob); \
	DECLARE_FUNCTION(execAck_InitTextureSend); \
	DECLARE_FUNCTION(execInitTextureSend); \
	DECLARE_FUNCTION(execSendLocalDrawOperations); \
	DECLARE_FUNCTION(execSendNextDataBlob); \
	DECLARE_FUNCTION(execOnRep_Manager);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReceiveTexture_Implementation(FBPVRReplicatedTextureStore const& TextureData); \
	virtual bool Ack_ReceiveTextureBlob_Validate(int32 ); \
	virtual void Ack_ReceiveTextureBlob_Implementation(int32 BlobCount); \
	virtual void ReceiveTextureBlob_Implementation(TArray<uint8> const& TextureBlob, int32 LocationInData, int32 BlobCount); \
	virtual bool Ack_InitTextureSend_Validate(int32 ); \
	virtual void Ack_InitTextureSend_Implementation(int32 TotalDataCount); \
	virtual void InitTextureSend_Implementation(int32 Width, int32 Height, int32 TotalDataCount, int32 BlobCount, EPixelFormat PixelFormat, bool bIsZipped); \
	virtual bool SendLocalDrawOperations_Validate(TArray<FRenderManagerOperation> const& ); \
	virtual void SendLocalDrawOperations_Implementation(TArray<FRenderManagerOperation> const& LocalRenderOperationStoreList); \
 \
	DECLARE_FUNCTION(execReceiveTexture); \
	DECLARE_FUNCTION(execAck_ReceiveTextureBlob); \
	DECLARE_FUNCTION(execReceiveTextureBlob); \
	DECLARE_FUNCTION(execAck_InitTextureSend); \
	DECLARE_FUNCTION(execInitTextureSend); \
	DECLARE_FUNCTION(execSendLocalDrawOperations); \
	DECLARE_FUNCTION(execSendNextDataBlob); \
	DECLARE_FUNCTION(execOnRep_Manager);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_EVENT_PARMS \
	struct RenderTargetReplicationProxy_eventAck_InitTextureSend_Parms \
	{ \
		int32 TotalDataCount; \
	}; \
	struct RenderTargetReplicationProxy_eventAck_ReceiveTextureBlob_Parms \
	{ \
		int32 BlobCount; \
	}; \
	struct RenderTargetReplicationProxy_eventInitTextureSend_Parms \
	{ \
		int32 Width; \
		int32 Height; \
		int32 TotalDataCount; \
		int32 BlobCount; \
		TEnumAsByte<EPixelFormat> PixelFormat; \
		bool bIsZipped; \
	}; \
	struct RenderTargetReplicationProxy_eventReceiveTexture_Parms \
	{ \
		FBPVRReplicatedTextureStore TextureData; \
	}; \
	struct RenderTargetReplicationProxy_eventReceiveTextureBlob_Parms \
	{ \
		TArray<uint8> TextureBlob; \
		int32 LocationInData; \
		int32 BlobCount; \
	}; \
	struct RenderTargetReplicationProxy_eventSendLocalDrawOperations_Parms \
	{ \
		TArray<FRenderManagerOperation> LocalRenderOperationStoreList; \
	};


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_CALLBACK_WRAPPERS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARenderTargetReplicationProxy(); \
	friend struct Z_Construct_UClass_ARenderTargetReplicationProxy_Statics; \
public: \
	DECLARE_CLASS(ARenderTargetReplicationProxy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(ARenderTargetReplicationProxy) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwningManager=NETFIELD_REP_START, \
		OwnersID, \
		NETFIELD_REP_END=OwnersID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_INCLASS \
private: \
	static void StaticRegisterNativesARenderTargetReplicationProxy(); \
	friend struct Z_Construct_UClass_ARenderTargetReplicationProxy_Statics; \
public: \
	DECLARE_CLASS(ARenderTargetReplicationProxy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(ARenderTargetReplicationProxy) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwningManager=NETFIELD_REP_START, \
		OwnersID, \
		NETFIELD_REP_END=OwnersID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARenderTargetReplicationProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARenderTargetReplicationProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARenderTargetReplicationProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARenderTargetReplicationProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARenderTargetReplicationProxy(ARenderTargetReplicationProxy&&); \
	NO_API ARenderTargetReplicationProxy(const ARenderTargetReplicationProxy&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARenderTargetReplicationProxy(ARenderTargetReplicationProxy&&); \
	NO_API ARenderTargetReplicationProxy(const ARenderTargetReplicationProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARenderTargetReplicationProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARenderTargetReplicationProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARenderTargetReplicationProxy)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_185_PROLOG \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_EVENT_PARMS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_188_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class ARenderTargetReplicationProxy>();

#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_SPARSE_DATA
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_RPC_WRAPPERS \
	virtual bool SendDrawOperations_Validate(TArray<FRenderManagerOperation> const& ); \
	virtual void SendDrawOperations_Implementation(TArray<FRenderManagerOperation> const& RenderOperationStoreList); \
 \
	DECLARE_FUNCTION(execGenerateTrisFromBoxPlaneIntersection); \
	DECLARE_FUNCTION(execDrawPoll); \
	DECLARE_FUNCTION(execAddMaterialTrianglesDrawOperation); \
	DECLARE_FUNCTION(execAddTextureDrawOperation); \
	DECLARE_FUNCTION(execAddLineDrawOperation); \
	DECLARE_FUNCTION(execSendDrawOperations);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SendDrawOperations_Validate(TArray<FRenderManagerOperation> const& ); \
	virtual void SendDrawOperations_Implementation(TArray<FRenderManagerOperation> const& RenderOperationStoreList); \
 \
	DECLARE_FUNCTION(execGenerateTrisFromBoxPlaneIntersection); \
	DECLARE_FUNCTION(execDrawPoll); \
	DECLARE_FUNCTION(execAddMaterialTrianglesDrawOperation); \
	DECLARE_FUNCTION(execAddTextureDrawOperation); \
	DECLARE_FUNCTION(execAddLineDrawOperation); \
	DECLARE_FUNCTION(execSendDrawOperations);


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_EVENT_PARMS \
	struct VRRenderTargetManager_eventSendDrawOperations_Parms \
	{ \
		TArray<FRenderManagerOperation> RenderOperationStoreList; \
	};


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_CALLBACK_WRAPPERS
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRRenderTargetManager(); \
	friend struct Z_Construct_UClass_UVRRenderTargetManager_Statics; \
public: \
	DECLARE_CLASS(UVRRenderTargetManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRRenderTargetManager)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_INCLASS \
private: \
	static void StaticRegisterNativesUVRRenderTargetManager(); \
	friend struct Z_Construct_UClass_UVRRenderTargetManager_Statics; \
public: \
	DECLARE_CLASS(UVRRenderTargetManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRRenderTargetManager)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRRenderTargetManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRRenderTargetManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRRenderTargetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRRenderTargetManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRRenderTargetManager(UVRRenderTargetManager&&); \
	NO_API UVRRenderTargetManager(const UVRRenderTargetManager&); \
public:


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRRenderTargetManager(UVRRenderTargetManager&&); \
	NO_API UVRRenderTargetManager(const UVRRenderTargetManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRRenderTargetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRRenderTargetManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRRenderTargetManager)


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_289_PROLOG \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_EVENT_PARMS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_RPC_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_INCLASS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_SPARSE_DATA \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_CALLBACK_WRAPPERS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_292_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRRenderTargetManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h


#define FOREACH_ENUM_ERENDERMANAGEROPERATIONTYPE(op) \
	op(ERenderManagerOperationType::Op_LineDraw) \
	op(ERenderManagerOperationType::Op_TriDraw) \
	op(ERenderManagerOperationType::Op_TexDraw) 

enum class ERenderManagerOperationType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<ERenderManagerOperationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
