// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicPersonalityAI/Private/Components/Memory/MemoryComponent.h"
#include "DynamicPersonalityAI/Private/DataTypes/SenseData/SenseData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMemoryComponent() {}

// Begin Cross Module References
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UMemoryComponent();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UMemoryComponent_NoRegister();
DYNAMICPERSONALITYAI_API UScriptStruct* Z_Construct_UScriptStruct_FSenseData();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DynamicPersonalityAI();
// End Cross Module References

// Begin Class UMemoryComponent Function IsSenseQueueEmpty
struct Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty_Statics
{
	struct MemoryComponent_eventIsSenseQueueEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Memory/MemoryComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MemoryComponent_eventIsSenseQueueEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MemoryComponent_eventIsSenseQueueEmpty_Parms), &Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryComponent, nullptr, "IsSenseQueueEmpty", nullptr, nullptr, Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty_Statics::MemoryComponent_eventIsSenseQueueEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty_Statics::MemoryComponent_eventIsSenseQueueEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryComponent::execIsSenseQueueEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSenseQueueEmpty();
	P_NATIVE_END;
}
// End Class UMemoryComponent Function IsSenseQueueEmpty

// Begin Class UMemoryComponent Function PopSense
struct Z_Construct_UFunction_UMemoryComponent_PopSense_Statics
{
	struct MemoryComponent_eventPopSense_Parms
	{
		FSenseData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Memory/MemoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMemoryComponent_PopSense_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryComponent_eventPopSense_Parms, ReturnValue), Z_Construct_UScriptStruct_FSenseData, METADATA_PARAMS(0, nullptr) }; // 2575697329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryComponent_PopSense_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryComponent_PopSense_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryComponent_PopSense_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryComponent_PopSense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryComponent, nullptr, "PopSense", nullptr, nullptr, Z_Construct_UFunction_UMemoryComponent_PopSense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryComponent_PopSense_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryComponent_PopSense_Statics::MemoryComponent_eventPopSense_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryComponent_PopSense_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryComponent_PopSense_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryComponent_PopSense_Statics::MemoryComponent_eventPopSense_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryComponent_PopSense()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryComponent_PopSense_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryComponent::execPopSense)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSenseData*)Z_Param__Result=P_THIS->PopSense();
	P_NATIVE_END;
}
// End Class UMemoryComponent Function PopSense

// Begin Class UMemoryComponent Function RegisterSenseData
struct Z_Construct_UFunction_UMemoryComponent_RegisterSenseData_Statics
{
	struct MemoryComponent_eventRegisterSenseData_Parms
	{
		FSenseData SenseData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Memory/MemoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SenseData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMemoryComponent_RegisterSenseData_Statics::NewProp_SenseData = { "SenseData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemoryComponent_eventRegisterSenseData_Parms, SenseData), Z_Construct_UScriptStruct_FSenseData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenseData_MetaData), NewProp_SenseData_MetaData) }; // 2575697329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryComponent_RegisterSenseData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryComponent_RegisterSenseData_Statics::NewProp_SenseData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryComponent_RegisterSenseData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryComponent_RegisterSenseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryComponent, nullptr, "RegisterSenseData", nullptr, nullptr, Z_Construct_UFunction_UMemoryComponent_RegisterSenseData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryComponent_RegisterSenseData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryComponent_RegisterSenseData_Statics::MemoryComponent_eventRegisterSenseData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryComponent_RegisterSenseData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryComponent_RegisterSenseData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryComponent_RegisterSenseData_Statics::MemoryComponent_eventRegisterSenseData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryComponent_RegisterSenseData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryComponent_RegisterSenseData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryComponent::execRegisterSenseData)
{
	P_GET_STRUCT_REF(FSenseData,Z_Param_Out_SenseData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterSenseData(Z_Param_Out_SenseData);
	P_NATIVE_END;
}
// End Class UMemoryComponent Function RegisterSenseData

// Begin Class UMemoryComponent
void UMemoryComponent::StaticRegisterNativesUMemoryComponent()
{
	UClass* Class = UMemoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsSenseQueueEmpty", &UMemoryComponent::execIsSenseQueueEmpty },
		{ "PopSense", &UMemoryComponent::execPopSense },
		{ "RegisterSenseData", &UMemoryComponent::execRegisterSenseData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMemoryComponent);
UClass* Z_Construct_UClass_UMemoryComponent_NoRegister()
{
	return UMemoryComponent::StaticClass();
}
struct Z_Construct_UClass_UMemoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/Memory/MemoryComponent.h" },
		{ "ModuleRelativePath", "Private/Components/Memory/MemoryComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMemoryComponent_IsSenseQueueEmpty, "IsSenseQueueEmpty" }, // 1178725332
		{ &Z_Construct_UFunction_UMemoryComponent_PopSense, "PopSense" }, // 43461445
		{ &Z_Construct_UFunction_UMemoryComponent_RegisterSenseData, "RegisterSenseData" }, // 2017470367
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMemoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMemoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicPersonalityAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMemoryComponent_Statics::ClassParams = {
	&UMemoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMemoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMemoryComponent()
{
	if (!Z_Registration_Info_UClass_UMemoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMemoryComponent.OuterSingleton, Z_Construct_UClass_UMemoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMemoryComponent.OuterSingleton;
}
template<> DYNAMICPERSONALITYAI_API UClass* StaticClass<UMemoryComponent>()
{
	return UMemoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMemoryComponent);
UMemoryComponent::~UMemoryComponent() {}
// End Class UMemoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Memory_MemoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMemoryComponent, UMemoryComponent::StaticClass, TEXT("UMemoryComponent"), &Z_Registration_Info_UClass_UMemoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMemoryComponent), 2051224596U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Memory_MemoryComponent_h_1392900506(TEXT("/Script/DynamicPersonalityAI"),
	Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Memory_MemoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Memory_MemoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
