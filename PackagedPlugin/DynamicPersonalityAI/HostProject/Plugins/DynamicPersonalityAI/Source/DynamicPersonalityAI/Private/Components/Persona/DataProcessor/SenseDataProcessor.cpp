// Fill out your copyright notice in the Description page of Project Settings.


#include "SenseDataProcessor.h"

#include "Components/Persona/PersonaComponent.h"
#include "Components/Senses/BaseSenseComponent.h"
#include "DataTypes/SenseData/SenseData.h"

void USenseDataProcessor::Check() const
{
	UE_LOG(LogTemp, Warning, TEXT("Checking USenseDataProcessor"));
	
	if (TargetSenseType == FName("None"))
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5, FColor::Red, 
			TEXT("SenseComponent target sense type is unset - it will never trigger."));
	}
	
	if (!FSenseValidityManager::CheckSenseType(TargetSenseType))
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5, FColor::Red, 
			TEXT("SenseComponent target sense type is not used by any senses - it will never trigger"));
	}
}

void USenseDataProcessor::SetMood(UMood* Mood, float Value)
{
	CurrentPersonaComponent->SetMoodValue(Mood, Value);
}

void USenseDataProcessor::IncrementMood(UMood* Mood, float Value)
{
	CurrentPersonaComponent->AddMoodValue(Mood, Value);
}

float USenseDataProcessor::GetMood(UMood* Mood)
{
	return CurrentPersonaComponent->GetMoodValue(Mood);
}

class UWorld* USenseDataProcessor::GetWorld() const
{
	return CurrentPersonaComponent->GetWorld();
}

bool USenseDataProcessor::ImplementsGetWorld() const
{
	return true;
}

void USenseDataProcessor::ProcessSenseDataWrapper(UObject* WorldContextObject, UPersonaComponent* PersonaComponent,
                                                  FSenseData SenseData)
{
	CurrentPersonaComponent = PersonaComponent;
	ProcessSenseData(WorldContextObject, PersonaComponent, SenseData);
}
