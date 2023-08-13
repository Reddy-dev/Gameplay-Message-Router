// Copyright Solstice Games

#include "GameFramework/GameplayMessageProcessor.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameplayMessageProcessor)

UGameplayMessageProcessor::UGameplayMessageProcessor()
{
	
}

UGameplayMessageProcessor::UGameplayMessageProcessor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
}

void UGameplayMessageProcessor::BeginPlay()
{
	Super::BeginPlay();

	StartListening();
}

void UGameplayMessageProcessor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	StopListening();
}

void UGameplayMessageProcessor::StopListening_Implementation()
{
	
}

void UGameplayMessageProcessor::StartListening_Implementation()
{
	
}
