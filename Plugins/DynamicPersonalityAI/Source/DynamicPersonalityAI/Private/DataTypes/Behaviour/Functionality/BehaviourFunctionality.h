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
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void BeginPlay();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void EnterBehaviour();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void TickBehaviour(float DeltaTime);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void ExitBehaviour();
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual class UWorld* GetWorld() const override;
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual bool ImplementsGetWorld() const override;
	
public:
	void SetActive(bool bActive);
	
protected:
	UPROPERTY(BlueprintReadOnly)
	UBehaviourComponent* BehaviourComponent;
	
	UPROPERTY(BlueprintReadOnly)
	UMemoryComponent* MemoryComponent;
	
	UPROPERTY(BlueprintReadOnly)
	UPersonaComponent* PersonaComponent;
	
	UPROPERTY(BlueprintReadOnly)
	AActor* OwningActor;
	
	UPROPERTY(BlueprintReadOnly)
	bool bIsActive;
};