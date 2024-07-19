#include "RCSeqSubtitleSubtitleSectionSubtitleData.h"

FRCSeqSubtitleSubtitleSectionSubtitleData::FRCSeqSubtitleSubtitleSectionSubtitleData() {
    this->DataType = FRCSeqSubtitleSubtitleSectionSubtitleDataType::DataTable;
    this->DataTable = NULL;
    this->DelayAtEnd = 0.00f;
    this->DelayToNext = 0.00f;
    this->bCloseAtAllEnd = false;
    this->bStopSequencer = false;
}

