// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Behaviour.generated.h"

class UBehaviourComponent;
class UMood;
class UBehaviourFunctionality;
/**
 * 
 */
UCLASS()
class DYNAMICPERSONALITYAI_API UBehaviour : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void Initialise(UBehaviourComponent* BehaviourComponent);
	
	UFUNCTION(BlueprintCallable)
	virtual float EvaluateMoodWeights(TMap<UMood*, float> OtherWeights);
	
	UFUNCTION()
	void SetActive(bool bNewActive);
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetActive() const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	UBehaviourFunctionality* GetFunctionality() const;
	
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TSubclassOf<UBehaviourFunctionality> BehaviourFunctionalityClass;
	
	UPROPERTY(BlueprintReadOnly)
	TMap<UMood*, float> MoodWeights;
	
	UPROPERTY(BlueprintReadOnly)
	float Bias;
	
protected:
	UPROPERTY(BlueprintReadOnly)
	UBehaviourFunctionality* BehaviourFunctionality;
	
private:
	bool bActive = false;
};
