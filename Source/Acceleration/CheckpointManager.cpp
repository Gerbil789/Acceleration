// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckpointManager.h"


UCheckpointManager::UCheckpointManager() {
	LastIndex = 0;
	CheckpointCount = 0;
}

void UCheckpointManager::Reset(){
	LastIndex = 0;
}

void UCheckpointManager::Check(const int index, bool& valid, int& previousIndex, int& currentIndex, int& nextIndex, bool& finish){
	finish = (index == 0 && LastIndex == CheckpointCount);

	if (LastIndex + 1 == index) {
		previousIndex = LastIndex;
		LastIndex = index;
		currentIndex = index;
		nextIndex = index + 1;
		valid = true;
	}
}
