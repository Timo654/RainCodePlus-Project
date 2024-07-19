#include "RCTitleLanguage.h"

URCTitleLanguage::URCTitleLanguage() {
    this->langWindow = NULL;
    this->titleHelp = NULL;
    this->Title_BTNGuide = NULL;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->State = ETitleLanguageState::MAX;
    this->IsCheckFinish = false;
    this->isRestart = false;
}


