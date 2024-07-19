#include "RCNzUiBattleUi.h"

URCNzUiBattleUi::URCNzUiBattleUi() {
    this->kaikagi = NULL;
    this->Assist = NULL;
    this->bAssistEnable = false;
    this->ButtonGuideWidget = NULL;
    this->bButtonGuideSet = false;
    this->bFinalBattle = false;
    this->bRebuttalSlash = false;
    this->bDisturbSlashEnable = false;
    this->TimelimitWidget = NULL;
}

void URCNzUiBattleUi::UninitializeBattleUi() {
}

void URCNzUiBattleUi::SetTime(float Time, float LimitTime) {
}

void URCNzUiBattleUi::SetKaiKagiName(FName InTextID) {
}

void URCNzUiBattleUi::SetElapsedTime(float ElapsedTime, float LimitTime) {
}

void URCNzUiBattleUi::SetButtonGuide(bool bInFinalBattle, bool bInRebuttalSlash, bool bInDisturbSlashEnable) {
}

void URCNzUiBattleUi::SetAssistGauge(float InAssistGauge, float InAssistGaugeMax) {
}

void URCNzUiBattleUi::RebuttalStart() {
}

void URCNzUiBattleUi::RebuttalFinish() {
}

void URCNzUiBattleUi::Open() {
}

void URCNzUiBattleUi::InitializeBattleUi(FRCNzUiBattleUiAssetData& InAssetData) {
}

ERCNzUiBattleUiStatus URCNzUiBattleUi::GetBattleUiStatus() {
    return ERCNzUiBattleUiStatus::Idle;
}

void URCNzUiBattleUi::Close() {
}

void URCNzUiBattleUi::ChangeKaiKagi(FName InTextID) {
}

void URCNzUiBattleUi::BattleUiStart(bool bOpenKaiKagi, bool bInAssistEnable) {
}

void URCNzUiBattleUi::BattleUiFinish() {
}


