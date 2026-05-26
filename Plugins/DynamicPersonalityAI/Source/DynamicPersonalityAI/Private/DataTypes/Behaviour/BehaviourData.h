#pragma once


#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BehaviourData.generated.h"

UCLASS()
class DYNAMICPERSONALITYAI_API UBehaviourData : public UDataAsset
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	class UBehaviourFunctionality* Initialise(class UBehaviourComponent* BehaviourComponent);
	
	UFUNCTION(BlueprintCallable)
	virtual float EvaluateMoodWeights(TMap<class UMood*, float> OtherWeights);
	
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TSubclassOf<UBehaviourFunctionality> BehaviourFunctionalityClass;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TMap<class UMood*, float> MoodWeights;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float Bias;
};
