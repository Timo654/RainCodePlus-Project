#include "RCSaveLoadSelect.h"

URCSaveLoadSelect::URCSaveLoadSelect() {
    this->Button_Save = NULL;
    this->Button_Load = NULL;
    this->Button_Title = NULL;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->State = ESaveLoadSelectState::NONE;
    this->selectedMode = ESaveLoadMode::NONE;
    this->SelectIndex = 0;
    this->bListLoop = true;
    this->bSelectLoopAnimation = false;
    this->bPushDecideKey = false;
}

UWidget* URCSaveLoadSelect::SaveLoadSelectNavigation(EUINavigation InNavigation) {
    return NULL;
}

void URCSaveLoadSelect::PushDecideWrap(ERCInputKeyType InKeyType) {
}

void URCSaveLoadSelect::PushDecide() {
}

void URCSaveLoadSelect::PushCancelWrap(ERCInputKeyType InKeyType) {
}

void URCSaveLoadSelect::PushCancel() {
}


