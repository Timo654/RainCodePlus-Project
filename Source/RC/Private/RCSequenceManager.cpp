#include "RCSequenceManager.h"

URCSequenceManager::URCSequenceManager() {
    this->TalkSequencePlayer = NULL;
    this->SubtitleSequencePlayer = NULL;
    this->ShinigamiSequenceActor = NULL;
    this->ShinigamiSequencerPlayDelay = 0.10f;
    this->ShinigamiSequenceFollowTarget = NULL;
}

void URCSequenceManager::ShinigamiSequencer_Finished() {
}


