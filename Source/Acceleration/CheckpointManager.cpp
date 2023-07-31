// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckpointManager.h"

#include "Kismet/GameplayStatics.h"


UCheckpointManager::UCheckpointManager() {
	LastIndex = 0;
	CheckpointCount = 0;
	//CheckpointActor = ABP_CheckpointActor::StaticClass();
   
}

void UCheckpointManager::Check(int index){
	if (LastIndex + 1 == index) {
		LastIndex = index;
	}
}
