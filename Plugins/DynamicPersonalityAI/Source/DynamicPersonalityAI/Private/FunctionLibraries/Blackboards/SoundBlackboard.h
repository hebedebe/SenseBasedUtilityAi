#pragma once

struct FSoundData
{
public:
	FSoundData(USoundBase* Sound, FName Tag, AActor* OwningActor, FVector Location, float VolumeMultiplier, float DetectionVolume);
	
public:
	USoundBase* Sound;
	FName Tag;
	AActor* OwningActor;
	FVector Location;
	float VolumeMultiplier;
	float DetectionVolume;
	unsigned int Id;
	
public:
	bool operator==(const FSoundData& SoundData) const;
};

class FSoundBlackboard final
{
public:
	static FSoundBlackboard* Get();
	static void Destroy();
		
public:
	void AddSound(UObject* WorldContextObject, const FSoundData& SoundData);
	void RemoveSound(const FSoundData& SoundData);
	
	TArray<FSoundData> GetUnprocessedSounds(UObject* Target);
	
public:
	TArray<FSoundData> Sounds;
	TMap<UObject*, TArray<FSoundData>> ProcessedSounds;
	
private:
	FSoundBlackboard();
	~FSoundBlackboard();
};