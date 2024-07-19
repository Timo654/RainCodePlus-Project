#include "RCCharacterAnimInstance.h"

URCCharacterAnimInstance::URCCharacterAnimInstance() {
    this->RequestAnimationData = NULL;
    this->bLoop = false;
    this->BaseAnimPoseAlphaRate = 1.00f;
    this->RequestAnimPoseAlphaRate = 0.00f;
    this->bHoldingHand = false;
    this->bUseFakeSpeed = false;
    this->FakeSpeed = 380.00f;
}

TArray<FRCCharacterSequencePlayerInfo> URCCharacterAnimInstance::GetSequencePlayerInfos(FName InAnimGraphName) {
    return TArray<FRCCharacterSequencePlayerInfo>();
}

FRCCharacterSequencePlayerInfo URCCharacterAnimInstance::GetSequencePlayerInfo(FName InStateMachineName, FName InStateName, FName InSequenceName) {
    return FRCCharacterSequencePlayerInfo{};
}


