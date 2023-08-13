// Copyright Solstice Games

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayMessageProcessor.generated.h"

UCLASS(Abstract, Blueprintable, BlueprintType, ClassGroup=(GameplayMessages), meta=(BlueprintSpawnableComponent))
class GAMEPLAYMESSAGERUNTIME_API UGameplayMessageProcessor : public UActorComponent
{
	GENERATED_BODY()

public:
	UGameplayMessageProcessor();
	UGameplayMessageProcessor(const FObjectInitializer& ObjectInitializer);

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UFUNCTION(BlueprintNativeEvent, Category = "Gameplay Messages")
	void StartListening();

	UFUNCTION(BlueprintNativeEvent, Category = "Gameplay Messages")
	void StopListening();
};
