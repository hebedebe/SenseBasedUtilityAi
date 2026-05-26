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

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UFUNCTION(BlueprintCallable)
	UBehaviourData* EvaluateBehaviours();
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	TMap<UMood*, float> GetPersonaWeights() const;
	
	UFUNCTION(BlueprintCallable)
	void EnterBehaviour(UBehaviourData* Data);
	
	UFUNCTION(BlueprintCallable)
	void ExitBehaviour(UBehaviourData* Data);
	
	UFUNCTION(BlueprintCallable)
	void TickBehaviour(UBehaviourData* Data, float DeltaTime);
	
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float BehaviourEvaluationFrequency;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TArray<class UBehaviourData*> BehaviourData;
	
	UPROPERTY(BlueprintReadWrite)
	UPersonaComponent* Persona;
	
	UPROPERTY(BlueprintReadWrite)
	UMemoryComponent* Memory;
	
protected:
	UPROPERTY(BlueprintReadOnly)
	UBehaviourData* ActiveBehaviour;
	
	UPROPERTY(BlueprintReadOnly)
	FTimerHandle BehaviourEvaluationTimerHandle;
	
	UPROPERTY(BlueprintReadOnly)
	TMap<class UBehaviourData*, class UBehaviourFunctionality*> BehaviourFunctionalities;
};
