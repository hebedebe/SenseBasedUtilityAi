// Fill out your copyright notice in the Description page of Project Settings.


#include "SenseDataProcessor.h"

#include "Components/Senses/BaseSenseComponent.h"

void USenseDataProcessor::Check()
{
	UE_LOG(LogTemp, Warning, TEXT("Checking USenseDataProcessor"));
	
	if (TargetSenseType == FName("None"))
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5, FColor::Red, TEXT("SenseComponent target sense type is unset - it will never trigger."));
	}
	
	if (!ComponentSenseChecker::CheckSenseType(TargetSenseType))
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5, FColor::Red, TEXT("SenseComponent target sense type is not used by any senses - it will never trigger"));
	}
}
