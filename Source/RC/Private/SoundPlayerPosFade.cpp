#include "SoundPlayerPosFade.h"

FSoundPlayerPosFade::FSoundPlayerPosFade() {
    this->lhsSoundType = ERCSoundType::BGM;
    this->rhsSoundType = ERCSoundType::BGM;
    this->isCheck = false;
    this->lhsTargetActor = NULL;
    this->rhsTargetActor = NULL;
    this->lhsSoundVolumeRate = 0.00f;
    this->rhsSoundVolumeRate = 0.00f;
}

