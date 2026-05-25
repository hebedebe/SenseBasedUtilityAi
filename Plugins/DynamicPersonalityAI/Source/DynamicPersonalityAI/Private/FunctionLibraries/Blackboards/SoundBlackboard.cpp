#include "SoundBlackboard.h"

FSoundData::FSoundData(USoundBase* Sound, FName Tag, AActor* OwningActor, FVector Location, float VolumeMultiplier,
	float DetectionVolume) : Sound(Sound), Tag(Tag), OwningActor(OwningActor), Location(Location),
	VolumeMultiplier(VolumeMultiplier), DetectionVolume(DetectionVolume)
{
	static unsigned int Count = 0;
	Id = Count++;
}

bool FSoundData::operator==(const FSoundData& SoundData) const
{
	return Id == SoundData.Id;
}

FSoundBlackboard* FSoundBlackboard::Get()
{
	static FSoundBlackboard* Instance = new FSoundBlackboard();
	return Instance;
}

void FSoundBlackboard::Destroy()
{
	delete Get();
}

void FSoundBlackboard::AddSound(UObject* WorldContextObject, const FSoundData& SoundData)
{
	Sounds.Add(SoundData);
	
	// Remove the sound data from the pool after the longest time it can feasibly exist for
	FTimerHandle TimerHandle;
	WorldContextObject->GetWorld()->GetTimerManager().SetTimer(TimerHandle, FTimerDelegate::CreateLambda(
	[this, SoundData]
	{
		RemoveSound(SoundData);
	}), SoundData.Sound->Duration, false);
}

void FSoundBlackboard::RemoveSound(const FSoundData& SoundData)
{
	Sounds.Remove(SoundData);
	
	for (auto [_, ProcessedSoundArray] : ProcessedSounds)
	{
		ProcessedSoundArray.Remove(SoundData);
	}
}

TArray<FSoundData> FSoundBlackboard::GetUnprocessedSounds(UObject* Target)
{
	TArray<FSoundData> UnprocessedSounds;
	
	for (FSoundData& SoundData : Sounds)
	{
		if (!ProcessedSounds[Target].Contains(SoundData))
		{
			UnprocessedSounds.Add(SoundData);
			ProcessedSounds[Target].Add(SoundData);
		}
	}
	
	return UnprocessedSounds;
}

FSoundBlackboard::FSoundBlackboard()
{
	UE_LOG(LogLoad, Warning, TEXT("FSoundBlackboard singleton initialised"));
}

FSoundBlackboard::~FSoundBlackboard()
{
	UE_LOG(LogLoad, Warning, TEXT("FSoundBlackboard singleton deleted"));
}
