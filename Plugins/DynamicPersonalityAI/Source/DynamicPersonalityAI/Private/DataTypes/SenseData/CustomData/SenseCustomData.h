#pragma once

#include "CoreMinimal.h"
#include "SenseCustomData.generated.h"

USTRUCT(BlueprintType)
struct FSenseCustomData
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly)
	float FloatData;
	
	UPROPERTY(BlueprintReadOnly)
	int IntData;
	
	UPROPERTY(BlueprintReadOnly)
	FName NameData;
	
	UPROPERTY(BlueprintReadOnly)
	FString StringData;
	
	UPROPERTY(BlueprintReadOnly)
	FVector2D Vector2DData;
	
	UPROPERTY(BlueprintReadOnly)
	FVector VectorData;
	
	UPROPERTY(BlueprintReadOnly)
	bool BoolData;
	
	UPROPERTY(BlueprintReadOnly)
	FHitResult HitData;
	
	UPROPERTY(BlueprintReadOnly)
	UObject* ObjectData;
	
	UPROPERTY(BlueprintReadOnly)
	ACharacter* CharacterData;
	
	UPROPERTY(BlueprintReadOnly)
	AActor* ActorData;
	
	UPROPERTY(BlueprintReadOnly)
	UActorComponent* ComponentData;
};
