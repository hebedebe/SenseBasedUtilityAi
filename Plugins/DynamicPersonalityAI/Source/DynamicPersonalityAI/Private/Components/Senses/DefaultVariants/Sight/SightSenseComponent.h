// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Senses/BaseSenseComponent.h"
#include "SightSenseComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DYNAMICPERSONALITYAI_API USightSenseComponent : public UBaseSenseComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	USightSenseComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	UFUNCTION()
	void ProcessNearObjects();
	
	UFUNCTION()
	void OverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
		UPrimitiveComponent* OtherComponent, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	void OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
		UPrimitiveComponent* OtherComponent, int OtherBodyIndex);
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float UpdateFrequency = 0.2f;

protected:
	UPROPERTY(BlueprintReadOnly)
	TArray<UPrimitiveComponent*> Colliders;
	
	UPROPERTY(BlueprintReadOnly)
	TArray<UPrimitiveComponent*> OverlappedComponents;
	
	UPROPERTY(BlueprintReadOnly)
	TSet<UPrimitiveComponent*> VisibleComponents;
};
