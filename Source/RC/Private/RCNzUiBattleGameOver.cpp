#include "RCNzUiBattleGameOver.h"

URCNzUiBattleGameOver::URCNzUiBattleGameOver() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->SelectIndex = 0;
}

UWidget* URCNzUiBattleGameOver::UpAndDown(EUINavigation InNavigation) {
    return NULL;
}

bool URCNzUiBattleGameOver::SelectStart(int32 InSelectIndex) {
    return false;
}

bool URCNzUiBattleGameOver::Select(int32 InSelectIndex) {
    return false;
}

void URCNzUiBattleGameOver::Open() {
}

void URCNzUiBattleGameOver::InitializeBattleGameOver() {
}

int32 URCNzUiBattleGameOver::GetSelectIndex() {
    return 0;
}

ERCNzUiBattleGameOverStatus URCNzUiBattleGameOver::GetBattleGameOverStatus() {
    return ERCNzUiBattleGameOverStatus::Idle;
}

void URCNzUiBattleGameOver::Decide() {
}

void URCNzUiBattleGameOver::Close() {
}


