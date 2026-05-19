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
