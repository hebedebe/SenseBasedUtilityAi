#include "MemoryComponent.h"


UMemoryComponent::UMemoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UMemoryComponent::RegisterSenseData(const FSenseData& SenseData)
{
	UE_LOG(LogTemp, Warning, TEXT("Registered SenseData (%s)"), *SenseData.SenseType.ToString())
	SenseDataQueue.Enqueue(SenseData);
}

FSenseData UMemoryComponent::PopSense()
{
	FSenseData Data = *SenseDataQueue.Peek();
	SenseDataQueue.Pop();
	return Data;
}

bool UMemoryComponent::IsSenseQueueEmpty() const
{
	return SenseDataQueue.IsEmpty();
}
