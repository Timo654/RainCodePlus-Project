#include "RCVariableGameMenuMapIconInfo.h"

FRCVariableGameMenuMapIconInfo::FRCVariableGameMenuMapIconInfo() {
    this->bNew = false;
    this->Status = ERCGameMenuStatus::Enable;
    this->bPlayer = false;
    this->bBusStop = false;
    this->bBusStopDisable = false;
    this->bMainQuest = false;
    this->SubQuestStartNum = 0;
    this->SubQuestDestinationNum = 0;
    this->bCreateOrUpdate = false;
}

