#include "RCEventTriggerSequencerComponent.h"

URCEventTriggerSequencerComponent::URCEventTriggerSequencerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SequenceActor = NULL;
    this->ParentActor = NULL;
}

bool URCEventTriggerSequencerComponent::StartSequencer() {
    return false;
}

bool URCEventTriggerSequencerComponent::ResetSequencer() {
    return false;
}

void URCEventTriggerSequencerComponent::Init(FName InEventTriggerName) {
}


