#include "RCPawnRender.h"
#include "RCDitherFadeComponent.h"

ARCPawnRender::ARCPawnRender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentPreset = 0;
    this->DitherFadeComp = CreateDefaultSubobject<URCDitherFadeComponent>(TEXT("DitherFadeComp"));
    this->bApplyColorByTick = false;
    this->bCameraNearFade = true;
    this->bCameraNearFadeOriginalFlag = false;
    this->CameraNearFadeOriginalLengthMin = 60.00f;
    this->CameraNearFadeOriginalLengthMax = 100.00f;
}

void ARCPawnRender::StartFadeOut(float InTime, bool InDirect) {
}

void ARCPawnRender::StartFadeIn(float InTime, bool InDirect) {
}

void ARCPawnRender::SetupBgCharacterMaterial(float InDurationSec) {
}

void ARCPawnRender::SetCameraFadeEnable(bool bFlag) {
}

bool ARCPawnRender::IsFadeEnd() {
    return false;
}

bool ARCPawnRender::IsCameraFadeEnable() {
    return false;
}

void ARCPawnRender::ChangeColorOfMaterials(FLinearColor InAmbientColor, FLinearColor InDirectionalColor, float InDurationSec) {
}


