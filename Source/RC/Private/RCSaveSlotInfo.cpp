#include "RCSaveSlotInfo.h"

FRCSaveSlotInfo::FRCSaveSlotInfo() {
    this->Type = ERCSaveDataType::AutoSaveData;
    this->SlotNum = 0;
    this->Chapter = 0;
    this->bIsPlayerMove = false;
}

