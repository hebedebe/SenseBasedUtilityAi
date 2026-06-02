// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <functional>

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MoodVisualiser.generated.h"

class UCanvasPanel;
class UCanvas;
class UPersonaComponent;
class UTextBlock;
/**
 * 
 */
UCLASS()
class DYNAMICPERSONALITYAI_API UMoodVisualiser : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION()
	void InitMoodVisualiser(UPersonaComponent* Persona);
	
protected:
	virtual void NativeConstruct() override;
	
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	
protected:
	UPROPERTY(meta = (BindWidget))
	UCanvasPanel* Canvas;
	
	UPROPERTY()
	TArray<UTextBlock*> TextBlocks;
	
	UPROPERTY()
	UPersonaComponent* PersonaComponent;
	
protected:
	std::vector<std::function<void()>> TextCallbacks;
};
