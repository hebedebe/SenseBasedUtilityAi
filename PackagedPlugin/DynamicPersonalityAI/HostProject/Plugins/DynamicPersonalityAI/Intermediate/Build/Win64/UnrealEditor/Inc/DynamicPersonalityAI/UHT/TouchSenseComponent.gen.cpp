// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicPersonalityAI/Private/Components/Senses/DefaultVariants/Touch/TouchSenseComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchSenseComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UBaseSenseComponent();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UTouchSenseComponent();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UTouchSenseComponent_NoRegister();
DYNAMICPERSONALITYAI_API UFunction* Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_DynamicPersonalityAI();
// End Cross Module References

// Begin Delegate FOnTouchedSignature
struct Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics
{
	struct _Script_DynamicPersonalityAI_eventOnTouchedSignature_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Touch/TouchSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DynamicPersonalityAI_eventOnTouchedSignature_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DynamicPersonalityAI_eventOnTouchedSignature_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DynamicPersonalityAI_eventOnTouchedSignature_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DynamicPersonalityAI_eventOnTouchedSignature_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((_Script_DynamicPersonalityAI_eventOnTouchedSignature_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_DynamicPersonalityAI_eventOnTouchedSignature_Parms), &Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DynamicPersonalityAI_eventOnTouchedSignature_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DynamicPersonalityAI, nullptr, "OnTouchedSignature__DelegateSignature", "PrimitiveComponent", "OnComponentBeginOverlap", Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::_Script_DynamicPersonalityAI_eventOnTouchedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::_Script_DynamicPersonalityAI_eventOnTouchedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTouchedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnTouchedSignature, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult)
{
	struct _Script_DynamicPersonalityAI_eventOnTouchedSignature_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
	_Script_DynamicPersonalityAI_eventOnTouchedSignature_Parms Parms;
	Parms.OverlappedComponent=OverlappedComponent;
	Parms.OtherActor=OtherActor;
	Parms.OtherComp=OtherComp;
	Parms.OtherBodyIndex=OtherBodyIndex;
	Parms.bFromSweep=bFromSweep ? true : false;
	Parms.SweepResult=SweepResult;
	OnTouchedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTouchedSignature

// Begin Class UTouchSenseComponent Function HandleOwnerDamaged
struct Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics
{
	struct TouchSenseComponent_eventHandleOwnerDamaged_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Touch/TouchSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventHandleOwnerDamaged_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventHandleOwnerDamaged_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventHandleOwnerDamaged_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventHandleOwnerDamaged_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventHandleOwnerDamaged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchSenseComponent, nullptr, "HandleOwnerDamaged", nullptr, nullptr, Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::TouchSenseComponent_eventHandleOwnerDamaged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::TouchSenseComponent_eventHandleOwnerDamaged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchSenseComponent::execHandleOwnerDamaged)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOwnerDamaged(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// End Class UTouchSenseComponent Function HandleOwnerDamaged

// Begin Class UTouchSenseComponent Function HandleOwnerTouched
struct Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics
{
	struct TouchSenseComponent_eventHandleOwnerTouched_Parms
	{
		AActor* SelfActor;
		AActor* OtherActor;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Touch/TouchSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventHandleOwnerTouched_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventHandleOwnerTouched_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventHandleOwnerTouched_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventHandleOwnerTouched_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::NewProp_SelfActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchSenseComponent, nullptr, "HandleOwnerTouched", nullptr, nullptr, Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::TouchSenseComponent_eventHandleOwnerTouched_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::TouchSenseComponent_eventHandleOwnerTouched_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchSenseComponent::execHandleOwnerTouched)
{
	P_GET_OBJECT(AActor,Z_Param_SelfActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOwnerTouched(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class UTouchSenseComponent Function HandleOwnerTouched

// Begin Class UTouchSenseComponent Function OverlapEnd
struct Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics
{
	struct TouchSenseComponent_eventOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComponent;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Touch/TouchSenseComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventOverlapEnd_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComponent_MetaData), NewProp_OtherComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::NewProp_OtherComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchSenseComponent, nullptr, "OverlapEnd", nullptr, nullptr, Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::TouchSenseComponent_eventOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::TouchSenseComponent_eventOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchSenseComponent::execOverlapEnd)
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
// End Class UTouchSenseComponent Function OverlapEnd

// Begin Class UTouchSenseComponent Function OverlapStart
struct Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics
{
	struct TouchSenseComponent_eventOverlapStart_Parms
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
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Touch/TouchSenseComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventOverlapStart_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventOverlapStart_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventOverlapStart_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComponent_MetaData), NewProp_OtherComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventOverlapStart_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((TouchSenseComponent_eventOverlapStart_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TouchSenseComponent_eventOverlapStart_Parms), &Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchSenseComponent_eventOverlapStart_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::NewProp_OtherComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTouchSenseComponent, nullptr, "OverlapStart", nullptr, nullptr, Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::TouchSenseComponent_eventOverlapStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::TouchSenseComponent_eventOverlapStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchSenseComponent_OverlapStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchSenseComponent_OverlapStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchSenseComponent::execOverlapStart)
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
// End Class UTouchSenseComponent Function OverlapStart

// Begin Class UTouchSenseComponent
void UTouchSenseComponent::StaticRegisterNativesUTouchSenseComponent()
{
	UClass* Class = UTouchSenseComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleOwnerDamaged", &UTouchSenseComponent::execHandleOwnerDamaged },
		{ "HandleOwnerTouched", &UTouchSenseComponent::execHandleOwnerTouched },
		{ "OverlapEnd", &UTouchSenseComponent::execOverlapEnd },
		{ "OverlapStart", &UTouchSenseComponent::execOverlapStart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTouchSenseComponent);
UClass* Z_Construct_UClass_UTouchSenseComponent_NoRegister()
{
	return UTouchSenseComponent::StaticClass();
}
struct Z_Construct_UClass_UTouchSenseComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/Senses/DefaultVariants/Touch/TouchSenseComponent.h" },
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Touch/TouchSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSendHurtSignal_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Touch/TouchSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSendOverlapSignal_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Touch/TouchSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSendActorCollisionSignal_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Touch/TouchSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTouched_MetaData[] = {
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Touch/TouchSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colliders_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Touch/TouchSenseComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSendHurtSignal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendHurtSignal;
	static void NewProp_bSendOverlapSignal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendOverlapSignal;
	static void NewProp_bSendActorCollisionSignal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendActorCollisionSignal;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTouched;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Colliders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Colliders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerDamaged, "HandleOwnerDamaged" }, // 1189195848
		{ &Z_Construct_UFunction_UTouchSenseComponent_HandleOwnerTouched, "HandleOwnerTouched" }, // 1778696343
		{ &Z_Construct_UFunction_UTouchSenseComponent_OverlapEnd, "OverlapEnd" }, // 2833740336
		{ &Z_Construct_UFunction_UTouchSenseComponent_OverlapStart, "OverlapStart" }, // 2370774847
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchSenseComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_bSendHurtSignal_SetBit(void* Obj)
{
	((UTouchSenseComponent*)Obj)->bSendHurtSignal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_bSendHurtSignal = { "bSendHurtSignal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTouchSenseComponent), &Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_bSendHurtSignal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSendHurtSignal_MetaData), NewProp_bSendHurtSignal_MetaData) };
void Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_bSendOverlapSignal_SetBit(void* Obj)
{
	((UTouchSenseComponent*)Obj)->bSendOverlapSignal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_bSendOverlapSignal = { "bSendOverlapSignal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTouchSenseComponent), &Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_bSendOverlapSignal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSendOverlapSignal_MetaData), NewProp_bSendOverlapSignal_MetaData) };
void Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_bSendActorCollisionSignal_SetBit(void* Obj)
{
	((UTouchSenseComponent*)Obj)->bSendActorCollisionSignal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_bSendActorCollisionSignal = { "bSendActorCollisionSignal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTouchSenseComponent), &Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_bSendActorCollisionSignal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSendActorCollisionSignal_MetaData), NewProp_bSendActorCollisionSignal_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_OnTouched = { "OnTouched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchSenseComponent, OnTouched), Z_Construct_USparseDelegateFunction_DynamicPersonalityAI_OnTouchedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTouched_MetaData), NewProp_OnTouched_MetaData) }; // 2142392112
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_Colliders_Inner = { "Colliders", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_Colliders = { "Colliders", nullptr, (EPropertyFlags)0x002008800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTouchSenseComponent, Colliders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colliders_MetaData), NewProp_Colliders_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTouchSenseComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_bSendHurtSignal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_bSendOverlapSignal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_bSendActorCollisionSignal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_OnTouched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_Colliders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchSenseComponent_Statics::NewProp_Colliders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchSenseComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTouchSenseComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseSenseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicPersonalityAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchSenseComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchSenseComponent_Statics::ClassParams = {
	&UTouchSenseComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTouchSenseComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTouchSenseComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchSenseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchSenseComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchSenseComponent()
{
	if (!Z_Registration_Info_UClass_UTouchSenseComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchSenseComponent.OuterSingleton, Z_Construct_UClass_UTouchSenseComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchSenseComponent.OuterSingleton;
}
template<> DYNAMICPERSONALITYAI_API UClass* StaticClass<UTouchSenseComponent>()
{
	return UTouchSenseComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchSenseComponent);
UTouchSenseComponent::~UTouchSenseComponent() {}
// End Class UTouchSenseComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Touch_TouchSenseComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchSenseComponent, UTouchSenseComponent::StaticClass, TEXT("UTouchSenseComponent"), &Z_Registration_Info_UClass_UTouchSenseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchSenseComponent), 3577628409U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Touch_TouchSenseComponent_h_1269604620(TEXT("/Script/DynamicPersonalityAI"),
	Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Touch_TouchSenseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Touch_TouchSenseComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
