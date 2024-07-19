#include "RCTitleMenuList.h"

URCTitleMenuList::URCTitleMenuList() {
    this->SelectIndex = -1;
    this->bListLoop = true;
    this->bSelectButton = false;
    this->isPushDecide = false;
}

UWidget* URCTitleMenuList::TitleListSelectNavigation(EUINavigation InNavigation) {
    return NULL;
}


