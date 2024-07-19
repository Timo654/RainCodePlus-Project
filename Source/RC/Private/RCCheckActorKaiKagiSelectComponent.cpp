#include "RCCheckActorKaiKagiSelectComponent.h"

URCCheckActorKaiKagiSelectComponent::URCCheckActorKaiKagiSelectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChoiceQuestionWidget = NULL;
    this->bAllFailureFlag = false;
    this->LimitTime = 0.00f;
    this->bStopGameTime = true;
    this->bNotPause = false;
    this->bCancelDisable = false;
    this->Result = ERCCheckActorKaiKagiSelectResult::Invalid;
    this->SelectIndex = -1;
}


