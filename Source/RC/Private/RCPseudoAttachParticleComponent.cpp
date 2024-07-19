#include "RCPseudoAttachParticleComponent.h"

URCPseudoAttachParticleComponent::URCPseudoAttachParticleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ParticleComponent = NULL;
    this->RootSocketName = TEXT("Root");
    this->bIgnoreSocketRotation = false;
    this->bKeepAttaching = true;
    this->KeepAttachingTime = 0.00f;
}

void URCPseudoAttachParticleComponent::OnEffectFinished(UParticleSystemComponent* InParticleComponent) {
}


