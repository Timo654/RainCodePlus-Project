#include "RCCineCameraActor.h"

ARCCineCameraActor::ARCCineCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->rainDistanceOffset = 0.00f;
    this->rainHeightOffset = 0.00f;
    this->useOffsetFlag = false;
}

void ARCCineCameraActor::SetUseOffsetFlag(bool bUseOffset) {
}

void ARCCineCameraActor::SetRainHeightOffset(float heightOffset) {
}

void ARCCineCameraActor::SetRainDistanceOffset(float disntaceOffset) {
}

void ARCCineCameraActor::RemoveRain() {
}

void ARCCineCameraActor::AtouchRain(float lenght, bool Zfollow, float OffsetZ) {
}


