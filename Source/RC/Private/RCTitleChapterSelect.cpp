#include "RCTitleChapterSelect.h"

URCTitleChapterSelect::URCTitleChapterSelect() {
    this->chapterImage = NULL;
    this->SelectList = NULL;
    this->selectCaption = NULL;
    this->questImage = NULL;
    this->titleHelp = NULL;
    this->Title_BTNGuide = NULL;
    this->SelectWindow = NULL;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->State = ERCTitleChapterSelectState::MAX;
}

void URCTitleChapterSelect::OnFinishedFinishAnim() {
}

void URCTitleChapterSelect::DecideWrap(ERCInputKeyType InKeyType) {
}

void URCTitleChapterSelect::CancelWrap(ERCInputKeyType InKeyType) {
}


