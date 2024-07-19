#include "RCTitleManager.h"

URCTitleManager::URCTitleManager() {
    this->State = ERCTitleState::MAX;
    this->beforeState = ERCTitleState::MAX;
    this->IsEnableSaveData = false;
    this->isTitleButtonGuideAnimation = false;
    this->bIsInstallingDialog = false;
}


