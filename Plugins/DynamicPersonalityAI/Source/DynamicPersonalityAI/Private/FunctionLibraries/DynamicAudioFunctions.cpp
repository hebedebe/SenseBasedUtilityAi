// Fill out your copyright notice in the Description page of Project Settings.


#include "DynamicAudioFunctions.h"

#include "Blackboards/SoundBlackboard.h"
#include "Kismet/GameplayStatics.h"

void UDynamicAudioFunctions::PlayDetectableSoundAtLocation(UObject* WorldContextObject, USoundBase* Sound, const FVector Location,
	const FRotator Rotation, FName DetectionTag, const float DetectionVolume, const float VolumeMultiplier, const float PitchMultiplier, const float StartTime, 
	USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, 
	AActor* OwningActor, const UInitialActiveSoundParams* InitialParams)
{
	if (FSoundBlackboard* SoundBlackboard = FSoundBlackboard::Get())
	{
		SoundBlackboard->AddSound(WorldContextObject, 
			new FSoundData(Sound, DetectionTag, OwningActor, Location, VolumeMultiplier, DetectionVolume)
			);
	} 
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Could not access sound blackboard while playing detectable sound"));
	}
	
	UGameplayStatics::PlaySoundAtLocation(WorldContextObject, Sound, Location, Rotation, VolumeMultiplier, PitchMultiplier, StartTime,
		AttenuationSettings, ConcurrencySettings, OwningActor, InitialParams);
}
