#include "RCTitleSubStory.h"

URCTitleSubStory::URCTitleSubStory() {
    this->subStoryText = NULL;
    this->subStoryImage = NULL;
    this->subStoryList = NULL;
    this->Caption = NULL;
    this->titleHelp = NULL;
    this->Title_BTNGuide = NULL;
    this->Window = NULL;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->State = URCTitleSubStoryState::PRE_SELECT;
    this->IsCheckFinish = false;
    this->isReturnLoad = false;
    this->NowSaveCheckIndex = 0;
}

void URCTitleSubStory::DecideWrap(ERCInputKeyType InKeyType) {
}

void URCTitleSubStory::CancelWrap(ERCInputKeyType InKeyType) {
}


