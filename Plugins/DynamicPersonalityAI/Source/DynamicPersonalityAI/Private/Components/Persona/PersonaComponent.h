// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PersonaComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DYNAMICPERSONALITYAI_API UPersonaComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UPersonaComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
	
public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	TMap<class UMood*, float> GetMoodWeights();
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetMoodValue(class UMood* Mood);
	
	UFUNCTION(BlueprintCallable)
	void SetMoodValue(class UMood* Mood, float Value);
	
	UFUNCTION(BlueprintCallable)
	void AddMoodValue(class UMood* Mood, float Value);
	
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TArray<TSubclassOf<class USenseDataProcessor>> SenseDataProcessorClasses;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<class UMood*, float> MoodWeights;
	
protected:
	UPROPERTY(BlueprintReadOnly)
	TArray<class USenseDataProcessor*> SenseDataProcessors;
	
	UPROPERTY(BlueprintReadWrite)
	class UBehaviourComponent* Behaviour;
	
	UPROPERTY(BlueprintReadWrite)
	class UMemoryComponent* Memory;
};
