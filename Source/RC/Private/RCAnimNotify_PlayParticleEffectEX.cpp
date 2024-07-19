#include "RCAnimNotify_PlayParticleEffectEX.h"

URCAnimNotify_PlayParticleEffectEX::URCAnimNotify_PlayParticleEffectEX() {
    this->ParticleTemplate = NULL;
    this->RootSocketName = TEXT("Root");
    this->bIgnoreSocketRotation = false;
    this->bAbsoluteScale = false;
    this->bKeepAttaching = true;
    this->KeepAttachingTime = 0.00f;
    this->PseudoAttachParticleComponent = NULL;
    this->ParticleComponent = NULL;
}


