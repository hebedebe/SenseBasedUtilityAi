#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DataTypes/SenseData/SenseData.h"
#include "Containers/Queue.h"
#include "MemoryComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DYNAMICPERSONALITYAI_API UMemoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UMemoryComponent();

public:
	UFUNCTION(BlueprintCallable)
	void RegisterSenseData(const FSenseData& SenseData);
	
	UFUNCTION(BlueprintCallable)
	FSenseData PopSense();
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsSenseQueueEmpty() const;
	
public:
	TQueue<FSenseData, EQueueMode::Mpsc> SenseDataQueue;
};
