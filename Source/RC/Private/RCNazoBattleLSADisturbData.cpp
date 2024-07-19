#include "RCNazoBattleLSADisturbData.h"

FRCNazoBattleLSADisturbData::FRCNazoBattleLSADisturbData() {
    this->RebuttalGroupIndex = 0;
    this->RebuttalGroupNo = 0;
    this->RebuttalIndex = 0;
    this->RebuttalNo = 0;
    this->Index = 0;
    this->DisturbLetter = NULL;
    this->No = 0;
    this->Phases = ERCNazoBattleLSARebuttalPhases::Invalid;
    this->AppearDelayTime = 0.00f;
    this->AppearDelayTime2 = 0.00f;
    this->LaunchDelayTime = 0.00f;
    this->bKaijinMotion = false;
    this->bKaijinMotionStarted = false;
    this->KaijinMotionDelayTime = 0.00f;
    this->bAppearLeft = false;
    this->bFiring = false;
    this->bAttackEnable = false;
    this->ElapsedTime = 0.00f;
    this->DetectivePoint = 0;
}

