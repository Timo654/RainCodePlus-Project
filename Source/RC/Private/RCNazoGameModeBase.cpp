#include "RCNazoGameModeBase.h"
#include "RCNazoPlayerController.h"
#include "RCNzHUD.h"

ARCNazoGameModeBase::ARCNazoGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = ARCNazoPlayerController::StaticClass();
    this->HUDClass = ARCNzHUD::StaticClass();
}


