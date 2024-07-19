#include "RCSoundNovelRowData.h"

FRCSoundNovelRowData::FRCSoundNovelRowData() {
    this->Command = ERCAdvHUDSoundNovelCommand::Text;
    this->DelayAtEnd = 0.00f;
    this->bBlankLine = false;
    this->bLastLine = false;
    this->DelayToNext = 0.00f;
}

