#include "RCMapMoveEventTrigger.h"

ARCMapMoveEventTrigger::ARCMapMoveEventTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MoveConnectStatus = ERCRealEventMapConnectStatus::Enable;
}


