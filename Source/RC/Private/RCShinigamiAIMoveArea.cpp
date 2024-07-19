#include "RCShinigamiAIMoveArea.h"

ARCShinigamiAIMoveArea::ARCShinigamiAIMoveArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaType = ERCShinigamiAiMoveAreaType::None;
    this->CollisionComponent = NULL;
    this->bDebugDraw = false;
}


