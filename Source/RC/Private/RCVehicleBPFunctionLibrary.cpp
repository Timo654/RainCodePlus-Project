#include "RCVehicleBPFunctionLibrary.h"

URCVehicleBPFunctionLibrary::URCVehicleBPFunctionLibrary() {
}

void URCVehicleBPFunctionLibrary::SetCrossWalkTriggerBox(AActor* crossWalkTrigger) {
}

void URCVehicleBPFunctionLibrary::SetCrossWalkSignal(ECrossWalkSignalType signalType) {
}

AActor* URCVehicleBPFunctionLibrary::GetPlayerActor() {
    return NULL;
}

AActor* URCVehicleBPFunctionLibrary::GetCrossWalkTriggerBox() {
    return NULL;
}

ECrossWalkSignalType URCVehicleBPFunctionLibrary::GetCrossWalkSignal() {
    return ECrossWalkSignalType::Red;
}


