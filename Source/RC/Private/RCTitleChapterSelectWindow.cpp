#include "RCTitleChapterSelectWindow.h"

URCTitleChapterSelectWindow::URCTitleChapterSelectWindow() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->SelectIndex = 0;
    this->bListLoop = false;
    this->bFinished = false;
    this->bSelected = false;
    this->bDecided = false;
}

void URCTitleChapterSelectWindow::SelectListItem() {
}

UWidget* URCTitleChapterSelectWindow::ChapterSelectWindowSelectNavigation(EUINavigation InNavigation) {
    return NULL;
}


