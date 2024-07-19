#include "RCForceFeedBackManager.h"

URCForceFeedBackManager::URCForceFeedBackManager() {
    this->LoadStatus = ERCForceFeedBackLoadStatus::LoadStart;
    this->InputPlatform = ERCInputPlatform::XBoxController;
    this->NextInputPlatform = ERCInputPlatform::XBoxController;
    this->LoadedPlatform = ERCInputPlatform::DualShock4;
}


