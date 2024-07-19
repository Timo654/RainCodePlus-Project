#include "RCNzUiBattleKaiKagi.h"

URCNzUiBattleKaiKagi::URCNzUiBattleKaiKagi() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->AN_KaikagiChange = NULL;
    this->kaikagiName = NULL;
    this->KaiKagiSelectButton = NULL;
}

void URCNzUiBattleKaiKagi::SetKaiKagiName(FName InTextID) {
}

void URCNzUiBattleKaiKagi::Open() {
}

void URCNzUiBattleKaiKagi::InitializeBattleKaiKagi() {
}

ERCNzUiBattleKaiKagiStatus URCNzUiBattleKaiKagi::GetBattleKaiKagiStatus() {
    return ERCNzUiBattleKaiKagiStatus::Idle;
}

void URCNzUiBattleKaiKagi::Close() {
}

void URCNzUiBattleKaiKagi::ChangeKaiKagi(FName InTextID) {
}


