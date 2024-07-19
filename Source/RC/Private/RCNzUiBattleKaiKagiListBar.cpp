#include "RCNzUiBattleKaiKagiListBar.h"

URCNzUiBattleKaiKagiListBar::URCNzUiBattleKaiKagiListBar() {
    this->bChangeSpeed = true;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->TextBlock_kaikagiName = NULL;
}

void URCNzUiBattleKaiKagiListBar::SetVisible(bool bInVisibility) {
}

void URCNzUiBattleKaiKagiListBar::SetKaiKagiName(FName InTextID) {
}

void URCNzUiBattleKaiKagiListBar::Open() {
}

bool URCNzUiBattleKaiKagiListBar::IsPlayWaitAnimation() {
    return false;
}

void URCNzUiBattleKaiKagiListBar::InitializeBattleKaiKagiListBar() {
}

ERCNzUiBattleKaiKagiListBarStatus URCNzUiBattleKaiKagiListBar::GetBattleKaiKagiListBarStatus() {
    return ERCNzUiBattleKaiKagiListBarStatus::Idle;
}

void URCNzUiBattleKaiKagiListBar::Close() {
}


