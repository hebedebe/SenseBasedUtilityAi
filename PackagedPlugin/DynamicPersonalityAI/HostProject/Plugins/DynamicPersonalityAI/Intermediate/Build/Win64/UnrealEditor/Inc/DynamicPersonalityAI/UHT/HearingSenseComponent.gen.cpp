// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicPersonalityAI/Private/Components/Senses/DefaultVariants/Hearing/HearingSenseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHearingSenseComponent() {}

// Begin Cross Module References
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UBaseSenseComponent();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UHearingSenseComponent();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UHearingSenseComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DynamicPersonalityAI();
// End Cross Module References

// Begin Class UHearingSenseComponent
void UHearingSenseComponent::StaticRegisterNativesUHearingSenseComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHearingSenseComponent);
UClass* Z_Construct_UClass_UHearingSenseComponent_NoRegister()
{
	return UHearingSenseComponent::StaticClass();
}
struct Z_Construct_UClass_UHearingSenseComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/Senses/DefaultVariants/Hearing/HearingSenseComponent.h" },
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Hearing/HearingSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingRange_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Hearing/HearingSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultObstacleMufflingStrength_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Hearing/HearingSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHearingDb_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Hearing/HearingSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugRays_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Senses/DefaultVariants/Hearing/HearingSenseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultObstacleMufflingStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHearingDb;
	static void NewProp_bDrawDebugRays_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugRays;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHearingSenseComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHearingSenseComponent_Statics::NewProp_HearingRange = { "HearingRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHearingSenseComponent, HearingRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingRange_MetaData), NewProp_HearingRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHearingSenseComponent_Statics::NewProp_DefaultObstacleMufflingStrength = { "DefaultObstacleMufflingStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHearingSenseComponent, DefaultObstacleMufflingStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultObstacleMufflingStrength_MetaData), NewProp_DefaultObstacleMufflingStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHearingSenseComponent_Statics::NewProp_MinHearingDb = { "MinHearingDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHearingSenseComponent, MinHearingDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHearingDb_MetaData), NewProp_MinHearingDb_MetaData) };
void Z_Construct_UClass_UHearingSenseComponent_Statics::NewProp_bDrawDebugRays_SetBit(void* Obj)
{
	((UHearingSenseComponent*)Obj)->bDrawDebugRays = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHearingSenseComponent_Statics::NewProp_bDrawDebugRays = { "bDrawDebugRays", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHearingSenseComponent), &Z_Construct_UClass_UHearingSenseComponent_Statics::NewProp_bDrawDebugRays_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugRays_MetaData), NewProp_bDrawDebugRays_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHearingSenseComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHearingSenseComponent_Statics::NewProp_HearingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHearingSenseComponent_Statics::NewProp_DefaultObstacleMufflingStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHearingSenseComponent_Statics::NewProp_MinHearingDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHearingSenseComponent_Statics::NewProp_bDrawDebugRays,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHearingSenseComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHearingSenseComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseSenseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicPersonalityAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHearingSenseComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHearingSenseComponent_Statics::ClassParams = {
	&UHearingSenseComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHearingSenseComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHearingSenseComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHearingSenseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHearingSenseComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHearingSenseComponent()
{
	if (!Z_Registration_Info_UClass_UHearingSenseComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHearingSenseComponent.OuterSingleton, Z_Construct_UClass_UHearingSenseComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHearingSenseComponent.OuterSingleton;
}
template<> DYNAMICPERSONALITYAI_API UClass* StaticClass<UHearingSenseComponent>()
{
	return UHearingSenseComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHearingSenseComponent);
UHearingSenseComponent::~UHearingSenseComponent() {}
// End Class UHearingSenseComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Hearing_HearingSenseComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHearingSenseComponent, UHearingSenseComponent::StaticClass, TEXT("UHearingSenseComponent"), &Z_Registration_Info_UClass_UHearingSenseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHearingSenseComponent), 1794905352U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Hearing_HearingSenseComponent_h_3481964968(TEXT("/Script/DynamicPersonalityAI"),
	Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Hearing_HearingSenseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Hearing_HearingSenseComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
