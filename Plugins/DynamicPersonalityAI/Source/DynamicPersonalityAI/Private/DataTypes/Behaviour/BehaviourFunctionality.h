// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BehaviourFunctionality.generated.h"

/**
 * 
 */
UCLASS()
class DYNAMICPERSONALITYAI_API UBehaviourFunctionality : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	virtual void EnterBehaviour();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	virtual void TickBehaviour(float DeltaTime);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	virtual void ExitBehaviour();
};
