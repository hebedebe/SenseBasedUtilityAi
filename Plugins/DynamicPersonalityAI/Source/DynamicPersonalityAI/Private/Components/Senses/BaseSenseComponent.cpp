// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseSenseComponent.h"

#include "Components/Behaviour/BehaviourComponent.h"
#include "Components/Persona/PersonaComponent.h"
#include "Components/Memory/MemoryComponent.h"

TSet<FName> ComponentSenseChecker::SenseTypes;

void ComponentSenseChecker::RegisterSenseType(const FName SenseType)
{
	if (SenseType == FName("None")) return;
	
	UE_LOG(LogTemp, Log, TEXT("Registered sense type %s"), *SenseType.ToString())
	SenseTypes.Add(SenseType);
}

bool ComponentSenseChecker::CheckSenseType(const FName SenseType)
{
	return SenseTypes.Contains(SenseType);
}

// Sets default values for this component's properties
UBaseSenseComponent::UBaseSenseComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	ComponentSenseChecker::RegisterSenseType(SenseType);
}


// Called when the game starts
void UBaseSenseComponent::BeginPlay()
{
	Super::BeginPlay();
	
	ComponentSenseChecker::RegisterSenseType(SenseType);
	
	BehaviourComponent = GetOwner()->GetComponentByClass<UBehaviourComponent>();
	PersonaComponent = GetOwner()->GetComponentByClass<UPersonaComponent>();
	MemoryComponent = GetOwner()->GetComponentByClass<UMemoryComponent>();
}