#include "RCCrossWalkController.h"

ARCCrossWalkController::ARCCrossWalkController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Length = 0.00f;
    this->throughLength = 0.00f;
}

void ARCCrossWalkController::Initialize() {
}

float ARCCrossWalkController::GetThroughLength() {
    return 0.0f;
}

AActor* ARCCrossWalkController::GetCrossWalkActor(int32 crossWalkIndex) {
    return NULL;
}

float ARCCrossWalkController::GetCheckLength() {
    return 0.0f;
}


