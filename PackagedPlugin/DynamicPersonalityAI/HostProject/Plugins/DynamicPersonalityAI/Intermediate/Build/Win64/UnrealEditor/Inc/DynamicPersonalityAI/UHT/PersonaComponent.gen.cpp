// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicPersonalityAI/Private/Components/Persona/PersonaComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonaComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UBehaviourComponent_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UMemoryComponent_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UMood_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UPersonaComponent();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UPersonaComponent_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_USenseDataProcessor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DynamicPersonalityAI();
// End Cross Module References

// Begin Class UPersonaComponent Function AddMoodValue
struct Z_Construct_UFunction_UPersonaComponent_AddMoodValue_Statics
{
	struct PersonaComponent_eventAddMoodValue_Parms
	{
		UMood* Mood;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Persona/PersonaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mood;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPersonaComponent_AddMoodValue_Statics::NewProp_Mood = { "Mood", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersonaComponent_eventAddMoodValue_Parms, Mood), Z_Construct_UClass_UMood_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPersonaComponent_AddMoodValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersonaComponent_eventAddMoodValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersonaComponent_AddMoodValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersonaComponent_AddMoodValue_Statics::NewProp_Mood,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersonaComponent_AddMoodValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaComponent_AddMoodValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersonaComponent_AddMoodValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersonaComponent, nullptr, "AddMoodValue", nullptr, nullptr, Z_Construct_UFunction_UPersonaComponent_AddMoodValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaComponent_AddMoodValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPersonaComponent_AddMoodValue_Statics::PersonaComponent_eventAddMoodValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaComponent_AddMoodValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPersonaComponent_AddMoodValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPersonaComponent_AddMoodValue_Statics::PersonaComponent_eventAddMoodValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPersonaComponent_AddMoodValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersonaComponent_AddMoodValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPersonaComponent::execAddMoodValue)
{
	P_GET_OBJECT(UMood,Z_Param_Mood);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMoodValue(Z_Param_Mood,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UPersonaComponent Function AddMoodValue

// Begin Class UPersonaComponent Function GetMoodValue
struct Z_Construct_UFunction_UPersonaComponent_GetMoodValue_Statics
{
	struct PersonaComponent_eventGetMoodValue_Parms
	{
		UMood* Mood;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Persona/PersonaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mood;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPersonaComponent_GetMoodValue_Statics::NewProp_Mood = { "Mood", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersonaComponent_eventGetMoodValue_Parms, Mood), Z_Construct_UClass_UMood_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPersonaComponent_GetMoodValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersonaComponent_eventGetMoodValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersonaComponent_GetMoodValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersonaComponent_GetMoodValue_Statics::NewProp_Mood,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersonaComponent_GetMoodValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaComponent_GetMoodValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersonaComponent_GetMoodValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersonaComponent, nullptr, "GetMoodValue", nullptr, nullptr, Z_Construct_UFunction_UPersonaComponent_GetMoodValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaComponent_GetMoodValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPersonaComponent_GetMoodValue_Statics::PersonaComponent_eventGetMoodValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaComponent_GetMoodValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPersonaComponent_GetMoodValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPersonaComponent_GetMoodValue_Statics::PersonaComponent_eventGetMoodValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPersonaComponent_GetMoodValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersonaComponent_GetMoodValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPersonaComponent::execGetMoodValue)
{
	P_GET_OBJECT(UMood,Z_Param_Mood);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMoodValue(Z_Param_Mood);
	P_NATIVE_END;
}
// End Class UPersonaComponent Function GetMoodValue

// Begin Class UPersonaComponent Function GetMoodWeights
struct Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics
{
	struct PersonaComponent_eventGetMoodWeights_Parms
	{
		TMap<UMood*,float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Persona/PersonaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMood_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersonaComponent_eventGetMoodWeights_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersonaComponent, nullptr, "GetMoodWeights", nullptr, nullptr, Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics::PersonaComponent_eventGetMoodWeights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics::PersonaComponent_eventGetMoodWeights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPersonaComponent_GetMoodWeights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersonaComponent_GetMoodWeights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPersonaComponent::execGetMoodWeights)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<UMood*,float>*)Z_Param__Result=P_THIS->GetMoodWeights();
	P_NATIVE_END;
}
// End Class UPersonaComponent Function GetMoodWeights

// Begin Class UPersonaComponent Function SetMoodValue
struct Z_Construct_UFunction_UPersonaComponent_SetMoodValue_Statics
{
	struct PersonaComponent_eventSetMoodValue_Parms
	{
		UMood* Mood;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Persona/PersonaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mood;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPersonaComponent_SetMoodValue_Statics::NewProp_Mood = { "Mood", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersonaComponent_eventSetMoodValue_Parms, Mood), Z_Construct_UClass_UMood_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPersonaComponent_SetMoodValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersonaComponent_eventSetMoodValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersonaComponent_SetMoodValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersonaComponent_SetMoodValue_Statics::NewProp_Mood,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersonaComponent_SetMoodValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaComponent_SetMoodValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersonaComponent_SetMoodValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersonaComponent, nullptr, "SetMoodValue", nullptr, nullptr, Z_Construct_UFunction_UPersonaComponent_SetMoodValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaComponent_SetMoodValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPersonaComponent_SetMoodValue_Statics::PersonaComponent_eventSetMoodValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaComponent_SetMoodValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPersonaComponent_SetMoodValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPersonaComponent_SetMoodValue_Statics::PersonaComponent_eventSetMoodValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPersonaComponent_SetMoodValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersonaComponent_SetMoodValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPersonaComponent::execSetMoodValue)
{
	P_GET_OBJECT(UMood,Z_Param_Mood);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMoodValue(Z_Param_Mood,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UPersonaComponent Function SetMoodValue

// Begin Class UPersonaComponent
void UPersonaComponent::StaticRegisterNativesUPersonaComponent()
{
	UClass* Class = UPersonaComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMoodValue", &UPersonaComponent::execAddMoodValue },
		{ "GetMoodValue", &UPersonaComponent::execGetMoodValue },
		{ "GetMoodWeights", &UPersonaComponent::execGetMoodWeights },
		{ "SetMoodValue", &UPersonaComponent::execSetMoodValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersonaComponent);
UClass* Z_Construct_UClass_UPersonaComponent_NoRegister()
{
	return UPersonaComponent::StaticClass();
}
struct Z_Construct_UClass_UPersonaComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/Persona/PersonaComponent.h" },
		{ "ModuleRelativePath", "Private/Components/Persona/PersonaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenseDataProcessorClasses_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Persona/PersonaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoodWeights_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Persona/PersonaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenseDataProcessors_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Persona/PersonaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Behaviour_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Components/Persona/PersonaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Components/Persona/PersonaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SenseDataProcessorClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SenseDataProcessorClasses;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoodWeights_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoodWeights_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MoodWeights;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SenseDataProcessors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SenseDataProcessors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Behaviour;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Memory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPersonaComponent_AddMoodValue, "AddMoodValue" }, // 3390479423
		{ &Z_Construct_UFunction_UPersonaComponent_GetMoodValue, "GetMoodValue" }, // 4075106452
		{ &Z_Construct_UFunction_UPersonaComponent_GetMoodWeights, "GetMoodWeights" }, // 115228657
		{ &Z_Construct_UFunction_UPersonaComponent_SetMoodValue, "SetMoodValue" }, // 3044812952
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersonaComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPersonaComponent_Statics::NewProp_SenseDataProcessorClasses_Inner = { "SenseDataProcessorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_USenseDataProcessor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPersonaComponent_Statics::NewProp_SenseDataProcessorClasses = { "SenseDataProcessorClasses", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersonaComponent, SenseDataProcessorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenseDataProcessorClasses_MetaData), NewProp_SenseDataProcessorClasses_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPersonaComponent_Statics::NewProp_MoodWeights_ValueProp = { "MoodWeights", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersonaComponent_Statics::NewProp_MoodWeights_Key_KeyProp = { "MoodWeights_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMood_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPersonaComponent_Statics::NewProp_MoodWeights = { "MoodWeights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersonaComponent, MoodWeights), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoodWeights_MetaData), NewProp_MoodWeights_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersonaComponent_Statics::NewProp_SenseDataProcessors_Inner = { "SenseDataProcessors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USenseDataProcessor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPersonaComponent_Statics::NewProp_SenseDataProcessors = { "SenseDataProcessors", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersonaComponent, SenseDataProcessors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenseDataProcessors_MetaData), NewProp_SenseDataProcessors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersonaComponent_Statics::NewProp_Behaviour = { "Behaviour", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersonaComponent, Behaviour), Z_Construct_UClass_UBehaviourComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Behaviour_MetaData), NewProp_Behaviour_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPersonaComponent_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersonaComponent, Memory), Z_Construct_UClass_UMemoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Memory_MetaData), NewProp_Memory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPersonaComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaComponent_Statics::NewProp_SenseDataProcessorClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaComponent_Statics::NewProp_SenseDataProcessorClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaComponent_Statics::NewProp_MoodWeights_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaComponent_Statics::NewProp_MoodWeights_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaComponent_Statics::NewProp_MoodWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaComponent_Statics::NewProp_SenseDataProcessors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaComponent_Statics::NewProp_SenseDataProcessors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaComponent_Statics::NewProp_Behaviour,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaComponent_Statics::NewProp_Memory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPersonaComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicPersonalityAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersonaComponent_Statics::ClassParams = {
	&UPersonaComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPersonaComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPersonaComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPersonaComponent()
{
	if (!Z_Registration_Info_UClass_UPersonaComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersonaComponent.OuterSingleton, Z_Construct_UClass_UPersonaComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPersonaComponent.OuterSingleton;
}
template<> DYNAMICPERSONALITYAI_API UClass* StaticClass<UPersonaComponent>()
{
	return UPersonaComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonaComponent);
UPersonaComponent::~UPersonaComponent() {}
// End Class UPersonaComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Persona_PersonaComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPersonaComponent, UPersonaComponent::StaticClass, TEXT("UPersonaComponent"), &Z_Registration_Info_UClass_UPersonaComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersonaComponent), 1329163799U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Persona_PersonaComponent_h_3768365669(TEXT("/Script/DynamicPersonalityAI"),
	Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Persona_PersonaComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Persona_PersonaComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
