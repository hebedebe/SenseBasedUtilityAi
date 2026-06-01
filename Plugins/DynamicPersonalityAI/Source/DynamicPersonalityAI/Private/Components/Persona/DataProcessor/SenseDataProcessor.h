#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SenseDataProcessor.generated.h"

class UMood;
struct FSenseData;
class UPersonaComponent;

UCLASS(BlueprintType, Blueprintable)
class DYNAMICPERSONALITYAI_API USenseDataProcessor : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
	void ProcessSenseData(UObject* WorldContextObject, UPersonaComponent* PersonaComponent, FSenseData SenseData);
	
	UFUNCTION(BlueprintCallable)
	void Check() const;
	
	UFUNCTION(BlueprintCallable)
	void SetMood(UMood* Mood, float Value);
	
	UFUNCTION(BlueprintCallable)
	void IncrementMood(UMood* Mood, float Value);
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetMood(UMood* Mood);
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual class UWorld* GetWorld() const override;
	
	virtual bool ImplementsGetWorld() const override;
	
public:
	void ProcessSenseDataWrapper(UObject* WorldContextObject, UPersonaComponent* PersonaComponent, FSenseData SenseData);
	
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FName TargetSenseType = "None";
	
private:
	UPROPERTY()
	UPersonaComponent* CurrentPersonaComponent;
};
