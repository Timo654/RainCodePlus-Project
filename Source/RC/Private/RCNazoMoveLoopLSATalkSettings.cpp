#include "RCNazoMoveLoopLSATalkSettings.h"

FRCNazoMoveLoopLSATalkSettings::FRCNazoMoveLoopLSATalkSettings() {
    this->TalkType = ERCNazoMoveLoopTalkType::None;
    this->DelayBeforeTalk = 0.00f;
    this->DataTable = NULL;
    this->DelayAfterTalk = 0.00f;
    this->bFinishMoveLoop = false;
}

