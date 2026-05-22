#pragma once

#include "CoreMinimal.h"
#include "SenseCustomData.generated.h"

#define DATATYPE(TYPE) \
	UPROPERTY(BlueprintReadOnly) \
	TYPE TYPE##Data; \
	UFUNCTION(BlueprintCallable) \
	void Set##TYPE(const TYPE Value) {TYPE##Data = Value;}\
	UFUNCTION(BlueprintCallable) \
	TYPE Get##TYPE() {return TYPE##Data;} \
	static FSenseCustomData Create##TYPE(const TYPE Value) { auto Data = FSenseCustomData(); Data.Set##TYPE(Value); return Data;} \
	DATATYPEPOINTER(TYPE)

#define DATATYPEPOINTER(TYPE) \
	UPROPERTY(BlueprintReadOnly) \
	TYPE* TYPE##PointerData; \
	UFUNCTION(BlueprintCallable) \
	void Set##TYPE##Pointer(TYPE* Value) {TYPE##PointerData = Value;}\
	UFUNCTION(BlueprintCallable) \
	TYPE* Get##TYPE##Pointer() {return TYPE##PointerData;} \
	static FSenseCustomData Create##TYPE##Pointer(const TYPE* Value) { auto Data = FSenseCustomData(); Data.Set##TYPE##Pointer(const_cast<TYPE*>(Value)); return Data;}

USTRUCT(BlueprintType)
struct FSenseCustomData
{
	GENERATED_BODY()
	
public:
	DATATYPE(float)
	DATATYPE(int)
	DATATYPE(FName)
	DATATYPE(FString)
	DATATYPE(FVector)
	DATATYPE(FVector2D)
	DATATYPE(bool)
	DATATYPE(FHitResult)
	
	// Pointer only values - won't compile with a regular value
	DATATYPEPOINTER(UDamageType)
	DATATYPEPOINTER(AController)
	DATATYPEPOINTER(UObject)
	DATATYPEPOINTER(ACharacter)
	DATATYPEPOINTER(AActor)
	DATATYPEPOINTER(UActorComponent)
	DATATYPEPOINTER(UPrimitiveComponent)
};
