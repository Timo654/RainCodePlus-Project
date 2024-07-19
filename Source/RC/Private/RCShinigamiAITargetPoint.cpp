#include "RCShinigamiAITargetPoint.h"

ARCShinigamiAITargetPoint::ARCShinigamiAITargetPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = ERCShinigamiAITargetPointType::Target;
    this->TargetLength = 100.00f;
    this->ShinigamiLength = -1.00f;
    this->MoveRank = 0;
}


