// Fill out your copyright notice in the Description page of Project Settings.


#include "TouchSenseComponent.h"

#include "Components/Memory/MemoryComponent.h"

#define SENSEKEY(name, value) {FName(name), value}

// Sets default values for this component's properties
UTouchSenseComponent::UTouchSenseComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTouchSenseComponent::BeginPlay()
{
	Super::BeginPlay();

	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UTouchSenseComponent::HandleOwnerDamaged);
}

void UTouchSenseComponent::HandleOwnerDamaged(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,
	class AController* InstigatedBy, AActor* DamageCauser)
{
	MemoryComponent->RegisterSenseData(FSenseData{
		SenseType,
		this,
		{
			SENSEKEY("DamagedActor", FSenseCustomData::CreateAActorPointer(DamagedActor)),
			SENSEKEY("Damage", FSenseCustomData::Createfloat(Damage)),
			SENSEKEY("DamageType", FSenseCustomData::CreateUDamageTypePointer(DamageType)),
			SENSEKEY("InstigatedBy", FSenseCustomData::CreateAControllerPointer(InstigatedBy)),
			SENSEKEY("DamagedActor", FSenseCustomData::CreateAActorPointer(DamagedActor)),
		}
	});
}

