#pragma once

#include "CoreMinimal.h"
#include "Components/Senses/BaseSenseComponent.h"
#include "HearingSenseComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DYNAMICPERSONALITYAI_API UHearingSenseComponent : public UBaseSenseComponent
{
	GENERATED_BODY()

public:
	UHearingSenseComponent();

protected:
	virtual void BeginPlay() override;
	
public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HearingRange = 200;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DefaultObstacleMufflingStrength = 3.f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MinHearingDb = 0.f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDrawDebugRays = false;
};
