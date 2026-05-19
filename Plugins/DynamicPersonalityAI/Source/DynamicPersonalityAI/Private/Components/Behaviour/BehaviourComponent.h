// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BehaviourComponent.generated.h"


class UMemoryComponent;
class UMood;
class UPersonaComponent;
class UBehaviour;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DYNAMICPERSONALITYAI_API UBehaviourComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UBehaviourComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UFUNCTION(BlueprintCallable)
	UBehaviour* EvaluateBehaviours();
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	TMap<UMood*, float> GetPersonaWeights() const;
	
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float BehaviourEvaluationFrequency;
	
	UPROPERTY(BlueprintReadOnly)
	TArray<UBehaviour*> Behaviours;
	
	UPROPERTY(BlueprintReadWrite)
	UPersonaComponent* Persona;
	
	UPROPERTY(BlueprintReadWrite)
	UMemoryComponent* Memory;
	
protected:
	UPROPERTY(BlueprintReadOnly)
	UBehaviour* ActiveBehaviour;
	
	UPROPERTY(BlueprintReadOnly)
	FTimerHandle BehaviourEvaluationTimerHandle;
};
