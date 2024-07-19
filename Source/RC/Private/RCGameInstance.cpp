#include "RCGameInstance.h"

URCGameInstance::URCGameInstance() {
    this->SceneChangeMediator = NULL;
    this->bCharacterViewerMode = false;
}

void URCGameInstance::SetStatusProduction(ERCProduction InProduction) {
}

void URCGameInstance::SetDrawDebugPrint(bool bDebugDraw) {
}

void URCGameInstance::QuitGame() {
}

void URCGameInstance::PrintLogBlueprintCallstack() {
}

bool URCGameInstance::IsStatusGalleryEnable() {
    return false;
}

bool URCGameInstance::IsStatusDlcInstall(ERCDlcInstall InDlc) {
    return false;
}

ERCProduction URCGameInstance::GetStatusProduction() {
    return ERCProduction::PRODUCTION;
}

ARCSoundManager* URCGameInstance::GetSoundManager() {
    return NULL;
}

TScriptInterface<IRCPlatformUserInterface> URCGameInstance::GetPlatformUser() {
    return NULL;
}

ARCMovieManager* URCGameInstance::GetMovieManager() {
    return NULL;
}

URCEffectManager* URCGameInstance::GetEffectManager() {
    return NULL;
}

void URCGameInstance::CheckAssetList() {
}


