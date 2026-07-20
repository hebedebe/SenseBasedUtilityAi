// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicPersonalityAI/Private/DataTypes/SenseData/CustomData/SenseCustomData.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSenseCustomData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_USenseCustomData();
DYNAMICPERSONALITYAI_API UClass* Z_Construct_UClass_USenseCustomData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_DynamicPersonalityAI();
// End Cross Module References

// Begin Class USenseCustomData Function GetAActorPointer
struct Z_Construct_UFunction_USenseCustomData_GetAActorPointer_Statics
{
	struct SenseCustomData_eventGetAActorPointer_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseCustomData_GetAActorPointer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventGetAActorPointer_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_GetAActorPointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_GetAActorPointer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetAActorPointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_GetAActorPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "GetAActorPointer", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_GetAActorPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetAActorPointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_GetAActorPointer_Statics::SenseCustomData_eventGetAActorPointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetAActorPointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_GetAActorPointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_GetAActorPointer_Statics::SenseCustomData_eventGetAActorPointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_GetAActorPointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_GetAActorPointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execGetAActorPointer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetAActorPointer();
	P_NATIVE_END;
}
// End Class USenseCustomData Function GetAActorPointer

// Begin Class USenseCustomData Function GetACharacterPointer
struct Z_Construct_UFunction_USenseCustomData_GetACharacterPointer_Statics
{
	struct SenseCustomData_eventGetACharacterPointer_Parms
	{
		ACharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseCustomData_GetACharacterPointer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventGetACharacterPointer_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_GetACharacterPointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_GetACharacterPointer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetACharacterPointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_GetACharacterPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "GetACharacterPointer", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_GetACharacterPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetACharacterPointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_GetACharacterPointer_Statics::SenseCustomData_eventGetACharacterPointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetACharacterPointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_GetACharacterPointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_GetACharacterPointer_Statics::SenseCustomData_eventGetACharacterPointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_GetACharacterPointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_GetACharacterPointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execGetACharacterPointer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACharacter**)Z_Param__Result=P_THIS->GetACharacterPointer();
	P_NATIVE_END;
}
// End Class USenseCustomData Function GetACharacterPointer

// Begin Class USenseCustomData Function GetAControllerPointer
struct Z_Construct_UFunction_USenseCustomData_GetAControllerPointer_Statics
{
	struct SenseCustomData_eventGetAControllerPointer_Parms
	{
		AController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseCustomData_GetAControllerPointer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventGetAControllerPointer_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_GetAControllerPointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_GetAControllerPointer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetAControllerPointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_GetAControllerPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "GetAControllerPointer", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_GetAControllerPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetAControllerPointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_GetAControllerPointer_Statics::SenseCustomData_eventGetAControllerPointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetAControllerPointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_GetAControllerPointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_GetAControllerPointer_Statics::SenseCustomData_eventGetAControllerPointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_GetAControllerPointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_GetAControllerPointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execGetAControllerPointer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AController**)Z_Param__Result=P_THIS->GetAControllerPointer();
	P_NATIVE_END;
}
// End Class USenseCustomData Function GetAControllerPointer

// Begin Class USenseCustomData Function Getbool
struct Z_Construct_UFunction_USenseCustomData_Getbool_Statics
{
	struct SenseCustomData_eventGetbool_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USenseCustomData_Getbool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SenseCustomData_eventGetbool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USenseCustomData_Getbool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SenseCustomData_eventGetbool_Parms), &Z_Construct_UFunction_USenseCustomData_Getbool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_Getbool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_Getbool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Getbool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_Getbool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "Getbool", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_Getbool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Getbool_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_Getbool_Statics::SenseCustomData_eventGetbool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Getbool_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_Getbool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_Getbool_Statics::SenseCustomData_eventGetbool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_Getbool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_Getbool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execGetbool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Getbool();
	P_NATIVE_END;
}
// End Class USenseCustomData Function Getbool

// Begin Class USenseCustomData Function GetFHitResult
struct Z_Construct_UFunction_USenseCustomData_GetFHitResult_Statics
{
	struct SenseCustomData_eventGetFHitResult_Parms
	{
		FHitResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USenseCustomData_GetFHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventGetFHitResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_GetFHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_GetFHitResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetFHitResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_GetFHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "GetFHitResult", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_GetFHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetFHitResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_GetFHitResult_Statics::SenseCustomData_eventGetFHitResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetFHitResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_GetFHitResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_GetFHitResult_Statics::SenseCustomData_eventGetFHitResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_GetFHitResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_GetFHitResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execGetFHitResult)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHitResult*)Z_Param__Result=P_THIS->GetFHitResult();
	P_NATIVE_END;
}
// End Class USenseCustomData Function GetFHitResult

// Begin Class USenseCustomData Function Getfloat
struct Z_Construct_UFunction_USenseCustomData_Getfloat_Statics
{
	struct SenseCustomData_eventGetfloat_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USenseCustomData_Getfloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventGetfloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_Getfloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_Getfloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Getfloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_Getfloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "Getfloat", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_Getfloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Getfloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_Getfloat_Statics::SenseCustomData_eventGetfloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Getfloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_Getfloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_Getfloat_Statics::SenseCustomData_eventGetfloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_Getfloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_Getfloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execGetfloat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->Getfloat();
	P_NATIVE_END;
}
// End Class USenseCustomData Function Getfloat

// Begin Class USenseCustomData Function GetFName
struct Z_Construct_UFunction_USenseCustomData_GetFName_Statics
{
	struct SenseCustomData_eventGetFName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USenseCustomData_GetFName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventGetFName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_GetFName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_GetFName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetFName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_GetFName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "GetFName", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_GetFName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetFName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_GetFName_Statics::SenseCustomData_eventGetFName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetFName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_GetFName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_GetFName_Statics::SenseCustomData_eventGetFName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_GetFName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_GetFName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execGetFName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetFName();
	P_NATIVE_END;
}
// End Class USenseCustomData Function GetFName

// Begin Class USenseCustomData Function GetFString
struct Z_Construct_UFunction_USenseCustomData_GetFString_Statics
{
	struct SenseCustomData_eventGetFString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USenseCustomData_GetFString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventGetFString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_GetFString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_GetFString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetFString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_GetFString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "GetFString", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_GetFString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetFString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_GetFString_Statics::SenseCustomData_eventGetFString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetFString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_GetFString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_GetFString_Statics::SenseCustomData_eventGetFString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_GetFString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_GetFString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execGetFString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetFString();
	P_NATIVE_END;
}
// End Class USenseCustomData Function GetFString

// Begin Class USenseCustomData Function GetFVector
struct Z_Construct_UFunction_USenseCustomData_GetFVector_Statics
{
	struct SenseCustomData_eventGetFVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USenseCustomData_GetFVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventGetFVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_GetFVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_GetFVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetFVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_GetFVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "GetFVector", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_GetFVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetFVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_GetFVector_Statics::SenseCustomData_eventGetFVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetFVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_GetFVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_GetFVector_Statics::SenseCustomData_eventGetFVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_GetFVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_GetFVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execGetFVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetFVector();
	P_NATIVE_END;
}
// End Class USenseCustomData Function GetFVector

// Begin Class USenseCustomData Function GetFVector2D
struct Z_Construct_UFunction_USenseCustomData_GetFVector2D_Statics
{
	struct SenseCustomData_eventGetFVector2D_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USenseCustomData_GetFVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventGetFVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_GetFVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_GetFVector2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetFVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_GetFVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "GetFVector2D", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_GetFVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetFVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_GetFVector2D_Statics::SenseCustomData_eventGetFVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetFVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_GetFVector2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_GetFVector2D_Statics::SenseCustomData_eventGetFVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_GetFVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_GetFVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execGetFVector2D)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetFVector2D();
	P_NATIVE_END;
}
// End Class USenseCustomData Function GetFVector2D

// Begin Class USenseCustomData Function Getint
struct Z_Construct_UFunction_USenseCustomData_Getint_Statics
{
	struct SenseCustomData_eventGetint_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USenseCustomData_Getint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventGetint_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_Getint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_Getint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Getint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_Getint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "Getint", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_Getint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Getint_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_Getint_Statics::SenseCustomData_eventGetint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Getint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_Getint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_Getint_Statics::SenseCustomData_eventGetint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_Getint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_Getint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execGetint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Getint();
	P_NATIVE_END;
}
// End Class USenseCustomData Function Getint

// Begin Class USenseCustomData Function GetUActorComponentPointer
struct Z_Construct_UFunction_USenseCustomData_GetUActorComponentPointer_Statics
{
	struct SenseCustomData_eventGetUActorComponentPointer_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseCustomData_GetUActorComponentPointer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventGetUActorComponentPointer_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_GetUActorComponentPointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_GetUActorComponentPointer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetUActorComponentPointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_GetUActorComponentPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "GetUActorComponentPointer", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_GetUActorComponentPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetUActorComponentPointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_GetUActorComponentPointer_Statics::SenseCustomData_eventGetUActorComponentPointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetUActorComponentPointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_GetUActorComponentPointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_GetUActorComponentPointer_Statics::SenseCustomData_eventGetUActorComponentPointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_GetUActorComponentPointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_GetUActorComponentPointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execGetUActorComponentPointer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetUActorComponentPointer();
	P_NATIVE_END;
}
// End Class USenseCustomData Function GetUActorComponentPointer

// Begin Class USenseCustomData Function GetUDamageTypePointer
struct Z_Construct_UFunction_USenseCustomData_GetUDamageTypePointer_Statics
{
	struct SenseCustomData_eventGetUDamageTypePointer_Parms
	{
		const UDamageType* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseCustomData_GetUDamageTypePointer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventGetUDamageTypePointer_Parms, ReturnValue), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_GetUDamageTypePointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_GetUDamageTypePointer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetUDamageTypePointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_GetUDamageTypePointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "GetUDamageTypePointer", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_GetUDamageTypePointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetUDamageTypePointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_GetUDamageTypePointer_Statics::SenseCustomData_eventGetUDamageTypePointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetUDamageTypePointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_GetUDamageTypePointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_GetUDamageTypePointer_Statics::SenseCustomData_eventGetUDamageTypePointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_GetUDamageTypePointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_GetUDamageTypePointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execGetUDamageTypePointer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UDamageType**)Z_Param__Result=P_THIS->GetUDamageTypePointer();
	P_NATIVE_END;
}
// End Class USenseCustomData Function GetUDamageTypePointer

// Begin Class USenseCustomData Function GetUObjectPointer
struct Z_Construct_UFunction_USenseCustomData_GetUObjectPointer_Statics
{
	struct SenseCustomData_eventGetUObjectPointer_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseCustomData_GetUObjectPointer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventGetUObjectPointer_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_GetUObjectPointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_GetUObjectPointer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetUObjectPointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_GetUObjectPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "GetUObjectPointer", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_GetUObjectPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetUObjectPointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_GetUObjectPointer_Statics::SenseCustomData_eventGetUObjectPointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetUObjectPointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_GetUObjectPointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_GetUObjectPointer_Statics::SenseCustomData_eventGetUObjectPointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_GetUObjectPointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_GetUObjectPointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execGetUObjectPointer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetUObjectPointer();
	P_NATIVE_END;
}
// End Class USenseCustomData Function GetUObjectPointer

// Begin Class USenseCustomData Function GetUPrimitiveComponentPointer
struct Z_Construct_UFunction_USenseCustomData_GetUPrimitiveComponentPointer_Statics
{
	struct SenseCustomData_eventGetUPrimitiveComponentPointer_Parms
	{
		UPrimitiveComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseCustomData_GetUPrimitiveComponentPointer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventGetUPrimitiveComponentPointer_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_GetUPrimitiveComponentPointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_GetUPrimitiveComponentPointer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetUPrimitiveComponentPointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_GetUPrimitiveComponentPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "GetUPrimitiveComponentPointer", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_GetUPrimitiveComponentPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetUPrimitiveComponentPointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_GetUPrimitiveComponentPointer_Statics::SenseCustomData_eventGetUPrimitiveComponentPointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetUPrimitiveComponentPointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_GetUPrimitiveComponentPointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_GetUPrimitiveComponentPointer_Statics::SenseCustomData_eventGetUPrimitiveComponentPointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_GetUPrimitiveComponentPointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_GetUPrimitiveComponentPointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execGetUPrimitiveComponentPointer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetUPrimitiveComponentPointer();
	P_NATIVE_END;
}
// End Class USenseCustomData Function GetUPrimitiveComponentPointer

// Begin Class USenseCustomData Function GetUSoundBasePointer
struct Z_Construct_UFunction_USenseCustomData_GetUSoundBasePointer_Statics
{
	struct SenseCustomData_eventGetUSoundBasePointer_Parms
	{
		USoundBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseCustomData_GetUSoundBasePointer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventGetUSoundBasePointer_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_GetUSoundBasePointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_GetUSoundBasePointer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetUSoundBasePointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_GetUSoundBasePointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "GetUSoundBasePointer", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_GetUSoundBasePointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetUSoundBasePointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_GetUSoundBasePointer_Statics::SenseCustomData_eventGetUSoundBasePointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_GetUSoundBasePointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_GetUSoundBasePointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_GetUSoundBasePointer_Statics::SenseCustomData_eventGetUSoundBasePointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_GetUSoundBasePointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_GetUSoundBasePointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execGetUSoundBasePointer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundBase**)Z_Param__Result=P_THIS->GetUSoundBasePointer();
	P_NATIVE_END;
}
// End Class USenseCustomData Function GetUSoundBasePointer

// Begin Class USenseCustomData Function SetAActorPointer
struct Z_Construct_UFunction_USenseCustomData_SetAActorPointer_Statics
{
	struct SenseCustomData_eventSetAActorPointer_Parms
	{
		AActor* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseCustomData_SetAActorPointer_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventSetAActorPointer_Parms, Value), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_SetAActorPointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_SetAActorPointer_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetAActorPointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_SetAActorPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "SetAActorPointer", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_SetAActorPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetAActorPointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_SetAActorPointer_Statics::SenseCustomData_eventSetAActorPointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetAActorPointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_SetAActorPointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_SetAActorPointer_Statics::SenseCustomData_eventSetAActorPointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_SetAActorPointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_SetAActorPointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execSetAActorPointer)
{
	P_GET_OBJECT(AActor,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAActorPointer(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseCustomData Function SetAActorPointer

// Begin Class USenseCustomData Function SetACharacterPointer
struct Z_Construct_UFunction_USenseCustomData_SetACharacterPointer_Statics
{
	struct SenseCustomData_eventSetACharacterPointer_Parms
	{
		ACharacter* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseCustomData_SetACharacterPointer_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventSetACharacterPointer_Parms, Value), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_SetACharacterPointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_SetACharacterPointer_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetACharacterPointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_SetACharacterPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "SetACharacterPointer", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_SetACharacterPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetACharacterPointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_SetACharacterPointer_Statics::SenseCustomData_eventSetACharacterPointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetACharacterPointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_SetACharacterPointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_SetACharacterPointer_Statics::SenseCustomData_eventSetACharacterPointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_SetACharacterPointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_SetACharacterPointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execSetACharacterPointer)
{
	P_GET_OBJECT(ACharacter,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetACharacterPointer(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseCustomData Function SetACharacterPointer

// Begin Class USenseCustomData Function SetAControllerPointer
struct Z_Construct_UFunction_USenseCustomData_SetAControllerPointer_Statics
{
	struct SenseCustomData_eventSetAControllerPointer_Parms
	{
		AController* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseCustomData_SetAControllerPointer_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventSetAControllerPointer_Parms, Value), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_SetAControllerPointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_SetAControllerPointer_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetAControllerPointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_SetAControllerPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "SetAControllerPointer", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_SetAControllerPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetAControllerPointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_SetAControllerPointer_Statics::SenseCustomData_eventSetAControllerPointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetAControllerPointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_SetAControllerPointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_SetAControllerPointer_Statics::SenseCustomData_eventSetAControllerPointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_SetAControllerPointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_SetAControllerPointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execSetAControllerPointer)
{
	P_GET_OBJECT(AController,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAControllerPointer(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseCustomData Function SetAControllerPointer

// Begin Class USenseCustomData Function Setbool
struct Z_Construct_UFunction_USenseCustomData_Setbool_Statics
{
	struct SenseCustomData_eventSetbool_Parms
	{
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USenseCustomData_Setbool_Statics::NewProp_Value_SetBit(void* Obj)
{
	((SenseCustomData_eventSetbool_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USenseCustomData_Setbool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SenseCustomData_eventSetbool_Parms), &Z_Construct_UFunction_USenseCustomData_Setbool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_Setbool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_Setbool_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Setbool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_Setbool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "Setbool", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_Setbool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Setbool_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_Setbool_Statics::SenseCustomData_eventSetbool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Setbool_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_Setbool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_Setbool_Statics::SenseCustomData_eventSetbool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_Setbool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_Setbool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execSetbool)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Setbool(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseCustomData Function Setbool

// Begin Class USenseCustomData Function SetFHitResult
struct Z_Construct_UFunction_USenseCustomData_SetFHitResult_Statics
{
	struct SenseCustomData_eventSetFHitResult_Parms
	{
		FHitResult Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USenseCustomData_SetFHitResult_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventSetFHitResult_Parms, Value), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_SetFHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_SetFHitResult_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetFHitResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_SetFHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "SetFHitResult", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_SetFHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetFHitResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_SetFHitResult_Statics::SenseCustomData_eventSetFHitResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetFHitResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_SetFHitResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_SetFHitResult_Statics::SenseCustomData_eventSetFHitResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_SetFHitResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_SetFHitResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execSetFHitResult)
{
	P_GET_STRUCT(FHitResult,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFHitResult(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseCustomData Function SetFHitResult

// Begin Class USenseCustomData Function Setfloat
struct Z_Construct_UFunction_USenseCustomData_Setfloat_Statics
{
	struct SenseCustomData_eventSetfloat_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USenseCustomData_Setfloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventSetfloat_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_Setfloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_Setfloat_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Setfloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_Setfloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "Setfloat", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_Setfloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Setfloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_Setfloat_Statics::SenseCustomData_eventSetfloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Setfloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_Setfloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_Setfloat_Statics::SenseCustomData_eventSetfloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_Setfloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_Setfloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execSetfloat)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Setfloat(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseCustomData Function Setfloat

// Begin Class USenseCustomData Function SetFName
struct Z_Construct_UFunction_USenseCustomData_SetFName_Statics
{
	struct SenseCustomData_eventSetFName_Parms
	{
		FName Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USenseCustomData_SetFName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventSetFName_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_SetFName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_SetFName_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetFName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_SetFName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "SetFName", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_SetFName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetFName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_SetFName_Statics::SenseCustomData_eventSetFName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetFName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_SetFName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_SetFName_Statics::SenseCustomData_eventSetFName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_SetFName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_SetFName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execSetFName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFName(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseCustomData Function SetFName

// Begin Class USenseCustomData Function SetFString
struct Z_Construct_UFunction_USenseCustomData_SetFString_Statics
{
	struct SenseCustomData_eventSetFString_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USenseCustomData_SetFString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventSetFString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_SetFString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_SetFString_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetFString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_SetFString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "SetFString", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_SetFString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetFString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_SetFString_Statics::SenseCustomData_eventSetFString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetFString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_SetFString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_SetFString_Statics::SenseCustomData_eventSetFString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_SetFString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_SetFString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execSetFString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFString(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseCustomData Function SetFString

// Begin Class USenseCustomData Function SetFVector
struct Z_Construct_UFunction_USenseCustomData_SetFVector_Statics
{
	struct SenseCustomData_eventSetFVector_Parms
	{
		FVector Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USenseCustomData_SetFVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventSetFVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_SetFVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_SetFVector_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetFVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_SetFVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "SetFVector", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_SetFVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetFVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_SetFVector_Statics::SenseCustomData_eventSetFVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetFVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_SetFVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_SetFVector_Statics::SenseCustomData_eventSetFVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_SetFVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_SetFVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execSetFVector)
{
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFVector(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseCustomData Function SetFVector

// Begin Class USenseCustomData Function SetFVector2D
struct Z_Construct_UFunction_USenseCustomData_SetFVector2D_Statics
{
	struct SenseCustomData_eventSetFVector2D_Parms
	{
		FVector2D Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USenseCustomData_SetFVector2D_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventSetFVector2D_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_SetFVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_SetFVector2D_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetFVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_SetFVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "SetFVector2D", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_SetFVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetFVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_SetFVector2D_Statics::SenseCustomData_eventSetFVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetFVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_SetFVector2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_SetFVector2D_Statics::SenseCustomData_eventSetFVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_SetFVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_SetFVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execSetFVector2D)
{
	P_GET_STRUCT(FVector2D,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFVector2D(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseCustomData Function SetFVector2D

// Begin Class USenseCustomData Function Setint
struct Z_Construct_UFunction_USenseCustomData_Setint_Statics
{
	struct SenseCustomData_eventSetint_Parms
	{
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USenseCustomData_Setint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventSetint_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_Setint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_Setint_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Setint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_Setint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "Setint", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_Setint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Setint_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_Setint_Statics::SenseCustomData_eventSetint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_Setint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_Setint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_Setint_Statics::SenseCustomData_eventSetint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_Setint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_Setint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execSetint)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Setint(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseCustomData Function Setint

// Begin Class USenseCustomData Function SetUActorComponentPointer
struct Z_Construct_UFunction_USenseCustomData_SetUActorComponentPointer_Statics
{
	struct SenseCustomData_eventSetUActorComponentPointer_Parms
	{
		UActorComponent* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseCustomData_SetUActorComponentPointer_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventSetUActorComponentPointer_Parms, Value), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_SetUActorComponentPointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_SetUActorComponentPointer_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetUActorComponentPointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_SetUActorComponentPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "SetUActorComponentPointer", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_SetUActorComponentPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetUActorComponentPointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_SetUActorComponentPointer_Statics::SenseCustomData_eventSetUActorComponentPointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetUActorComponentPointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_SetUActorComponentPointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_SetUActorComponentPointer_Statics::SenseCustomData_eventSetUActorComponentPointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_SetUActorComponentPointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_SetUActorComponentPointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execSetUActorComponentPointer)
{
	P_GET_OBJECT(UActorComponent,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUActorComponentPointer(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseCustomData Function SetUActorComponentPointer

// Begin Class USenseCustomData Function SetUDamageTypePointer
struct Z_Construct_UFunction_USenseCustomData_SetUDamageTypePointer_Statics
{
	struct SenseCustomData_eventSetUDamageTypePointer_Parms
	{
		const UDamageType* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseCustomData_SetUDamageTypePointer_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventSetUDamageTypePointer_Parms, Value), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_SetUDamageTypePointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_SetUDamageTypePointer_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetUDamageTypePointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_SetUDamageTypePointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "SetUDamageTypePointer", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_SetUDamageTypePointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetUDamageTypePointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_SetUDamageTypePointer_Statics::SenseCustomData_eventSetUDamageTypePointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetUDamageTypePointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_SetUDamageTypePointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_SetUDamageTypePointer_Statics::SenseCustomData_eventSetUDamageTypePointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_SetUDamageTypePointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_SetUDamageTypePointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execSetUDamageTypePointer)
{
	P_GET_OBJECT(UDamageType,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUDamageTypePointer(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseCustomData Function SetUDamageTypePointer

// Begin Class USenseCustomData Function SetUObjectPointer
struct Z_Construct_UFunction_USenseCustomData_SetUObjectPointer_Statics
{
	struct SenseCustomData_eventSetUObjectPointer_Parms
	{
		UObject* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseCustomData_SetUObjectPointer_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventSetUObjectPointer_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_SetUObjectPointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_SetUObjectPointer_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetUObjectPointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_SetUObjectPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "SetUObjectPointer", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_SetUObjectPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetUObjectPointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_SetUObjectPointer_Statics::SenseCustomData_eventSetUObjectPointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetUObjectPointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_SetUObjectPointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_SetUObjectPointer_Statics::SenseCustomData_eventSetUObjectPointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_SetUObjectPointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_SetUObjectPointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execSetUObjectPointer)
{
	P_GET_OBJECT(UObject,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUObjectPointer(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseCustomData Function SetUObjectPointer

// Begin Class USenseCustomData Function SetUPrimitiveComponentPointer
struct Z_Construct_UFunction_USenseCustomData_SetUPrimitiveComponentPointer_Statics
{
	struct SenseCustomData_eventSetUPrimitiveComponentPointer_Parms
	{
		UPrimitiveComponent* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseCustomData_SetUPrimitiveComponentPointer_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventSetUPrimitiveComponentPointer_Parms, Value), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_SetUPrimitiveComponentPointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_SetUPrimitiveComponentPointer_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetUPrimitiveComponentPointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_SetUPrimitiveComponentPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "SetUPrimitiveComponentPointer", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_SetUPrimitiveComponentPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetUPrimitiveComponentPointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_SetUPrimitiveComponentPointer_Statics::SenseCustomData_eventSetUPrimitiveComponentPointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetUPrimitiveComponentPointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_SetUPrimitiveComponentPointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_SetUPrimitiveComponentPointer_Statics::SenseCustomData_eventSetUPrimitiveComponentPointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_SetUPrimitiveComponentPointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_SetUPrimitiveComponentPointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execSetUPrimitiveComponentPointer)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUPrimitiveComponentPointer(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseCustomData Function SetUPrimitiveComponentPointer

// Begin Class USenseCustomData Function SetUSoundBasePointer
struct Z_Construct_UFunction_USenseCustomData_SetUSoundBasePointer_Statics
{
	struct SenseCustomData_eventSetUSoundBasePointer_Parms
	{
		USoundBase* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USenseCustomData_SetUSoundBasePointer_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SenseCustomData_eventSetUSoundBasePointer_Parms, Value), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USenseCustomData_SetUSoundBasePointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USenseCustomData_SetUSoundBasePointer_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetUSoundBasePointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USenseCustomData_SetUSoundBasePointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USenseCustomData, nullptr, "SetUSoundBasePointer", nullptr, nullptr, Z_Construct_UFunction_USenseCustomData_SetUSoundBasePointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetUSoundBasePointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USenseCustomData_SetUSoundBasePointer_Statics::SenseCustomData_eventSetUSoundBasePointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USenseCustomData_SetUSoundBasePointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USenseCustomData_SetUSoundBasePointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USenseCustomData_SetUSoundBasePointer_Statics::SenseCustomData_eventSetUSoundBasePointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USenseCustomData_SetUSoundBasePointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USenseCustomData_SetUSoundBasePointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USenseCustomData::execSetUSoundBasePointer)
{
	P_GET_OBJECT(USoundBase,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUSoundBasePointer(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USenseCustomData Function SetUSoundBasePointer

// Begin Class USenseCustomData
void USenseCustomData::StaticRegisterNativesUSenseCustomData()
{
	UClass* Class = USenseCustomData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAActorPointer", &USenseCustomData::execGetAActorPointer },
		{ "GetACharacterPointer", &USenseCustomData::execGetACharacterPointer },
		{ "GetAControllerPointer", &USenseCustomData::execGetAControllerPointer },
		{ "Getbool", &USenseCustomData::execGetbool },
		{ "GetFHitResult", &USenseCustomData::execGetFHitResult },
		{ "Getfloat", &USenseCustomData::execGetfloat },
		{ "GetFName", &USenseCustomData::execGetFName },
		{ "GetFString", &USenseCustomData::execGetFString },
		{ "GetFVector", &USenseCustomData::execGetFVector },
		{ "GetFVector2D", &USenseCustomData::execGetFVector2D },
		{ "Getint", &USenseCustomData::execGetint },
		{ "GetUActorComponentPointer", &USenseCustomData::execGetUActorComponentPointer },
		{ "GetUDamageTypePointer", &USenseCustomData::execGetUDamageTypePointer },
		{ "GetUObjectPointer", &USenseCustomData::execGetUObjectPointer },
		{ "GetUPrimitiveComponentPointer", &USenseCustomData::execGetUPrimitiveComponentPointer },
		{ "GetUSoundBasePointer", &USenseCustomData::execGetUSoundBasePointer },
		{ "SetAActorPointer", &USenseCustomData::execSetAActorPointer },
		{ "SetACharacterPointer", &USenseCustomData::execSetACharacterPointer },
		{ "SetAControllerPointer", &USenseCustomData::execSetAControllerPointer },
		{ "Setbool", &USenseCustomData::execSetbool },
		{ "SetFHitResult", &USenseCustomData::execSetFHitResult },
		{ "Setfloat", &USenseCustomData::execSetfloat },
		{ "SetFName", &USenseCustomData::execSetFName },
		{ "SetFString", &USenseCustomData::execSetFString },
		{ "SetFVector", &USenseCustomData::execSetFVector },
		{ "SetFVector2D", &USenseCustomData::execSetFVector2D },
		{ "Setint", &USenseCustomData::execSetint },
		{ "SetUActorComponentPointer", &USenseCustomData::execSetUActorComponentPointer },
		{ "SetUDamageTypePointer", &USenseCustomData::execSetUDamageTypePointer },
		{ "SetUObjectPointer", &USenseCustomData::execSetUObjectPointer },
		{ "SetUPrimitiveComponentPointer", &USenseCustomData::execSetUPrimitiveComponentPointer },
		{ "SetUSoundBasePointer", &USenseCustomData::execSetUSoundBasePointer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USenseCustomData);
UClass* Z_Construct_UClass_USenseCustomData_NoRegister()
{
	return USenseCustomData::StaticClass();
}
struct Z_Construct_UClass_USenseCustomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataTypes/SenseData/CustomData/SenseCustomData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_floatData_MetaData[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_intData_MetaData[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FNameData_MetaData[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FStringData_MetaData[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FVectorData_MetaData[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FVector2DData_MetaData[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_boolData_MetaData[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FHitResultData_MetaData[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_USoundBasePointerData_MetaData[] = {
		{ "Category", "SenseData" },
		{ "Comment", "// Pointer only values - UObjects won't compile with a regular value (no copy constructor)\n" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
		{ "ToolTip", "Pointer only values - UObjects won't compile with a regular value (no copy constructor)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UDamageTypePointerData_MetaData[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AControllerPointerData_MetaData[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UObjectPointerData_MetaData[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ACharacterPointerData_MetaData[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AActorPointerData_MetaData[] = {
		{ "Category", "SenseData" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UActorComponentPointerData_MetaData[] = {
		{ "Category", "SenseData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UPrimitiveComponentPointerData_MetaData[] = {
		{ "Category", "SenseData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataTypes/SenseData/CustomData/SenseCustomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_floatData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_intData;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FNameData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FStringData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FVectorData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FVector2DData;
	static void NewProp_boolData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_boolData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FHitResultData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_USoundBasePointerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UDamageTypePointerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AControllerPointerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UObjectPointerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ACharacterPointerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AActorPointerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UActorComponentPointerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UPrimitiveComponentPointerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USenseCustomData_GetAActorPointer, "GetAActorPointer" }, // 513637377
		{ &Z_Construct_UFunction_USenseCustomData_GetACharacterPointer, "GetACharacterPointer" }, // 2967521721
		{ &Z_Construct_UFunction_USenseCustomData_GetAControllerPointer, "GetAControllerPointer" }, // 3222200026
		{ &Z_Construct_UFunction_USenseCustomData_Getbool, "Getbool" }, // 3091130453
		{ &Z_Construct_UFunction_USenseCustomData_GetFHitResult, "GetFHitResult" }, // 843169578
		{ &Z_Construct_UFunction_USenseCustomData_Getfloat, "Getfloat" }, // 159125518
		{ &Z_Construct_UFunction_USenseCustomData_GetFName, "GetFName" }, // 3931996781
		{ &Z_Construct_UFunction_USenseCustomData_GetFString, "GetFString" }, // 1501671468
		{ &Z_Construct_UFunction_USenseCustomData_GetFVector, "GetFVector" }, // 3875347564
		{ &Z_Construct_UFunction_USenseCustomData_GetFVector2D, "GetFVector2D" }, // 2688648304
		{ &Z_Construct_UFunction_USenseCustomData_Getint, "Getint" }, // 111406920
		{ &Z_Construct_UFunction_USenseCustomData_GetUActorComponentPointer, "GetUActorComponentPointer" }, // 2187471530
		{ &Z_Construct_UFunction_USenseCustomData_GetUDamageTypePointer, "GetUDamageTypePointer" }, // 3797267040
		{ &Z_Construct_UFunction_USenseCustomData_GetUObjectPointer, "GetUObjectPointer" }, // 2313015559
		{ &Z_Construct_UFunction_USenseCustomData_GetUPrimitiveComponentPointer, "GetUPrimitiveComponentPointer" }, // 56316458
		{ &Z_Construct_UFunction_USenseCustomData_GetUSoundBasePointer, "GetUSoundBasePointer" }, // 3255241388
		{ &Z_Construct_UFunction_USenseCustomData_SetAActorPointer, "SetAActorPointer" }, // 669870071
		{ &Z_Construct_UFunction_USenseCustomData_SetACharacterPointer, "SetACharacterPointer" }, // 1734275309
		{ &Z_Construct_UFunction_USenseCustomData_SetAControllerPointer, "SetAControllerPointer" }, // 2328838804
		{ &Z_Construct_UFunction_USenseCustomData_Setbool, "Setbool" }, // 855610794
		{ &Z_Construct_UFunction_USenseCustomData_SetFHitResult, "SetFHitResult" }, // 315765977
		{ &Z_Construct_UFunction_USenseCustomData_Setfloat, "Setfloat" }, // 2941765459
		{ &Z_Construct_UFunction_USenseCustomData_SetFName, "SetFName" }, // 2161670591
		{ &Z_Construct_UFunction_USenseCustomData_SetFString, "SetFString" }, // 2923698985
		{ &Z_Construct_UFunction_USenseCustomData_SetFVector, "SetFVector" }, // 3441761878
		{ &Z_Construct_UFunction_USenseCustomData_SetFVector2D, "SetFVector2D" }, // 2464777009
		{ &Z_Construct_UFunction_USenseCustomData_Setint, "Setint" }, // 2067561064
		{ &Z_Construct_UFunction_USenseCustomData_SetUActorComponentPointer, "SetUActorComponentPointer" }, // 3679361925
		{ &Z_Construct_UFunction_USenseCustomData_SetUDamageTypePointer, "SetUDamageTypePointer" }, // 3721498839
		{ &Z_Construct_UFunction_USenseCustomData_SetUObjectPointer, "SetUObjectPointer" }, // 3720659110
		{ &Z_Construct_UFunction_USenseCustomData_SetUPrimitiveComponentPointer, "SetUPrimitiveComponentPointer" }, // 3894636875
		{ &Z_Construct_UFunction_USenseCustomData_SetUSoundBasePointer, "SetUSoundBasePointer" }, // 3214547448
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USenseCustomData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USenseCustomData_Statics::NewProp_floatData = { "floatData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseCustomData, floatData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_floatData_MetaData), NewProp_floatData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USenseCustomData_Statics::NewProp_intData = { "intData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseCustomData, intData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_intData_MetaData), NewProp_intData_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USenseCustomData_Statics::NewProp_FNameData = { "FNameData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseCustomData, FNameData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FNameData_MetaData), NewProp_FNameData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USenseCustomData_Statics::NewProp_FStringData = { "FStringData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseCustomData, FStringData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FStringData_MetaData), NewProp_FStringData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USenseCustomData_Statics::NewProp_FVectorData = { "FVectorData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseCustomData, FVectorData), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FVectorData_MetaData), NewProp_FVectorData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USenseCustomData_Statics::NewProp_FVector2DData = { "FVector2DData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseCustomData, FVector2DData), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FVector2DData_MetaData), NewProp_FVector2DData_MetaData) };
void Z_Construct_UClass_USenseCustomData_Statics::NewProp_boolData_SetBit(void* Obj)
{
	((USenseCustomData*)Obj)->boolData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USenseCustomData_Statics::NewProp_boolData = { "boolData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USenseCustomData), &Z_Construct_UClass_USenseCustomData_Statics::NewProp_boolData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_boolData_MetaData), NewProp_boolData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USenseCustomData_Statics::NewProp_FHitResultData = { "FHitResultData", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseCustomData, FHitResultData), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FHitResultData_MetaData), NewProp_FHitResultData_MetaData) }; // 4100991306
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USenseCustomData_Statics::NewProp_USoundBasePointerData = { "USoundBasePointerData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseCustomData, USoundBasePointerData), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_USoundBasePointerData_MetaData), NewProp_USoundBasePointerData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USenseCustomData_Statics::NewProp_UDamageTypePointerData = { "UDamageTypePointerData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseCustomData, UDamageTypePointerData), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UDamageTypePointerData_MetaData), NewProp_UDamageTypePointerData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USenseCustomData_Statics::NewProp_AControllerPointerData = { "AControllerPointerData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseCustomData, AControllerPointerData), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AControllerPointerData_MetaData), NewProp_AControllerPointerData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USenseCustomData_Statics::NewProp_UObjectPointerData = { "UObjectPointerData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseCustomData, UObjectPointerData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UObjectPointerData_MetaData), NewProp_UObjectPointerData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USenseCustomData_Statics::NewProp_ACharacterPointerData = { "ACharacterPointerData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseCustomData, ACharacterPointerData), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ACharacterPointerData_MetaData), NewProp_ACharacterPointerData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USenseCustomData_Statics::NewProp_AActorPointerData = { "AActorPointerData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseCustomData, AActorPointerData), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AActorPointerData_MetaData), NewProp_AActorPointerData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USenseCustomData_Statics::NewProp_UActorComponentPointerData = { "UActorComponentPointerData", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseCustomData, UActorComponentPointerData), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UActorComponentPointerData_MetaData), NewProp_UActorComponentPointerData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USenseCustomData_Statics::NewProp_UPrimitiveComponentPointerData = { "UPrimitiveComponentPointerData", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USenseCustomData, UPrimitiveComponentPointerData), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UPrimitiveComponentPointerData_MetaData), NewProp_UPrimitiveComponentPointerData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USenseCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseCustomData_Statics::NewProp_floatData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseCustomData_Statics::NewProp_intData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseCustomData_Statics::NewProp_FNameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseCustomData_Statics::NewProp_FStringData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseCustomData_Statics::NewProp_FVectorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseCustomData_Statics::NewProp_FVector2DData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseCustomData_Statics::NewProp_boolData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseCustomData_Statics::NewProp_FHitResultData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseCustomData_Statics::NewProp_USoundBasePointerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseCustomData_Statics::NewProp_UDamageTypePointerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseCustomData_Statics::NewProp_AControllerPointerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseCustomData_Statics::NewProp_UObjectPointerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseCustomData_Statics::NewProp_ACharacterPointerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseCustomData_Statics::NewProp_AActorPointerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseCustomData_Statics::NewProp_UActorComponentPointerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USenseCustomData_Statics::NewProp_UPrimitiveComponentPointerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USenseCustomData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USenseCustomData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DynamicPersonalityAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USenseCustomData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USenseCustomData_Statics::ClassParams = {
	&USenseCustomData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USenseCustomData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USenseCustomData_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USenseCustomData_Statics::Class_MetaDataParams), Z_Construct_UClass_USenseCustomData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USenseCustomData()
{
	if (!Z_Registration_Info_UClass_USenseCustomData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USenseCustomData.OuterSingleton, Z_Construct_UClass_USenseCustomData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USenseCustomData.OuterSingleton;
}
template<> DYNAMICPERSONALITYAI_API UClass* StaticClass<USenseCustomData>()
{
	return USenseCustomData::StaticClass();
}
USenseCustomData::USenseCustomData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USenseCustomData);
USenseCustomData::~USenseCustomData() {}
// End Class USenseCustomData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_DataTypes_SenseData_CustomData_SenseCustomData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USenseCustomData, USenseCustomData::StaticClass, TEXT("USenseCustomData"), &Z_Registration_Info_UClass_USenseCustomData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USenseCustomData), 652197662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_DataTypes_SenseData_CustomData_SenseCustomData_h_2477997999(TEXT("/Script/DynamicPersonalityAI"),
	Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_DataTypes_SenseData_CustomData_SenseCustomData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s242289_Documents_Git_SenseBasedUtilityAi_PackagedPlugin_DynamicPersonalityAI_HostProject_Plugins_DynamicPersonalityAI_Source_DynamicPersonalityAI_Private_DataTypes_SenseData_CustomData_SenseCustomData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
