#include "RCAnimNotifyState_TimedNiagaraEffectEX.h"

URCAnimNotifyState_TimedNiagaraEffectEX::URCAnimNotifyState_TimedNiagaraEffectEX() {
    this->NiagaraTemplate = NULL;
    this->RootSocketName = TEXT("Root");
    this->bIgnoreSocketRotation = false;
    this->bDestroyAtEnd = false;
    this->bKeepAttaching = true;
    this->KeepAttachingTime = 0.00f;
    this->PseudoAttachNiagaraComponent = NULL;
    this->NiagaraComponent = NULL;
}


