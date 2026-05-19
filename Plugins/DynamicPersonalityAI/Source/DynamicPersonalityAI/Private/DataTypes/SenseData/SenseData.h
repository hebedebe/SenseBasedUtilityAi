#pragma once
#include "CustomData/SenseCustomData.h"
#include "SenseData.generated.h"

// struct FSenseCustomData;
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
	TMap<FName, FSenseCustomData> SenseMap;
};
