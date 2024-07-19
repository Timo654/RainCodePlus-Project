#include "RCMenuCollectionLayout.h"

URCMenuCollectionLayout::URCMenuCollectionLayout() {
    this->Menu_BackGround = NULL;
    this->Menu_TitleName = NULL;
    this->Menu_Collection = NULL;
    this->Menu_Help = NULL;
    this->Menu_BTNGuide = NULL;
    this->isFinishAnim = false;
}

void URCMenuCollectionLayout::DecideWrap(ERCInputKeyType InKeyType) {
}

void URCMenuCollectionLayout::CancelWrap(ERCInputKeyType InKeyType) {
}


