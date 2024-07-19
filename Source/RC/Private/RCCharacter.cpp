#include "RCCharacter.h"

ARCCharacter::ARCCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInitialize = false;
    this->bVisible = true;
    this->bVisibleCharacter = true;
    this->bVisibleIsCollision = true;
    this->bPause = false;
    this->bPauseCancel = false;
    this->bSimulatePhysics = true;
}

void ARCCharacter::SetVisibility(bool bVisibleFlag, bool bDirectFlag, bool bIsCollision) {
}

void ARCCharacter::SetSimulatePhysicsFlag(bool bInSimulatePhysics, bool bInDirect) {
}

void ARCCharacter::SetPauseCancelFlag(bool bInPauseCancel) {
}

void ARCCharacter::SetPause(bool bPauseFlag, bool bDirectFlag) {
}

bool ARCCharacter::IsVisibility() {
    return false;
}

bool ARCCharacter::IsSimulatePhysicsFlag() {
    return false;
}

bool ARCCharacter::IsPauseCancelFlag() {
    return false;
}

bool ARCCharacter::IsPause() {
    return false;
}


