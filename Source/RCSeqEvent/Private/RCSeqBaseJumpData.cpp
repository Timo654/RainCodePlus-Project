#include "RCSeqBaseJumpData.h"

FRCSeqBaseJumpData::FRCSeqBaseJumpData() {
    this->JumpType = ERCSeqBaseJumpType::Label;
    this->Frame = 0;
    this->Seconds = 0.00f;
}

