#include "RCShinigamiAIRoute.h"

URCShinigamiAIRoute::URCShinigamiAIRoute() {
    this->ShinigamiActor = NULL;
    this->Movement = NULL;
    this->AiCommandTrigger = NULL;
    this->AiWaitTimeMin = 2.00f;
    this->AiWaitTimeMax = 5.00f;
    this->bStatusInit = true;
    this->AiWaitTime = 0.00f;
    this->NextTargetPointIndex = -1;
    this->bDebugDraw = false;
}


