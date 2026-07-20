#pragma once

#include "SenseData.generated.h"

class USenseCustomData;
class UBaseSenseComponent;

USTRUCT(BlueprintType)
struct FSenseData
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly, Category="UtilityAI")
	FName SenseType;
	
	UPROPERTY(BlueprintReadOnly, Category="UtilityAI")
	UBaseSenseComponent* SourceSense;
	
	UPROPERTY(BlueprintReadOnly, Category="UtilityAI")
	TMap<FName, USenseCustomData*> SenseMap;
};
