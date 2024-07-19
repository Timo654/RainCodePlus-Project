#include "RCNzUiBattleHint.h"

URCNzUiBattleHint::URCNzUiBattleHint() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->RTxt_HintText = NULL;
}

void URCNzUiBattleHint::SetText(FName InTextID) {
}

void URCNzUiBattleHint::Open() {
}

void URCNzUiBattleHint::InitializeBattleHint() {
}

ERCNzUiBattleHintStatus URCNzUiBattleHint::GetBattleHintStatus() {
    return ERCNzUiBattleHintStatus::Idle;
}

void URCNzUiBattleHint::Close() {
}


