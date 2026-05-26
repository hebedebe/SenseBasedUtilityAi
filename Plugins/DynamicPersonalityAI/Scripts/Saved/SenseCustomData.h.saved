#pragma once

#include "CoreMinimal.h"
#include "SenseCustomData.generated.h"

#define DATATYPE(TYPE) \
	UPROPERTY(BlueprintReadOnly, Category="SenseData") \
	TYPE TYPE##Data; \
	UFUNCTION(BlueprintCallable, Category="SenseData") \
	inline void Set##TYPE(const TYPE Value) {TYPE##Data = Value;}\
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData") \
	inline TYPE Get##TYPE() {return TYPE##Data;} \
	static inline  USenseCustomData* Create##TYPE(const TYPE Value) { auto Data = NewObject<USenseCustomData>(); Data->Set##TYPE(Value); return Data;} \

#define DATATYPEPOINTER(TYPE) \
	UPROPERTY(BlueprintReadOnly, Category="SenseData") \
	TYPE* TYPE##PointerData; \
	UFUNCTION(BlueprintCallable, Category="SenseData") \
	inline void Set##TYPE##Pointer(TYPE* Value) {TYPE##PointerData = Value;}\
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData") \
	inline TYPE* Get##TYPE##Pointer() {return TYPE##PointerData;} \
	static inline USenseCustomData* Create##TYPE##Pointer(const TYPE* Value) { auto Data = NewObject<USenseCustomData>(); Data->Set##TYPE##Pointer(const_cast<TYPE*>(Value)); return Data;}

UCLASS(BlueprintType, Blueprintable)
class USenseCustomData : public UObject
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
	
	// Pointer only values - UObjects won't compile with a regular value (no copy constructor)
	DATATYPEPOINTER(USoundBase)
	DATATYPEPOINTER(UDamageType)
	DATATYPEPOINTER(AController)
	DATATYPEPOINTER(UObject)
	DATATYPEPOINTER(ACharacter)
	DATATYPEPOINTER(AActor)
	DATATYPEPOINTER(UActorComponent)
	DATATYPEPOINTER(UPrimitiveComponent)
};