#include "RCTitleGameModeBase.h"
#include "RCTitleHUD.h"
#include "RCTitlePlayerController.h"

ARCTitleGameModeBase::ARCTitleGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = ARCTitlePlayerController::StaticClass();
    this->HUDClass = ARCTitleHUD::StaticClass();
}


