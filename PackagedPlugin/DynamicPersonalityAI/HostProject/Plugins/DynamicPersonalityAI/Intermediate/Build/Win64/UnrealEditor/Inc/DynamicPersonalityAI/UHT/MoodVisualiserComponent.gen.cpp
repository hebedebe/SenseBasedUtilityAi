// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicPersonalityAI/Private/Components/Debug/MoodVisualiser/MoodVisualiserComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoodVisualiserComponent() {}

// Begin Cross Module References
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UMoodVisualiserComponent();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UMoodVisualiserComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
UPackage* Z_Construct_UPackage__Script_DynamicPersonalityAI();
// End Cross Module References

// Begin Class UMoodVisualiserComponent
void UMoodVisualiserComponent::StaticRegisterNativesUMoodVisualiserComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoodVisualiserComponent);
UClass* Z_Construct_UClass_UMoodVisualiserComponent_NoRegister()
{
	return UMoodVisualiserComponent::StaticClass();
}
struct Z_Construct_UClass_UMoodVisualiserComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "Components/Debug/MoodVisualiser/MoodVisualiserComponent.h" },
		{ "ModuleRelativePath", "Private/Components/Debug/MoodVisualiser/MoodVisualiserComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoodVisualiserComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoodVisualiserComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicPersonalityAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoodVisualiserComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoodVisualiserComponent_Statics::ClassParams = {
	&UMoodVisualiserComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoodVisualiserComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoodVisualiserComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoodVisualiserComponent()
{
	if (!Z_Registration_Info_UClass_UMoodVisualiserComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoodVisualiserComponent.OuterSingleton, Z_Construct_UClass_UMoodVisualiserComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoodVisualiserComponent.OuterSingleton;
}
template<> DYNAMICPERSONALITYAI_API UClass* StaticClass<UMoodVisualiserComponent>()
{
	return UMoodVisualiserComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoodVisualiserComponent);
UMoodVisualiserComponent::~UMoodVisualiserComponent() {}
// End Class UMoodVisualiserComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Debug_MoodVisualiser_MoodVisualiserComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoodVisualiserComponent, UMoodVisualiserComponent::StaticClass, TEXT("UMoodVisualiserComponent"), &Z_Registration_Info_UClass_UMoodVisualiserComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoodVisualiserComponent), 3512978187U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Debug_MoodVisualiser_MoodVisualiserComponent_h_1391389744(TEXT("/Script/DynamicPersonalityAI"),
	Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Debug_MoodVisualiser_MoodVisualiserComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Debug_MoodVisualiser_MoodVisualiserComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
