#include "RCAdvHUDPauseComponent.h"

URCAdvHUDPauseComponent::URCAdvHUDPauseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Status = ERCAdvHUDPauseComponentStatus::None;
    this->bPauseEnable = true;
    this->bPlayerPauseMoveTest = false;
    this->bMenuEnable = true;
    this->bBacklogEnable = true;
    this->MenyType = ERCGameMenuDirectAccessType::Top;
    this->bPauseSkipEnable = false;
    this->PauseDisableCount = 0;
    this->PauseScreenWidget = NULL;
}


