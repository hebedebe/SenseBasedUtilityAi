// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseSenseComponent.h"

#include "DataTypes/Behaviour/Behaviour.h"


// Sets default values for this component's properties
UBaseSenseComponent::UBaseSenseComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBaseSenseComponent::BeginPlay()
{
	Super::BeginPlay();

	BehaviourComponent = GetOwner()->GetComponentByClass<UBehaviourComponent>();
	PersonaComponent = GetOwner()->GetComponentByClass<UPersonaComponent>();
}