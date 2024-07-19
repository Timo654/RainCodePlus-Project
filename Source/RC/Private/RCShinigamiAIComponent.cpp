#include "RCShinigamiAIComponent.h"

URCShinigamiAIComponent::URCShinigamiAIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnable = true;
    this->bAutoMoveAnimeEnable = false;
    this->AIType = ERCShinigamiAIType::Follow;
    this->EmotionType = ERCShinigamiEmotionType::Normal;
    this->CurrentCommandTrigger = NULL;
    this->NextCommandTrigger = NULL;
    this->bInitialize = false;
    this->bInitializeSetup = false;
    this->bAiActionEnable = false;
    this->Animation = NULL;
    this->Movement = NULL;
    this->AIAction = NULL;
    this->AIMove = NULL;
    this->AIFollow = NULL;
    this->AIRoute = NULL;
    this->WarpEfffect = NULL;
}


