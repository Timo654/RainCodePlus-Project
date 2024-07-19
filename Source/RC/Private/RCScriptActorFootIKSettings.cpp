#include "RCScriptActorFootIKSettings.h"

FRCScriptActorFootIKSettings::FRCScriptActorFootIKSettings() {
    this->bFootIKEnable = false;
    this->bFootRotationEnable = false;
    this->TraceStartOffsetZ = 0.00f;
    this->TraceEndOffsetZ = 0.00f;
    this->WaistOffsetLimitZ = 0.00f;
    this->ActorLandingInterpSpeed = 0.00f;
    this->WaistOffsetInterpSpeed = 0.00f;
    this->FootOffsetInterpSpeed = 0.00f;
    this->FootRotInterpSpeed = 0.00f;
}

