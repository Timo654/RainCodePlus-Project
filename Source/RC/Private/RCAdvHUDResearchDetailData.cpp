#include "RCAdvHUDResearchDetailData.h"

FRCAdvHUDResearchDetailData::FRCAdvHUDResearchDetailData() {
    this->StartMarkerIndex = 0;
    this->bFirstMove = false;
    this->SelectMarkerIndex = 0;
    this->LastSelectMarkerIndex = 0;
    this->MoveableMarkerIndex = 0;
    this->MoveWaitTime = 0.00f;
    this->ElapsedTimeSinceMove = 0.00f;
    this->bPointerStartPosition = false;
    this->bAutoSelectFlag = false;
    this->AutoSelectMarkerIndex = 0;
}

