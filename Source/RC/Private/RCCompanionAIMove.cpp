#include "RCCompanionAIMove.h"

URCCompanionAIMove::URCCompanionAIMove() {
    this->MyCharacterProxy = NULL;
    this->MyActor = NULL;
    this->PlayerActor = NULL;
    this->AiMoveType = ERCCompanionAiMoveType::Stop;
    this->bAiMoveTypeInit = false;
    this->bFrontMove = false;
    this->MovePlayerLength = 100.00f;
    this->MovePlayerLengthFront = 200.00f;
    this->MovePlayerLengthRun = 50.00f;
    this->MovePlayerLengthRunMax = 100.00f;
    this->MovePlayerLengthRunFront = 50.00f;
    this->MovePlayerLengthRunMaxFront = 100.00f;
    this->MovePlayerLengthWarp = 1600.00f;
    this->MovePlayerHeightWarp = 300.00f;
    this->MoveNearLength = 50.00f;
    this->MoveWaitSecMax = 0.50f;
    this->MovePlayerOffsetLength = 100.00f;
    this->MovePlayerOffsetAngle = 10.00f;
    this->MoveOffsetLength = 0.00f;
    this->MoveOffsetAngle = 0.00f;
    this->MoveAngle = 0.00f;
    this->MoveWaitSec = 0.00f;
    this->TickDeltaTime = 0.00f;
    this->TickDeltaTimePower = 0.00f;
    this->NowSpeed = 0.00f;
    this->ExecSpeed = 0.00f;
    this->PlayerSpeed = 0.00f;
    this->AngleIndex = -1;
    this->bMoveLengthUpdate = false;
    this->bDebugDraw = false;
}


