#pragma once

#include "SenseData.generated.h"

class USenseCustomData;
class UBaseSenseComponent;

USTRUCT(BlueprintType)
struct FSenseData
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly)
	FName SenseType;
	
	UPROPERTY(BlueprintReadOnly)
	UBaseSenseComponent* SourceSense;
	
	UPROPERTY(BlueprintReadOnly)
	TMap<FName, USenseCustomData*> SenseMap;
};
