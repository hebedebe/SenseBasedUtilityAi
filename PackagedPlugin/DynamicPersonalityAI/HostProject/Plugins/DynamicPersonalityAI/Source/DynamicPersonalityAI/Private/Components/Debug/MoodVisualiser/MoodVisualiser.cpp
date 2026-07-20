// Fill out your copyright notice in the Description page of Project Settings.


#include "MoodVisualiser.h"

#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/TextBlock.h"
#include "Components/Persona/PersonaComponent.h"
#include "DataTypes/Mood/Mood.h"

void UMoodVisualiser::NativeConstruct()
{
	Super::NativeConstruct();
}

void UMoodVisualiser::InitMoodVisualiser(UPersonaComponent* Persona)
{
	PersonaComponent = Persona;
	if (IsValid(Persona))
	{
		for (auto& [Mood, _] : Persona->MoodWeights)
		{
			UTextBlock* TextBlock = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), FName(Mood->GetName()));
			TextBlocks.Add(TextBlock);
			TextCallbacks.emplace_back([TextBlock, Mood, Persona]
			{
				TextBlock->SetText(FText::Format(FText::FromString("{0}: {1}"), 
					FText::FromString(Mood->GetName()),
					FText::AsNumber(Persona->GetMoodValue(Mood))));
			});
			Canvas->AddChild(TextBlock);
		}
	}
}

void UMoodVisualiser::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	
	for (auto Func : TextCallbacks)
	{
		Func();
	}
}
