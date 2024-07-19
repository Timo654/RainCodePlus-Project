#include "RCNazoBattleDisturbParameters.h"

FRCNazoBattleDisturbParameters::FRCNazoBattleDisturbParameters() {
    this->Aspect = ERCNazoBattleRebuttalLetterAspect::W1H1;
    this->bPlayVoice = false;
    this->bLypsync = false;
    this->AppearDelayTime = 0.00f;
    this->KaijinMotionDelayTime = 0.00f;
    this->MoveType = ERCNazoBattleDisturbLetterMoveType::TypeA;
    this->bAttackSocket = false;
    this->AppearDelayTime2 = 0.00f;
    this->LaunchDelayTime = 0.00f;
    this->LaunchAcceleration = 0.00f;
    this->MoveTarget = ERCNazoBattleDisturbLetterMoveTarget::Top;
    this->MoveTargetIndex = 0;
    this->AppearPosition = ERCNazoBattleDisturbLetterAppearPosition::Left;
    this->VerticalPosition = ERCNazoBattleDisturbLetterVerticalPosition::Top;
    this->OffsetZ = 0.00f;
    this->Lane = ERCNazoBattleDisturbLetterLane::Fore;
    this->bMoveCurveAsWorldLocation = false;
    this->MoveTime = 0.00f;
    this->MaxSpeed = 0.00f;
    this->Acceleration = 0.00f;
    this->SlowPositionGapFromRebuttalLetter = 0.00f;
    this->SlowSpeed = 0.00f;
    this->SlowTime = 0.00f;
    this->Scale = 0.00f;
    this->Life = 0;
    this->Damage = 0;
    this->DetectivePoint = 0;
}

