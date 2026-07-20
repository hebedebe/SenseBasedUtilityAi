
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Mood.generated.h"


UCLASS()
class DYNAMICPERSONALITYAI_API UMood : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="UtilityAI")
	FString GetMoodName() const;
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="UtilityAI")
	FString Name;
};
