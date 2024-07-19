#include "RCShinigamiAIMove.h"

URCShinigamiAIMove::URCShinigamiAIMove() {
    this->ShinigamiActor = NULL;
    this->PlayerActor = NULL;
    this->Movement = NULL;
    this->AiCommandTrigger = NULL;
    this->AIMoveArea = NULL;
    this->MoveHiSpeedLength = 500.00f;
    this->PlayerRadius = 100.00f;
    this->AiWaitTimeMin = 2.00f;
    this->AiWaitTimeMax = 5.00f;
    this->PlayerCollisionLength = 75.00f;
    this->MoveNearLength = 100.00f;
    this->AiWaitTime = 0.00f;
    this->AiMoveType = ERCShinigamiAiMoveType::Area;
    this->bDebugDraw = false;
}


