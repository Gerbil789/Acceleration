// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CheckpointManager.generated.h"


UCLASS(BlueprintType)
class ACCELERATION_API UCheckpointManager : public UObject
{
	GENERATED_BODY()
public:

	//UPROPERTY(EditDefaultsOnly, Category = "Blueprint")
	//TSubclassOf<class BP_CheckpointActor> CheckpointActor;

	
	UCheckpointManager();

	UPROPERTY(BlueprintReadWrite, Category = "Checkpoints")
	int CheckpointCount;

	UPROPERTY(BlueprintReadWrite, Category = "Checkpoints")
	int LastIndex;

	UFUNCTION(BlueprintCallable, Category = "Checkpoints")
	void Reset();

	UFUNCTION(BlueprintCallable, Category = "Checkpoints")
	void Check(const int index, bool& valid, int& previousIndex, int& currentIndex, int& nextIndex, bool& finish);

};
