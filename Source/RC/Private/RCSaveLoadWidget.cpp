#include "RCSaveLoadWidget.h"

URCSaveLoadWidget::URCSaveLoadWidget() {
    this->SaveLoad_List = NULL;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->State = ESaveLoadState::NONE;
    this->Mode = ESaveLoadMode::SAVE;
    this->SelectIndex = 0;
    this->dispTopIndex = 0;
    this->bListLoop = true;
    this->bSaveLoadFailed = false;
    this->bAutoSaveNG = false;
    this->StoryMode = ERCStoryMode::Original;
    this->bLoadClose = false;
    this->bAfterSave = false;
    this->bListSelectInitialized = false;
    this->bIsInstallingDialog = false;
}

UWidget* URCSaveLoadWidget::SaveLoadWidgetNavigation(EUINavigation InNavigation) {
    return NULL;
}

void URCSaveLoadWidget::PushDecideWrap(ERCInputKeyType InKeyType) {
}

void URCSaveLoadWidget::PushDecide() {
}

void URCSaveLoadWidget::PushCancelWrap(ERCInputKeyType InKeyType) {
}

void URCSaveLoadWidget::PushCancel() {
}


