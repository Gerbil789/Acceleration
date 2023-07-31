// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CheckpointManager.h"
#include "MyGameInstance.generated.h"


/**
 * 
 */
UCLASS()
class ACCELERATION_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
private:
    virtual void Init() override;
public:
    // Add a member variable to hold the reference to your custom class
    UPROPERTY(BlueprintReadOnly, Category = "MyGameInstance")
    UCheckpointManager* checkpointManager;
	
};
