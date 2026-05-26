#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "BaseSenseComponent.generated.h"


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
	
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FName SenseType;
	
protected:
	UPROPERTY(BlueprintReadOnly)
	class UBehaviourComponent* BehaviourComponent;
	
	UPROPERTY(BlueprintReadOnly)
	class UPersonaComponent* PersonaComponent;
	
	UPROPERTY(BlueprintReadOnly)
	class UMemoryComponent* MemoryComponent;
};
