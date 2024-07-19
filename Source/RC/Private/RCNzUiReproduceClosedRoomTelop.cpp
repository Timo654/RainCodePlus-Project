#include "RCNzUiReproduceClosedRoomTelop.h"

URCNzUiReproduceClosedRoomTelop::URCNzUiReproduceClosedRoomTelop() {
    this->bChangeSpeed = true;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->UIDataAsset = NULL;
}

void URCNzUiReproduceClosedRoomTelop::StartTelop(URCReproduceCloseRoomUIDataAsset* DataAsset) {
}

bool URCNzUiReproduceClosedRoomTelop::IsFinished() {
    return false;
}

int32 URCNzUiReproduceClosedRoomTelop::GetReproduceClosedRoomTelopPriority() {
    return 0;
}

void URCNzUiReproduceClosedRoomTelop::FinishTelop() {
}


