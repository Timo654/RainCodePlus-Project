#include "RCTitleProtGameModeBase.h"
#include "RCTitleProtPlayerController.h"

ARCTitleProtGameModeBase::ARCTitleProtGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = ARCTitleProtPlayerController::StaticClass();
}


