#include "RCLevelSequenceActor.h"

ARCLevelSequenceActor::ARCLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LoopStartRate = 0.80f;
    this->LoopEndRate = 0.20f;
}

void ARCLevelSequenceActor::FinishedEvent() {
}


