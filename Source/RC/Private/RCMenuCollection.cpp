#include "RCMenuCollection.h"

URCMenuCollection::URCMenuCollection() {
    this->Menu_Collect_Face = NULL;
    this->Menu_Collect_List = NULL;
    this->Menu_Collect_Hint = NULL;
    this->Menu_Collect_Figure = NULL;
    this->Menu_Com_Tab = NULL;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->CurrentState = ECollectionState::NOT_OPEN;
    this->dialogType = EDialigType::NONE;
    this->selectCharaIndex = 0;
    this->selectStoryIndex = 0;
    this->IsInitialized = false;
    this->bListLoop = true;
    this->isCancel = false;
    this->isComebackStoryScene = false;
    this->isUseGenericWindow = true;
    this->IsTutorial = false;
    this->isJumpCollection = false;
}

void URCMenuCollection::PushDecide() {
}

void URCMenuCollection::PagePrev() {
}

void URCMenuCollection::PageNext() {
}

void URCMenuCollection::PageJump(int32 InPageIndex) {
}

UWidget* URCMenuCollection::CollectionSelectNavigation(EUINavigation InNavigation) {
    return NULL;
}


