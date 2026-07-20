// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicPersonalityAI/Private/Components/Senses/BaseSenseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseSenseComponent() {}

// Begin Cross Module References
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UBaseSenseComponent();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UBaseSenseComponent_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UBehaviourComponent_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UMemoryComponent_NoRegister();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UPersonaComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_DynamicPersonalityAI();
// End Cross Module References

// Begin Class UBaseSenseComponent
void UBaseSenseComponent::StaticRegisterNativesUBaseSenseComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseSenseComponent);
UClass* Z_Construct_UClass_UBaseSenseComponent_NoRegister()
{
	return UBaseSenseComponent::StaticClass();
}
struct Z_Construct_UClass_UBaseSenseComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/Senses/BaseSenseComponent.h" },
		{ "ModuleRelativePath", "Private/Components/Senses/BaseSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenseType_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "ModuleRelativePath", "Private/Components/Senses/BaseSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviourComponent_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Components/Senses/BaseSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersonaComponent_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Components/Senses/BaseSenseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryComponent_MetaData[] = {
		{ "Category", "UtilityAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Components/Senses/BaseSenseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SenseType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviourComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PersonaComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MemoryComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseSenseComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseSenseComponent_Statics::NewProp_SenseType = { "SenseType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseSenseComponent, SenseType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenseType_MetaData), NewProp_SenseType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseSenseComponent_Statics::NewProp_BehaviourComponent = { "BehaviourComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseSenseComponent, BehaviourComponent), Z_Construct_UClass_UBehaviourComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviourComponent_MetaData), NewProp_BehaviourComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseSenseComponent_Statics::NewProp_PersonaComponent = { "PersonaComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseSenseComponent, PersonaComponent), Z_Construct_UClass_UPersonaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersonaComponent_MetaData), NewProp_PersonaComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseSenseComponent_Statics::NewProp_MemoryComponent = { "MemoryComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseSenseComponent, MemoryComponent), Z_Construct_UClass_UMemoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryComponent_MetaData), NewProp_MemoryComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseSenseComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSenseComponent_Statics::NewProp_SenseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSenseComponent_Statics::NewProp_BehaviourComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSenseComponent_Statics::NewProp_PersonaComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSenseComponent_Statics::NewProp_MemoryComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSenseComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseSenseComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicPersonalityAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSenseComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseSenseComponent_Statics::ClassParams = {
	&UBaseSenseComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseSenseComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSenseComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSenseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseSenseComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseSenseComponent()
{
	if (!Z_Registration_Info_UClass_UBaseSenseComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseSenseComponent.OuterSingleton, Z_Construct_UClass_UBaseSenseComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseSenseComponent.OuterSingleton;
}
template<> DYNAMICPERSONALITYAI_API UClass* StaticClass<UBaseSenseComponent>()
{
	return UBaseSenseComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseSenseComponent);
UBaseSenseComponent::~UBaseSenseComponent() {}
// End Class UBaseSenseComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_BaseSenseComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseSenseComponent, UBaseSenseComponent::StaticClass, TEXT("UBaseSenseComponent"), &Z_Registration_Info_UClass_UBaseSenseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseSenseComponent), 2750841169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_BaseSenseComponent_h_3065429206(TEXT("/Script/DynamicPersonalityAI"),
	Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_BaseSenseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_BaseSenseComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
