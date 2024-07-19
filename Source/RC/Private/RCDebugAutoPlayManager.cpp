#include "RCDebugAutoPlayManager.h"

URCDebugAutoPlayManager::URCDebugAutoPlayManager() {
    this->bEnable = false;
    this->bSkip = false;
    this->bSceneLoop = false;
    this->bAutoSceneChange = false;
    this->Type = ERCDebugAutoPlayType::Clear;
}


