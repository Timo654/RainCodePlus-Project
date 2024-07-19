#include "RCVehicleController.h"

ARCVehicleController::ARCVehicleController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->popUpCountMax = 300;
    this->popUpCountMin = 180;
    this->runningVehicleMax = 3;
    this->crossWalkController = NULL;
    this->pVehicleManager = NULL;
    this->popUpCount = 0;
    this->prevPopUpLane = 7;
}

bool ARCVehicleController::PopUpVehicle(ARCVehicleTarget* pInitStartTarget, EVehicleLaneType laneType) {
    return false;
}

bool ARCVehicleController::isOpenCrossWalk() {
    return false;
}

void ARCVehicleController::Initialize() {
}

int32 ARCVehicleController::GetVehicleRateIndex(TArray<int32> rateArray) {
    return 0;
}

EVehicleCrossWalkState ARCVehicleController::GerNearCrossWalk(AActor* pCheckActor) {
    return EVehicleCrossWalkState::NoCheck;
}

void ARCVehicleController::CheckPopUpCount() {
}

void ARCVehicleController::CheckFinishVehicle() {
}

void ARCVehicleController::CheckCrossWalkLength() {
}


