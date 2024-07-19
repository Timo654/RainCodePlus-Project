#include "RCShinigamiLevelSequenceActor.h"

ARCShinigamiLevelSequenceActor::ARCShinigamiLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSpawn = false;
    this->TransformType = ERCSequenceShinigamiTransformTypeLSA::Shinigami;
    this->Actor = NULL;
    this->FollowType = ERCSequenceShinigamiFollowType::None;
    this->FollowTarget = ERCSequenceShinigamiFollowTarget::Player;
    this->FollowTargetActor = NULL;
}


