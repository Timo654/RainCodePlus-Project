#include "RCShinigamiAICommandTrigger.h"

ARCShinigamiAICommandTrigger::ARCShinigamiAICommandTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaType = ERCShinigamiAiCommandTriggerType::None;
    this->CollisionComponent = NULL;
    this->AIType = ERCShinigamiAIType::None;
    this->EmotionType = ERCShinigamiEmotionType::Normal;
    this->bOnActorEndOverlap = false;
    this->bOncePlay = false;
    this->NextIntervalTime = 0.00f;
    this->ExecPercent = -1;
    this->bPlaySoundWorldPosition = false;
    this->bTargetPlaySoundWorldPosition = false;
    this->TargetMoveSpeedMagnification = 1.00f;
    this->TargetMoveWarpType = ERCShinigamiWarpType::Normal;
    this->PlaySequencerLoopNum = 1;
    this->bPlayFollow = false;
    this->TalkDataTable = NULL;
    this->StartTalkDelayAtEnd = -1.00f;
    this->StartTalkDelayToNext = -1.00f;
    this->PlayTalkDelayAtEnd = -1.00f;
    this->PlayTalkDelayToNext = -1.00f;
    this->bDebugDraw = false;
    this->bPlayed = false;
    this->PlayCount = 0;
    this->PlayTime = 0.00f;
}

void ARCShinigamiAICommandTrigger::ResetStatus() {
}

void ARCShinigamiAICommandTrigger::OnActorEndOverlapScriptEntry(AActor* OverlappedActor, AActor* OtherActor) {
}

void ARCShinigamiAICommandTrigger::OnActorBeginOverlapScriptEntry(AActor* OverlappedActor, AActor* OtherActor) {
}


