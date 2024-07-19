#include "RCNazoBattleSettings.h"

FRCNazoBattleSettings::FRCNazoBattleSettings() {
    this->bFinalBattle = false;
    this->b3Way = false;
    this->bStopBGMAtFinished = false;
    this->bAmbiguousEnable = false;
    this->bResultFailure = false;
    this->ResultAttackFailureSubCount = 0;
    this->ResultHitPlayerSubCount = 0;
    this->ResultHitPlayerDivCount = 0;
}

