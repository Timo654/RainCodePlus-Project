#include "RCTitlePlayerController.h"

ARCTitlePlayerController::ARCTitlePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->titleManager = NULL;
}


