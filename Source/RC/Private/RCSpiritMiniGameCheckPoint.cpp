#include "RCSpiritMiniGameCheckPoint.h"

ARCSpiritMiniGameCheckPoint::ARCSpiritMiniGameCheckPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheckPointType = ERCSpiritMiniGameCheckPointType::CheckPoint_A;
    this->SpiritMiniGameManager = NULL;
}


