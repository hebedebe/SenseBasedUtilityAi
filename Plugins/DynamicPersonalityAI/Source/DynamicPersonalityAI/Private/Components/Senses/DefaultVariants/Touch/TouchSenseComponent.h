// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Senses/BaseSenseComponent.h"
#include "TouchSenseComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DYNAMICPERSONALITYAI_API UTouchSenseComponent : public UBaseSenseComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UTouchSenseComponent();
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bSendHurtSignal = true;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bSendOverlapSignal = true;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bSendActorCollisionSignal = true;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

protected:
	UFUNCTION()
	void HandleOwnerDamaged(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, 
		class AController* InstigatedBy, AActor* DamageCauser);
	
	UFUNCTION()
	void OverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
		UPrimitiveComponent* OtherComponent, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	void OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
		UPrimitiveComponent* OtherComponent, int OtherBodyIndex);
	
	UFUNCTION()
	void HandleOwnerTouched(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
	
protected:
	UPROPERTY(BlueprintReadOnly)
	TArray<UPrimitiveComponent*> Colliders;
};
