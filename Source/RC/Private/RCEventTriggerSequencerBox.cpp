#include "RCEventTriggerSequencerBox.h"
#include "RCEventTriggerSequencerComponent.h"

ARCEventTriggerSequencerBox::ARCEventTriggerSequencerBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SequencerComp = CreateDefaultSubobject<URCEventTriggerSequencerComponent>(TEXT("SequencerComp"));
}

bool ARCEventTriggerSequencerBox::ResetSequencer() {
    return false;
}

void ARCEventTriggerSequencerBox::OnWarpToLast() {
}

void ARCEventTriggerSequencerBox::OnWarpEnd() {
}

void ARCEventTriggerSequencerBox::OnWarp() {
}

void ARCEventTriggerSequencerBox::OnActorBeginOverlapPlayerEntry(AActor* OverlappedActor, AActor* OtherActor) {
}


