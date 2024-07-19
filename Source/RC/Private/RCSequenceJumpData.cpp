#include "RCSequenceJumpData.h"

FRCSequenceJumpData::FRCSequenceJumpData() {
    this->JumpType = ERCSequenceJumpType::Label;
    this->Frame = 0;
    this->Seconds = 0.00f;
}

