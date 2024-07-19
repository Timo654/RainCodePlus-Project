#include "RCCharacterAnimCtrl.h"

URCCharacterAnimCtrl::URCCharacterAnimCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSequencerPlay = false;
    this->AnimationName = TEXT("None");
    this->Animation1Name = TEXT("None");
    this->ExAnimationName = TEXT("None");
    this->CurrentSlotAlpha0 = 0.00f;
    this->SlotAlpha0 = 0.00f;
    this->CurrentSlotAlpha1 = 0.00f;
    this->SlotAlpha1 = 0.00f;
    this->CurrentSlotAlphaEx = 0.00f;
    this->SlotAlphaEx = 0.00f;
    this->CurrentPlayRateBasis0 = 1.00f;
    this->PlayRateBasis0 = 1.00f;
    this->CurrentPlayRateBasis1 = 1.00f;
    this->PlayRateBasis1 = 1.00f;
    this->CurrentPlayRateBasisEx = 1.00f;
    this->PlayRateBasisEx = 1.00f;
    this->CurrentPlayRate0 = 1.00f;
    this->PlayRate0 = 1.00f;
    this->CurrentPlayRate1 = 1.00f;
    this->PlayRate1 = 1.00f;
    this->CurrentPlayRateEx = 1.00f;
    this->PlayRateEx = 1.00f;
    this->bCurrentMotionLoop = false;
    this->bMotionLoop = false;
    this->bOutMotion0 = false;
    this->bOutMotion1 = false;
    this->bOutMotionEx = false;
    this->CurrentLipsyncSlotAlpha = 0.00f;
    this->CurrentLipsyncPlayRateBasis = 1.00f;
    this->CurrentLipsyncPlayRate = 1.00f;
    this->LipsyncBlendAlpha = 1.00f;
    this->MotionList = NULL;
    this->CurrentUseSlotType = EMotionSlotType::None;
    this->bIsSpawnedFromFurumaiSequencer = false;
    this->ExtraMotionCtrl = NULL;
}

void URCCharacterAnimCtrl::SwitchOutCurrentMotion() {
}

void URCCharacterAnimCtrl::SwitchLipsyncIdle() {
}

void URCCharacterAnimCtrl::StopLipsyncMotion() {
}

void URCCharacterAnimCtrl::SetPlayRateBasis(const float InRate) {
}

void URCCharacterAnimCtrl::SetPlayRate(const float InRate) {
}

void URCCharacterAnimCtrl::SetPlayLoop(bool bLoop) {
}

void URCCharacterAnimCtrl::SetNewAnimBP(UClass* InNewAnimClass) {
}

void URCCharacterAnimCtrl::SetExtraIdleTransition(bool bInbExtraIdleTransition) {
}

void URCCharacterAnimCtrl::SetDeathMatchFlag(bool bInDeathMatch) {
}

bool URCCharacterAnimCtrl::PlayMotion(const FName InMotionName, bool bLoop, const float InPlayRate, EMotionSlotType InUseSlot, EMotionEventSlotSwitchType InSwitchType, const float InLoopMotionPlayStartPosRate, const float InSwitchDurationSec, bool bBlend) {
    return false;
}

bool URCCharacterAnimCtrl::PlayLipsyncMotion(const FName InMotionName, bool bLoop, const float InPlayRate) {
    return false;
}

bool URCCharacterAnimCtrl::IsStartedMotion() {
    return false;
}

bool URCCharacterAnimCtrl::IsMotionBlend() {
    return false;
}

bool URCCharacterAnimCtrl::IsFinishedMotion() {
    return false;
}

bool URCCharacterAnimCtrl::IsExtraIdleTransition() {
    return false;
}

bool URCCharacterAnimCtrl::IsExistOutCurrentMotion() {
    return false;
}

int32 URCCharacterAnimCtrl::GetUseExtraIdleIndex() {
    return 0;
}

void URCCharacterAnimCtrl::EventSequenceFinished() {
}

void URCCharacterAnimCtrl::EventReset() {
}

void URCCharacterAnimCtrl::EventIdle() {
}

void URCCharacterAnimCtrl::EventFinishedOutMotion(const int32 InSlotNumber, const float InBlendSec) {
}

void URCCharacterAnimCtrl::EventFinishedLoopMotion(const int32 InSlotNumber) {
}

void URCCharacterAnimCtrl::EventFinishedInMotion(const int32 InSlotNumber) {
}

void URCCharacterAnimCtrl::EventFinished() {
}


