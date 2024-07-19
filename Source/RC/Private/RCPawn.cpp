#include "RCPawn.h"

ARCPawn::ARCPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInitialize = false;
    this->bVisible = true;
    this->bVisiblePawn = true;
    this->bVisibleIsCollision = true;
    this->bPause = false;
    this->bPauseCancel = false;
}

void ARCPawn::SetVisibility(bool bInVisible, bool bDirect, bool bIsCollision) {
}

void ARCPawn::SetPauseCancelFlag(bool bInPauseCancel) {
}

void ARCPawn::SetPause(bool bInPause, bool bDirect) {
}

bool ARCPawn::IsVisibility() {
    return false;
}

bool ARCPawn::IsPauseCancelFlag() {
    return false;
}

bool ARCPawn::IsPause() {
    return false;
}


