#include "RCCompanionAIComponent.h"

URCCompanionAIComponent::URCCompanionAIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnable = true;
    this->bFrontMove = false;
    this->bInitialize = false;
    this->AIMove = NULL;
    this->SpeedBackup = false;
    this->RunSpeed = 0.00f;
    this->WalkSpeed = 0.00f;
}


