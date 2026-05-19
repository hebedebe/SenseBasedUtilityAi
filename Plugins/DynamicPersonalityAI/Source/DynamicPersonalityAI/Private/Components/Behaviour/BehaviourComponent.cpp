// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviourComponent.h"

#include "Components/Persona/PersonaComponent.h"
#include "Components/Memory/MemoryComponent.h"
#include "DataTypes/Behaviour/Behaviour.h"
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
	
	for (const auto Behaviour : Behaviours)
	{
		Behaviour->Initialise(this);
	}
	
	GetWorld()->GetTimerManager().SetTimer(BehaviourEvaluationTimerHandle, 
		[this]
		{
			
			if (UBehaviour* TargetBehaviour = EvaluateBehaviours())
			{
				if (ActiveBehaviour == TargetBehaviour) return;
		
				if (ActiveBehaviour)
				{
					ActiveBehaviour->SetActive(false);
					ActiveBehaviour->GetFunctionality()->ExitBehaviour();
				}
		
				TargetBehaviour->SetActive(true);
				TargetBehaviour->GetFunctionality()->EnterBehaviour();
			}
		}, 
		BehaviourEvaluationFrequency, true);
}

void UBehaviourComponent::TickComponent(float DeltaTime, enum ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (ActiveBehaviour) 
		ActiveBehaviour->GetFunctionality()->TickBehaviour(DeltaTime);
}

UBehaviour* UBehaviourComponent::EvaluateBehaviours()
{
	float LowestWeight = 1e+38;
	UBehaviour* CurrentBehaviour = nullptr;
	
	for (UBehaviour* Behaviour : Behaviours)
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
