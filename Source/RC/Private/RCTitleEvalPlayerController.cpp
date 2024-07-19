#include "RCTitleEvalPlayerController.h"

ARCTitleEvalPlayerController::ARCTitleEvalPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->TitleEvalWidget = NULL;
}


