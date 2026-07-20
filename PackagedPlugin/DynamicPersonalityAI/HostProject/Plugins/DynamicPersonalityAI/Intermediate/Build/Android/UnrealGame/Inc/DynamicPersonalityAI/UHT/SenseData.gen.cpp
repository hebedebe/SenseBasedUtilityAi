// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicPersonalityAI/Private/DataTypes/SenseData/SenseData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSenseData() {}

// Begin Cross Module References
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UBaseSenseComponent_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_USenseCustomData_NoRegister();
DYNAMICPERSONALITYAI_API UScriptStruct* Z_Construct_UScriptStruct_FSenseData();
UPackage* Z_Construct_UPackage__Script_DynamicPersonalityAI();
// End Cross Module References

// Begin ScriptStruct FSenseData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SenseData;
class UScriptStruct* FSenseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SenseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SenseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSenseData, (UObject*)Z_Construct_UPackage__Script_DynamicPersonalityAI(), TEXT("SenseData"));
	}
	return Z_Registration_Info_UScriptStruct_SenseData.OuterSingleton;
}
template<> DYNAMICPERSONALITYAI_API UScriptStruct* StaticStruct<FSenseData>()
{
	return FSenseData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSenseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/SenseData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenseType_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/SenseData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceSense_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/SenseData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenseMap_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/SenseData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SenseType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceSense;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SenseMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SenseMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SenseMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSenseData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSenseData_Statics::NewProp_SenseType = { "SenseType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSenseData, SenseType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenseType_MetaData), NewProp_SenseType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSenseData_Statics::NewProp_SourceSense = { "SourceSense", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSenseData, SourceSense), Z_Construct_UClass_UBaseSenseComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceSense_MetaData), NewProp_SourceSense_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSenseData_Statics::NewProp_SenseMap_ValueProp = { "SenseMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USenseCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSenseData_Statics::NewProp_SenseMap_Key_KeyProp = { "SenseMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSenseData_Statics::NewProp_SenseMap = { "SenseMap", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSenseData, SenseMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenseMap_MetaData), NewProp_SenseMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSenseData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSenseData_Statics::NewProp_SenseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSenseData_Statics::NewProp_SourceSense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSenseData_Statics::NewProp_SenseMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSenseData_Statics::NewProp_SenseMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSenseData_Statics::NewProp_SenseMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSenseData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSenseData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicPersonalityAI,
	nullptr,
	&NewStructOps,
	"SenseData",
	Z_Construct_UScriptStruct_FSenseData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSenseData_Statics::PropPointers),
	sizeof(FSenseData),
	alignof(FSenseData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSenseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSenseData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSenseData()
{
	if (!Z_Registration_Info_UScriptStruct_SenseData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SenseData.InnerSingleton, Z_Construct_UScriptStruct_FSenseData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SenseData.InnerSingleton;
}
// End ScriptStruct FSenseData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_DataTypes_SenseData_SenseData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSenseData::StaticStruct, Z_Construct_UScriptStruct_FSenseData_Statics::NewStructOps, TEXT("SenseData"), &Z_Registration_Info_UScriptStruct_SenseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSenseData), 2575697329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_DataTypes_SenseData_SenseData_h_291133397(TEXT("/Script/DynamicPersonalityAI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_DataTypes_SenseData_SenseData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_DataTypes_SenseData_SenseData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
