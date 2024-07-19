#include "RCTitleProtPlayerController.h"

ARCTitleProtPlayerController::ARCTitleProtPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->TitleProtManager = NULL;
}


