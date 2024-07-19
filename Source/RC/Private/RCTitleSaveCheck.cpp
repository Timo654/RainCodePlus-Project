#include "RCTitleSaveCheck.h"

URCTitleSaveCheck::URCTitleSaveCheck() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->isFinishedSaveCheck = false;
    this->currentCheckType = ERCTitleCheckType::SAVE_CHECK;
}


