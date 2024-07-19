#include "RCEffectData.h"

FRCEffectData::FRCEffectData() {
    this->State = ERCEffectDataState::Invalid;
    this->EffectType = ERCEffectType::Invalid;
    this->Asset = NULL;
    this->Count = 0;
}

