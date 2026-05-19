// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SenseDataProcessor.generated.h"

struct FSenseData;
class UPersonaComponent;
/**
 * 
 */
UCLASS(BlueprintType)
class DYNAMICPERSONALITYAI_API USenseDataProcessor : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ProcessSenseData(UPersonaComponent* PersonaComponent, FSenseData SenseData);
	
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FName TargetSenseType;
};
