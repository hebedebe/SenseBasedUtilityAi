#pragma once


#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BehaviourData.generated.h"

UCLASS()
class DYNAMICPERSONALITYAI_API UBehaviourData : public UDataAsset
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="UtilityAI")
	class UBehaviourFunctionality* Initialise(class UBehaviourComponent* BehaviourComponent);
	
	UFUNCTION(BlueprintCallable, Category="UtilityAI")
	virtual float EvaluateMoodWeights(TMap<class UMood*, float> OtherWeights);
	
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="UtilityAI")
	TSubclassOf<UBehaviourFunctionality> BehaviourFunctionalityClass;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="UtilityAI")
	TMap<class UMood*, float> MoodWeights;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="UtilityAI")
	float Bias;
};
