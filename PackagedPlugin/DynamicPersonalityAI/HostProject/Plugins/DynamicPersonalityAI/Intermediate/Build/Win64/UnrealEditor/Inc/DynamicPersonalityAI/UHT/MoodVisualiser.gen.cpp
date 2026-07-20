// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicPersonalityAI/Private/Components/Debug/MoodVisualiser/MoodVisualiser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoodVisualiser() {}

// Begin Cross Module References
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UMoodVisualiser();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UMoodVisualiser_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UPersonaComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DynamicPersonalityAI();
// End Cross Module References

// Begin Class UMoodVisualiser Function InitMoodVisualiser
struct Z_Construct_UFunction_UMoodVisualiser_InitMoodVisualiser_Statics
{
	struct MoodVisualiser_eventInitMoodVisualiser_Parms
	{
		UPersonaComponent* Persona;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Components/Debug/MoodVisualiser/MoodVisualiser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Persona_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Persona;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoodVisualiser_InitMoodVisualiser_Statics::NewProp_Persona = { "Persona", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoodVisualiser_eventInitMoodVisualiser_Parms, Persona), Z_Construct_UClass_UPersonaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Persona_MetaData), NewProp_Persona_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoodVisualiser_InitMoodVisualiser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoodVisualiser_InitMoodVisualiser_Statics::NewProp_Persona,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoodVisualiser_InitMoodVisualiser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoodVisualiser_InitMoodVisualiser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoodVisualiser, nullptr, "InitMoodVisualiser", nullptr, nullptr, Z_Construct_UFunction_UMoodVisualiser_InitMoodVisualiser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoodVisualiser_InitMoodVisualiser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoodVisualiser_InitMoodVisualiser_Statics::MoodVisualiser_eventInitMoodVisualiser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoodVisualiser_InitMoodVisualiser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoodVisualiser_InitMoodVisualiser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMoodVisualiser_InitMoodVisualiser_Statics::MoodVisualiser_eventInitMoodVisualiser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoodVisualiser_InitMoodVisualiser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoodVisualiser_InitMoodVisualiser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoodVisualiser::execInitMoodVisualiser)
{
	P_GET_OBJECT(UPersonaComponent,Z_Param_Persona);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitMoodVisualiser(Z_Param_Persona);
	P_NATIVE_END;
}
// End Class UMoodVisualiser Function InitMoodVisualiser

// Begin Class UMoodVisualiser
void UMoodVisualiser::StaticRegisterNativesUMoodVisualiser()
{
	UClass* Class = UMoodVisualiser::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitMoodVisualiser", &UMoodVisualiser::execInitMoodVisualiser },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoodVisualiser);
UClass* Z_Construct_UClass_UMoodVisualiser_NoRegister()
{
	return UMoodVisualiser::StaticClass();
}
struct Z_Construct_UClass_UMoodVisualiser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Components/Debug/MoodVisualiser/MoodVisualiser.h" },
		{ "ModuleRelativePath", "Private/Components/Debug/MoodVisualiser/MoodVisualiser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Canvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Components/Debug/MoodVisualiser/MoodVisualiser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlocks_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Components/Debug/MoodVisualiser/MoodVisualiser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersonaComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Components/Debug/MoodVisualiser/MoodVisualiser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Canvas;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlocks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextBlocks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PersonaComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoodVisualiser_InitMoodVisualiser, "InitMoodVisualiser" }, // 2905253312
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoodVisualiser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoodVisualiser_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoodVisualiser, Canvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Canvas_MetaData), NewProp_Canvas_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoodVisualiser_Statics::NewProp_TextBlocks_Inner = { "TextBlocks", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoodVisualiser_Statics::NewProp_TextBlocks = { "TextBlocks", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoodVisualiser, TextBlocks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlocks_MetaData), NewProp_TextBlocks_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoodVisualiser_Statics::NewProp_PersonaComponent = { "PersonaComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoodVisualiser, PersonaComponent), Z_Construct_UClass_UPersonaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersonaComponent_MetaData), NewProp_PersonaComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoodVisualiser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoodVisualiser_Statics::NewProp_Canvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoodVisualiser_Statics::NewProp_TextBlocks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoodVisualiser_Statics::NewProp_TextBlocks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoodVisualiser_Statics::NewProp_PersonaComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoodVisualiser_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoodVisualiser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicPersonalityAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoodVisualiser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoodVisualiser_Statics::ClassParams = {
	&UMoodVisualiser::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMoodVisualiser_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoodVisualiser_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoodVisualiser_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoodVisualiser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoodVisualiser()
{
	if (!Z_Registration_Info_UClass_UMoodVisualiser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoodVisualiser.OuterSingleton, Z_Construct_UClass_UMoodVisualiser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoodVisualiser.OuterSingleton;
}
template<> DYNAMICPERSONALITYAI_API UClass* StaticClass<UMoodVisualiser>()
{
	return UMoodVisualiser::StaticClass();
}
UMoodVisualiser::UMoodVisualiser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoodVisualiser);
UMoodVisualiser::~UMoodVisualiser() {}
// End Class UMoodVisualiser

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Debug_MoodVisualiser_MoodVisualiser_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoodVisualiser, UMoodVisualiser::StaticClass, TEXT("UMoodVisualiser"), &Z_Registration_Info_UClass_UMoodVisualiser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoodVisualiser), 3219152179U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Debug_MoodVisualiser_MoodVisualiser_h_1248329823(TEXT("/Script/DynamicPersonalityAI"),
	Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Debug_MoodVisualiser_MoodVisualiser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Debug_MoodVisualiser_MoodVisualiser_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
