#include "RCNazoBattleRebuttalLetterPrepareData.h"

FRCNazoBattleRebuttalLetterPrepareData::FRCNazoBattleRebuttalLetterPrepareData() {
    this->BattleLSA = NULL;
    this->GroupIndex = 0;
    this->GroupNo = 0;
    this->Index = 0;
    this->No = 0;
    this->AppearEffectInLp = NULL;
    this->AppearEffectOt = NULL;
    this->DecorationEffect = NULL;
    this->FrontMaterial = NULL;
    this->bFrontMaterialChangeColor = false;
    this->EdgeMaterial = NULL;
    this->bEdgeMaterialChangeColor = false;
    this->bCustomColor = false;
    this->OutEffect = NULL;
    this->Out1Effect = NULL;
    this->Out2Effect = NULL;
    this->Out3Effect = NULL;
    this->bMoveCurveAsWorldLocation = false;
    this->MoveCurve = NULL;
    this->MoveRotationCurve = NULL;
    this->MoveScaleCurve = NULL;
    this->SpeedRate = 0.00f;
    this->AccRate = 0.00f;
    this->SlowDownSpeed = 0.00f;
    this->SlowDownAcc = 0.00f;
    this->SlowDownDistanceFromTarget = 0.00f;
    this->SlowDownTime = 0.00f;
    this->bJustAvoidCollisionFixedSizeFlag = false;
    this->JustAvoidCollisionSizeRate = 0.00f;
    this->AttackDistanceMax = 0.00f;
    this->AttackDistanceMin = 0.00f;
    this->DistanceToPlayer = 0.00f;
    this->OutDistance = 0.00f;
    this->Aspect = ERCNazoBattleRebuttalLetterAspect::W1H1;
    this->AutoResizeW = 0.00f;
    this->AutoResizeMax = 0.00f;
    this->AutoResizeMin = 0.00f;
    this->bAmbiguous = false;
    this->bAmbiguousKaijinPrevent = false;
    this->bIdentifyAmbiguousLetter = false;
    this->bReduceIdentifyAmbiguousLetter = false;
    this->RepelledSpeed = 0.00f;
    this->LandZ = 0.00f;
    this->BuriedShadowAlphaRate = 0.00f;
}

