#include "RCTitleMenu.h"

URCTitleMenu::URCTitleMenu() {
    this->bgImage01 = NULL;
    this->bgImage00 = NULL;
    this->menuList00 = NULL;
    this->menuList01 = NULL;
    this->titleHelp = NULL;
    this->buttonGuide = NULL;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->AN_List_Change = NULL;
    this->AN_List_ChangeReverse = NULL;
    this->State = ERCTitleMenuState::MAX;
    this->selectListType = ERCTitleListType::Max;
    this->isCheckPushKey = false;
    this->currentSelectIndex = 0;
    this->isSaveData = false;
    this->isFrontList = true;
    this->isReturnTitleLogo = false;
    this->isChangeList = false;
}

void URCTitleMenu::DecideWrap(ERCInputKeyType InKeyType) {
}

void URCTitleMenu::CancelWrap(ERCInputKeyType InKeyType) {
}


