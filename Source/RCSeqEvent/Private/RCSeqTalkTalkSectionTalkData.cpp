#include "RCSeqTalkTalkSectionTalkData.h"

FRCSeqTalkTalkSectionTalkData::FRCSeqTalkTalkSectionTalkData() {
    this->DataType = FRCSeqTalkTalkSectionTalkDataType::DataTable;
    this->DataTable = NULL;
    this->bStopSequencer = false;
    this->bForceAutoPlay = false;
}

