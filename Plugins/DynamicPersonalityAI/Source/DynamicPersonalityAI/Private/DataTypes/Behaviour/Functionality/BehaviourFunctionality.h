// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BehaviourFunctionality.generated.h"

class UPersonaComponent;
class UMemoryComponent;
class UBehaviourComponent;
/**
 * 
 */
UCLASS()
class DYNAMICPERSONALITYAI_API UBehaviourFunctionality : public UObject
{
	GENERATED_BODY()
	
	friend class UBehaviour;
	
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void EnterBehaviour();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void TickBehaviour(float DeltaTime);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void ExitBehaviour();
	
protected:
	UPROPERTY(BlueprintReadOnly)
	UBehaviourComponent* BehaviourComponent;
	
	UPROPERTY(BlueprintReadOnly)
	UMemoryComponent* MemoryComponent;
	
	UPROPERTY(BlueprintReadOnly)
	UPersonaComponent* PersonaComponent;
	
	UPROPERTY(BlueprintReadOnly)
	AActor* OwningActor;
};
