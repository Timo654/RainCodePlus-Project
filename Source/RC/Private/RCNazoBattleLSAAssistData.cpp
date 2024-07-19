#include "RCNazoBattleLSAAssistData.h"

FRCNazoBattleLSAAssistData::FRCNazoBattleLSAAssistData() {
    this->AssistChara = NULL;
    this->bCanAssist = false;
    this->bElapsedCoolTimeFlag = false;
    this->CoolTime = 0.00f;
    this->ElapsedCoolTime = 0.00f;
    this->bCoolTimeMaxAtFinished = false;
    this->InLocationCurve = NULL;
    this->OutLocationCurve = NULL;
    this->State = ERCNazoBattleLSAAssistState::None;
    this->Time = 0.00f;
    this->ElapsedTime = 0.00f;
    this->bUnrival = false;
    this->UnrivalTime = 0.00f;
    this->UnrivalDuration = 0.00f;
    this->bAttacked = false;
}

