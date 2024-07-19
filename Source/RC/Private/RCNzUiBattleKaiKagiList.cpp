#include "RCNzUiBattleKaiKagiList.h"

URCNzUiBattleKaiKagiList::URCNzUiBattleKaiKagiList() {
    this->bChangeSpeed = true;
    this->AN_Start = NULL;
    this->KaiKagiListFinishTime = 3.20f;
    this->KaiKagiListBarWaitTime = 0.50f;
}

void URCNzUiBattleKaiKagiList::UninitializeBattleKaiKagiList() {
}

void URCNzUiBattleKaiKagiList::Open(TArray<FName> InKaiKagiNameIDArray) {
}

void URCNzUiBattleKaiKagiList::InitializeBattleKaiKagiList() {
}

ERCNzUiBattleKaiKagiListStatus URCNzUiBattleKaiKagiList::GetBattleKaiKagiListStatus() {
    return ERCNzUiBattleKaiKagiListStatus::Idle;
}


