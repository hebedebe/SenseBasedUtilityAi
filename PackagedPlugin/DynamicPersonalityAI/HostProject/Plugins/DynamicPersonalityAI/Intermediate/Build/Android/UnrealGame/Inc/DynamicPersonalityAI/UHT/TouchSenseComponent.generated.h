// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Senses/DefaultVariants/Touch/TouchSenseComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DYNAMICPERSONALITYAI_TouchSenseComponent_generated_h
#error "TouchSenseComponent.generated.h already included, missing '#pragma once' in TouchSenseComponent.h"
#endif
#define DYNAMICPERSONALITYAI_TouchSenseComponent_generated_h

#define FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Touch_TouchSenseComponent_h_9_DELEGATE \
DYNAMICPERSONALITYAI_API void FOnTouchedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnTouchedSignature, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult);


#define FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Touch_TouchSenseComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleOwnerTouched); \
	DECLARE_FUNCTION(execOverlapEnd); \
	DECLARE_FUNCTION(execOverlapStart); \
	DECLARE_FUNCTION(execHandleOwnerDamaged);


#define FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Touch_TouchSenseComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchSenseComponent(); \
	friend struct Z_Construct_UClass_UTouchSenseComponent_Statics; \
public: \
	DECLARE_CLASS(UTouchSenseComponent, UBaseSenseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DynamicPersonalityAI"), NO_API) \
	DECLARE_SERIALIZER(UTouchSenseComponent)


#define FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Touch_TouchSenseComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTouchSenseComponent(UTouchSenseComponent&&); \
	UTouchSenseComponent(const UTouchSenseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchSenseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchSenseComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTouchSenseComponent) \
	NO_API virtual ~UTouchSenseComponent();


#define FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Touch_TouchSenseComponent_h_11_PROLOG
#define FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Touch_TouchSenseComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Touch_TouchSenseComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Touch_TouchSenseComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Touch_TouchSenseComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICPERSONALITYAI_API UClass* StaticClass<class UTouchSenseComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_Components_Senses_DefaultVariants_Touch_TouchSenseComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
