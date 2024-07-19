#include "RCShinigamiMovement.h"

URCShinigamiMovement::URCShinigamiMovement() {
    this->ShinigamiActor = NULL;
    this->WarpEfffect = NULL;
    this->Brakepeed = 2.00f;
    this->MoveSpeed = 5.00f;
    this->MoveFastSpeed = 8.00f;
    this->MoveTurboSpeed = 20.00f;
    this->Accele = 0.20f;
    this->FastAccele = 5.00f;
    this->TurboAccele = 10.00f;
    this->Brake = 0.20f;
    this->RotatorNearLength = 100.00f;
    this->RotatorFarLength = 200.00f;
    this->RotatorFastSpeed = 5.00f;
    this->RotatorSpeedMulti = 10.00f;
    this->BrakeUpLength = 200.00f;
    this->MoveFastSpeedLength = 300.00f;
    this->MoveHiSpeedLength = 500.00f;
    this->MoveWarpLength = 1000.00f;
    this->BreakTickMax = 180.00f;
    this->SpeeTypePlayerMidLength = 100.00f;
    this->SpeeTypePlayerMaxLength = 500.00f;
    this->bMove = false;
    this->bMoveTargetStop = false;
    this->MoveTargetLength = 0.00f;
    this->bLastRotation = false;
    this->SpeedType = ERCShinigamiSpeedType::Normal;
    this->LastTargetActor = NULL;
    this->bMoveBrake = false;
    this->NowMoveSpeed = 0.00f;
    this->NextLength = 0.00f;
    this->BrakeLength = 0.00f;
    this->BreakTick = 0.00f;
    this->WarpTime = 0.00f;
    this->MoveSpeedMagnification = 1.00f;
    this->MoveWarpType = ERCShinigamiWarpType::Normal;
    this->bDebugDraw = false;
}


