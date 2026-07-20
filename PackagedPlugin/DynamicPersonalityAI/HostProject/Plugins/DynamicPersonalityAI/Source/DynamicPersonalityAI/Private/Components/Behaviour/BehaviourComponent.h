#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BehaviourComponent.generated.h"


class UMemoryComponent;
class UMood;
class UPersonaComponent;
class UBehaviourData;

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
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UFUNCTION(BlueprintCallable, Category="UtilityAI")
	UBehaviourData* EvaluateBehaviours();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="UtilityAI")
	TMap<UMood*, float> GetPersonaWeights() const;
	
	UFUNCTION(BlueprintCallable, Category="UtilityAI")
	void EnterBehaviour(UBehaviourData* Data);
	
	UFUNCTION(BlueprintCallable, Category="UtilityAI")
	void ExitBehaviour(UBehaviourData* Data);
	
	UFUNCTION(BlueprintCallable, Category="UtilityAI")
	void TickBehaviour(UBehaviourData* Data, float DeltaTime);
	
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="UtilityAI")
	float BehaviourEvaluationFrequency;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="UtilityAI")
	TArray<class UBehaviourData*> BehaviourData;
	
	UPROPERTY(BlueprintReadWrite, Category="UtilityAI")
	UPersonaComponent* Persona;
	
	UPROPERTY(BlueprintReadWrite, Category="UtilityAI")
	UMemoryComponent* Memory;
	
protected:
	UPROPERTY(BlueprintReadOnly, Category="UtilityAI")
	UBehaviourData* ActiveBehaviour;
	
	UPROPERTY(BlueprintReadOnly, Category="UtilityAI")
	FTimerHandle BehaviourEvaluationTimerHandle;
	
	UPROPERTY(BlueprintReadOnly, Category="UtilityAI")
	TMap<class UBehaviourData*, class UBehaviourFunctionality*> BehaviourFunctionalities;
};
