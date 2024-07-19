#include "RCSelectEventTrigger.h"

ARCSelectEventTrigger::ARCSelectEventTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraSpeed = 1.00f;
    this->bExitNotBackCamera = false;
    this->PlayerOverlapCount = 0;
}

bool ARCSelectEventTrigger::IsOverlapPlayer() {
    return false;
}


