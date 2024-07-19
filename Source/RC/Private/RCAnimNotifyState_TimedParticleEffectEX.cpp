#include "RCAnimNotifyState_TimedParticleEffectEX.h"

URCAnimNotifyState_TimedParticleEffectEX::URCAnimNotifyState_TimedParticleEffectEX() {
    this->ParticleTemplate = NULL;
    this->RootSocketName = TEXT("Root");
    this->bIgnoreSocketRotation = false;
    this->bDestroyAtEnd = false;
    this->bKeepAttaching = true;
    this->KeepAttachingTime = 0.00f;
    this->PseudoAttachParticleComponent = NULL;
    this->PSComponent = NULL;
}


