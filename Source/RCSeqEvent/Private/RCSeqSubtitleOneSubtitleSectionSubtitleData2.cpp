#include "RCSeqSubtitleOneSubtitleSectionSubtitleData2.h"

FRCSeqSubtitleOneSubtitleSectionSubtitleData2::FRCSeqSubtitleOneSubtitleSectionSubtitleData2() {
    this->CharacterNameID = 0;
    this->CharacterNameSubID = 0;
    this->VoiceCharacterID = 0;
    this->bStopVoiceAtStart = false;
    this->DelayAtEnd = 0.00f;
    this->CloseType = FRCSeqSubtitleOneSubtitleSectionCloseType::NotClose;
    this->bStopSequencer = false;
    this->bEnableInReverse = false;
}

