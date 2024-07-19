#include "FadeData.h"

FFadeData::FFadeData() {
    this->pAtomComponent = NULL;
    this->SoundType = ERCSoundType::BGM;
    this->startVolume = 0.00f;
    this->finishVolume = 0.00f;
    this->DeltaTime = 0.00f;
    this->FadeTime = 0.00f;
}

