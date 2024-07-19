#include "RCNazoBattleRebuttalLetterSettings.h"

FRCNazoBattleRebuttalLetterSettings::FRCNazoBattleRebuttalLetterSettings() {
    this->Type = ERCNazoBattleRebuttalLetterType::Normal;
    this->bDecorationFlag = false;
    this->bSkillEffect = false;
    this->ContinueCountBecomeNormal = 0;
    this->IntervalTime = 0.00f;
    this->Damage = 0;
    this->BuriedShadowAlphaRate = 0.00f;
}

