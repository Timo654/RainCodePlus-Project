#include "RCNazoBattleLSARebuttalData.h"

FRCNazoBattleLSARebuttalData::FRCNazoBattleLSARebuttalData() {
    this->GroupIndex = 0;
    this->GroupNo = 0;
    this->Index = 0;
    this->RebuttalLetter = NULL;
    this->No = 0;
    this->Type = ERCNazoBattleRebuttalLetterType::Normal;
    this->Phases = ERCNazoBattleLSARebuttalPhases::Invalid;
    this->bKaijinMove = false;
    this->TimeWhenKaijinMoveStart = 0.00f;
    this->bKaijinReadyMotion = false;
    this->TimeWhenKaijinReadyMotionStart = 0.00f;
    this->bKaijinAttackMotion = false;
    this->TimeWhenKaijinAttackMotionStart = 0.00f;
    this->KaijinAttackMotionInLength = 0.00f;
    this->Position = ERCNazoBattleRebuttalLetterPosition::Top;
    this->bLeft = false;
    this->bFiring = false;
    this->bAttackEnable = false;
    this->bCanJustAvoid = false;
    this->bWaitAfterVoiceAndMotionEnd = false;
    this->TimeWhenVoiceAndMotionEnd = 0.00f;
    this->bFinishedWaitAfterVoiceAndMotionEnd = false;
    this->IntervalTime = 0.00f;
    this->ElapsedTime = 0.00f;
    this->TotalElapsedTime = 0.00f;
    this->AppearDisturbCount = 0;
    this->bBeforeDisturbLeft = false;
    this->bJustAvoidDirectionCustomL = false;
    this->bJustAvoidDirectionCustomR = false;
}

