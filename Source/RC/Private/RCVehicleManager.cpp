#include "RCVehicleManager.h"

ARCVehicleManager::ARCVehicleManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ARCVehicleManager::SetVisible(bool IsVisible) {
}

void ARCVehicleManager::SetLaneTargetArray(EVehicleLaneType laneType, TArray<AActor*> laneTargetArray) {
}

void ARCVehicleManager::SetEnableVehicleArray(TArray<AActor*> enableVehicleArray) {
}

void ARCVehicleManager::SetEnableEngineSound(bool IsEnable) {
}

TArray<AActor*> ARCVehicleManager::GetRunningVehicleForLane(EVehicleLaneType laneType) {
    return TArray<AActor*>();
}

TArray<FRCRunningVehicleData> ARCVehicleManager::GetRunningVehicleArray() {
    return TArray<FRCRunningVehicleData>();
}

ARCVehicleTarget* ARCVehicleManager::GetLaneStartTarget(EVehicleLaneType laneType) {
    return NULL;
}

TArray<ARCVehicleTarget*> ARCVehicleManager::GetLaneRootTargetArray(EVehicleLaneType laneType) {
    return TArray<ARCVehicleTarget*>();
}

ARCVehicleTarget* ARCVehicleManager::GetLaneEndTarget(EVehicleLaneType laneType) {
    return NULL;
}

TArray<AActor*> ARCVehicleManager::GetEnabledVehicleArray() {
    return TArray<AActor*>();
}

void ARCVehicleManager::CheckFinishedVehicle() {
}

void ARCVehicleManager::AddRunningVehicle(AActor* pVehicle, EVehicleLaneType laneType) {
}


