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

    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    float floatData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void Setfloat(const float Value) {floatData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline float Getfloat() {return floatData;}
	static inline USenseCustomData* Createfloat(const float Value) { auto Data = NewObject<USenseCustomData>(); Data->Setfloat(Value); return Data;}

    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    int intData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void Setint(const int Value) {intData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline int Getint() {return intData;}
	static inline USenseCustomData* Createint(const int Value) { auto Data = NewObject<USenseCustomData>(); Data->Setint(Value); return Data;}

    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    FName FNameData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void SetFName(const FName Value) {FNameData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline FName GetFName() {return FNameData;}
	static inline USenseCustomData* CreateFName(const FName Value) { auto Data = NewObject<USenseCustomData>(); Data->SetFName(Value); return Data;}

    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    FString FStringData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void SetFString(const FString Value) {FStringData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline FString GetFString() {return FStringData;}
	static inline USenseCustomData* CreateFString(const FString Value) { auto Data = NewObject<USenseCustomData>(); Data->SetFString(Value); return Data;}

    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    FVector FVectorData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void SetFVector(const FVector Value) {FVectorData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline FVector GetFVector() {return FVectorData;}
	static inline USenseCustomData* CreateFVector(const FVector Value) { auto Data = NewObject<USenseCustomData>(); Data->SetFVector(Value); return Data;}

    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    FVector2D FVector2DData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void SetFVector2D(const FVector2D Value) {FVector2DData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline FVector2D GetFVector2D() {return FVector2DData;}
	static inline USenseCustomData* CreateFVector2D(const FVector2D Value) { auto Data = NewObject<USenseCustomData>(); Data->SetFVector2D(Value); return Data;}

    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    bool boolData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void Setbool(const bool Value) {boolData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline bool Getbool() {return boolData;}
	static inline USenseCustomData* Createbool(const bool Value) { auto Data = NewObject<USenseCustomData>(); Data->Setbool(Value); return Data;}

    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    FHitResult FHitResultData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void SetFHitResult(const FHitResult Value) {FHitResultData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline FHitResult GetFHitResult() {return FHitResultData;}
	static inline USenseCustomData* CreateFHitResult(const FHitResult Value) { auto Data = NewObject<USenseCustomData>(); Data->SetFHitResult(Value); return Data;}
		
	// Pointer only values - UObjects won't compile with a regular value (no copy constructor)

    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    USoundBase* USoundBasePointerData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void SetUSoundBasePointer(USoundBase* Value) {USoundBasePointerData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline USoundBase* GetUSoundBasePointer() {return USoundBasePointerData;}
	static inline USenseCustomData* CreateUSoundBasePointer(const USoundBase* Value) { auto Data = NewObject<USenseCustomData>(); Data->SetUSoundBasePointer(const_cast<USoundBase*>(Value)); return Data;}

    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    UDamageType* UDamageTypePointerData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void SetUDamageTypePointer(UDamageType* Value) {UDamageTypePointerData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline UDamageType* GetUDamageTypePointer() {return UDamageTypePointerData;}
	static inline USenseCustomData* CreateUDamageTypePointer(const UDamageType* Value) { auto Data = NewObject<USenseCustomData>(); Data->SetUDamageTypePointer(const_cast<UDamageType*>(Value)); return Data;}

    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    AController* AControllerPointerData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void SetAControllerPointer(AController* Value) {AControllerPointerData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline AController* GetAControllerPointer() {return AControllerPointerData;}
	static inline USenseCustomData* CreateAControllerPointer(const AController* Value) { auto Data = NewObject<USenseCustomData>(); Data->SetAControllerPointer(const_cast<AController*>(Value)); return Data;}

    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    UObject* UObjectPointerData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void SetUObjectPointer(UObject* Value) {UObjectPointerData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline UObject* GetUObjectPointer() {return UObjectPointerData;}
	static inline USenseCustomData* CreateUObjectPointer(const UObject* Value) { auto Data = NewObject<USenseCustomData>(); Data->SetUObjectPointer(const_cast<UObject*>(Value)); return Data;}

    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    ACharacter* ACharacterPointerData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void SetACharacterPointer(ACharacter* Value) {ACharacterPointerData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline ACharacter* GetACharacterPointer() {return ACharacterPointerData;}
	static inline USenseCustomData* CreateACharacterPointer(const ACharacter* Value) { auto Data = NewObject<USenseCustomData>(); Data->SetACharacterPointer(const_cast<ACharacter*>(Value)); return Data;}

    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    AActor* AActorPointerData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void SetAActorPointer(AActor* Value) {AActorPointerData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline AActor* GetAActorPointer() {return AActorPointerData;}
	static inline USenseCustomData* CreateAActorPointer(const AActor* Value) { auto Data = NewObject<USenseCustomData>(); Data->SetAActorPointer(const_cast<AActor*>(Value)); return Data;}

    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    UActorComponent* UActorComponentPointerData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void SetUActorComponentPointer(UActorComponent* Value) {UActorComponentPointerData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline UActorComponent* GetUActorComponentPointer() {return UActorComponentPointerData;}
	static inline USenseCustomData* CreateUActorComponentPointer(const UActorComponent* Value) { auto Data = NewObject<USenseCustomData>(); Data->SetUActorComponentPointer(const_cast<UActorComponent*>(Value)); return Data;}

    UPROPERTY(BlueprintReadOnly, Category="SenseData")
    UPrimitiveComponent* UPrimitiveComponentPointerData;
    UFUNCTION(BlueprintCallable, Category="SenseData")
	inline void SetUPrimitiveComponentPointer(UPrimitiveComponent* Value) {UPrimitiveComponentPointerData = Value;}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SenseData")
	inline UPrimitiveComponent* GetUPrimitiveComponentPointer() {return UPrimitiveComponentPointerData;}
	static inline USenseCustomData* CreateUPrimitiveComponentPointer(const UPrimitiveComponent* Value) { auto Data = NewObject<USenseCustomData>(); Data->SetUPrimitiveComponentPointer(const_cast<UPrimitiveComponent*>(Value)); return Data;}
};