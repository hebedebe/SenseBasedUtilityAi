#include "SoundBlackboard.h"

#include <ranges>

FSoundBlackboard* FSoundBlackboard::Get()
{
	static FSoundBlackboard* Instance = new FSoundBlackboard();
	return Instance;
}

void FSoundBlackboard::Destroy()
{
	delete Get();
}

void FSoundBlackboard::Reset()
{
	Sounds.clear();
	ProcessedSounds.clear();
	UE_LOG(LogTemp, Log, TEXT("Cleared sound blackboard"));
}

void FSoundBlackboard::AddSound(UObject* WorldContextObject, FSoundData* SoundData)
{
	Sounds.emplace_back(SoundData);
	
	if (!(IsValid(SoundData->OwningActor) && IsValid(SoundData->Sound)))
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid owning actor or sound"));
		return;
	}
	
	// Remove the sound data from the pool after the longest time it can feasibly exist for
	FTimerHandle TimerHandle;
	const auto LambdaFunc = FTimerDelegate::CreateLambda(
	[this, SoundData]
	{
		RemoveSound(SoundData);
	});
	
	UWorld* World = WorldContextObject->GetWorld();
	if (IsValid(World))
	{
		World->GetTimerManager().SetTimer(TimerHandle, LambdaFunc, SoundData->Sound->Duration, false);
	} else
	{
		UE_LOG(LogTemp, Error, TEXT("Could not access world while setting sound deletion timer"));
	}
}

void FSoundBlackboard::RemoveSound(const FSoundData* SoundData)
{
	if (!SoundData)
		return;
	
	const auto SoundArray = std::ranges::find(Sounds, SoundData);
	if (SoundArray != Sounds.end())
		Sounds.erase(SoundArray);
	
	for (auto ProcessedSoundArray : ProcessedSounds | std::views::values)
	{
		if (!IsValid(SoundData->OwningActor)) return;

		std::vector<FSoundData*>::iterator Sound = std::find(ProcessedSoundArray.begin(), ProcessedSoundArray.end(), SoundData);
		if (Sound != ProcessedSoundArray.end())
			ProcessedSoundArray.erase(Sound);
	}
}

std::vector<FSoundData*> FSoundBlackboard::GetUnprocessedSounds(UObject* Target)
{
	std::vector<FSoundData*> UnprocessedSounds;
	
	// if (!IsValid(Target))
		// return UnprocessedSounds;
	
	for (FSoundData* SoundData : Sounds)
	{
		if (std::ranges::find(ProcessedSounds[Target], SoundData) == ProcessedSounds[Target].end())
		{
			UnprocessedSounds.emplace_back(SoundData);
			ProcessedSounds[Target].emplace_back(SoundData);
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
	for (FSoundData*& SoundData : Sounds)
	{
		delete SoundData;
		SoundData = nullptr;
	}
	
	UE_LOG(LogLoad, Warning, TEXT("FSoundBlackboard singleton deleted"));
}