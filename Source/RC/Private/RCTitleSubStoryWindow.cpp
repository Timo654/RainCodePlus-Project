#include "RCTitleSubStoryWindow.h"

URCTitleSubStoryWindow::URCTitleSubStoryWindow() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->AN_Off = NULL;
    this->SelectIndex = 0;
    this->enableListMax = 0;
    this->isCheckFinished = true;
    this->isListLoop = true;
    this->isDecide = false;
    this->IsEnableSaveData = false;
}

UWidget* URCTitleSubStoryWindow::SubStoryWindowSelectNavigation(EUINavigation InNavigation) {
    return NULL;
}

void URCTitleSubStoryWindow::SelectListItem() {
}


