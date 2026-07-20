// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicPersonalityAI/Private/Components/Behaviour/BehaviourComponent.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviourComponent() {}

// Begin Cross Module References
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UBehaviourComponent();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UBehaviourComponent_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UBehaviourData_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UBehaviourFunctionality_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UMemoryComponent_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UMood_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UPersonaComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_DynamicPersonalityAI();
// End Cross Module References

// Begin Class UBehaviourComponent Function EnterBehaviour
struct Z_Construct_UFunction_UBehaviourComponent_EnterBehaviour_Statics
{
	struct BehaviourComponent_eventEnterBehaviour_Parms
	{
		UBehaviourData* Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Behaviour/BehaviourComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviourComponent_EnterBehaviour_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviourComponent_eventEnterBehaviour_Parms, Data), Z_Construct_UClass_UBehaviourData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviourComponent_EnterBehaviour_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviourComponent_EnterBehaviour_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourComponent_EnterBehaviour_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviourComponent_EnterBehaviour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviourComponent, nullptr, "EnterBehaviour", nullptr, nullptr, Z_Construct_UFunction_UBehaviourComponent_EnterBehaviour_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourComponent_EnterBehaviour_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviourComponent_EnterBehaviour_Statics::BehaviourComponent_eventEnterBehaviour_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourComponent_EnterBehaviour_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviourComponent_EnterBehaviour_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviourComponent_EnterBehaviour_Statics::BehaviourComponent_eventEnterBehaviour_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviourComponent_EnterBehaviour()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviourComponent_EnterBehaviour_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviourComponent::execEnterBehaviour)
{
	P_GET_OBJECT(UBehaviourData,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterBehaviour(Z_Param_Data);
	P_NATIVE_END;
}
// End Class UBehaviourComponent Function EnterBehaviour

// Begin Class UBehaviourComponent Function EvaluateBehaviours
struct Z_Construct_UFunction_UBehaviourComponent_EvaluateBehaviours_Statics
{
	struct BehaviourComponent_eventEvaluateBehaviours_Parms
	{
		UBehaviourData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Behaviour/BehaviourComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviourComponent_EvaluateBehaviours_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviourComponent_eventEvaluateBehaviours_Parms, ReturnValue), Z_Construct_UClass_UBehaviourData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviourComponent_EvaluateBehaviours_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviourComponent_EvaluateBehaviours_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourComponent_EvaluateBehaviours_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviourComponent_EvaluateBehaviours_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviourComponent, nullptr, "EvaluateBehaviours", nullptr, nullptr, Z_Construct_UFunction_UBehaviourComponent_EvaluateBehaviours_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourComponent_EvaluateBehaviours_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviourComponent_EvaluateBehaviours_Statics::BehaviourComponent_eventEvaluateBehaviours_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourComponent_EvaluateBehaviours_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviourComponent_EvaluateBehaviours_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviourComponent_EvaluateBehaviours_Statics::BehaviourComponent_eventEvaluateBehaviours_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviourComponent_EvaluateBehaviours()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviourComponent_EvaluateBehaviours_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviourComponent::execEvaluateBehaviours)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBehaviourData**)Z_Param__Result=P_THIS->EvaluateBehaviours();
	P_NATIVE_END;
}
// End Class UBehaviourComponent Function EvaluateBehaviours

// Begin Class UBehaviourComponent Function ExitBehaviour
struct Z_Construct_UFunction_UBehaviourComponent_ExitBehaviour_Statics
{
	struct BehaviourComponent_eventExitBehaviour_Parms
	{
		UBehaviourData* Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Behaviour/BehaviourComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviourComponent_ExitBehaviour_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviourComponent_eventExitBehaviour_Parms, Data), Z_Construct_UClass_UBehaviourData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviourComponent_ExitBehaviour_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviourComponent_ExitBehaviour_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourComponent_ExitBehaviour_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviourComponent_ExitBehaviour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviourComponent, nullptr, "ExitBehaviour", nullptr, nullptr, Z_Construct_UFunction_UBehaviourComponent_ExitBehaviour_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourComponent_ExitBehaviour_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviourComponent_ExitBehaviour_Statics::BehaviourComponent_eventExitBehaviour_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourComponent_ExitBehaviour_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviourComponent_ExitBehaviour_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviourComponent_ExitBehaviour_Statics::BehaviourComponent_eventExitBehaviour_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviourComponent_ExitBehaviour()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviourComponent_ExitBehaviour_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviourComponent::execExitBehaviour)
{
	P_GET_OBJECT(UBehaviourData,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExitBehaviour(Z_Param_Data);
	P_NATIVE_END;
}
// End Class UBehaviourComponent Function ExitBehaviour

// Begin Class UBehaviourComponent Function GetPersonaWeights
struct Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics
{
	struct BehaviourComponent_eventGetPersonaWeights_Parms
	{
		TMap<UMood*,float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Behaviour/BehaviourComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMood_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviourComponent_eventGetPersonaWeights_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviourComponent, nullptr, "GetPersonaWeights", nullptr, nullptr, Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics::BehaviourComponent_eventGetPersonaWeights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics::BehaviourComponent_eventGetPersonaWeights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviourComponent::execGetPersonaWeights)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<UMood*,float>*)Z_Param__Result=P_THIS->GetPersonaWeights();
	P_NATIVE_END;
}
// End Class UBehaviourComponent Function GetPersonaWeights

// Begin Class UBehaviourComponent Function TickBehaviour
struct Z_Construct_UFunction_UBehaviourComponent_TickBehaviour_Statics
{
	struct BehaviourComponent_eventTickBehaviour_Parms
	{
		UBehaviourData* Data;
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Behaviour/BehaviourComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviourComponent_TickBehaviour_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviourComponent_eventTickBehaviour_Parms, Data), Z_Construct_UClass_UBehaviourData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBehaviourComponent_TickBehaviour_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviourComponent_eventTickBehaviour_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviourComponent_TickBehaviour_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviourComponent_TickBehaviour_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviourComponent_TickBehaviour_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourComponent_TickBehaviour_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviourComponent_TickBehaviour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviourComponent, nullptr, "TickBehaviour", nullptr, nullptr, Z_Construct_UFunction_UBehaviourComponent_TickBehaviour_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourComponent_TickBehaviour_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviourComponent_TickBehaviour_Statics::BehaviourComponent_eventTickBehaviour_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourComponent_TickBehaviour_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviourComponent_TickBehaviour_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviourComponent_TickBehaviour_Statics::BehaviourComponent_eventTickBehaviour_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviourComponent_TickBehaviour()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviourComponent_TickBehaviour_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviourComponent::execTickBehaviour)
{
	P_GET_OBJECT(UBehaviourData,Z_Param_Data);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TickBehaviour(Z_Param_Data,Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UBehaviourComponent Function TickBehaviour

// Begin Class UBehaviourComponent
void UBehaviourComponent::StaticRegisterNativesUBehaviourComponent()
{
	UClass* Class = UBehaviourComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnterBehaviour", &UBehaviourComponent::execEnterBehaviour },
		{ "EvaluateBehaviours", &UBehaviourComponent::execEvaluateBehaviours },
		{ "ExitBehaviour", &UBehaviourComponent::execExitBehaviour },
		{ "GetPersonaWeights", &UBehaviourComponent::execGetPersonaWeights },
		{ "TickBehaviour", &UBehaviourComponent::execTickBehaviour },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviourComponent);
UClass* Z_Construct_UClass_UBehaviourComponent_NoRegister()
{
	return UBehaviourComponent::StaticClass();
}
struct Z_Construct_UClass_UBehaviourComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/Behaviour/BehaviourComponent.h" },
		{ "ModuleRelativePath", "Private/Components/Behaviour/BehaviourComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviourEvaluationFrequency_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Behaviour/BehaviourComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviourData_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Behaviour/BehaviourComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Persona_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Components/Behaviour/BehaviourComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Components/Behaviour/BehaviourComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveBehaviour_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Behaviour/BehaviourComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviourEvaluationTimerHandle_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Behaviour/BehaviourComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviourFunctionalities_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Behaviour/BehaviourComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BehaviourEvaluationFrequency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviourData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BehaviourData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Persona;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Memory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveBehaviour;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BehaviourEvaluationTimerHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviourFunctionalities_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviourFunctionalities_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BehaviourFunctionalities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBehaviourComponent_EnterBehaviour, "EnterBehaviour" }, // 1894712318
		{ &Z_Construct_UFunction_UBehaviourComponent_EvaluateBehaviours, "EvaluateBehaviours" }, // 1792309328
		{ &Z_Construct_UFunction_UBehaviourComponent_ExitBehaviour, "ExitBehaviour" }, // 4156511493
		{ &Z_Construct_UFunction_UBehaviourComponent_GetPersonaWeights, "GetPersonaWeights" }, // 2525451449
		{ &Z_Construct_UFunction_UBehaviourComponent_TickBehaviour, "TickBehaviour" }, // 46512592
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviourComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_BehaviourEvaluationFrequency = { "BehaviourEvaluationFrequency", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviourComponent, BehaviourEvaluationFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviourEvaluationFrequency_MetaData), NewProp_BehaviourEvaluationFrequency_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_BehaviourData_Inner = { "BehaviourData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBehaviourData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_BehaviourData = { "BehaviourData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviourComponent, BehaviourData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviourData_MetaData), NewProp_BehaviourData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_Persona = { "Persona", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviourComponent, Persona), Z_Construct_UClass_UPersonaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Persona_MetaData), NewProp_Persona_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviourComponent, Memory), Z_Construct_UClass_UMemoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Memory_MetaData), NewProp_Memory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_ActiveBehaviour = { "ActiveBehaviour", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviourComponent, ActiveBehaviour), Z_Construct_UClass_UBehaviourData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveBehaviour_MetaData), NewProp_ActiveBehaviour_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_BehaviourEvaluationTimerHandle = { "BehaviourEvaluationTimerHandle", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviourComponent, BehaviourEvaluationTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviourEvaluationTimerHandle_MetaData), NewProp_BehaviourEvaluationTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_BehaviourFunctionalities_ValueProp = { "BehaviourFunctionalities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UBehaviourFunctionality_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_BehaviourFunctionalities_Key_KeyProp = { "BehaviourFunctionalities_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBehaviourData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_BehaviourFunctionalities = { "BehaviourFunctionalities", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviourComponent, BehaviourFunctionalities), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviourFunctionalities_MetaData), NewProp_BehaviourFunctionalities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviourComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_BehaviourEvaluationFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_BehaviourData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_BehaviourData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_Persona,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_Memory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_ActiveBehaviour,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_BehaviourEvaluationTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_BehaviourFunctionalities_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_BehaviourFunctionalities_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviourComponent_Statics::NewProp_BehaviourFunctionalities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviourComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviourComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicPersonalityAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviourComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviourComponent_Statics::ClassParams = {
	&UBehaviourComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBehaviourComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviourComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviourComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviourComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviourComponent()
{
	if (!Z_Registration_Info_UClass_UBehaviourComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviourComponent.OuterSingleton, Z_Construct_UClass_UBehaviourComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviourComponent.OuterSingleton;
}
template<> DYNAMICPERSONALITYAI_API UClass* StaticClass<UBehaviourComponent>()
{
	return UBehaviourComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviourComponent);
UBehaviourComponent::~UBehaviourComponent() {}
// End Class UBehaviourComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Behaviour_BehaviourComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviourComponent, UBehaviourComponent::StaticClass, TEXT("UBehaviourComponent"), &Z_Registration_Info_UClass_UBehaviourComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviourComponent), 802633863U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Behaviour_BehaviourComponent_h_3627661656(TEXT("/Script/DynamicPersonalityAI"),
	Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Behaviour_BehaviourComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Behaviour_BehaviourComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
