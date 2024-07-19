#include "RCScriptActorFootIKData.h"

FRCScriptActorFootIKData::FRCScriptActorFootIKData() {
    this->bFootIK = false;
    this->bLastFootIK = false;
    this->bCanFootIK = false;
    this->CapsuleHalfHeight = 0.00f;
    this->CapsuleRadius = 0.00f;
    this->CapsuleHalfHeightIK = 0.00f;
    this->CapsuleRadiusIK = 0.00f;
    this->FootIKLandingZ = 0.00f;
    this->bFootIKInterp = false;
}

