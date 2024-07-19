#include "RCEffectManagedData.h"

FRCEffectManagedData::FRCEffectManagedData() {
    this->EffectType = ERCEffectType::Invalid;
    this->bAutoDestroy = false;
    this->ParticleSystemComponent = NULL;
    this->NiagaraComponent = NULL;
    this->EffectSequence = NULL;
}

