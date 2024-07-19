#include "RCSaveLoadLayout.h"

URCSaveLoadLayout::URCSaveLoadLayout() {
    this->Menu_TitleName = NULL;
    this->Menu_SaveLoad = NULL;
    this->Menu_SaveLoad_Select = NULL;
    this->Menu_Help = NULL;
    this->Menu_BTNGuide = NULL;
    this->prevState = ESAVELOADMENU_STATE::NONE;
    this->State = ESAVELOADMENU_STATE::NONE;
    this->isTopMenu = false;
    this->isSubStory = false;
    this->isBp = false;
    this->isTitleBack = false;
    this->isFooterAnimtion = false;
}


