#include "RCNazoPlayableLoopLSASequencerData.h"

FRCNazoPlayableLoopLSASequencerData::FRCNazoPlayableLoopLSASequencerData() {
    this->SequenceParentActor = NULL;
    this->SequenceActor = NULL;
    this->State = ERCNazoPlayableLoopLSASequencerState::Stopping;
}

