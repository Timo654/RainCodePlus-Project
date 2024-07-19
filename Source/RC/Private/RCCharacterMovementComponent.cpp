#include "RCCharacterMovementComponent.h"

URCCharacterMovementComponent::URCCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VelocityInterpolateSpeedRate = 0.03f;
    this->StairwayUnderneath = NULL;
    this->bFootSteps = false;
    this->bCompanion = false;
    this->bSpirit = false;
    this->bDebugFloorTypeDraw = false;
}


