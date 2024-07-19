#include "RCPseudoAttachNiagaraComponent.h"

URCPseudoAttachNiagaraComponent::URCPseudoAttachNiagaraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->NiagaraComponent = NULL;
    this->RootSocketName = TEXT("Root");
    this->bIgnoreSocketRotation = false;
    this->bKeepAttaching = true;
    this->KeepAttachingTime = 0.00f;
}

void URCPseudoAttachNiagaraComponent::OnEffectFinished(UNiagaraComponent* InParticleComponent) {
}


