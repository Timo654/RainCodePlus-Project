#include "RCNzUiBattleDodge.h"

URCNzUiBattleDodge::URCNzUiBattleDodge() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->DodgeBTN = NULL;
}

void URCNzUiBattleDodge::Open() {
}

void URCNzUiBattleDodge::InitializeBattleDodge() {
}

ERCNzUiBattleDodgeStatus URCNzUiBattleDodge::GetBattleDodgeStatus() {
    return ERCNzUiBattleDodgeStatus::Idle;
}

void URCNzUiBattleDodge::Close() {
}


