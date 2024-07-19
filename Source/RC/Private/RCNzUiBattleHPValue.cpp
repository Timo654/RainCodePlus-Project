#include "RCNzUiBattleHPValue.h"

URCNzUiBattleHPValue::URCNzUiBattleHPValue() {
    this->AN_Damage = NULL;
    this->AN_Recover = NULL;
    this->Text_CurrentHP = NULL;
    this->Text_MaxHP = NULL;
}

void URCNzUiBattleHPValue::SetHP(int32 InHP, int32 InMaxHP) {
}

void URCNzUiBattleHPValue::RecoverAnim() {
}

void URCNzUiBattleHPValue::InitializeBattleHPValue() {
}

ERCNzUiBattleHPValueStatus URCNzUiBattleHPValue::GetBattleHPValueStatus() {
    return ERCNzUiBattleHPValueStatus::Stay;
}

void URCNzUiBattleHPValue::DamageAnim() {
}


