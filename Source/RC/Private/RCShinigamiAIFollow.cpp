#include "RCShinigamiAIFollow.h"

URCShinigamiAIFollow::URCShinigamiAIFollow() {
    this->ShinigamiActor = NULL;
    this->PlayerActor = NULL;
    this->ParrentComponent = NULL;
    this->Movement = NULL;
    this->FollowRadius = 100.00f;
    this->FollowMoveRadius = 200.00f;
    this->FollowFrontLength = 600.00f;
    this->FollowFrontFarLength = 1200.00f;
    this->FollowHiSpeedLength = 500.00f;
    this->AiWaitTimeMin = 600.00f;
    this->AiWaitTimeMax = 600.00f;
    this->AiMoveWaitTimeMin = 0.40f;
    this->AiMoveWaitTimeMax = 0.80f;
    this->AiMoveWaitFontTimeMin = 1.00f;
    this->AiMoveWaitFontTimeMax = 2.00f;
    this->PlayerCollisionLength = 75.00f;
    this->MoveNearLength = 100.00f;
    this->AiFollowFrontLength = 100.00f;
    this->AiFollowFrontLengthEthereal = 200.00f;
    this->AiFollowFrontRadius = 50.00f;
    this->AiFollowFrontYaw = 35.00f;
    this->AiFollowFrontYawEthereal = 125.00f;
    this->AiFollowFrontPitch = -25.00f;
    this->AiFollowFrontPitchEthereal = 40.00f;
    this->WaitAngryRadiusMin = 150.00f;
    this->WaitAngryRadiusMax = 250.00f;
    this->WaitAngryIndoorRadiusMin = 150.00f;
    this->WaitAngryIndoorRadiusMax = 250.00f;
    this->FollowType = ERCShinigamiAiFollowType::Wait;
    this->EmotionType = ERCShinigamiEmotionType::Normal;
    this->AiWaitTime = 0.00f;
    this->bRandomFollowPositon = false;
    this->RandomFollowNextRadius = 50.00f;
    this->RandomFollowNextYaw = 35.00f;
    this->RandomFollowNextPitch = -25.00f;
    this->bPlayerOnVehicle = false;
    this->PlayerOnVehicleSpeedMax = 10.00f;
    this->ExIdleSequence = NULL;
    this->bDebugDraw = false;
    this->CheckTimer = NULL;
}


