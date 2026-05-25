// Fill out your copyright notice in the Description page of Project Settings.


#include "HearingSenseComponent.h"

#include "Components/Memory/MemoryComponent.h"
#include "FunctionLibraries/Blackboards/SoundBlackboard.h"


// Sets default values for this component's properties
UHearingSenseComponent::UHearingSenseComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHearingSenseComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHearingSenseComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                           FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	TArray<FSoundData> Sounds = FSoundBlackboard::Get()->GetUnprocessedSounds(this);
	
	const float SquaredHearingRange = HearingRange*HearingRange;
	for (auto& [Sound, Tag, OwningActor, Location, VolumeMultiplier, DetectionVolume, _] : Sounds)
	{
		if (FVector::DistSquared(Location, GetComponentLocation()) <= SquaredHearingRange)
		{
			const float Distance = FVector::Distance(Location, GetComponentLocation());
			//Calculate the base volume in db with no obstructions
			float CalculatedVolume = DetectionVolume-20.f*FMath::LogX(10.f, FLT_EPSILON/ (Distance/100.f)); //60db is regular conversation volume
			
			if (CalculatedVolume < MinHearingDb) continue;
			
			TArray<FHitResult> HitResults;
			GetWorld()->LineTraceMultiByChannel(
				HitResults,
				Location,
				GetComponentLocation(),
				ECC_Camera
			);
			
			for (int i = 0; i < HitResults.Num(); i++)
			{
				float SoundMuffling = DefaultObstacleMufflingStrength;
				
				// Check if object implements sound muffling interface or component
				
				CalculatedVolume -= 10.f*FMath::LogX(10.f, 3 + 20*SoundMuffling);
				if (CalculatedVolume < MinHearingDb) break;
			}
			
			if (CalculatedVolume < MinHearingDb) continue;
			
			MemoryComponent->RegisterSenseData(
				{
					SenseType,
					this,
					{
						SENSEKEY("Sound", FSenseCustomData::CreateUSoundBasePointer(Sound)),
						SENSEKEY("Tag", FSenseCustomData::CreateFName(Tag)),
						SENSEKEY("OwningActor", FSenseCustomData::CreateAActorPointer(OwningActor)),
						SENSEKEY("Location", FSenseCustomData::CreateFVector(Location)),
						SENSEKEY("VolumeMultiplier", FSenseCustomData::Createfloat(VolumeMultiplier)),
						SENSEKEY("VolumeDb", FSenseCustomData::Createfloat(CalculatedVolume))
					}
				}
			);
		}
	}
}

