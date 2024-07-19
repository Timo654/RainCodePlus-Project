#include "RCNazoBattleRebuttalGroupSettings.h"

FRCNazoBattleRebuttalGroupSettings::FRCNazoBattleRebuttalGroupSettings() {
    this->bEnable = false;
    this->bForceClear = false;
    this->RebuttalParametersStartIndex = 0;
    this->RebuttalParametersEndIndex = 0;
    this->bAmbiguous = false;
    this->bAmbiguousKaijinPrevent = false;
    this->CloseContestInputTime = 0.00f;
    this->CloseContestInputCount = 0;
    this->CloseContestFailureDamage = 0;
    this->WaitTime1 = 0.00f;
    this->WaitTime2 = 0.00f;
    this->bChangePlayerBaseLocation = false;
    this->bPlayerReverseMoveLR = false;
    this->bChangePlayerMoveLRDistance = false;
    this->PlayerMoveLRDistance = 0.00f;
    this->bPlayerUnrival = false;
    this->bRebuttalCameraTargetLocationFixed = false;
    this->bAssistEnable = false;
    this->bAssistCoolTimeMaxAtStart = false;
    this->Damage = 0;
    this->AttackSuccessCutinPartVoiceDelayTime = 0.00f;
    this->bRebuttalSlashCutinClearBeforeCamera = false;
    this->RebuttalSlashCutinCameraBlendTime = 0.00f;
}

