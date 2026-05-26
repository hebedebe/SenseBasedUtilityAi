// Fill out your copyright notice in the Description page of Project Settings.


#include "HearingSenseComponent.h"

#include "KismetTraceUtils.h"
#include "Components/Memory/MemoryComponent.h"
#include "DataTypes/SenseData/CustomData/SenseCustomData.h"
#include "FunctionLibraries/Audio/Blackboards/SoundBlackboard.h"


// Sets default values for this component's properties
UHearingSenseComponent::UHearingSenseComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	SenseType = "Hearing";
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
	
	std::vector<FSoundData*> Sounds = FSoundBlackboard::Get()->GetUnprocessedSounds(this);
	
	const float SquaredHearingRange = HearingRange * HearingRange;
	for (const FSoundData* SoundData : Sounds)
	{
		if (FVector::DistSquared(SoundData->Location, GetComponentLocation()) <= SquaredHearingRange)
		{
			const float Distance = FVector::Distance(SoundData->Location, GetComponentLocation());
			//Calculate the base volume in db with no obstructions
			float CalculatedVolume = SoundData->DetectionVolume-20.f*FMath::LogX(10.f, FLT_EPSILON/ (Distance/100.f)); //60db is regular conversation volume
			
			if (CalculatedVolume < MinHearingDb) continue;
			
			// Find obstacles
			TArray<FHitResult> HitResults;	
			FHitResult HitResult;
			FCollisionQueryParams CollisionQueryParams;
			CollisionQueryParams.AddIgnoredActor(GetOwner());

			bool bHit = GetWorld()->LineTraceSingleByChannel(
			   HitResult,
			   SoundData->Location,
			   GetComponentLocation(),
			   ECC_OverlapAll_Deprecated,
				CollisionQueryParams
			);
			if (bHit)
				CollisionQueryParams.AddIgnoredActor(HitResult.Component->GetOwner());
			HitResults.Add(HitResult);
			
			while (bHit)
			{
				bHit = GetWorld()->LineTraceSingleByChannel(
				   HitResult,
				   HitResult.ImpactPoint,
				   GetComponentLocation(),
				   ECC_OverlapAll_Deprecated,
					CollisionQueryParams
				);
				if (bHit)
					CollisionQueryParams.AddIgnoredActor(HitResult.Component->GetOwner());
				HitResults.Add(HitResult);
				
			}
				
			if (bDrawDebugRays)
			{
				DrawDebugLineTraceMulti(
					GetWorld(),
					SoundData->Location,
					GetComponentLocation(),
					EDrawDebugTrace::ForDuration,
					bHit, HitResults, FLinearColor::Blue, FLinearColor::Green, 5.f
				);
				
				for (const FHitResult& Result : HitResults)
				{
					if (IsValid(Result.Component.Get()))
					{
						auto ResultBounds = Result.Component->Bounds;
						DrawDebugBox(
							GetWorld(),
							ResultBounds.Origin,
							ResultBounds.BoxExtent,
							FColor::Red,
							false,
							5.f
							);
					}
				}
			}
			
			// Apply obstacle muffling
			for (int i = 0; i < HitResults.Num(); i++)
			{
				float SoundMuffling = DefaultObstacleMufflingStrength;
				
				// Check if object implements sound muffling interface or component
				
				CalculatedVolume -= 10.f * FMath::LogX(10.f, 3 + 20 * SoundMuffling);
				if (CalculatedVolume < MinHearingDb) break;
			}
			
			if (CalculatedVolume < MinHearingDb) continue;
			
			MemoryComponent->RegisterSenseData(
				{
					SenseType,
					this,
					{
						SENSEKEY("Sound", USenseCustomData::CreateUSoundBasePointer(SoundData->Sound)),
						SENSEKEY("Tag", USenseCustomData::CreateFName(SoundData->Tag)),
						SENSEKEY("OwningActor", USenseCustomData::CreateAActorPointer(SoundData->OwningActor)),
						SENSEKEY("Location", USenseCustomData::CreateFVector(SoundData->Location)),
						SENSEKEY("VolumeMultiplier", USenseCustomData::Createfloat(SoundData->VolumeMultiplier)),
						SENSEKEY("VolumeDb", USenseCustomData::Createfloat(CalculatedVolume))
					}
				}
			);
		}
	}
}

