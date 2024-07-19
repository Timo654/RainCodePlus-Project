#include "RCSaveLoadExec.h"

FRCSaveLoadExec::FRCSaveLoadExec() {
    this->ExecType = ERCSaveLoadExecType::None;
    this->StoryMode = ERCStoryMode::Original;
    this->Type = ERCSaveDataType::AutoSaveData;
    this->SlotNum = 0;
}

