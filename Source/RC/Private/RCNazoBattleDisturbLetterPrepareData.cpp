#include "RCNazoBattleDisturbLetterPrepareData.h"

FRCNazoBattleDisturbLetterPrepareData::FRCNazoBattleDisturbLetterPrepareData() {
    this->BattleLSA = NULL;
    this->RebuttalGroupIndex = 0;
    this->RebuttalGroupNo = 0;
    this->RebuttalIndex = 0;
    this->RebuttalNo = 0;
    this->Index = 0;
    this->No = 0;
    this->Aspect = ERCNazoBattleRebuttalLetterAspect::W1H1;
    this->AutoResizeW = 0.00f;
    this->AutoResizeMax = 0.00f;
    this->AutoResizeMin = 0.00f;
    this->AppearEffectInLp = NULL;
    this->AppearEffectOt = NULL;
    this->FrontMaterial = NULL;
    this->EdgeMaterial = NULL;
    this->OutEffect = NULL;
    this->Out1Effect = NULL;
    this->Out2Effect = NULL;
    this->bMoveCurveAsWorldLocation = false;
    this->MoveCurve = NULL;
    this->MoveRotationCurve = NULL;
    this->MoveScaleCurve = NULL;
    this->SpeedRate = 0.00f;
    this->AccRate = 0.00f;
    this->LandZ = 0.00f;
    this->BuriedShadowAlphaRate = 0.00f;
}

