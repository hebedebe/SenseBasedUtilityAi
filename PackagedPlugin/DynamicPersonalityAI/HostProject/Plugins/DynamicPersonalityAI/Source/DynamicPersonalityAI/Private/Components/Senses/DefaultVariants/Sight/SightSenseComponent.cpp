// Fill out your copyright notice in the Description page of Project Settings.


#include "SightSenseComponent.h"

#include "Components/ShapeComponent.h"
#include "Components/Memory/MemoryComponent.h"
#include "DataTypes/SenseData/CustomData/SenseCustomData.h"


// Sets default values for this component's properties
USightSenseComponent::USightSenseComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	SenseType = "Sight";
}


// Called when the game starts
void USightSenseComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register components used for preliminary sight check
	TArray<USceneComponent*> ChildComponents;
	GetChildrenComponents(true, ChildComponents);
	for (USceneComponent* Component : ChildComponents)
	{
		if (UPrimitiveComponent* PrimitiveComponent = Cast<UShapeComponent>(Component))
		{
			Colliders.Add(PrimitiveComponent);
			PrimitiveComponent->OnComponentBeginOverlap.AddDynamic(this, &USightSenseComponent::OverlapStart);
			PrimitiveComponent->OnComponentEndOverlap.AddDynamic(this, &USightSenseComponent::OverlapEnd);
			PrimitiveComponent->SetGenerateOverlapEvents(true);
			UE_LOG(LogTemp, Log, TEXT("Registered sight collider"))
		}
	}
	
	FTimerHandle ObjectProcessorHandle;
	GetWorld()->GetTimerManager().SetTimer(ObjectProcessorHandle, [this]{ProcessNearObjects();}, 
		UpdateFrequency, true);
}

void USightSenseComponent::ProcessNearObjects()
{
	if (!IsValid(this)) return;
	for (UPrimitiveComponent* Component : OverlappedComponents)
	{
		if (!IsValid(Component)) continue;
	
		FHitResult HitResult;
	
		FCollisionQueryParams CollisionParams;
		CollisionParams.AddIgnoredActor(GetOwner());
		CollisionParams.AddIgnoredActor(Component->GetOwner());
	
		FVector StartLocation = GetComponentLocation();
		if (GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, 
			Component->GetComponentLocation(),ECC_MAX, CollisionParams))
		{
			if (VisibleComponents.Contains(Component))
			{
				VisibleComponents.Remove(Component);
			}
		
			if (bDrawDebug)
			{
				DrawDebugLine(GetWorld(), GetComponentLocation(), HitResult.ImpactPoint, 
						FColor::Red, false, 3.f);
			}
		} else
		{
			if (!VisibleComponents.Contains(Component))
			{
				VisibleComponents.Add(Component);
				MemoryComponent->RegisterSenseData(
					{
						SenseType,
					this,
					{
						SENSEKEY("Component", USenseCustomData::CreateUPrimitiveComponentPointer(Component)),
						SENSEKEY("Actor", USenseCustomData::CreateAActorPointer(Component->GetOwner())),
						SENSEKEY("Distance", USenseCustomData::Createfloat(HitResult.Distance)),
						SENSEKEY("HitResult", USenseCustomData::CreateFHitResult(HitResult))
						}
					}
				);
			}
		
			if (bDrawDebug)
			{
				DrawDebugLine(GetWorld(), StartLocation, Component->GetComponentLocation(), 
						FColor::Yellow, false, 3.f);
			}
		}
	}
}

void USightSenseComponent::OverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                        UPrimitiveComponent* OtherComponent, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor == GetOwner())
	{
		return;
	}
	OverlappedComponents.Add(OtherComponent);
}

void USightSenseComponent::OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, int OtherBodyIndex)
{
	if (OtherActor == GetOwner()) return;
	OverlappedComponents.Remove(OtherComponent);
	if (VisibleComponents.Contains(OtherComponent))
	{
		VisibleComponents.Remove(OtherComponent);
	}
}
