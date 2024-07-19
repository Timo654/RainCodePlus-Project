#include "RCDroneControlComponent.h"

URCDroneControlComponent::URCDroneControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BehaviorType = idle;
    this->ShakeZMovementAmount = 3.00f;
    this->ShakePitchAmount = 3.00f;
    this->ShakeYawAmount = 0.08f;
    this->ShakeRollAmount = 0.30f;
    this->bIsSpeedyRotation = false;
    this->SpeedyRotationSpan = 14.48f;
    this->SpeedyRotationSpanMax = 10.00f;
    this->SpeedyRotationSpanMin = 20.00f;
    this->WalkMovementAmount = 30.00f;
    this->DurationWalkMovementSec = 0.20f;
    this->WalkSlopeAmount = 18.00f;
    this->DurationWalkSlopeSec = 0.20f;
}


