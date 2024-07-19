#include "RCTalkRowData.h"

FRCTalkRowData::FRCTalkRowData() {
    this->WindowType = ERCAdvHUDTalkWindowType::Normal;
    this->CharacterFaceID = 0;
    this->CharacterFacialID = 0;
    this->VoiceCharacterID = 0;
    this->DelayAtEnd = 0.00f;
    this->bCloseAtEnd = false;
    this->DelayToNext = 0.00f;
}

