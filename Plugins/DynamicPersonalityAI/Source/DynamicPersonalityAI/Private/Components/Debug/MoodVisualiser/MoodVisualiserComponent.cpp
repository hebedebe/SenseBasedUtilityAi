// Fill out your copyright notice in the Description page of Project Settings.


#include "MoodVisualiserComponent.h"

#include "MoodVisualiser.h"
#include "Components/Persona/PersonaComponent.h"


// Sets default values for this component's properties
UMoodVisualiserComponent::UMoodVisualiserComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMoodVisualiserComponent::BeginPlay()
{
	Super::BeginPlay();

	SetWidgetClass(UMoodVisualiser::StaticClass());
	
	if (auto MoodVisualiser = Cast<UMoodVisualiser>(GetWidget()))
	{
		if (auto Persona = GetOwner()->GetComponentByClass<UPersonaComponent>())
		{
			MoodVisualiser->InitMoodVisualiser(Persona);
		} else
		{
			UE_LOG(LogTemp, Error, TEXT("No persona component found on owner."))
		}
	} else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create MoodVisualiser"))
	}
	
	InitWidget();
}