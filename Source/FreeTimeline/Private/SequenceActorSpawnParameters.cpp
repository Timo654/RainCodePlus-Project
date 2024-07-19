#include "SequenceActorSpawnParameters.h"

FSequenceActorSpawnParameters::FSequenceActorSpawnParameters() {
    this->OwnerActor = NULL;
    this->LevelSequence = NULL;
    this->bLooped = false;
    this->bPauseAtEnd = false;
    this->StartFrame = 0;
    this->bRebindPlayer = false;
    this->bOverrideTransformFlag = false;
    this->OverrideTransformActor = NULL;
    this->bPlayExec = false;
    this->CancelSequence = NULL;
}

