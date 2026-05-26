#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SenseDataProcessor.generated.h"

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
	void Check();
	
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FName TargetSenseType = "None";
};
