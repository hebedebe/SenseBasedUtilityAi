#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DynamicAudioFunctions.generated.h"

class UInitialActiveSoundParams;

UCLASS()
class DYNAMICPERSONALITYAI_API UDynamicAudioFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category="DynamicAudioFunctions")
	static void PlayDetectableSoundAtLocation(UObject* WorldContextObject, USoundBase* Sound, FVector Location, 
	FRotator Rotation, FName DetectionTag, float VolumeMultiplier = 1, const float DetectionVolumeDb = 60, float PitchMultiplier = 1, float StartTime = 0, 
	class USoundAttenuation* AttenuationSettings = nullptr, USoundConcurrency* ConcurrencySettings = nullptr, 
	AActor* OwningActor = nullptr, const UInitialActiveSoundParams* InitialParams = nullptr);
};
