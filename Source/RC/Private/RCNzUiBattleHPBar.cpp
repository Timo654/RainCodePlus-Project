#include "RCNzUiBattleHPBar.h"

URCNzUiBattleHPBar::URCNzUiBattleHPBar() {
    this->AN_Current = NULL;
    this->AN_Attenuation = NULL;
    this->AN_Damage = NULL;
    this->AN_Recover = NULL;
    this->DamageDelayBar_Mask = NULL;
    this->Img_DamageDelayBar_01 = NULL;
    this->AttenuationBar_Mask = NULL;
    this->Img_AttenuationBar_01 = NULL;
    this->CurrentHPBar_Mask = NULL;
    this->Img_CurrentHPBar = NULL;
    this->DamageEffect_Mask = NULL;
    this->Img_DamageEffect_01 = NULL;
    this->RecoverEffect_Mask = NULL;
    this->Img_RecoverEffect_01 = NULL;
    this->Img_Base = NULL;
    this->Img_Dropshadow = NULL;
}

void URCNzUiBattleHPBar::SetHP(int32 InHP, int32 InMaxHP, bool bInApplyDelayHP) {
}

void URCNzUiBattleHPBar::SetDelayHP(int32 InDelayHP) {
}

void URCNzUiBattleHPBar::ResetHP(int32 InHP, int32 InMaxHP) {
}

void URCNzUiBattleHPBar::RecoverAnim() {
}

void URCNzUiBattleHPBar::InitializeBattleHPBar() {
}

ERCNzUiBattleHPBarStatus URCNzUiBattleHPBar::GetBattleHPBarStatus() {
    return ERCNzUiBattleHPBarStatus::Stay;
}

void URCNzUiBattleHPBar::DamageAnim() {
}


