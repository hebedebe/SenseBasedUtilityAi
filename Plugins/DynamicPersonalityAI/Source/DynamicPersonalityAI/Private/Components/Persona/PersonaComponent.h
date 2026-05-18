// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PersonaComponent.generated.h"


class UMood;

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
	TMap<UMood*, float> GetMoodWeights();
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetMoodValue(UMood* Mood);
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	void SetMoodValue(UMood* Mood, float Value);
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	void AddMoodValue(UMood* Mood, float Value);
	
protected:
	UPROPERTY(BlueprintReadWrite)
	TMap<UMood*, float> MoodWeights;
};
