#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "BaseSenseComponent.generated.h"


class FSenseValidityManager
{
public:
	static void RegisterSenseType(FName SenseType);
	static bool CheckSenseType(FName SenseType);
	
public:
	static TSet<FName> SenseTypes;
};


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
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="UtilityAI")
	FName SenseType;
	
protected:
	UPROPERTY(BlueprintReadOnly, Category="UtilityAI")
	class UBehaviourComponent* BehaviourComponent;
	
	UPROPERTY(BlueprintReadOnly, Category="UtilityAI")
	class UPersonaComponent* PersonaComponent;
	
	UPROPERTY(BlueprintReadOnly, Category="UtilityAI")
	class UMemoryComponent* MemoryComponent;
};
