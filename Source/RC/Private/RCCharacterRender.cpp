#include "RCCharacterRender.h"
#include "RCDitherFadeComponent.h"

ARCCharacterRender::ARCCharacterRender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseControllerRotationYaw = false;
    this->bUseSameBaseCharacterId = false;
    this->CurrentPreset = 0;
    this->DitherFadeComp = CreateDefaultSubobject<URCDitherFadeComponent>(TEXT("DitherFadeComp"));
    this->bApplyColorByTick = false;
    this->CurrentWetIntensity = 0.00f;
    this->PreWetIntensity = 0.00f;
    this->PostWetIntensity = 0.00f;
    this->CurrentEmissiveIntensity = 0.00f;
    this->PreEmissiveIntensity = 0.00f;
    this->PostEmissiveIntensity = 0.00f;
    this->CurrentTranslucentIntensity = 0.00f;
    this->PreTranslucentIntensity = 0.00f;
    this->PostTranslucentIntensity = 0.00f;
    this->CurrentDitherAlpha = 1.00f;
    this->RainEffectComp = NULL;
    this->bCameraNearFade = true;
    this->bCameraNearFadeOriginalFlag = false;
    this->CameraNearFadeOriginalLengthMin = 60.00f;
    this->CameraNearFadeOriginalLengthMax = 100.00f;
    this->BodyMaterialStartIndex = 0;
    this->BodyMaterialEndIndex = 0;
    this->FaceMaterialStartIndex = 0;
    this->FaceMaterialEndIndex = 0;
    this->SoldierNumberMaterialIndex = 0;
    this->bOnLoad = false;
    this->bEnvironmentMaterialChange = false;
    this->BodyMeshName = TEXT("Mesh");
    this->FaceMeshName = TEXT("_Fac");
    this->bSwitchIntegrationMob = false;
    this->DefaultCapsuleIndirectShadowMinVisibility = 0.00f;
    this->bPlayerCollisionSetupDisable = false;
}

void ARCCharacterRender::UndoParameterOfRimLightMaterials(const float InRimLightDurationSec) {
}

void ARCCharacterRender::StartFadeOut(float InTime, bool InDirect) {
}

void ARCCharacterRender::StartFadeIn(float InTime, bool InDirect) {
}

void ARCCharacterRender::SetUseFakeSpeedFlag(bool bUseFakeSpeed) {
}

void ARCCharacterRender::SetupBgCharacterMaterial(const float InDurationSec) {
}

void ARCCharacterRender::SetFakeSpeed(float FakeSpeed) {
}

void ARCCharacterRender::SetDither(const float InDitherAlphaValue) {
}

void ARCCharacterRender::SetCameraFadeEnable(bool bFlag) {
}

bool ARCCharacterRender::IsFadeEnd() {
    return false;
}

bool ARCCharacterRender::IsCameraFadeEnable() {
    return false;
}

bool ARCCharacterRender::GetFinishChangeRimLight() {
    return false;
}

void ARCCharacterRender::ChangeParameterOfTranslucentMaterials(const float InTranslucentIntensityValue, const float InDurationSec) {
}

void ARCCharacterRender::ChangeParameterOfRimLightMaterials(const FLinearColor InOutlineColor, const float InOutlineCoverageValue, const float InOutlineSmoothValue, const float InRimLightDurationSec) {
}

void ARCCharacterRender::ChangeParameterOfRainMaterials(const float InRainIntensityValue, const float InWetIntensityValue, const float InWetDurationSec) {
}

void ARCCharacterRender::ChangeParameterOfEmissiveMaterials(const float InEmissiveIntensityValue, const float InDurationSec) {
}

void ARCCharacterRender::ChangeColorOfMaterials(FLinearColor InAmbientColor, FLinearColor InDirectionalColor, const float InDurationSec) {
}


