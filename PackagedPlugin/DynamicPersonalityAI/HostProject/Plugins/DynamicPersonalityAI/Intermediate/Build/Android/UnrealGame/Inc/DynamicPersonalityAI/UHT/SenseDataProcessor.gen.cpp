// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicPersonalityAI/Private/Components/Persona/DataProcessor/SenseDataProcessor.h"
#include "DynamicPersonalityAI/Private/DataTypes/SenseData/SenseData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSenseDataProcessor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UMood_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UPersonaComponent_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_USenseDataProcessor();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_USenseDataProcessor_NoRegister();
DYNAMICPERSONALITYAI_API UScriptStruct* Z_Construct_UScriptStruct_FSenseData();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_DynamicPersonalityAI();
// End Cross Module References

// Begin Class USenseDataProcessor Function Check
struct Z_Construct_UFunction_USenseDataProcessor_Check_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Persona/DataProcessor/SenseDataProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseDataProcessor_Check_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseDataProcessor, nullptr, "Check", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseDataProcessor_Check_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseDataProcessor_Check_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USenseDataProcessor_Check()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseDataProcessor_Check_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseDataProcessor::execCheck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Check();
	P_NATIVE_END;
}
// End Class USenseDataProcessor Function Check

// Begin Class USenseDataProcessor Function GetMood
struct Z_Construct_UFunction_USenseDataProcessor_GetMood_Statics
{
	struct SenseDataProcessor_eventGetMood_Parms
	{
		UMood* Mood;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Persona/DataProcessor/SenseDataProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mood;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseDataProcessor_GetMood_Statics::NewProp_Mood = { "Mood", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseDataProcessor_eventGetMood_Parms, Mood), Z_Construct_UClass_UMood_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USenseDataProcessor_GetMood_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseDataProcessor_eventGetMood_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseDataProcessor_GetMood_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseDataProcessor_GetMood_Statics::NewProp_Mood,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseDataProcessor_GetMood_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseDataProcessor_GetMood_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseDataProcessor_GetMood_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseDataProcessor, nullptr, "GetMood", nullptr, nullptr, Z_Construct_UFunction_USenseDataProcessor_GetMood_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseDataProcessor_GetMood_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseDataProcessor_GetMood_Statics::SenseDataProcessor_eventGetMood_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseDataProcessor_GetMood_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseDataProcessor_GetMood_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseDataProcessor_GetMood_Statics::SenseDataProcessor_eventGetMood_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseDataProcessor_GetMood()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseDataProcessor_GetMood_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseDataProcessor::execGetMood)
{
	P_GET_OBJECT(UMood,Z_Param_Mood);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMood(Z_Param_Mood);
	P_NATIVE_END;
}
// End Class USenseDataProcessor Function GetMood

// Begin Class USenseDataProcessor Function GetWorld
struct Z_Construct_UFunction_USenseDataProcessor_GetWorld_Statics
{
	struct SenseDataProcessor_eventGetWorld_Parms
	{
		UWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Persona/DataProcessor/SenseDataProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseDataProcessor_GetWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseDataProcessor_eventGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseDataProcessor_GetWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseDataProcessor_GetWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseDataProcessor_GetWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseDataProcessor_GetWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseDataProcessor, nullptr, "GetWorld", nullptr, nullptr, Z_Construct_UFunction_USenseDataProcessor_GetWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseDataProcessor_GetWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseDataProcessor_GetWorld_Statics::SenseDataProcessor_eventGetWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseDataProcessor_GetWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseDataProcessor_GetWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseDataProcessor_GetWorld_Statics::SenseDataProcessor_eventGetWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseDataProcessor_GetWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseDataProcessor_GetWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseDataProcessor::execGetWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWorld**)Z_Param__Result=P_THIS->GetWorld();
	P_NATIVE_END;
}
// End Class USenseDataProcessor Function GetWorld

// Begin Class USenseDataProcessor Function IncrementMood
struct Z_Construct_UFunction_USenseDataProcessor_IncrementMood_Statics
{
	struct SenseDataProcessor_eventIncrementMood_Parms
	{
		UMood* Mood;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Persona/DataProcessor/SenseDataProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mood;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseDataProcessor_IncrementMood_Statics::NewProp_Mood = { "Mood", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseDataProcessor_eventIncrementMood_Parms, Mood), Z_Construct_UClass_UMood_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USenseDataProcessor_IncrementMood_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseDataProcessor_eventIncrementMood_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseDataProcessor_IncrementMood_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseDataProcessor_IncrementMood_Statics::NewProp_Mood,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseDataProcessor_IncrementMood_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseDataProcessor_IncrementMood_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseDataProcessor_IncrementMood_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseDataProcessor, nullptr, "IncrementMood", nullptr, nullptr, Z_Construct_UFunction_USenseDataProcessor_IncrementMood_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseDataProcessor_IncrementMood_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseDataProcessor_IncrementMood_Statics::SenseDataProcessor_eventIncrementMood_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseDataProcessor_IncrementMood_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseDataProcessor_IncrementMood_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseDataProcessor_IncrementMood_Statics::SenseDataProcessor_eventIncrementMood_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseDataProcessor_IncrementMood()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseDataProcessor_IncrementMood_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseDataProcessor::execIncrementMood)
{
	P_GET_OBJECT(UMood,Z_Param_Mood);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementMood(Z_Param_Mood,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseDataProcessor Function IncrementMood

// Begin Class USenseDataProcessor Function ProcessSenseData
struct SenseDataProcessor_eventProcessSenseData_Parms
{
	UObject* WorldContextObject;
	UPersonaComponent* PersonaComponent;
	FSenseData SenseData;
};
static FName NAME_USenseDataProcessor_ProcessSenseData = FName(TEXT("ProcessSenseData"));
void USenseDataProcessor::ProcessSenseData(UObject* WorldContextObject, UPersonaComponent* PersonaComponent, FSenseData SenseData)
{
	SenseDataProcessor_eventProcessSenseData_Parms Parms;
	Parms.WorldContextObject=WorldContextObject;
	Parms.PersonaComponent=PersonaComponent;
	Parms.SenseData=SenseData;
	ProcessEvent(FindFunctionChecked(NAME_USenseDataProcessor_ProcessSenseData),&Parms);
}
struct Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Persona/DataProcessor/SenseDataProcessor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersonaComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PersonaComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SenseData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseDataProcessor_eventProcessSenseData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData_Statics::NewProp_PersonaComponent = { "PersonaComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseDataProcessor_eventProcessSenseData_Parms, PersonaComponent), Z_Construct_UClass_UPersonaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersonaComponent_MetaData), NewProp_PersonaComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData_Statics::NewProp_SenseData = { "SenseData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseDataProcessor_eventProcessSenseData_Parms, SenseData), Z_Construct_UScriptStruct_FSenseData, METADATA_PARAMS(0, nullptr) }; // 2575697329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData_Statics::NewProp_PersonaComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData_Statics::NewProp_SenseData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseDataProcessor, nullptr, "ProcessSenseData", nullptr, nullptr, Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData_Statics::PropPointers), sizeof(SenseDataProcessor_eventProcessSenseData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SenseDataProcessor_eventProcessSenseData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USenseDataProcessor Function ProcessSenseData

// Begin Class USenseDataProcessor Function SetMood
struct Z_Construct_UFunction_USenseDataProcessor_SetMood_Statics
{
	struct SenseDataProcessor_eventSetMood_Parms
	{
		UMood* Mood;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Persona/DataProcessor/SenseDataProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mood;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseDataProcessor_SetMood_Statics::NewProp_Mood = { "Mood", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseDataProcessor_eventSetMood_Parms, Mood), Z_Construct_UClass_UMood_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USenseDataProcessor_SetMood_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseDataProcessor_eventSetMood_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseDataProcessor_SetMood_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseDataProcessor_SetMood_Statics::NewProp_Mood,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseDataProcessor_SetMood_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseDataProcessor_SetMood_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseDataProcessor_SetMood_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseDataProcessor, nullptr, "SetMood", nullptr, nullptr, Z_Construct_UFunction_USenseDataProcessor_SetMood_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseDataProcessor_SetMood_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseDataProcessor_SetMood_Statics::SenseDataProcessor_eventSetMood_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseDataProcessor_SetMood_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseDataProcessor_SetMood_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseDataProcessor_SetMood_Statics::SenseDataProcessor_eventSetMood_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseDataProcessor_SetMood()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseDataProcessor_SetMood_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseDataProcessor::execSetMood)
{
	P_GET_OBJECT(UMood,Z_Param_Mood);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMood(Z_Param_Mood,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseDataProcessor Function SetMood

// Begin Class USenseDataProcessor
void USenseDataProcessor::StaticRegisterNativesUSenseDataProcessor()
{
	UClass* Class = USenseDataProcessor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Check", &USenseDataProcessor::execCheck },
		{ "GetMood", &USenseDataProcessor::execGetMood },
		{ "GetWorld", &USenseDataProcessor::execGetWorld },
		{ "IncrementMood", &USenseDataProcessor::execIncrementMood },
		{ "SetMood", &USenseDataProcessor::execSetMood },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USenseDataProcessor);
UClass* Z_Construct_UClass_USenseDataProcessor_NoRegister()
{
	return USenseDataProcessor::StaticClass();
}
struct Z_Construct_UClass_USenseDataProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Components/Persona/DataProcessor/SenseDataProcessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Components/Persona/DataProcessor/SenseDataProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSenseType_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Persona/DataProcessor/SenseDataProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPersonaComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Components/Persona/DataProcessor/SenseDataProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetSenseType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPersonaComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USenseDataProcessor_Check, "Check" }, // 3754757428
		{ &Z_Construct_UFunction_USenseDataProcessor_GetMood, "GetMood" }, // 1017074733
		{ &Z_Construct_UFunction_USenseDataProcessor_GetWorld, "GetWorld" }, // 357638027
		{ &Z_Construct_UFunction_USenseDataProcessor_IncrementMood, "IncrementMood" }, // 2449629899
		{ &Z_Construct_UFunction_USenseDataProcessor_ProcessSenseData, "ProcessSenseData" }, // 2236362055
		{ &Z_Construct_UFunction_USenseDataProcessor_SetMood, "SetMood" }, // 747205846
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USenseDataProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USenseDataProcessor_Statics::NewProp_TargetSenseType = { "TargetSenseType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseDataProcessor, TargetSenseType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSenseType_MetaData), NewProp_TargetSenseType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USenseDataProcessor_Statics::NewProp_CurrentPersonaComponent = { "CurrentPersonaComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseDataProcessor, CurrentPersonaComponent), Z_Construct_UClass_UPersonaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPersonaComponent_MetaData), NewProp_CurrentPersonaComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USenseDataProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseDataProcessor_Statics::NewProp_TargetSenseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseDataProcessor_Statics::NewProp_CurrentPersonaComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USenseDataProcessor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USenseDataProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicPersonalityAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USenseDataProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USenseDataProcessor_Statics::ClassParams = {
	&USenseDataProcessor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USenseDataProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USenseDataProcessor_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USenseDataProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_USenseDataProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USenseDataProcessor()
{
	if (!Z_Registration_Info_UClass_USenseDataProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USenseDataProcessor.OuterSingleton, Z_Construct_UClass_USenseDataProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USenseDataProcessor.OuterSingleton;
}
template<> DYNAMICPERSONALITYAI_API UClass* StaticClass<USenseDataProcessor>()
{
	return USenseDataProcessor::StaticClass();
}
USenseDataProcessor::USenseDataProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USenseDataProcessor);
USenseDataProcessor::~USenseDataProcessor() {}
// End Class USenseDataProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Persona_DataProcessor_SenseDataProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USenseDataProcessor, USenseDataProcessor::StaticClass, TEXT("USenseDataProcessor"), &Z_Registration_Info_UClass_USenseDataProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USenseDataProcessor), 1256280563U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Persona_DataProcessor_SenseDataProcessor_h_3026637856(TEXT("/Script/DynamicPersonalityAI"),
	Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Persona_DataProcessor_SenseDataProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Persona_DataProcessor_SenseDataProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
