#include "RCPlayerController.h"

ARCPlayerController::ARCPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->bSkip = false;
    this->SkipSpeed = 2.00f;
    this->bSkipButton = false;
    this->SkipTick = 0.00f;
    this->BufResetCount = 0;
    this->bBeginPlayEnd = false;
}

void ARCPlayerController::SetSkipEnable(bool bInSkipEnable) {
}

void ARCPlayerController::SetMouseOverEnable(bool bInMouseOverEnable) {
}


bool ARCPlayerController::IsSkipEnable() const {
    return false;
}

bool ARCPlayerController::IsReady() {
    return false;
}

bool ARCPlayerController::IsMouseOverEnable() const {
    return false;
}

bool ARCPlayerController::IsBeginPlayEnd() {
    return false;
}


