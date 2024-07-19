#include "RCNzUiBattleHPGauge.h"

URCNzUiBattleHPGauge::URCNzUiBattleHPGauge() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->AN_Damage = NULL;
    this->HPBar = NULL;
    this->Img_Face = NULL;
    this->DamageWaitTime = 0.10f;
    this->bDamageTimeFlag = true;
    this->DamageTime = 0.10f;
    this->DamageValuePerS = 50.00f;
    this->DelayDamageWaitTime = 0.50f;
    this->bDelayDamageTimeFlag = true;
    this->DelayDamageTime = 0.75f;
    this->DelayDamageValuePerS = 50.00f;
    this->DamagePhase = 0;
    this->bRecoverTimeFlag = true;
    this->RecoverTime = 0.75f;
    this->RecoverValuePerS = 50.00f;
}

void URCNzUiBattleHPGauge::UninitializeBattleHPGauge() {
}

void URCNzUiBattleHPGauge::SetHP(int32 InHP, int32 InMaxHP) {
}

void URCNzUiBattleHPGauge::Recover2(int32 InRecover, bool bInSilence) {
}

void URCNzUiBattleHPGauge::Recover(int32 InHP, bool bInSilence) {
}

void URCNzUiBattleHPGauge::Open() {
}

void URCNzUiBattleHPGauge::InitializeBattleHPGauge() {
}

ERCNzUiBattleHPGaugeStatus URCNzUiBattleHPGauge::GetBattleHPGaugeStatus() {
    return ERCNzUiBattleHPGaugeStatus::Idle;
}

void URCNzUiBattleHPGauge::Damage2(int32 InDamage, bool bInSilence) {
}

void URCNzUiBattleHPGauge::Damage(int32 InHP, bool bInSilence) {
}

void URCNzUiBattleHPGauge::Close() {
}

bool URCNzUiBattleHPGauge::AutoRecover2(int32 InRecover, int32 InHP, int32 InMaxHP, bool bInSilence) {
    return false;
}

bool URCNzUiBattleHPGauge::AutoRecover(int32 InNewHP, int32 InHP, int32 InMaxHP, bool bInSilence) {
    return false;
}

bool URCNzUiBattleHPGauge::AutoDamage2(int32 InDamage, int32 InHP, int32 InMaxHP, bool bInSilence) {
    return false;
}

bool URCNzUiBattleHPGauge::AutoDamage(int32 InNewHP, int32 InHP, int32 InMaxHP, bool bInSilence) {
    return false;
}

void URCNzUiBattleHPGauge::ApplyHP(bool bInReset) {
}


