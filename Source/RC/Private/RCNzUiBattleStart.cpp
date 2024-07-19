#include "RCNzUiBattleStart.h"

URCNzUiBattleStart::URCNzUiBattleStart() {
    this->bChangeSpeed = true;
    this->AN_Start = NULL;
}

void URCNzUiBattleStart::Open() {
}

void URCNzUiBattleStart::InitializeBattleStart() {
}

ERCNzUiBattleStartStatus URCNzUiBattleStart::GetBattleStartStatus() {
    return ERCNzUiBattleStartStatus::Idle;
}


