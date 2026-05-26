// Fill out your copyright notice in the Description page of Project Settings.


#include "PersonaComponent.h"

#include "DataProcessor/SenseDataProcessor.h"
#include "../Behaviour/BehaviourComponent.h"
#include "Components/Memory/MemoryComponent.h"


// Sets default values for this component's properties
UPersonaComponent::UPersonaComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPersonaComponent::BeginPlay()
{
	Super::BeginPlay();

	Behaviour = GetOwner()->GetComponentByClass<UBehaviourComponent>();
	Memory = GetOwner()->GetComponentByClass<UMemoryComponent>();
	
	for (auto ProcessorClass : SenseDataProcessorClasses)
	{
		USenseDataProcessor* SenseDataProcessor = NewObject<USenseDataProcessor>(this, ProcessorClass);
		SenseDataProcessors.Add(SenseDataProcessor);
		SenseDataProcessor->Check(); // Make sure the user has the target sense set
		UE_LOG(LogTemp, Log, TEXT("Found USenseDataProcessor %s with class %s"), *SenseDataProcessor->GetName(), *ProcessorClass->GetName())
	}
}


// Called every frame
void UPersonaComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                      FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	while (!Memory->IsSenseQueueEmpty())
	{
		FSenseData Data = Memory->PopSense();
		for (const auto SenseDataProcessor : SenseDataProcessors)
		{
			if (SenseDataProcessor->TargetSenseType == Data.SenseType)
			{
				UE_LOG(LogTemp, Log, TEXT("Sending sense data to %s"), *SenseDataProcessor->GetName())
				SenseDataProcessor->ProcessSenseData(this, this, Data);
			}
		}
	}
}

TMap<UMood*, float> UPersonaComponent::GetMoodWeights()
{
	return MoodWeights;
}

float UPersonaComponent::GetMoodValue(UMood* Mood)
{
	if (!MoodWeights.Contains(Mood))
	{
		UE_LOG(LogTemp, Error, TEXT("Persona does not contain target mood"));
		return -1;
	}
	return MoodWeights[Mood];
}

void UPersonaComponent::SetMoodValue(UMood* Mood, float Value)
{
	if (!MoodWeights.Contains(Mood))
	{
		UE_LOG(LogTemp, Error, TEXT("Persona does not contain target mood"));
		return;
	}
	MoodWeights[Mood] = Value;
}

void UPersonaComponent::AddMoodValue(UMood* Mood, const float Value)
{
	if (!MoodWeights.Contains(Mood))
	{
		UE_LOG(LogTemp, Error, TEXT("Persona does not contain target mood"));
		return;
	}
	MoodWeights[Mood] += Value;
}