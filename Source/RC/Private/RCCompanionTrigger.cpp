#include "RCCompanionTrigger.h"

ARCCompanionTrigger::ARCCompanionTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bVisibleCompanion = false;
}

void ARCCompanionTrigger::OnActorBeginOverlapScriptEntry(AActor* OverlappedActor, AActor* OtherActor) {
}


