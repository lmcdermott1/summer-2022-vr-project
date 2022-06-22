// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRExpansionFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRExpansionFunctionLibrary() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPLowPassPeakFilter();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilter();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* EBPHMDWornState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EBPHMDWornState"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPHMDWornState>()
	{
		return EBPHMDWornState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPHMDWornState(EBPHMDWornState_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EBPHMDWornState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState_Hash() { return 652914898U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPHMDWornState"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPHMDWornState::Unknown", (int64)EBPHMDWornState::Unknown },
				{ "EBPHMDWornState::Worn", (int64)EBPHMDWornState::Worn },
				{ "EBPHMDWornState::NotWorn", (int64)EBPHMDWornState::NotWorn },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n* Redefining this for blueprint as it wasn't declared as BlueprintType\n* Stores if the user is wearing the HMD or not. For HMDs without a sensor to detect the user wearing it, the state defaults to Unknown.\n*/" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "NotWorn.DisplayName", "Not Worn" },
				{ "NotWorn.Name", "EBPHMDWornState::NotWorn" },
				{ "ToolTip", "Redefining this for blueprint as it wasn't declared as BlueprintType\nStores if the user is wearing the HMD or not. For HMDs without a sensor to detect the user wearing it, the state defaults to Unknown." },
				{ "Unknown.DisplayName", "Unknown" },
				{ "Unknown.Name", "EBPHMDWornState::Unknown" },
				{ "Worn.DisplayName", "Worn" },
				{ "Worn.Name", "EBPHMDWornState::Worn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EBPHMDWornState",
				"EBPHMDWornState",
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
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetFirstGameplayTagWithExactParent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_DirectParentTag);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_BaseContainer);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_FoundTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::GetFirstGameplayTagWithExactParent(Z_Param_DirectParentTag,Z_Param_Out_BaseContainer,Z_Param_Out_FoundTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execMatchesAnyTagsWithDirectParentTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_DirectParentTag);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_BaseContainer);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OtherContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::MatchesAnyTagsWithDirectParentTag(Z_Param_DirectParentTag,Z_Param_Out_BaseContainer,Z_Param_Out_OtherContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execSmoothUpdateLaserSpline)
	{
		P_GET_OBJECT(USplineComponent,Z_Param_LaserSplineComponent);
		P_GET_TARRAY(USplineMeshComponent*,Z_Param_LaserSplineMeshComponents);
		P_GET_STRUCT(FVector,Z_Param_InStartLocation);
		P_GET_STRUCT(FVector,Z_Param_InEndLocation);
		P_GET_STRUCT(FVector,Z_Param_InForward);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LaserRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRExpansionFunctionLibrary::SmoothUpdateLaserSpline(Z_Param_LaserSplineComponent,Z_Param_LaserSplineMeshComponents,Z_Param_InStartLocation,Z_Param_InEndLocation,Z_Param_InForward,Z_Param_LaserRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execRunEuroSmoothingFilter)
	{
		P_GET_STRUCT_REF(FBPEuroLowPassFilter,Z_Param_Out_TargetEuroFilter);
		P_GET_STRUCT(FVector,Z_Param_InRawValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SmoothedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRExpansionFunctionLibrary::RunEuroSmoothingFilter(Z_Param_Out_TargetEuroFilter,Z_Param_InRawValue,Z_Param_DeltaTime,Z_Param_Out_SmoothedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execResetEuroSmoothingFilter)
	{
		P_GET_STRUCT_REF(FBPEuroLowPassFilter,Z_Param_Out_TargetEuroFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRExpansionFunctionLibrary::ResetEuroSmoothingFilter(Z_Param_Out_TargetEuroFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetPeak_PeakLowPassFilter)
	{
		P_GET_STRUCT_REF(FBPLowPassPeakFilter,Z_Param_Out_TargetPeakFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UVRExpansionFunctionLibrary::GetPeak_PeakLowPassFilter(Z_Param_Out_TargetPeakFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execUpdatePeakLowPassFilter)
	{
		P_GET_STRUCT_REF(FBPLowPassPeakFilter,Z_Param_Out_TargetPeakFilter);
		P_GET_STRUCT(FVector,Z_Param_NewSample);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRExpansionFunctionLibrary::UpdatePeakLowPassFilter(Z_Param_Out_TargetPeakFilter,Z_Param_NewSample);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execResetPeakLowPassFilter)
	{
		P_GET_STRUCT_REF(FBPLowPassPeakFilter,Z_Param_Out_TargetPeakFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRExpansionFunctionLibrary::ResetPeakLowPassFilter(Z_Param_Out_TargetPeakFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execAddSceneComponentByClass)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ComponentRelativeTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=UVRExpansionFunctionLibrary::AddSceneComponentByClass(Z_Param_Outer,Z_Param_Class,Z_Param_Out_ComponentRelativeTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execConv_GripPairToGripID)
	{
		P_GET_STRUCT_REF(FBPGripPair,Z_Param_Out_GripPair);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=UVRExpansionFunctionLibrary::Conv_GripPairToGripID(Z_Param_Out_GripPair);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execConv_GripPairToMotionController)
	{
		P_GET_STRUCT_REF(FBPGripPair,Z_Param_Out_GripPair);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGripMotionControllerComponent**)Z_Param__Result=UVRExpansionFunctionLibrary::Conv_GripPairToMotionController(Z_Param_Out_GripPair);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execMakeVector_NetQuantize100)
	{
		P_GET_STRUCT(FVector,Z_Param_InVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector_NetQuantize100*)Z_Param__Result=UVRExpansionFunctionLibrary::MakeVector_NetQuantize100(Z_Param_InVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execConv_FVectorToFVectorNetQuantize100)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector_NetQuantize100*)Z_Param__Result=UVRExpansionFunctionLibrary::Conv_FVectorToFVectorNetQuantize100(Z_Param_Out_InVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execMakeVector_NetQuantize10)
	{
		P_GET_STRUCT(FVector,Z_Param_InVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector_NetQuantize10*)Z_Param__Result=UVRExpansionFunctionLibrary::MakeVector_NetQuantize10(Z_Param_InVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execConv_FVectorToFVectorNetQuantize10)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector_NetQuantize10*)Z_Param__Result=UVRExpansionFunctionLibrary::Conv_FVectorToFVectorNetQuantize10(Z_Param_Out_InVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execMakeVector_NetQuantize)
	{
		P_GET_STRUCT(FVector,Z_Param_InVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector_NetQuantize*)Z_Param__Result=UVRExpansionFunctionLibrary::MakeVector_NetQuantize(Z_Param_InVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execConv_FVectorToFVectorNetQuantize)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector_NetQuantize*)Z_Param__Result=UVRExpansionFunctionLibrary::Conv_FVectorToFVectorNetQuantize(Z_Param_Out_InVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execConv_TransformToTransformNetQuantize)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform_NetQuantize*)Z_Param__Result=UVRExpansionFunctionLibrary::Conv_TransformToTransformNetQuantize(Z_Param_Out_InTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execBreakTransform_NetQuantize)
	{
		P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_InTransform);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRExpansionFunctionLibrary::BreakTransform_NetQuantize(Z_Param_Out_InTransform,Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Out_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execMakeTransform_NetQuantize)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform_NetQuantize*)Z_Param__Result=UVRExpansionFunctionLibrary::MakeTransform_NetQuantize(Z_Param_Location,Z_Param_Rotation,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execEqualEqual_FBPActorGripInformation)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_A);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::EqualEqual_FBPActorGripInformation(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetGripSlotInRangeByTypeName_Component)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotType);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_GET_STRUCT(FVector,Z_Param_WorldLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SlotName);
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_QueryController);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRExpansionFunctionLibrary::GetGripSlotInRangeByTypeName_Component(Z_Param_SlotType,Z_Param_Component,Z_Param_WorldLocation,Z_Param_MaxRange,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_Out_SlotName,Z_Param_QueryController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetGripSlotInRangeByTypeName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotType);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FVector,Z_Param_WorldLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SlotName);
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_QueryController);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRExpansionFunctionLibrary::GetGripSlotInRangeByTypeName(Z_Param_SlotType,Z_Param_Actor,Z_Param_WorldLocation,Z_Param_MaxRange,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_Out_SlotName,Z_Param_QueryController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetIsActorMovable)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::GetIsActorMovable(Z_Param_ActorToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execLowPassFilter_Exponential)
	{
		P_GET_STRUCT(FVector,Z_Param_lastAverage);
		P_GET_STRUCT(FVector,Z_Param_newSample);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_newAverage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_sampleFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRExpansionFunctionLibrary::LowPassFilter_Exponential(Z_Param_lastAverage,Z_Param_newSample,Z_Param_Out_newAverage,Z_Param_sampleFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execLowPassFilter_RollingAverage)
	{
		P_GET_STRUCT(FVector,Z_Param_lastAverage);
		P_GET_STRUCT(FVector,Z_Param_newSample);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_newAverage);
		P_GET_PROPERTY(FIntProperty,Z_Param_numSamples);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRExpansionFunctionLibrary::LowPassFilter_RollingAverage(Z_Param_lastAverage,Z_Param_newSample,Z_Param_Out_newAverage,Z_Param_numSamples);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execNonAuthorityMinimumAreaRectangle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InVerts);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SampleSurfaceNormal);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutRectCenter);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRectRotation);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutSideLengthX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutSideLengthY);
		P_GET_UBOOL(Z_Param_bDebugDraw);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRExpansionFunctionLibrary::NonAuthorityMinimumAreaRectangle(Z_Param_WorldContextObject,Z_Param_Out_InVerts,Z_Param_Out_SampleSurfaceNormal,Z_Param_Out_OutRectCenter,Z_Param_Out_OutRectRotation,Z_Param_Out_OutSideLengthX,Z_Param_Out_OutSideLengthY,Z_Param_bDebugDraw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execIsInVREditorPreview)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::IsInVREditorPreview();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execIsInVREditorPreviewOrGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::IsInVREditorPreviewOrGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetHMDType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBPHMDDeviceType*)Z_Param__Result=UVRExpansionFunctionLibrary::GetHMDType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetIsHMDWorn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBPHMDWornState*)Z_Param__Result=UVRExpansionFunctionLibrary::GetIsHMDWorn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetIsHMDConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::GetIsHMDConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execBPQuat_FindBetween)
	{
		P_GET_STRUCT(FVector,Z_Param_Vec1);
		P_GET_STRUCT(FVector,Z_Param_Vec2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UVRExpansionFunctionLibrary::BPQuat_FindBetween(Z_Param_Vec1,Z_Param_Vec2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execRotateAroundPivot)
	{
		P_GET_STRUCT(FRotator,Z_Param_RotationDelta);
		P_GET_STRUCT(FVector,Z_Param_OriginalLocation);
		P_GET_STRUCT(FRotator,Z_Param_OriginalRotation);
		P_GET_STRUCT(FVector,Z_Param_PivotPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation);
		P_GET_UBOOL(Z_Param_bUseOriginalYawOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRExpansionFunctionLibrary::RotateAroundPivot(Z_Param_RotationDelta,Z_Param_OriginalLocation,Z_Param_OriginalRotation,Z_Param_PivotPoint,Z_Param_Out_NewLocation,Z_Param_Out_NewRotation,Z_Param_bUseOriginalYawOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetHMDPureYaw)
	{
		P_GET_STRUCT(FRotator,Z_Param_HMDRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UVRExpansionFunctionLibrary::GetHMDPureYaw(Z_Param_HMDRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetHandFromMotionSourceName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MotionSource);
		P_GET_ENUM_REF(EControllerHand,Z_Param_Out_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::GetHandFromMotionSourceName(Z_Param_MotionSource,(EControllerHand&)(Z_Param_Out_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execSetObjectsIgnoreCollision)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Prim1);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalBoneName1);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Prim2);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalBoneName2);
		P_GET_UBOOL(Z_Param_bIgnoreCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRExpansionFunctionLibrary::SetObjectsIgnoreCollision(Z_Param_Prim1,Z_Param_OptionalBoneName1,Z_Param_Prim2,Z_Param_OptionalBoneName2,Z_Param_bIgnoreCollision);
		P_NATIVE_END;
	}
	void UVRExpansionFunctionLibrary::StaticRegisterNativesUVRExpansionFunctionLibrary()
	{
		UClass* Class = UVRExpansionFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSceneComponentByClass", &UVRExpansionFunctionLibrary::execAddSceneComponentByClass },
			{ "BPQuat_FindBetween", &UVRExpansionFunctionLibrary::execBPQuat_FindBetween },
			{ "BreakTransform_NetQuantize", &UVRExpansionFunctionLibrary::execBreakTransform_NetQuantize },
			{ "Conv_FVectorToFVectorNetQuantize", &UVRExpansionFunctionLibrary::execConv_FVectorToFVectorNetQuantize },
			{ "Conv_FVectorToFVectorNetQuantize10", &UVRExpansionFunctionLibrary::execConv_FVectorToFVectorNetQuantize10 },
			{ "Conv_FVectorToFVectorNetQuantize100", &UVRExpansionFunctionLibrary::execConv_FVectorToFVectorNetQuantize100 },
			{ "Conv_GripPairToGripID", &UVRExpansionFunctionLibrary::execConv_GripPairToGripID },
			{ "Conv_GripPairToMotionController", &UVRExpansionFunctionLibrary::execConv_GripPairToMotionController },
			{ "Conv_TransformToTransformNetQuantize", &UVRExpansionFunctionLibrary::execConv_TransformToTransformNetQuantize },
			{ "EqualEqual_FBPActorGripInformation", &UVRExpansionFunctionLibrary::execEqualEqual_FBPActorGripInformation },
			{ "GetFirstGameplayTagWithExactParent", &UVRExpansionFunctionLibrary::execGetFirstGameplayTagWithExactParent },
			{ "GetGripSlotInRangeByTypeName", &UVRExpansionFunctionLibrary::execGetGripSlotInRangeByTypeName },
			{ "GetGripSlotInRangeByTypeName_Component", &UVRExpansionFunctionLibrary::execGetGripSlotInRangeByTypeName_Component },
			{ "GetHandFromMotionSourceName", &UVRExpansionFunctionLibrary::execGetHandFromMotionSourceName },
			{ "GetHMDPureYaw", &UVRExpansionFunctionLibrary::execGetHMDPureYaw },
			{ "GetHMDType", &UVRExpansionFunctionLibrary::execGetHMDType },
			{ "GetIsActorMovable", &UVRExpansionFunctionLibrary::execGetIsActorMovable },
			{ "GetIsHMDConnected", &UVRExpansionFunctionLibrary::execGetIsHMDConnected },
			{ "GetIsHMDWorn", &UVRExpansionFunctionLibrary::execGetIsHMDWorn },
			{ "GetPeak_PeakLowPassFilter", &UVRExpansionFunctionLibrary::execGetPeak_PeakLowPassFilter },
			{ "IsInVREditorPreview", &UVRExpansionFunctionLibrary::execIsInVREditorPreview },
			{ "IsInVREditorPreviewOrGame", &UVRExpansionFunctionLibrary::execIsInVREditorPreviewOrGame },
			{ "LowPassFilter_Exponential", &UVRExpansionFunctionLibrary::execLowPassFilter_Exponential },
			{ "LowPassFilter_RollingAverage", &UVRExpansionFunctionLibrary::execLowPassFilter_RollingAverage },
			{ "MakeTransform_NetQuantize", &UVRExpansionFunctionLibrary::execMakeTransform_NetQuantize },
			{ "MakeVector_NetQuantize", &UVRExpansionFunctionLibrary::execMakeVector_NetQuantize },
			{ "MakeVector_NetQuantize10", &UVRExpansionFunctionLibrary::execMakeVector_NetQuantize10 },
			{ "MakeVector_NetQuantize100", &UVRExpansionFunctionLibrary::execMakeVector_NetQuantize100 },
			{ "MatchesAnyTagsWithDirectParentTag", &UVRExpansionFunctionLibrary::execMatchesAnyTagsWithDirectParentTag },
			{ "NonAuthorityMinimumAreaRectangle", &UVRExpansionFunctionLibrary::execNonAuthorityMinimumAreaRectangle },
			{ "ResetEuroSmoothingFilter", &UVRExpansionFunctionLibrary::execResetEuroSmoothingFilter },
			{ "ResetPeakLowPassFilter", &UVRExpansionFunctionLibrary::execResetPeakLowPassFilter },
			{ "RotateAroundPivot", &UVRExpansionFunctionLibrary::execRotateAroundPivot },
			{ "RunEuroSmoothingFilter", &UVRExpansionFunctionLibrary::execRunEuroSmoothingFilter },
			{ "SetObjectsIgnoreCollision", &UVRExpansionFunctionLibrary::execSetObjectsIgnoreCollision },
			{ "SmoothUpdateLaserSpline", &UVRExpansionFunctionLibrary::execSmoothUpdateLaserSpline },
			{ "UpdatePeakLowPassFilter", &UVRExpansionFunctionLibrary::execUpdatePeakLowPassFilter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics
	{
		struct VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms
		{
			UObject* Outer;
			TSubclassOf<USceneComponent>  Class;
			FTransform ComponentRelativeTransform;
			USceneComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentRelativeTransform;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms, Class), Z_Construct_UClass_USceneComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_ComponentRelativeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_ComponentRelativeTransform = { "ComponentRelativeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms, ComponentRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_ComponentRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_ComponentRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_ComponentRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "// Adds a USceneComponent Subclass, that is based on the passed in Class, and added to the Outer(Actor) object\n" },
		{ "DisplayName", "Add Scene Component By Class" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Adds a USceneComponent Subclass, that is based on the passed in Class, and added to the Outer(Actor) object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "AddSceneComponentByClass", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics
	{
		struct VRExpansionFunctionLibrary_eventBPQuat_FindBetween_Parms
		{
			FVector Vec1;
			FVector Vec2;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vec1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vec2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::NewProp_Vec1 = { "Vec1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBPQuat_FindBetween_Parms, Vec1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::NewProp_Vec2 = { "Vec2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBPQuat_FindBetween_Parms, Vec2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBPQuat_FindBetween_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::NewProp_Vec1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::NewProp_Vec2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
		{ "Comment", "// Returns a delta rotation to have Vec1 point towards Vec2, assumes that the v\n" },
		{ "DisplayName", "FindBetween" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Returns a delta rotation to have Vec1 point towards Vec2, assumes that the v" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "BPQuat_FindBetween", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventBPQuat_FindBetween_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics
	{
		struct VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms
		{
			FTransform_NetQuantize InTransform;
			FVector Location;
			FRotator Rotation;
			FVector Scale;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms, InTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_InTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_InTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRExpansionLibrary|TransformNetQuantize" },
		{ "Comment", "/** Breaks apart a transform net quantize into location, rotation and scale */" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks apart a transform net quantize into location, rotation and scale" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "BreakTransform_NetQuantize", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics
	{
		struct VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize_Parms
		{
			FVector InVector;
			FVector_NetQuantize ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::NewProp_InVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::NewProp_InVector_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::NewProp_InVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "VRExpansionLibrary|FVectorNetQuantize" },
		{ "Comment", "/** Converts a vector into a FVector_NetQuantize */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToVector_NetQuantize (Vector)" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Converts a vector into a FVector_NetQuantize" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "Conv_FVectorToFVectorNetQuantize", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics
	{
		struct VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize10_Parms
		{
			FVector InVector;
			FVector_NetQuantize10 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize10_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::NewProp_InVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::NewProp_InVector_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize10_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::NewProp_InVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "VRExpansionLibrary|FVectorNetQuantize" },
		{ "Comment", "/** Converts a vector into a FVector_NetQuantize10 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToVector_NetQuantize10 (Vector)" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Converts a vector into a FVector_NetQuantize10" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "Conv_FVectorToFVectorNetQuantize10", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize10_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics
	{
		struct VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize100_Parms
		{
			FVector InVector;
			FVector_NetQuantize100 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize100_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::NewProp_InVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::NewProp_InVector_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize100_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::NewProp_InVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "VRExpansionLibrary|FVectorNetQuantize" },
		{ "Comment", "/** Converts a vector into a FVector_NetQuantize100 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToVector_NetQuantize100 (Vector)" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Converts a vector into a FVector_NetQuantize100" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "Conv_FVectorToFVectorNetQuantize100", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize100_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics
	{
		struct VRExpansionFunctionLibrary_eventConv_GripPairToGripID_Parms
		{
			FBPGripPair GripPair;
			uint8 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripPair_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripPair;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::NewProp_GripPair_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::NewProp_GripPair = { "GripPair", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_GripPairToGripID_Parms, GripPair), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::NewProp_GripPair_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::NewProp_GripPair_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_GripPairToGripID_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::NewProp_GripPair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "/** Converts a FBPGripPair into a GripID */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToGripID (FBPGripPair)" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Converts a FBPGripPair into a GripID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "Conv_GripPairToGripID", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventConv_GripPairToGripID_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics
	{
		struct VRExpansionFunctionLibrary_eventConv_GripPairToMotionController_Parms
		{
			FBPGripPair GripPair;
			UGripMotionControllerComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripPair_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripPair;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::NewProp_GripPair_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::NewProp_GripPair = { "GripPair", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_GripPairToMotionController_Parms, GripPair), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::NewProp_GripPair_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::NewProp_GripPair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_GripPairToMotionController_Parms, ReturnValue), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::NewProp_GripPair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "/** Converts a FBPGripPair into a MotionController */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToController (FBPGripPair)" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Converts a FBPGripPair into a MotionController" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "Conv_GripPairToMotionController", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventConv_GripPairToMotionController_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics
	{
		struct VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms
		{
			FTransform InTransform;
			FTransform_NetQuantize ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::NewProp_InTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::NewProp_InTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "VRExpansionLibrary|TransformNetQuantize" },
		{ "Comment", "/** Converts a FTransform into a FTransform_NetQuantize */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToTransform_NetQuantize (Transform)" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Converts a FTransform into a FTransform_NetQuantize" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "Conv_TransformToTransformNetQuantize", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics
	{
		struct VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms
		{
			FBPActorGripInformation A;
			FBPActorGripInformation B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms, A), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms, B), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_B_MetaData)) };
	void Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRExpansionFunctions" },
		{ "Comment", "/* Returns true if the values are equal (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal VR Grip" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Returns true if the values are equal (A == B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "EqualEqual_FBPActorGripInformation", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics
	{
		struct VRExpansionFunctionLibrary_eventGetFirstGameplayTagWithExactParent_Parms
		{
			FGameplayTag DirectParentTag;
			FGameplayTagContainer BaseContainer;
			FGameplayTag FoundTag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectParentTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseContainer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoundTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_DirectParentTag = { "DirectParentTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetFirstGameplayTagWithExactParent_Parms, DirectParentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_BaseContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_BaseContainer = { "BaseContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetFirstGameplayTagWithExactParent_Parms, BaseContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_BaseContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_BaseContainer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_FoundTag = { "FoundTag", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetFirstGameplayTagWithExactParent_Parms, FoundTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRExpansionFunctionLibrary_eventGetFirstGameplayTagWithExactParent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventGetFirstGameplayTagWithExactParent_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_DirectParentTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_BaseContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_FoundTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09* Determine if any tag in the BaseContainer has the exact same direct parent tag and returns the first one\n\x09* @param TagParent\x09\x09Required direct parent tag\n\x09* @param BaseContainer\x09""Container containing values to check\n\n\x09* @return True if any tag was found and also returns the tag\n\x09*/" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Determine if any tag in the BaseContainer has the exact same direct parent tag and returns the first one\n@param TagParent              Required direct parent tag\n@param BaseContainer  Container containing values to check\n\n@return True if any tag was found and also returns the tag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetFirstGameplayTagWithExactParent", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventGetFirstGameplayTagWithExactParent_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics
	{
		struct VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms
		{
			FName SlotType;
			AActor* Actor;
			FVector WorldLocation;
			float MaxRange;
			bool bHadSlotInRange;
			FTransform SlotWorldTransform;
			FName SlotName;
			UGripMotionControllerComponent* QueryController;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
		static void NewProp_bHadSlotInRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadSlotInRange;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotWorldTransform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_SlotType = { "SlotType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, SlotType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, MaxRange), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_bHadSlotInRange_SetBit(void* Obj)
	{
		((VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms*)Obj)->bHadSlotInRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_bHadSlotInRange = { "bHadSlotInRange", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_bHadSlotInRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_SlotWorldTransform = { "SlotWorldTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_QueryController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_QueryController = { "QueryController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, QueryController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_QueryController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_QueryController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_SlotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_bHadSlotInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_SlotWorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_QueryController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRGrip" },
		{ "Comment", "// Gets if an actors root component contains a grip slot within range\n" },
		{ "CPP_Default_QueryController", "None" },
		{ "DisplayName", "GetGripSlotInRangeByTypeName" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets if an actors root component contains a grip slot within range" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetGripSlotInRangeByTypeName", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics
	{
		struct VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms
		{
			FName SlotType;
			UPrimitiveComponent* Component;
			FVector WorldLocation;
			float MaxRange;
			bool bHadSlotInRange;
			FTransform SlotWorldTransform;
			FName SlotName;
			UGripMotionControllerComponent* QueryController;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
		static void NewProp_bHadSlotInRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadSlotInRange;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotWorldTransform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_SlotType = { "SlotType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, SlotType), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, MaxRange), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_bHadSlotInRange_SetBit(void* Obj)
	{
		((VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms*)Obj)->bHadSlotInRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_bHadSlotInRange = { "bHadSlotInRange", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_bHadSlotInRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_SlotWorldTransform = { "SlotWorldTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_QueryController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_QueryController = { "QueryController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, QueryController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_QueryController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_QueryController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_SlotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_bHadSlotInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_SlotWorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_QueryController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRGrip" },
		{ "Comment", "// Gets if an actors root component contains a grip slot within range\n" },
		{ "CPP_Default_QueryController", "None" },
		{ "DisplayName", "GetGripSlotInRangeByTypeName_Component" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets if an actors root component contains a grip slot within range" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetGripSlotInRangeByTypeName_Component", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics
	{
		struct VRExpansionFunctionLibrary_eventGetHandFromMotionSourceName_Parms
		{
			FName MotionSource;
			EControllerHand Hand;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MotionSource;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_MotionSource = { "MotionSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetHandFromMotionSourceName_Parms, MotionSource), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetHandFromMotionSourceName_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRExpansionFunctionLibrary_eventGetHandFromMotionSourceName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventGetHandFromMotionSourceName_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_MotionSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
		{ "DisplayName", "GetHandFromMotionSourceName" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetHandFromMotionSourceName", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventGetHandFromMotionSourceName_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics
	{
		struct VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms
		{
			FRotator HMDRotation;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HMDRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::NewProp_HMDRotation = { "HMDRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms, HMDRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::NewProp_HMDRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
		{ "Comment", "// Gets the unwound yaw of the HMD\n" },
		{ "DisplayName", "GetHMDPureYaw" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets the unwound yaw of the HMD" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetHMDPureYaw", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics
	{
		struct VRExpansionFunctionLibrary_eventGetHMDType_Parms
		{
			EBPHMDDeviceType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetHMDType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
		{ "Comment", "// Gets whether an HMD device is connected\n" },
		{ "DisplayName", "GetHMDType" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets whether an HMD device is connected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetHMDType", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventGetHMDType_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics
	{
		struct VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms
		{
			AActor* ActorToCheck;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::NewProp_ActorToCheck = { "ActorToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms, ActorToCheck), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::NewProp_ActorToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
		{ "Comment", "// Gets whether an HMD device is connected\n" },
		{ "DisplayName", "GetIsActorMovable" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets whether an HMD device is connected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetIsActorMovable", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics
	{
		struct VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms
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
	void Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
		{ "Comment", "// Gets whether an HMD device is connected\n" },
		{ "DisplayName", "GetIsHMDConnected" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets whether an HMD device is connected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetIsHMDConnected", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics
	{
		struct VRExpansionFunctionLibrary_eventGetIsHMDWorn_Parms
		{
			EBPHMDWornState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetIsHMDWorn_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
		{ "Comment", "// Gets whether an HMD device is connected\n" },
		{ "DisplayName", "GetIsHMDWorn" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets whether an HMD device is connected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetIsHMDWorn", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventGetIsHMDWorn_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics
	{
		struct VRExpansionFunctionLibrary_eventGetPeak_PeakLowPassFilter_Parms
		{
			FBPLowPassPeakFilter TargetPeakFilter;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPeakFilter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::NewProp_TargetPeakFilter = { "TargetPeakFilter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetPeak_PeakLowPassFilter_Parms, TargetPeakFilter), Z_Construct_UScriptStruct_FBPLowPassPeakFilter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetPeak_PeakLowPassFilter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::NewProp_TargetPeakFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "LowPassFilter_Peak" },
		{ "Comment", "/** Gets the peak value of the Peak Low Pass Filter */" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets the peak value of the Peak Low Pass Filter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetPeak_PeakLowPassFilter", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventGetPeak_PeakLowPassFilter_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics
	{
		struct VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms
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
	void Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
		{ "Comment", "// Gets whether the game is running in VRPreview\n" },
		{ "DisplayName", "IsInVREditorPreview" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets whether the game is running in VRPreview" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "IsInVREditorPreview", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics
	{
		struct VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms
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
	void Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
		{ "Comment", "// Gets whether the game is running in VRPreview or is a non editor build game (returns true for either).\n" },
		{ "DisplayName", "IsInVREditorPreviewOrGame" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Gets whether the game is running in VRPreview or is a non editor build game (returns true for either)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "IsInVREditorPreviewOrGame", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics
	{
		struct VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms
		{
			FVector lastAverage;
			FVector newSample;
			FVector newAverage;
			float sampleFactor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lastAverage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newSample;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newAverage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sampleFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::NewProp_lastAverage = { "lastAverage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms, lastAverage), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::NewProp_newSample = { "newSample", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms, newSample), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::NewProp_newAverage = { "newAverage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms, newAverage), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::NewProp_sampleFactor = { "sampleFactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms, sampleFactor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::NewProp_lastAverage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::NewProp_newSample,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::NewProp_newAverage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::NewProp_sampleFactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
		{ "Comment", "// A exponential low pass filter\n" },
		{ "CPP_Default_sampleFactor", "0.250000" },
		{ "DisplayName", "LowPassFilter_Exponential" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "A exponential low pass filter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "LowPassFilter_Exponential", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics
	{
		struct VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms
		{
			FVector lastAverage;
			FVector newSample;
			FVector newAverage;
			int32 numSamples;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lastAverage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newSample;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newAverage;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numSamples;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::NewProp_lastAverage = { "lastAverage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms, lastAverage), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::NewProp_newSample = { "newSample", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms, newSample), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::NewProp_newAverage = { "newAverage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms, newAverage), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::NewProp_numSamples = { "numSamples", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms, numSamples), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::NewProp_lastAverage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::NewProp_newSample,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::NewProp_newAverage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::NewProp_numSamples,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
		{ "Comment", "// A Rolling average low pass filter\n" },
		{ "CPP_Default_numSamples", "10" },
		{ "DisplayName", "LowPassFilter_RollingAverage" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "A Rolling average low pass filter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "LowPassFilter_RollingAverage", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics
	{
		struct VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms
		{
			FVector Location;
			FRotator Rotation;
			FVector Scale;
			FTransform_NetQuantize ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRExpansionLibrary|TransformNetQuantize" },
		{ "Comment", "/** Make a transform net quantize from location, rotation and scale */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "Scale", "1,1,1" },
		{ "ToolTip", "Make a transform net quantize from location, rotation and scale" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "MakeTransform_NetQuantize", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics
	{
		struct VRExpansionFunctionLibrary_eventMakeVector_NetQuantize_Parms
		{
			FVector InVector;
			FVector_NetQuantize ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeVector_NetQuantize_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeVector_NetQuantize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::NewProp_InVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRExpansionLibrary|FVectorNetQuantize" },
		{ "Comment", "/** Make a transform net quantize from location, rotation and scale */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "Scale", "1,1,1" },
		{ "ToolTip", "Make a transform net quantize from location, rotation and scale" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "MakeVector_NetQuantize", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventMakeVector_NetQuantize_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics
	{
		struct VRExpansionFunctionLibrary_eventMakeVector_NetQuantize10_Parms
		{
			FVector InVector;
			FVector_NetQuantize10 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeVector_NetQuantize10_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeVector_NetQuantize10_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::NewProp_InVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRExpansionLibrary|FVectorNetQuantize" },
		{ "Comment", "/** Make a transform net quantize10 from location, rotation and scale */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "Scale", "1,1,1" },
		{ "ToolTip", "Make a transform net quantize10 from location, rotation and scale" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "MakeVector_NetQuantize10", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventMakeVector_NetQuantize10_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics
	{
		struct VRExpansionFunctionLibrary_eventMakeVector_NetQuantize100_Parms
		{
			FVector InVector;
			FVector_NetQuantize100 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeVector_NetQuantize100_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeVector_NetQuantize100_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::NewProp_InVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRExpansionLibrary|FVectorNetQuantize" },
		{ "Comment", "/** Make a transform net quantize100 from location, rotation and scale */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "Scale", "1,1,1" },
		{ "ToolTip", "Make a transform net quantize100 from location, rotation and scale" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "MakeVector_NetQuantize100", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventMakeVector_NetQuantize100_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics
	{
		struct VRExpansionFunctionLibrary_eventMatchesAnyTagsWithDirectParentTag_Parms
		{
			FGameplayTag DirectParentTag;
			FGameplayTagContainer BaseContainer;
			FGameplayTagContainer OtherContainer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectParentTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherContainer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_DirectParentTag = { "DirectParentTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMatchesAnyTagsWithDirectParentTag_Parms, DirectParentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_BaseContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_BaseContainer = { "BaseContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMatchesAnyTagsWithDirectParentTag_Parms, BaseContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_BaseContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_BaseContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_OtherContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_OtherContainer = { "OtherContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMatchesAnyTagsWithDirectParentTag_Parms, OtherContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_OtherContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_OtherContainer_MetaData)) };
	void Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRExpansionFunctionLibrary_eventMatchesAnyTagsWithDirectParentTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventMatchesAnyTagsWithDirectParentTag_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_DirectParentTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_BaseContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_OtherContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09* Determine if any tag in the BaseContainer matches against any tag in OtherContainer with a required direct parent for both\n\x09*\n\x09* @param TagParent\x09\x09Required direct parent tag\n\x09* @param BaseContainer\x09""Container containing values to check\n\x09* @param OtherContainer\x09""Container to check against.\n\x09*\n\x09* @return True if any tag was found that matches any tags explicitly present in OtherContainer with the same DirectParent\n\x09*/" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Determine if any tag in the BaseContainer matches against any tag in OtherContainer with a required direct parent for both\n\n@param TagParent              Required direct parent tag\n@param BaseContainer  Container containing values to check\n@param OtherContainer Container to check against.\n\n@return True if any tag was found that matches any tags explicitly present in OtherContainer with the same DirectParent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "MatchesAnyTagsWithDirectParentTag", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventMatchesAnyTagsWithDirectParentTag_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics
	{
		struct VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms
		{
			UObject* WorldContextObject;
			TArray<FVector> InVerts;
			FVector SampleSurfaceNormal;
			FVector OutRectCenter;
			FRotator OutRectRotation;
			float OutSideLengthX;
			float OutSideLengthY;
			bool bDebugDraw;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVerts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVerts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InVerts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleSurfaceNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SampleSurfaceNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRectCenter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRectRotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutSideLengthX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutSideLengthY;
		static void NewProp_bDebugDraw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugDraw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_InVerts_Inner = { "InVerts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_InVerts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_InVerts = { "InVerts", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, InVerts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_InVerts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_InVerts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_SampleSurfaceNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_SampleSurfaceNormal = { "SampleSurfaceNormal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, SampleSurfaceNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_SampleSurfaceNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_SampleSurfaceNormal_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_OutRectCenter = { "OutRectCenter", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, OutRectCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_OutRectRotation = { "OutRectRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, OutRectRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_OutSideLengthX = { "OutSideLengthX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, OutSideLengthX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_OutSideLengthY = { "OutSideLengthY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, OutSideLengthY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_bDebugDraw_SetBit(void* Obj)
	{
		((VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms*)Obj)->bDebugDraw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_bDebugDraw = { "bDebugDraw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_bDebugDraw_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_InVerts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_InVerts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_SampleSurfaceNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_OutRectCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_OutRectRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_OutSideLengthX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_OutSideLengthY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_bDebugDraw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "VRExpansionFunctions" },
		{ "Comment", "/**\n\x09* Finds the minimum area rectangle that encloses all of the points in InVerts\n\x09* Engine default version is server only for some reason\n\x09* Uses algorithm found in http://www.geometrictools.com/Documentation/MinimumAreaRectangle.pdf\n\x09*\n\x09* @param\x09\x09InVerts\x09- Points to enclose in the rectangle\n\x09* @outparam\x09OutRectCenter - Center of the enclosing rectangle\n\x09* @outparam\x09OutRectSideA - Vector oriented and sized to represent one edge of the enclosing rectangle, orthogonal to OutRectSideB\n\x09* @outparam\x09OutRectSideB - Vector oriented and sized to represent one edge of the enclosing rectangle, orthogonal to OutRectSideA\n\x09*/" },
		{ "CPP_Default_bDebugDraw", "false" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Finds the minimum area rectangle that encloses all of the points in InVerts\nEngine default version is server only for some reason\nUses algorithm found in http://www.geometrictools.com/Documentation/MinimumAreaRectangle.pdf\n\n@param                InVerts - Points to enclose in the rectangle\n@outparam     OutRectCenter - Center of the enclosing rectangle\n@outparam     OutRectSideA - Vector oriented and sized to represent one edge of the enclosing rectangle, orthogonal to OutRectSideB\n@outparam     OutRectSideB - Vector oriented and sized to represent one edge of the enclosing rectangle, orthogonal to OutRectSideA" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "NonAuthorityMinimumAreaRectangle", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics
	{
		struct VRExpansionFunctionLibrary_eventResetEuroSmoothingFilter_Parms
		{
			FBPEuroLowPassFilter TargetEuroFilter;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetEuroFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::NewProp_TargetEuroFilter = { "TargetEuroFilter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventResetEuroSmoothingFilter_Parms, TargetEuroFilter), Z_Construct_UScriptStruct_FBPEuroLowPassFilter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::NewProp_TargetEuroFilter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "EuroLowPassFilter" },
		{ "Comment", "/** Resets a Euro Low Pass Filter so that the first time it is used again it is clean */" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Resets a Euro Low Pass Filter so that the first time it is used again it is clean" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "ResetEuroSmoothingFilter", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventResetEuroSmoothingFilter_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics
	{
		struct VRExpansionFunctionLibrary_eventResetPeakLowPassFilter_Parms
		{
			FBPLowPassPeakFilter TargetPeakFilter;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPeakFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::NewProp_TargetPeakFilter = { "TargetPeakFilter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventResetPeakLowPassFilter_Parms, TargetPeakFilter), Z_Construct_UScriptStruct_FBPLowPassPeakFilter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::NewProp_TargetPeakFilter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "LowPassFilter_Peak" },
		{ "Comment", "/** Resets a Filter so that the first time it is used again it is clean */" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Resets a Filter so that the first time it is used again it is clean" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "ResetPeakLowPassFilter", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventResetPeakLowPassFilter_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics
	{
		struct VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms
		{
			FRotator RotationDelta;
			FVector OriginalLocation;
			FRotator OriginalRotation;
			FVector PivotPoint;
			FVector NewLocation;
			FRotator NewRotation;
			bool bUseOriginalYawOnly;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationDelta;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static void NewProp_bUseOriginalYawOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOriginalYawOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_RotationDelta = { "RotationDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, RotationDelta), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_OriginalLocation = { "OriginalLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, OriginalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_OriginalRotation = { "OriginalRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, OriginalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_bUseOriginalYawOnly_SetBit(void* Obj)
	{
		((VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms*)Obj)->bUseOriginalYawOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_bUseOriginalYawOnly = { "bUseOriginalYawOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_bUseOriginalYawOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_RotationDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_OriginalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_OriginalRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_NewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_bUseOriginalYawOnly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
		{ "Comment", "// Applies a delta rotation around a pivot point, if bUseOriginalYawOnly is true then it only takes the original Yaw into account (characters)\n" },
		{ "CPP_Default_bUseOriginalYawOnly", "true" },
		{ "DisplayName", "RotateAroundPivot" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Applies a delta rotation around a pivot point, if bUseOriginalYawOnly is true then it only takes the original Yaw into account (characters)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "RotateAroundPivot", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics
	{
		struct VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms
		{
			FBPEuroLowPassFilter TargetEuroFilter;
			FVector InRawValue;
			float DeltaTime;
			FVector SmoothedValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetEuroFilter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRawValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothedValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_TargetEuroFilter = { "TargetEuroFilter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms, TargetEuroFilter), Z_Construct_UScriptStruct_FBPEuroLowPassFilter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_InRawValue = { "InRawValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms, InRawValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_DeltaTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_SmoothedValue = { "SmoothedValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms, SmoothedValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_TargetEuroFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_InRawValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_SmoothedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "EuroLowPassFilter" },
		{ "Comment", "/** Runs the smoothing function of a Euro Low Pass Filter */" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Runs the smoothing function of a Euro Low Pass Filter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "RunEuroSmoothingFilter", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics
	{
		struct VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms
		{
			UPrimitiveComponent* Prim1;
			FName OptionalBoneName1;
			UPrimitiveComponent* Prim2;
			FName OptionalBoneName2;
			bool bIgnoreCollision;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prim1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Prim1;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalBoneName1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prim2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Prim2;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalBoneName2;
		static void NewProp_bIgnoreCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_Prim1_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_Prim1 = { "Prim1", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms, Prim1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_Prim1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_Prim1_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_OptionalBoneName1 = { "OptionalBoneName1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms, OptionalBoneName1), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_Prim2_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_Prim2 = { "Prim2", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms, Prim2), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_Prim2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_Prim2_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_OptionalBoneName2 = { "OptionalBoneName2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms, OptionalBoneName2), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_bIgnoreCollision_SetBit(void* Obj)
	{
		((VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms*)Obj)->bIgnoreCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_bIgnoreCollision = { "bIgnoreCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_bIgnoreCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_Prim1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_OptionalBoneName1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_Prim2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_OptionalBoneName2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_bIgnoreCollision,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
		{ "Comment", "// Applies a delta rotation around a pivot point, if bUseOriginalYawOnly is true then it only takes the original Yaw into account (characters)\n" },
		{ "CPP_Default_bIgnoreCollision", "true" },
		{ "CPP_Default_OptionalBoneName1", "None" },
		{ "CPP_Default_OptionalBoneName2", "None" },
		{ "CPP_Default_Prim1", "None" },
		{ "CPP_Default_Prim2", "None" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Applies a delta rotation around a pivot point, if bUseOriginalYawOnly is true then it only takes the original Yaw into account (characters)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "SetObjectsIgnoreCollision", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics
	{
		struct VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms
		{
			USplineComponent* LaserSplineComponent;
			TArray<USplineMeshComponent*> LaserSplineMeshComponents;
			FVector InStartLocation;
			FVector InEndLocation;
			FVector InForward;
			float LaserRadius;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserSplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserSplineComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserSplineMeshComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserSplineMeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LaserSplineMeshComponents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InStartLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEndLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InForward;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaserRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineComponent = { "LaserSplineComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, LaserSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineMeshComponents_Inner = { "LaserSplineMeshComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineMeshComponents = { "LaserSplineMeshComponents", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, LaserSplineMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineMeshComponents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_InStartLocation = { "InStartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, InStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_InEndLocation = { "InEndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, InEndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_InForward = { "InForward", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, InForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserRadius = { "LaserRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, LaserRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineMeshComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineMeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_InStartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_InEndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_InForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "// Applies the same laser smoothing that the vr editor uses to an array of points\n" },
		{ "DisplayName", "Smooth Update Laser Spline" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Applies the same laser smoothing that the vr editor uses to an array of points" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "SmoothUpdateLaserSpline", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics
	{
		struct VRExpansionFunctionLibrary_eventUpdatePeakLowPassFilter_Parms
		{
			FBPLowPassPeakFilter TargetPeakFilter;
			FVector NewSample;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPeakFilter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSample;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::NewProp_TargetPeakFilter = { "TargetPeakFilter", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventUpdatePeakLowPassFilter_Parms, TargetPeakFilter), Z_Construct_UScriptStruct_FBPLowPassPeakFilter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::NewProp_NewSample = { "NewSample", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventUpdatePeakLowPassFilter_Parms, NewSample), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::NewProp_TargetPeakFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::NewProp_NewSample,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "LowPassFilter_Peak" },
		{ "Comment", "/** Adds an entry to the Peak low pass filter */" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "ToolTip", "Adds an entry to the Peak low pass filter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "UpdatePeakLowPassFilter", nullptr, nullptr, sizeof(VRExpansionFunctionLibrary_eventUpdatePeakLowPassFilter_Parms), Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary_NoRegister()
	{
		return UVRExpansionFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass, "AddSceneComponentByClass" }, // 2549926167
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween, "BPQuat_FindBetween" }, // 4134196243
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize, "BreakTransform_NetQuantize" }, // 3572632782
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize, "Conv_FVectorToFVectorNetQuantize" }, // 2566855309
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10, "Conv_FVectorToFVectorNetQuantize10" }, // 3746786875
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100, "Conv_FVectorToFVectorNetQuantize100" }, // 1481443182
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID, "Conv_GripPairToGripID" }, // 3643172826
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController, "Conv_GripPairToMotionController" }, // 75957989
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize, "Conv_TransformToTransformNetQuantize" }, // 1183286609
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation, "EqualEqual_FBPActorGripInformation" }, // 227838835
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent, "GetFirstGameplayTagWithExactParent" }, // 2904012256
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName, "GetGripSlotInRangeByTypeName" }, // 432943637
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component, "GetGripSlotInRangeByTypeName_Component" }, // 1199285544
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName, "GetHandFromMotionSourceName" }, // 2325131301
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw, "GetHMDPureYaw" }, // 1614377704
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType, "GetHMDType" }, // 1621450669
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable, "GetIsActorMovable" }, // 1081161538
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected, "GetIsHMDConnected" }, // 3582584278
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn, "GetIsHMDWorn" }, // 3455641311
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter, "GetPeak_PeakLowPassFilter" }, // 478563240
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview, "IsInVREditorPreview" }, // 3511023120
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame, "IsInVREditorPreviewOrGame" }, // 331967694
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential, "LowPassFilter_Exponential" }, // 3648139555
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage, "LowPassFilter_RollingAverage" }, // 370908136
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize, "MakeTransform_NetQuantize" }, // 1732556884
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize, "MakeVector_NetQuantize" }, // 3284269308
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10, "MakeVector_NetQuantize10" }, // 2188515309
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100, "MakeVector_NetQuantize100" }, // 3961059417
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag, "MatchesAnyTagsWithDirectParentTag" }, // 2439278880
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle, "NonAuthorityMinimumAreaRectangle" }, // 926120276
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter, "ResetEuroSmoothingFilter" }, // 3248625641
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter, "ResetPeakLowPassFilter" }, // 4031741986
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot, "RotateAroundPivot" }, // 4183109283
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter, "RunEuroSmoothingFilter" }, // 1392300973
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision, "SetObjectsIgnoreCollision" }, // 2898900854
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline, "SmoothUpdateLaserSpline" }, // 1016672930
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter, "UpdatePeakLowPassFilter" }, // 4167378928
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRExpansionFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRExpansionFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics::ClassParams = {
		&UVRExpansionFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRExpansionFunctionLibrary, 3214479629);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRExpansionFunctionLibrary>()
	{
		return UVRExpansionFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRExpansionFunctionLibrary(Z_Construct_UClass_UVRExpansionFunctionLibrary, &UVRExpansionFunctionLibrary::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRExpansionFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRExpansionFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
