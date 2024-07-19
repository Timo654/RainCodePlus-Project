#include "RCTitleChapterSelectList.h"

URCTitleChapterSelectList::URCTitleChapterSelectList() {
    this->ScrollBox = NULL;
    this->verticalListBox = NULL;
    this->listDispMax = 6;
    this->dispTopIndex = 0;
    this->SelectIndex = 0;
    this->bListLoop = false;
    this->bUpdateCaption = true;
    this->scrollSize = 0.00f;
}

UWidget* URCTitleChapterSelectList::ChapterSelectListSelectNavigation(EUINavigation InNavigation) {
    return NULL;
}


