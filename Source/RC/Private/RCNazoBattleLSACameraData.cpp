#include "RCNazoBattleLSACameraData.h"

FRCNazoBattleLSACameraData::FRCNazoBattleLSACameraData() {
    this->RebuttalCamera = NULL;
    this->RebuttalStartFOV = 0.00f;
    this->bRebuttalTargetLocationFixed = false;
    this->RebuttalChangeTargetTime = 0.00f;
    this->RebuttalChangeTargetElapsedTime = 0.00f;
    this->RebuttalCurrentFOV = 0.00f;
    this->RebuttalCurrentPitchOffset = 0.00f;
}

