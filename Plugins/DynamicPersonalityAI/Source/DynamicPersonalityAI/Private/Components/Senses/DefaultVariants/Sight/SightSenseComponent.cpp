// Fill out your copyright notice in the Description page of Project Settings.


#include "SightSenseComponent.h"

#include "Components/ShapeComponent.h"
#include "Components/Memory/MemoryComponent.h"


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
	// UE_LOG(LogTemp, Log, TEXT("SightSenseComponent::ProcessNearObjects"));
	
	if (OverlappedComponents.IsEmpty())
	{
	UE_LOG(LogTemp, Warning, TEXT("No overlapped components"))		
	}	
	
	for (UPrimitiveComponent* Component : OverlappedComponents)
	{
		FHitResult HitResult;
		
		FCollisionQueryParams CollisionParams;
		CollisionParams.AddIgnoredActor(GetOwner());
		CollisionParams.AddIgnoredActor(Component->GetOwner());
		if (GetWorld()->LineTraceSingleByChannel(HitResult, GetComponentLocation(), 
			Component->GetComponentLocation(),ECC_Camera))
		{
			if (VisibleComponents.Contains(Component))
			{
				VisibleComponents.Remove(Component);
			}
			DrawDebugLine(GetWorld(), GetComponentLocation(), Component->GetComponentLocation(), 
					FColor::Red, false, 3.f);
			UE_LOG(LogTemp, Log, TEXT("Sight obstructed"))
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
						SENSEKEY("Component", FSenseCustomData::CreateUPrimitiveComponentPointer(Component))
						}
					}
				);
			}
			DrawDebugLine(GetWorld(), GetComponentLocation(), Component->GetComponentLocation(), 
					FColor::Yellow, false, 3.f);
			UE_LOG(LogTemp, Log, TEXT("Clear sight"))
		}
	}
}

void USightSenseComponent::OverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                        UPrimitiveComponent* OtherComponent, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor == GetOwner())
	{
		UE_LOG(LogTemp, Warning, TEXT("Other actor was owner"))
		// return;
	}
	OverlappedComponents.Add(OverlappedComponent);
	UE_LOG(LogTemp, Log, TEXT("Sight overlapped component"))
}

void USightSenseComponent::OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, int OtherBodyIndex)
{
	// if (OtherActor == GetOwner()) return;
	OverlappedComponents.Remove(OverlappedComponent);
	if (VisibleComponents.Contains(OtherComponent))
	{
		VisibleComponents.Remove(OtherComponent);
	}
	UE_LOG(LogTemp, Log, TEXT("Sight stopped overlap component"))
}
