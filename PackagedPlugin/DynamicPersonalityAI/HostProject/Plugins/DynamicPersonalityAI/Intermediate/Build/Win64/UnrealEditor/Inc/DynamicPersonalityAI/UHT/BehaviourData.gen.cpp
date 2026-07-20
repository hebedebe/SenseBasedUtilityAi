// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicPersonalityAI/Private/DataTypes/Behaviour/BehaviourData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviourData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UBehaviourComponent_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UBehaviourData();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UBehaviourData_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UBehaviourFunctionality_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UMood_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_DynamicPersonalityAI();
// End Cross Module References

// Begin Class UBehaviourData Function EvaluateMoodWeights
struct Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics
{
	struct BehaviourData_eventEvaluateMoodWeights_Parms
	{
		TMap<UMood*,float> OtherWeights;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/DataTypes/Behaviour/BehaviourData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OtherWeights_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherWeights_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OtherWeights;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::NewProp_OtherWeights_ValueProp = { "OtherWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::NewProp_OtherWeights_Key_KeyProp = { "OtherWeights_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMood_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::NewProp_OtherWeights = { "OtherWeights", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviourData_eventEvaluateMoodWeights_Parms, OtherWeights), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviourData_eventEvaluateMoodWeights_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::NewProp_OtherWeights_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::NewProp_OtherWeights_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::NewProp_OtherWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviourData, nullptr, "EvaluateMoodWeights", nullptr, nullptr, Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::BehaviourData_eventEvaluateMoodWeights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::BehaviourData_eventEvaluateMoodWeights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviourData::execEvaluateMoodWeights)
{
	P_GET_TMAP(UMood*,float,Z_Param_OtherWeights);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->EvaluateMoodWeights(Z_Param_OtherWeights);
	P_NATIVE_END;
}
// End Class UBehaviourData Function EvaluateMoodWeights

// Begin Class UBehaviourData Function Initialise
struct Z_Construct_UFunction_UBehaviourData_Initialise_Statics
{
	struct BehaviourData_eventInitialise_Parms
	{
		UBehaviourComponent* BehaviourComponent;
		UBehaviourFunctionality* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/DataTypes/Behaviour/BehaviourData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviourComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviourComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviourData_Initialise_Statics::NewProp_BehaviourComponent = { "BehaviourComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviourData_eventInitialise_Parms, BehaviourComponent), Z_Construct_UClass_UBehaviourComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviourComponent_MetaData), NewProp_BehaviourComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviourData_Initialise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviourData_eventInitialise_Parms, ReturnValue), Z_Construct_UClass_UBehaviourFunctionality_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviourData_Initialise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviourData_Initialise_Statics::NewProp_BehaviourComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviourData_Initialise_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourData_Initialise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviourData_Initialise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviourData, nullptr, "Initialise", nullptr, nullptr, Z_Construct_UFunction_UBehaviourData_Initialise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourData_Initialise_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviourData_Initialise_Statics::BehaviourData_eventInitialise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviourData_Initialise_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviourData_Initialise_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviourData_Initialise_Statics::BehaviourData_eventInitialise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviourData_Initialise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviourData_Initialise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviourData::execInitialise)
{
	P_GET_OBJECT(UBehaviourComponent,Z_Param_BehaviourComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBehaviourFunctionality**)Z_Param__Result=P_THIS->Initialise(Z_Param_BehaviourComponent);
	P_NATIVE_END;
}
// End Class UBehaviourData Function Initialise

// Begin Class UBehaviourData
void UBehaviourData::StaticRegisterNativesUBehaviourData()
{
	UClass* Class = UBehaviourData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EvaluateMoodWeights", &UBehaviourData::execEvaluateMoodWeights },
		{ "Initialise", &UBehaviourData::execInitialise },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviourData);
UClass* Z_Construct_UClass_UBehaviourData_NoRegister()
{
	return UBehaviourData::StaticClass();
}
struct Z_Construct_UClass_UBehaviourData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataTypes/Behaviour/BehaviourData.h" },
		{ "ModuleRelativePath", "Private/DataTypes/Behaviour/BehaviourData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviourFunctionalityClass_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/DataTypes/Behaviour/BehaviourData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoodWeights_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/DataTypes/Behaviour/BehaviourData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/DataTypes/Behaviour/BehaviourData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BehaviourFunctionalityClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoodWeights_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoodWeights_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MoodWeights;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBehaviourData_EvaluateMoodWeights, "EvaluateMoodWeights" }, // 2712188232
		{ &Z_Construct_UFunction_UBehaviourData_Initialise, "Initialise" }, // 2529683888
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviourData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBehaviourData_Statics::NewProp_BehaviourFunctionalityClass = { "BehaviourFunctionalityClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviourData, BehaviourFunctionalityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBehaviourFunctionality_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviourFunctionalityClass_MetaData), NewProp_BehaviourFunctionalityClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBehaviourData_Statics::NewProp_MoodWeights_ValueProp = { "MoodWeights", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviourData_Statics::NewProp_MoodWeights_Key_KeyProp = { "MoodWeights_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMood_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBehaviourData_Statics::NewProp_MoodWeights = { "MoodWeights", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviourData, MoodWeights), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoodWeights_MetaData), NewProp_MoodWeights_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBehaviourData_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviourData, Bias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bias_MetaData), NewProp_Bias_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviourData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviourData_Statics::NewProp_BehaviourFunctionalityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviourData_Statics::NewProp_MoodWeights_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviourData_Statics::NewProp_MoodWeights_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviourData_Statics::NewProp_MoodWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviourData_Statics::NewProp_Bias,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviourData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviourData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicPersonalityAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviourData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviourData_Statics::ClassParams = {
	&UBehaviourData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBehaviourData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviourData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviourData_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviourData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviourData()
{
	if (!Z_Registration_Info_UClass_UBehaviourData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviourData.OuterSingleton, Z_Construct_UClass_UBehaviourData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviourData.OuterSingleton;
}
template<> DYNAMICPERSONALITYAI_API UClass* StaticClass<UBehaviourData>()
{
	return UBehaviourData::StaticClass();
}
UBehaviourData::UBehaviourData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviourData);
UBehaviourData::~UBehaviourData() {}
// End Class UBehaviourData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_DataTypes_Behaviour_BehaviourData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviourData, UBehaviourData::StaticClass, TEXT("UBehaviourData"), &Z_Registration_Info_UClass_UBehaviourData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviourData), 580717933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_DataTypes_Behaviour_BehaviourData_h_2987434343(TEXT("/Script/DynamicPersonalityAI"),
	Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_DataTypes_Behaviour_BehaviourData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_DataTypes_Behaviour_BehaviourData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
