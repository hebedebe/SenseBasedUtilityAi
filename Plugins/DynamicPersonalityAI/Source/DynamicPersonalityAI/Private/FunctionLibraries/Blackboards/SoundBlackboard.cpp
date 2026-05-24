#include "SoundBlackboard.h"



SoundBlackboard* SoundBlackboard::Get()
{
	static SoundBlackboard* Instance = new SoundBlackboard();
	return Instance;
}

void SoundBlackboard::Destroy()
{
	delete Get();
}

SoundBlackboard::SoundBlackboard()
{
	UE_LOG(LogLoad, Warning, TEXT("FSoundBlackboard singleton initialised"));
}

SoundBlackboard::~SoundBlackboard()
{
	UE_LOG(LogLoad, Warning, TEXT("FSoundBlackboard singleton deleted"));
}
