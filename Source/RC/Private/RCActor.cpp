#include "RCActor.h"

ARCActor::ARCActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInitialize = false;
    this->bVisible = true;
    this->bVisibleActor = true;
    this->bPause = false;
    this->bPauseCancel = false;
}

void ARCActor::SetVisibility(bool bInVisible, bool bDirect) {
}

void ARCActor::SetPauseCancelFlag(bool bInPauseCancel) {
}

void ARCActor::SetPause(bool bInPause, bool bDirect) {
}

bool ARCActor::IsVisibility() {
    return false;
}

bool ARCActor::IsPauseCancelFlag() {
    return false;
}

bool ARCActor::IsPause() {
    return false;
}

FName ARCActor::GetActorName() {
    return NAME_None;
}


