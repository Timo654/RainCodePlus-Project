#include "RCShinigamiAnimation.h"

URCShinigamiAnimation::URCShinigamiAnimation() {
    this->ShinigamiActor = NULL;
    this->ParrentComponent = NULL;
    this->Movement = NULL;
    this->AnimeControlComp = NULL;
    this->AnimeSpeedMultiUpDown = 0.60f;
    this->AnimeRunSpeed = 6.00f;
    this->AnimeYawSpeed = 1.50f;
    this->AnimeBlendTime = 0.20f;
    this->AnimeBlendTimeIlde = 0.50f;
    this->bEnable = false;
    this->AnimeType = ERCShinigamiAnimeType::None;
    this->NowMoveSpeed = 0.00f;
    this->NowYawSpeed = 0.00f;
    this->NowUpDownSpeed = 0.00f;
}


