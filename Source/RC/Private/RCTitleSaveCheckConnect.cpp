#include "RCTitleSaveCheckConnect.h"

URCTitleSaveCheckConnect::URCTitleSaveCheckConnect() {
    this->finalCheckText = NULL;
    this->connectWindow = NULL;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->isFinishedCheck = false;
    this->State = ERCTitleSaveCheckConnectState::PRE_CHECK_WINDOW;
    this->lastInfoType = ERCTitleSaveCheckConnectLastInfoType::NORMAL;
    this->isTitle = false;
}


