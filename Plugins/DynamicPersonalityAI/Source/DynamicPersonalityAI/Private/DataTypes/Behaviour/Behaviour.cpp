// Fill out your copyright notice in the Description page of Project Settings.


#include "Behaviour.h"

#include "BehaviourFunctionality.h"
#include "DataTypes/Mood.h"

void UBehaviour::Initialise()
{
	BehaviourFunctionality = NewObject<UBehaviourFunctionality>(this, BehaviourFunctionalityClass);
}

float UBehaviour::EvaluateMoodWeights(TMap<UMood*, float> OtherWeights)
{
	TArray<float> Weights1;
	TArray<float> Weights2;
	
	TArray<UMood*> WeightKeys;
	MoodWeights.GetKeys(WeightKeys);
	
	for (const auto Key : WeightKeys)
	{
		if (OtherWeights.Contains(Key))
		{
			Weights1.Add(MoodWeights[Key]);
			Weights2.Add(OtherWeights[Key]);
		}
	}
	
	float Distance = 0;
	for (int i = 0; i < Weights1.Num(); i++)
	{
		Distance += pow(Weights1[i] - Weights2[i], 2.f);
	}
	Distance = FMath::Clamp(sqrt(Distance) + Bias, 0, INFINITY);
	
	return Distance;
}

void UBehaviour::SetActive(const bool bNewActive)
{
	bActive = bNewActive;
}

bool UBehaviour::GetActive() const
{
	return bActive;
}

UBehaviourFunctionality* UBehaviour::GetFunctionality() const
{
	return BehaviourFunctionality;
}
