#pragma once

#include <map>
#include <vector>

struct FSoundData
{
	USoundBase* Sound;
	FName Tag;
	AActor* OwningActor;
	FVector Location;
	float VolumeMultiplier;
	float DetectionVolume;
};

class FSoundBlackboard
{
public:
	static FSoundBlackboard* Get();
	static void Destroy();
		
public:
	void AddSound(UObject* WorldContextObject, FSoundData* SoundData);
	void RemoveSound(const FSoundData* SoundData);
	
	std::vector<FSoundData*> GetUnprocessedSounds(UObject* Target);
	
public:
	std::vector<FSoundData*> Sounds;
	std::map<UObject*, std::vector<FSoundData*>> ProcessedSounds;
	
private:
	FSoundBlackboard();
	~FSoundBlackboard();
	
};