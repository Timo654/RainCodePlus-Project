#include "RCRealLevelScriptActor.h"

ARCRealLevelScriptActor::ARCRealLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TpsCameraActor = NULL;
    this->TpsCameraStatus = ERCLSADefautCameraStatus::None;
    this->NextGameMode = ERCGameMode::Non;
    this->bSubLevelLoadSync = false;
    this->bSubLevelLoadingWait = false;
}

ERCGameMode ARCRealLevelScriptActor::GetNextGameMode() {
    return ERCGameMode::Non;
}


