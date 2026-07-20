// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviourFunctionality.h"

void UBehaviourFunctionality::EnterBehaviour_Implementation()
{
	UE_LOG(LogTemp, Log, TEXT("Behaviour Entered"));
}

void UBehaviourFunctionality::TickBehaviour_Implementation(float DeltaTime)
{
}

void UBehaviourFunctionality::ExitBehaviour_Implementation()
{
	UE_LOG(LogTemp, Log, TEXT("Behaviour Exited"));
}

void UBehaviourFunctionality::BeginPlay_Implementation()
{
}

class UWorld* UBehaviourFunctionality::GetWorld() const
{
	return OwningActor->GetWorld();
}

bool UBehaviourFunctionality::ImplementsGetWorld() const
{
	return true;
}

void UBehaviourFunctionality::SetActive(const bool bActive)
{
	bIsActive = bActive;
}
