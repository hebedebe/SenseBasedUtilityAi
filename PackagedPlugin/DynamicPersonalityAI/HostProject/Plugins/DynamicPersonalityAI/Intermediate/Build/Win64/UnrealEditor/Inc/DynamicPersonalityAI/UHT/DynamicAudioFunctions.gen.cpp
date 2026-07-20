// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicPersonalityAI/Private/FunctionLibraries/Audio/DynamicAudioFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicAudioFunctions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UDynamicAudioFunctions();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_UDynamicAudioFunctions_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UInitialActiveSoundParams_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
UPackage* Z_Construct_UPackage__Script_DynamicPersonalityAI();
// End Cross Module References

// Begin Class UDynamicAudioFunctions Function PlayDetectableSoundAtLocation
struct Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics
{
	struct DynamicAudioFunctions_eventPlayDetectableSoundAtLocation_Parms
	{
		UObject* WorldContextObject;
		USoundBase* Sound;
		FVector Location;
		FRotator Rotation;
		FName DetectionTag;
		float VolumeMultiplier;
		float DetectionVolumeDb;
		float PitchMultiplier;
		float StartTime;
		USoundAttenuation* AttenuationSettings;
		USoundConcurrency* ConcurrencySettings;
		AActor* OwningActor;
		const UInitialActiveSoundParams* InitialParams;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DynamicAudioFunctions" },
		{ "Comment", "//Sound in db is as heard from one meter away\n" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_DetectionVolumeDb", "80.000000" },
		{ "CPP_Default_InitialParams", "None" },
		{ "CPP_Default_OwningActor", "None" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Private/FunctionLibraries/Audio/DynamicAudioFunctions.h" },
		{ "ToolTip", "Sound in db is as heard from one meter away" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionVolumeDb_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DetectionTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionVolumeDb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InitialParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicAudioFunctions_eventPlayDetectableSoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicAudioFunctions_eventPlayDetectableSoundAtLocation_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicAudioFunctions_eventPlayDetectableSoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicAudioFunctions_eventPlayDetectableSoundAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_DetectionTag = { "DetectionTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicAudioFunctions_eventPlayDetectableSoundAtLocation_Parms, DetectionTag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicAudioFunctions_eventPlayDetectableSoundAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_DetectionVolumeDb = { "DetectionVolumeDb", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicAudioFunctions_eventPlayDetectableSoundAtLocation_Parms, DetectionVolumeDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionVolumeDb_MetaData), NewProp_DetectionVolumeDb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicAudioFunctions_eventPlayDetectableSoundAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicAudioFunctions_eventPlayDetectableSoundAtLocation_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicAudioFunctions_eventPlayDetectableSoundAtLocation_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicAudioFunctions_eventPlayDetectableSoundAtLocation_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicAudioFunctions_eventPlayDetectableSoundAtLocation_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_InitialParams = { "InitialParams", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicAudioFunctions_eventPlayDetectableSoundAtLocation_Parms, InitialParams), Z_Construct_UClass_UInitialActiveSoundParams_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialParams_MetaData), NewProp_InitialParams_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_DetectionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_DetectionVolumeDb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_PitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_AttenuationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_ConcurrencySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_OwningActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::NewProp_InitialParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicAudioFunctions, nullptr, "PlayDetectableSoundAtLocation", nullptr, nullptr, Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::DynamicAudioFunctions_eventPlayDetectableSoundAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::DynamicAudioFunctions_eventPlayDetectableSoundAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicAudioFunctions::execPlayDetectableSoundAtLocation)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(USoundBase,Z_Param_Sound);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_PROPERTY(FNameProperty,Z_Param_DetectionTag);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DetectionVolumeDb);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
	P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
	P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
	P_GET_OBJECT(AActor,Z_Param_OwningActor);
	P_GET_OBJECT(UInitialActiveSoundParams,Z_Param_InitialParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDynamicAudioFunctions::PlayDetectableSoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Rotation,Z_Param_DetectionTag,Z_Param_VolumeMultiplier,Z_Param_DetectionVolumeDb,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_OwningActor,Z_Param_InitialParams);
	P_NATIVE_END;
}
// End Class UDynamicAudioFunctions Function PlayDetectableSoundAtLocation

// Begin Class UDynamicAudioFunctions
void UDynamicAudioFunctions::StaticRegisterNativesUDynamicAudioFunctions()
{
	UClass* Class = UDynamicAudioFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayDetectableSoundAtLocation", &UDynamicAudioFunctions::execPlayDetectableSoundAtLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicAudioFunctions);
UClass* Z_Construct_UClass_UDynamicAudioFunctions_NoRegister()
{
	return UDynamicAudioFunctions::StaticClass();
}
struct Z_Construct_UClass_UDynamicAudioFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FunctionLibraries/Audio/DynamicAudioFunctions.h" },
		{ "ModuleRelativePath", "Private/FunctionLibraries/Audio/DynamicAudioFunctions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicAudioFunctions_PlayDetectableSoundAtLocation, "PlayDetectableSoundAtLocation" }, // 3437566731
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicAudioFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDynamicAudioFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicPersonalityAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicAudioFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicAudioFunctions_Statics::ClassParams = {
	&UDynamicAudioFunctions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicAudioFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UDynamicAudioFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDynamicAudioFunctions()
{
	if (!Z_Registration_Info_UClass_UDynamicAudioFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicAudioFunctions.OuterSingleton, Z_Construct_UClass_UDynamicAudioFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicAudioFunctions.OuterSingleton;
}
template<> DYNAMICPERSONALITYAI_API UClass* StaticClass<UDynamicAudioFunctions>()
{
	return UDynamicAudioFunctions::StaticClass();
}
UDynamicAudioFunctions::UDynamicAudioFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicAudioFunctions);
UDynamicAudioFunctions::~UDynamicAudioFunctions() {}
// End Class UDynamicAudioFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_FunctionLibraries_Audio_DynamicAudioFunctions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicAudioFunctions, UDynamicAudioFunctions::StaticClass, TEXT("UDynamicAudioFunctions"), &Z_Registration_Info_UClass_UDynamicAudioFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicAudioFunctions), 30557058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_FunctionLibraries_Audio_DynamicAudioFunctions_h_3557537949(TEXT("/Script/DynamicPersonalityAI"),
	Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_FunctionLibraries_Audio_DynamicAudioFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_FunctionLibraries_Audio_DynamicAudioFunctions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
