#include "RCNazoBattleRebuttalLetterAppearData.h"

FRCNazoBattleRebuttalLetterAppearData::FRCNazoBattleRebuttalLetterAppearData() {
    this->Position = ERCNazoBattleRebuttalLetterPosition::Top;
    this->bLeft = false;
    this->AttackLineEffect = NULL;
    this->AttackLineEffectLifeTime = 0.00f;
    this->Damage = 0;
    this->RepelledTargetComp = NULL;
}

