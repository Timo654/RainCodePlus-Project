#include "RCRealEventMapInfo.h"

FRCRealEventMapInfo::FRCRealEventMapInfo() {
    this->bMoveEnable = false;
    this->BusStopStatus = ERCRealEventMapConnectStatus::None;
    this->bMainQuestAllArea = false;
    this->bSubQuestAllArea = false;
    this->bMainQuestRootSet = false;
}

