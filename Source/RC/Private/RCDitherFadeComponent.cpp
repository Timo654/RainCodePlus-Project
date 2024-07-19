#include "RCDitherFadeComponent.h"

URCDitherFadeComponent::URCDitherFadeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCameraNearFade = true;
    this->bCameraNearFadeOriginalFlag = true;
    this->CameraNearFadeOriginalLengthMin = 60.00f;
    this->CameraNearFadeOriginalLengthMax = 100.00f;
    this->bEnable = false;
    this->StartValue = 0.00f;
    this->EndValue = 0.00f;
    this->NowValue = 1.00f;
    this->EndTime = 0.00f;
    this->NowTime = 0.00f;
    this->CameraNearType = ERCCameraNearType::DrawOn;
    this->CameraLength = 0.00f;
    this->bCameraFadeEnable = false;
    this->CameraStartValue = 0.00f;
    this->CameraEndValue = 0.00f;
    this->CameraNowValue = 1.00f;
    this->CameraEndTime = 0.00f;
    this->CameraNowTime = 0.00f;
    this->OwnerCharacter = NULL;
    this->OwnerPawn = NULL;
    this->OwnerKakiwari = NULL;
}


