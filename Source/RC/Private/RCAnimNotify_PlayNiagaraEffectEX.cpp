#include "RCAnimNotify_PlayNiagaraEffectEX.h"

URCAnimNotify_PlayNiagaraEffectEX::URCAnimNotify_PlayNiagaraEffectEX() {
    this->NiagaraTemplate = NULL;
    this->RootSocketName = TEXT("Root");
    this->bIgnoreSocketRotation = false;
    this->bAbsoluteScale = false;
    this->bKeepAttaching = true;
    this->KeepAttachingTime = 0.00f;
    this->PseudoAttachNiagaraComponent = NULL;
    this->NiagaraComponent = NULL;
}

UNiagaraComponent* URCAnimNotify_PlayNiagaraEffectEX::GetSpawnedEffect() const {
    return NULL;
}


