#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DataTypes/SenseData/SenseData.h"
#include "Containers/Queue.h"
#include "MemoryComponent.generated.h"

#define SENSEKEY(name, value) {FName(name), value}

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DYNAMICPERSONALITYAI_API UMemoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UMemoryComponent();

public:
	UFUNCTION(BlueprintCallable, Category="UtilityAI")
	void RegisterSenseData(const FSenseData& SenseData);
	
	UFUNCTION(BlueprintCallable, Category="UtilityAI")
	FSenseData PopSense();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="UtilityAI")
	bool IsSenseQueueEmpty() const;

public:
	TQueue<FSenseData, EQueueMode::Mpsc> SenseDataQueue;
};
