#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BehaviourFunctionality.generated.h"

class UPersonaComponent;
class UMemoryComponent;
class UBehaviourComponent;

UCLASS(BlueprintType, Blueprintable)
class DYNAMICPERSONALITYAI_API UBehaviourFunctionality : public UObject
{
	GENERATED_BODY()
	
	friend class UBehaviourData;
	
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="UtilityAI")
	void BeginPlay();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="UtilityAI")
	void EnterBehaviour();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="UtilityAI")
	void TickBehaviour(float DeltaTime);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="UtilityAI")
	void ExitBehaviour();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="UtilityAI")
	virtual class UWorld* GetWorld() const override;
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="UtilityAI")
	virtual bool ImplementsGetWorld() const override;
	
public:
	void SetActive(bool bActive);
	
protected:
	UPROPERTY(BlueprintReadOnly, Category="UtilityAI")
	UBehaviourComponent* BehaviourComponent;
	
	UPROPERTY(BlueprintReadOnly, Category="UtilityAI")
	UMemoryComponent* MemoryComponent;
	
	UPROPERTY(BlueprintReadOnly, Category="UtilityAI")
	UPersonaComponent* PersonaComponent;
	
	UPROPERTY(BlueprintReadOnly, Category="UtilityAI")
	AActor* OwningActor;
	
	UPROPERTY(BlueprintReadOnly, Category="UtilityAI")
	bool bIsActive;
};