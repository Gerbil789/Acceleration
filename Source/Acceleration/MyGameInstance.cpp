// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

void UMyGameInstance::Init() 
{
    //Super::Init();

    // Create an instance of your custom class
    checkpointManager = NewObject<UCheckpointManager>(this, UCheckpointManager::StaticClass());
}
