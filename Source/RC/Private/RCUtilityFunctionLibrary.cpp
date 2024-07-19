#include "RCUtilityFunctionLibrary.h"

URCUtilityFunctionLibrary::URCUtilityFunctionLibrary() {
}

void URCUtilityFunctionLibrary::SetToonDirectionalLightRotatorOffset(const FRotator InRotatorOffset) {
}

void URCUtilityFunctionLibrary::SetToonDirectionalLightInfo(AActor* InCameraActor, const FRotator InRotatorOffset) {
}

bool URCUtilityFunctionLibrary::SetRainRot(FRotator Rot) {
    return false;
}

bool URCUtilityFunctionLibrary::SetRainForce(int32 Force) {
    return false;
}

bool URCUtilityFunctionLibrary::SetRainColorTable(FName Name) {
    return false;
}

void URCUtilityFunctionLibrary::SetDrawRain(bool flag) {
}

bool URCUtilityFunctionLibrary::SetCascadeRainColorIndex(int32 Index) {
    return false;
}

bool URCUtilityFunctionLibrary::SetCascadeRainColor(FName Map, FName Name) {
    return false;
}

void URCUtilityFunctionLibrary::ResetToonDirectionalLightInfo() {
}

bool URCUtilityFunctionLibrary::IsCameraACtor(AActor* act) {
    return false;
}

FRotator URCUtilityFunctionLibrary::GetToonDirectionalLightRotatorOffset() {
    return FRotator{};
}

ARCPlayerController* URCUtilityFunctionLibrary::GetRCPlayerController() {
    return NULL;
}

FString URCUtilityFunctionLibrary::GetGameVersion() {
    return TEXT("");
}

int32 URCUtilityFunctionLibrary::GetCurrentArea() {
    return 0;
}

ARCPlayerCameraManager* URCUtilityFunctionLibrary::GeRCPlayerCameraManager() {
    return NULL;
}

ARCCameraManager* URCUtilityFunctionLibrary::GeRCCameraManager() {
    return NULL;
}


