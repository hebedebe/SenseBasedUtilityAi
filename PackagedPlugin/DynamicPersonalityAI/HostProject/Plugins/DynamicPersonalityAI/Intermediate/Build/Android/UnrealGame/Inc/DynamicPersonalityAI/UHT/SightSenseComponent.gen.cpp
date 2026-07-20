// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicPersonalityAI/Private/Components/Senses/DefaultVariants/Sight/SightSenseComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSightSenseComponent() {}

// Begin Cross Module References
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UBaseSenseComponent();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_USightSenseComponent();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_USightSenseComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_DynamicPersonalityAI();
// End Cross Module References

// Begin Class USightSenseComponent Function OverlapEnd
struct Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics
{
	struct SightSenseComponent_eventOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComponent;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Sight/SightSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SightSenseComponent_eventOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SightSenseComponent_eventOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SightSenseComponent_eventOverlapEnd_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComponent_MetaData), NewProp_OtherComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SightSenseComponent_eventOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::NewProp_OtherComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USightSenseComponent, nullptr, "OverlapEnd", nullptr, nullptr, Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::SightSenseComponent_eventOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::SightSenseComponent_eventOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USightSenseComponent_OverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USightSenseComponent_OverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USightSenseComponent::execOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class USightSenseComponent Function OverlapEnd

// Begin Class USightSenseComponent Function OverlapStart
struct Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics
{
	struct SightSenseComponent_eventOverlapStart_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComponent;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Sight/SightSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SightSenseComponent_eventOverlapStart_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SightSenseComponent_eventOverlapStart_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SightSenseComponent_eventOverlapStart_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComponent_MetaData), NewProp_OtherComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SightSenseComponent_eventOverlapStart_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SightSenseComponent_eventOverlapStart_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SightSenseComponent_eventOverlapStart_Parms), &Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SightSenseComponent_eventOverlapStart_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::NewProp_OtherComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USightSenseComponent, nullptr, "OverlapStart", nullptr, nullptr, Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::SightSenseComponent_eventOverlapStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::SightSenseComponent_eventOverlapStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USightSenseComponent_OverlapStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USightSenseComponent_OverlapStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USightSenseComponent::execOverlapStart)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverlapStart(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class USightSenseComponent Function OverlapStart

// Begin Class USightSenseComponent Function ProcessNearObjects
struct Z_Construct_UFunction_USightSenseComponent_ProcessNearObjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Sight/SightSenseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USightSenseComponent_ProcessNearObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USightSenseComponent, nullptr, "ProcessNearObjects", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USightSenseComponent_ProcessNearObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_USightSenseComponent_ProcessNearObjects_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USightSenseComponent_ProcessNearObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USightSenseComponent_ProcessNearObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USightSenseComponent::execProcessNearObjects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessNearObjects();
	P_NATIVE_END;
}
// End Class USightSenseComponent Function ProcessNearObjects

// Begin Class USightSenseComponent
void USightSenseComponent::StaticRegisterNativesUSightSenseComponent()
{
	UClass* Class = USightSenseComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OverlapEnd", &USightSenseComponent::execOverlapEnd },
		{ "OverlapStart", &USightSenseComponent::execOverlapStart },
		{ "ProcessNearObjects", &USightSenseComponent::execProcessNearObjects },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USightSenseComponent);
UClass* Z_Construct_UClass_USightSenseComponent_NoRegister()
{
	return USightSenseComponent::StaticClass();
}
struct Z_Construct_UClass_USightSenseComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/Senses/DefaultVariants/Sight/SightSenseComponent.h" },
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Sight/SightSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFrequency_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Sight/SightSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Sight/SightSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colliders_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Sight/SightSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponents_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Sight/SightSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleComponents_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Sight/SightSenseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateFrequency;
	static void NewProp_bDrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Colliders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Colliders;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlappedComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisibleComponents_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_VisibleComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USightSenseComponent_OverlapEnd, "OverlapEnd" }, // 2543261465
		{ &Z_Construct_UFunction_USightSenseComponent_OverlapStart, "OverlapStart" }, // 723082211
		{ &Z_Construct_UFunction_USightSenseComponent_ProcessNearObjects, "ProcessNearObjects" }, // 1534923250
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USightSenseComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USightSenseComponent_Statics::NewProp_UpdateFrequency = { "UpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USightSenseComponent, UpdateFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateFrequency_MetaData), NewProp_UpdateFrequency_MetaData) };
void Z_Construct_UClass_USightSenseComponent_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
{
	((USightSenseComponent*)Obj)->bDrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USightSenseComponent_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USightSenseComponent), &Z_Construct_UClass_USightSenseComponent_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebug_MetaData), NewProp_bDrawDebug_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USightSenseComponent_Statics::NewProp_Colliders_Inner = { "Colliders", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USightSenseComponent_Statics::NewProp_Colliders = { "Colliders", nullptr, (EPropertyFlags)0x002008800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USightSenseComponent, Colliders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colliders_MetaData), NewProp_Colliders_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USightSenseComponent_Statics::NewProp_OverlappedComponents_Inner = { "OverlappedComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USightSenseComponent_Statics::NewProp_OverlappedComponents = { "OverlappedComponents", nullptr, (EPropertyFlags)0x002008800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USightSenseComponent, OverlappedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponents_MetaData), NewProp_OverlappedComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USightSenseComponent_Statics::NewProp_VisibleComponents_ElementProp = { "VisibleComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_USightSenseComponent_Statics::NewProp_VisibleComponents = { "VisibleComponents", nullptr, (EPropertyFlags)0x002008800000001c, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USightSenseComponent, VisibleComponents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleComponents_MetaData), NewProp_VisibleComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USightSenseComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightSenseComponent_Statics::NewProp_UpdateFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightSenseComponent_Statics::NewProp_bDrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightSenseComponent_Statics::NewProp_Colliders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightSenseComponent_Statics::NewProp_Colliders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightSenseComponent_Statics::NewProp_OverlappedComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightSenseComponent_Statics::NewProp_OverlappedComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightSenseComponent_Statics::NewProp_VisibleComponents_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightSenseComponent_Statics::NewProp_VisibleComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USightSenseComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USightSenseComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseSenseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicPersonalityAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USightSenseComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USightSenseComponent_Statics::ClassParams = {
	&USightSenseComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USightSenseComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USightSenseComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USightSenseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USightSenseComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USightSenseComponent()
{
	if (!Z_Registration_Info_UClass_USightSenseComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USightSenseComponent.OuterSingleton, Z_Construct_UClass_USightSenseComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USightSenseComponent.OuterSingleton;
}
template<> DYNAMICPERSONALITYAI_API UClass* StaticClass<USightSenseComponent>()
{
	return USightSenseComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USightSenseComponent);
USightSenseComponent::~USightSenseComponent() {}
// End Class USightSenseComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Sight_SightSenseComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USightSenseComponent, USightSenseComponent::StaticClass, TEXT("USightSenseComponent"), &Z_Registration_Info_UClass_USightSenseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USightSenseComponent), 3396537472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Sight_SightSenseComponent_h_3897462598(TEXT("/Script/DynamicPersonalityAI"),
	Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Sight_SightSenseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Sight_SightSenseComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
