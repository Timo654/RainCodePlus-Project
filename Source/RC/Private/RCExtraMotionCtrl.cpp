#include "RCExtraMotionCtrl.h"

URCExtraMotionCtrl::URCExtraMotionCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPermissionExtraIdle = true;
    this->ExtraIdleNum = 3;
    this->ExtraIdleTransitionTime = 30.00f;
    this->CurrentExtraIdleTransitionTime = 30.00f;
    this->bExtraIdleTransition = false;
    this->UseExtraIdleIndex = 0;
    this->CharacterBase = NULL;
}


