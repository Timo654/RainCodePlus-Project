#include "RCCharacterMotionSlotData.h"

FRCCharacterMotionSlotData::FRCCharacterMotionSlotData() {
    this->InMotion = NULL;
    this->LoopMotion = NULL;
    this->OutMotion = NULL;
    this->SlotAlpha = 0.00f;
    this->PlayRateBasis = 0.00f;
    this->PlayRate = 0.00f;
    this->bStartSwitch = false;
    this->bStartFromLoopSwitch = false;
    this->bPauseSwitch = false;
    this->bResetSwitch = false;
    this->bEndToLoopSwitch = false;
    this->bStopInSwitch = false;
    this->bPlayInMotion = false;
    this->LoopMotionPlayStartPos = 0.00f;
    this->ResetPoseMotion = NULL;
}

