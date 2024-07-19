#include "RCCharacterLookCtrl.h"

URCCharacterLookCtrl::URCCharacterLookCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LookTargetProcess = ELookTargetProcess::None;
    this->bLookTarget = false;
    this->CanViewDistance = 200.00f;
    this->CanViewAngle = 90.00f;
    this->LookTargetDelay = 0.30f;
    this->LookTargetActor = NULL;
    this->LookTargetCharacterSkinnedMeshComponent0 = NULL;
    this->LookTargetCharacterSkinnedMeshComponent1 = NULL;
    this->LookTargetCharacterAlpha = 0.00f;
    this->EyeTranslateNearMax = -0.10f;
    this->EyeTranslateFarMax = 0.20f;
    this->EyeTranslateUpMax = 0.10f;
    this->EyeTranslateDownMax = -0.10f;
    this->EyeViewAngleLR = 50.00f;
    this->EyeViewAngleUp = 20.00f;
    this->EyeViewAngleDown = 40.00f;
    this->EyeLookSpeed = 1.00f;
    this->EyeMoveSec = 0.03f;
    this->DefaultEyeMoveSec = 0.03f;
    this->DefaultEyeTranslateNearMax = 0.00f;
    this->DefaultEyeTranslateFarMax = 0.00f;
    this->DefaultEyeTranslateUpMax = 0.00f;
    this->DefaultEyeTranslateDownMax = 0.00f;
    this->NeckWeightSpine1 = 0.00f;
    this->NeckWeightSpine2 = 0.00f;
    this->NeckWeightSpine3 = 0.10f;
    this->NeckWeightNeck = 0.10f;
    this->NeckWeightHead = 0.20f;
    this->NeckLimitAngleLR = 30.00f;
    this->NeckLimitAngleUp = 15.00f;
    this->NeckLimitAngleDown = 15.00f;
    this->NeckLookSpeed = 1.00f;
    this->NeckMoveSec = 0.40f;
    this->DefaultNeckWeightSpine1 = 0.00f;
    this->DefaultNeckWeightSpine2 = 0.00f;
    this->DefaultNeckWeightSpine3 = 0.10f;
    this->DefaultNeckWeightNeck = 0.10f;
    this->DefaultNeckWeightHead = 0.20f;
    this->Owner = NULL;
    this->CharacterBase = NULL;
    this->PawnBase = NULL;
    this->FacialCtrl = NULL;
    this->LookAtTargetActor = NULL;
    this->LookAtTargetSkinnedMeshComponent = NULL;
    this->bExistEyeBone = false;
    this->bNoDelayLookProcess = false;
}

void URCCharacterLookCtrl::StopLookAt(float InDurationSec) {
}

void URCCharacterLookCtrl::SetViewParam(float InCanViewDistance, float InCanViewAngle) {
}

void URCCharacterLookCtrl::SetLookTarget(const FVector InTargetPos) {
}

void URCCharacterLookCtrl::LookAt(const AActor* InActor, const FName InLookAtBoneName) {
}

FName URCCharacterLookCtrl::GetCurrentLookAtTargetBoneName() const {
    return NAME_None;
}

AActor* URCCharacterLookCtrl::GetCurrentLookAtTargetActor() const {
    return NULL;
}


