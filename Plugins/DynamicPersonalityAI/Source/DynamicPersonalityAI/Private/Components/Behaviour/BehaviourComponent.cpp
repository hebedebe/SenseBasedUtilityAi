// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviourComponent.h"

#include "Components/Persona/PersonaComponent.h"
#include "Components/Memory/MemoryComponent.h"
#include "DataTypes/Behaviour/BehaviourData.h"
#include "DataTypes/Behaviour/Functionality/BehaviourFunctionality.h"


// Sets default values for this component's properties
UBehaviourComponent::UBehaviourComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBehaviourComponent::BeginPlay()
{
	Super::BeginPlay();

	Persona = GetOwner()->GetComponentByClass<UPersonaComponent>();
	Memory = GetOwner()->GetComponentByClass<UMemoryComponent>();

	for (const auto Data : BehaviourData)
	{
		if (IsValid(Data))
		{
			BehaviourFunctionalities.Add(Data, Data->Initialise(this));
		}
		else
			UE_LOG(LogTemp, Warning, TEXT("An error occurred initialising a behaviour"))
	}
	
	GetWorld()->GetTimerManager().SetTimer(BehaviourEvaluationTimerHandle, 
		[this]
		{
			
			if (UBehaviourData* TargetBehaviour = EvaluateBehaviours())
			{
				UE_LOG(LogTemp, Warning, TEXT("Evaluated behaviour as %s "), *TargetBehaviour->GetName())
				
				if (ActiveBehaviour == TargetBehaviour) return;
		
				if (ActiveBehaviour)
				{
					ExitBehaviour(ActiveBehaviour);
				}
		
				ActiveBehaviour = TargetBehaviour;
				EnterBehaviour(ActiveBehaviour);
			}
		}, 
		BehaviourEvaluationFrequency, true);
}

void UBehaviourComponent::TickComponent(float DeltaTime, enum ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (ActiveBehaviour) 
		TickBehaviour(ActiveBehaviour, DeltaTime);
}

UBehaviourData* UBehaviourComponent::EvaluateBehaviours()
{
	float LowestWeight = 1e+38;
	UBehaviourData* CurrentBehaviour = nullptr;
	
	for (UBehaviourData* Behaviour : BehaviourData)
	{
		const float EvaluatedMoodWeights = Behaviour->EvaluateMoodWeights(GetPersonaWeights());
		if (EvaluatedMoodWeights < LowestWeight)
		{
			CurrentBehaviour = Behaviour;
			LowestWeight = EvaluatedMoodWeights;
		}
	}
	
	return CurrentBehaviour;
}

TMap<UMood*, float> UBehaviourComponent::GetPersonaWeights() const
{
	return Persona->GetMoodWeights();
}

void UBehaviourComponent::EnterBehaviour(UBehaviourData* Data)
{
	BehaviourFunctionalities[Data]->EnterBehaviour();
	BehaviourFunctionalities[Data]->SetActive(true);
}

void UBehaviourComponent::ExitBehaviour(UBehaviourData* Data)
{
	BehaviourFunctionalities[Data]->ExitBehaviour();
	BehaviourFunctionalities[Data]->SetActive(false);
}

void UBehaviourComponent::TickBehaviour(UBehaviourData* Data, const float DeltaTime)
{
	BehaviourFunctionalities[Data]->TickBehaviour(DeltaTime);
}
