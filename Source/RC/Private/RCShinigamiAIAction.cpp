#include "RCShinigamiAIAction.h"

URCShinigamiAIAction::URCShinigamiAIAction() {
    this->ShinigamiActor = NULL;
    this->ParentComponent = NULL;
    this->Movement = NULL;
    this->AIFollow = NULL;
    this->AiCommandTrigger = NULL;
    this->TargetPoint = NULL;
    this->TargetMoveSpeedMagnification = 0.00f;
    this->TargetMoveWarpType = ERCShinigamiWarpType::Normal;
    this->LevelSequenceActor = NULL;
    this->PlaySequencerLoopNum = 1;
    this->bPlayFollow = false;
    this->TalkDataTable = NULL;
    this->StartTalkDelayAtEnd = -1.00f;
    this->StartTalkDelayToNext = -1.00f;
    this->PlayTalkDelayAtEnd = -1.00f;
    this->PlayTalkDelayToNext = -1.00f;
    this->bStatusInit = false;
    this->bStatusTalkInit = false;
    this->PlayTime = 0.00f;
    this->bDebugDraw = false;
}


