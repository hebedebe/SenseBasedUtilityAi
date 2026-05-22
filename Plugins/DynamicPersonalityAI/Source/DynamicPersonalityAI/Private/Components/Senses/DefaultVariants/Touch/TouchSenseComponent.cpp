// Fill out your copyright notice in the Description page of Project Settings.


#include "TouchSenseComponent.h"

#include "Components/ShapeComponent.h"
#include "Components/Memory/MemoryComponent.h"

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
	GetOwner()->OnActorHit.AddDynamic(this, &UTouchSenseComponent::HandleOwnerTouched);
	
	TArray<USceneComponent*> ChildComponents;
	GetChildrenComponents(true, ChildComponents);
	for (USceneComponent* Component : ChildComponents)
	{
		if (UPrimitiveComponent* PrimitiveComponent = Cast<UShapeComponent>(Component))
		{
			Colliders.Add(PrimitiveComponent);
			PrimitiveComponent->OnComponentBeginOverlap.AddDynamic(this, &UTouchSenseComponent::OverlapStart);
			PrimitiveComponent->OnComponentEndOverlap.AddDynamic(this, &UTouchSenseComponent::OverlapEnd);
		}
	}
}

void UTouchSenseComponent::HandleOwnerDamaged(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,
	class AController* InstigatedBy, AActor* DamageCauser)
{
	if (!bSendHurtSignal) return;
	
	UE_LOG(LogTemp, Warning, TEXT("Touch Sense Component - Hurt"));
	
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

void UTouchSenseComponent::OverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!bSendOverlapSignal) return;
	
	UE_LOG(LogTemp, Warning, TEXT("Touch Sense Component - Overlap Start"));
	
	MemoryComponent->RegisterSenseData(FSenseData{
		SenseType,
		this,
		{
			SENSEKEY("OverlappedComponent", FSenseCustomData::CreateUPrimitiveComponentPointer(OverlappedComponent)),
			SENSEKEY("OtherActor", FSenseCustomData::CreateAActorPointer(OtherActor)),
			SENSEKEY("OtherComponent", FSenseCustomData::CreateUPrimitiveComponentPointer(OtherComponent)),
			SENSEKEY("OtherBodyIndex", FSenseCustomData::Createint(OtherBodyIndex)),
			SENSEKEY("bFromSweep", FSenseCustomData::Createbool(bFromSweep)),
			SENSEKEY("SweepResult", FSenseCustomData::CreateFHitResult(SweepResult)),
		}
	});
}

void UTouchSenseComponent::OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, int OtherBodyIndex)
{
	if (!bSendOverlapSignal) return;
	
	UE_LOG(LogTemp, Warning, TEXT("Touch Sense Component - Overlap End"));
	
	MemoryComponent->RegisterSenseData(FSenseData{
		SenseType,
		this,
		{
			SENSEKEY("OverlappedComponent", FSenseCustomData::CreateUPrimitiveComponentPointer(OverlappedComponent)),
			SENSEKEY("OtherActor", FSenseCustomData::CreateAActorPointer(OtherActor)),
			SENSEKEY("OtherComponent", FSenseCustomData::CreateUPrimitiveComponentPointer(OtherComponent)),
			SENSEKEY("OtherBodyIndex", FSenseCustomData::Createint(OtherBodyIndex))
		}
	});
}

void UTouchSenseComponent::HandleOwnerTouched(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse,
	const FHitResult& Hit)
{
	if (!bSendActorCollisionSignal) return;
	
	UE_LOG(LogTemp, Warning, TEXT("Touch Sense Component - Actor hit"));
	
	MemoryComponent->RegisterSenseData(FSenseData{
		SenseType,
		this,
		{
			SENSEKEY("SelfActor", FSenseCustomData::CreateAActorPointer(SelfActor)),
			SENSEKEY("OtherActor", FSenseCustomData::CreateAActorPointer(OtherActor)),
			SENSEKEY("NormalImpulse", FSenseCustomData::CreateFVector(NormalImpulse)),
			SENSEKEY("Hit", FSenseCustomData::CreateFHitResult(Hit))
		}
	});
}

