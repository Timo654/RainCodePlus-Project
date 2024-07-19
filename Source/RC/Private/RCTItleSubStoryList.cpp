#include "RCTItleSubStoryList.h"

URCTItleSubStoryList::URCTItleSubStoryList() {
    this->ScrollBox = NULL;
    this->verticalListBox = NULL;
    this->dispTopIndex = 0;
    this->SelectIndex = 0;
    this->bListLoop = false;
    this->scrollSize = 0;
    this->isChangeSelectIndex = false;
    this->enableListMax = 0;
}

UWidget* URCTItleSubStoryList::SubStoryListSelectNavigation(EUINavigation InNavigation) {
    return NULL;
}


