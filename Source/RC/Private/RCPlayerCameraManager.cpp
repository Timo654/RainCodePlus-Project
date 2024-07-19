#include "RCPlayerCameraManager.h"

ARCPlayerCameraManager::ARCPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->bDefaultConstrainAspectRatio = true;
}

void ARCPlayerCameraManager::ReloadCameras() {
}


