// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "BaseSenseComponent.generated.h"


class UPersonaComponent;
class UBehaviourComponent;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DYNAMICPERSONALITYAI_API UBaseSenseComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UBaseSenseComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
protected:
	UPROPERTY(BlueprintReadOnly)
	UBehaviourComponent* BehaviourComponent;
	UPROPERTY(BlueprintReadOnly)
	UPersonaComponent* PersonaComponent;
	
};
