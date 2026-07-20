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
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="UtilityAI")
	TMap<class UMood*, float> GetMoodWeights();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="UtilityAI")
	float GetMoodValue(class UMood* Mood);
	
	UFUNCTION(BlueprintCallable, Category="UtilityAI")
	void SetMoodValue(class UMood* Mood, float Value);
	
	UFUNCTION(BlueprintCallable, Category="UtilityAI")
	void AddMoodValue(class UMood* Mood, float Value);
	
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="UtilityAI")
	TArray<TSubclassOf<class USenseDataProcessor>> SenseDataProcessorClasses;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="UtilityAI")
	TMap<class UMood*, float> MoodWeights;
	
protected:
	UPROPERTY(BlueprintReadOnly, Category="UtilityAI")
	TArray<class USenseDataProcessor*> SenseDataProcessors;
	
	UPROPERTY(BlueprintReadWrite, Category="UtilityAI")
	class UBehaviourComponent* Behaviour;
	
	UPROPERTY(BlueprintReadWrite, Category="UtilityAI")
	class UMemoryComponent* Memory;
};
