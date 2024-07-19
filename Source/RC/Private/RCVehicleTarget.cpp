#include "RCVehicleTarget.h"

ARCVehicleTarget::ARCVehicleTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->firstSpawnIndex = EVehicleInitPositionLaneType::NONE;
    this->lootIndex = 0;
    this->vehicleSpeed = 20.00f;
    this->vehicleAcceleration = 2.00f;
    this->curveSpeed = 0.90f;
    this->isCurveManual = false;
    this->curveRotValue = 5.00f;
}

int32 ARCVehicleTarget::GetRootIndex() {
    return 0;
}


