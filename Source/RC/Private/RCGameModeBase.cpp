#include "RCGameModeBase.h"
#include "RCPlayerController.h"
#include "RCUiFaderHUD.h"

ARCGameModeBase::ARCGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = ARCPlayerController::StaticClass();
    this->HUDClass = ARCUiFaderHUD::StaticClass();
}

void ARCGameModeBase::SetNextLevelName(FName LevelName) {
}


