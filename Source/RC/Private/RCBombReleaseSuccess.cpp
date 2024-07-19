#include "RCBombReleaseSuccess.h"

URCBombReleaseSuccess::URCBombReleaseSuccess() {
    this->AN_On_Start = NULL;
    this->AN_Finish = NULL;
    this->AN_Off = NULL;
    this->isStartAnimation = false;
    this->isFinishAnimation = false;
}

void URCBombReleaseSuccess::StartAnimation() {
}

void URCBombReleaseSuccess::OffAnimation() {
}

bool URCBombReleaseSuccess::IsFinishedAnimation() {
    return false;
}

void URCBombReleaseSuccess::FinishAnimation() {
}


