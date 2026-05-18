// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Mood.generated.h"

/**
 * 
 */
UCLASS()
class DYNAMICPERSONALITYAI_API UMood : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	FString GetMoodName() const;
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FString Name;
};
