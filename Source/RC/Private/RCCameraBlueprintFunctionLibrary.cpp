#include "RCCameraBlueprintFunctionLibrary.h"

URCCameraBlueprintFunctionLibrary::URCCameraBlueprintFunctionLibrary() {
}

void URCCameraBlueprintFunctionLibrary::SetPlayerCamera(FName Tag) {
}

void URCCameraBlueprintFunctionLibrary::SetFoceCameraAngle(float A, float va) {
}

void URCCameraBlueprintFunctionLibrary::SetFakeLocation(FVector Location) {
}

void URCCameraBlueprintFunctionLibrary::SetCameraAnglePlayerBack(float va) {
}

void URCCameraBlueprintFunctionLibrary::SetActivationCameraWithBlendParam(FName Tag, FViewTargetTransitionParams Param) {
}

void URCCameraBlueprintFunctionLibrary::SetActivationCamera(FName Tag, bool Blend, float Time) {
}

void URCCameraBlueprintFunctionLibrary::ResetActivationCamera(FName Tag) {
}

void URCCameraBlueprintFunctionLibrary::RemoveFakeLocation() {
}

void URCCameraBlueprintFunctionLibrary::ReActivationCamera(bool Blend) {
}

bool URCCameraBlueprintFunctionLibrary::IsLoadingCamra() {
    return false;
}

FName URCCameraBlueprintFunctionLibrary::GetCurrentCameraTag() {
    return NAME_None;
}

AActor* URCCameraBlueprintFunctionLibrary::GetCurrentCamera() {
    return NULL;
}

float URCCameraBlueprintFunctionLibrary::GetCameraVAngle() {
    return 0.0f;
}

float URCCameraBlueprintFunctionLibrary::GetCameraAngle() {
    return 0.0f;
}

bool URCCameraBlueprintFunctionLibrary::CheckAcvivationCamera(FName Tag) {
    return false;
}


