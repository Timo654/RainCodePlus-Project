#include "RCScriptActorComponent.h"

URCScriptActorComponent::URCScriptActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsMovementComponent = false;
    this->bIsCollsion = false;
    this->bTickExec = false;
    this->bMoveVector3 = false;
    this->RunSpeed = 380.00f;
    this->WalkSpeed = 200.00f;
    this->DefaultRunSpeed = 380.00f;
    this->DefaultWalkSpeed = 200.00f;
    this->bSpeedSettingFirst = true;
    this->bFallLock = true;
    this->bMove = false;
    this->bMoveFirstWarp = false;
    this->bMoveLoop = false;
    this->MovePositionNum = 0;
    this->bMoveEndChangeYaw = false;
    this->MoveEndOffetYaw = 0.00f;
    this->bMovePlayerCheck = false;
    this->MoveSplineDistance = 0.00f;
    this->bMoveSplineReverse = false;
    this->bMoveOnSpline = false;
    this->MoveWait = 0.00f;
    this->bMovePause = false;
    this->bMoveYanwChange = false;
    this->bMoveFadeOut = false;
    this->bChangeYaw = false;
    this->ChangeYawSpeed = 1.00f;
    this->ChangeYawSpeedSclae = 1.00f;
    this->ChangeYaw = 0.00f;
    this->ChangeYawTime = 0.00f;
    this->bMoveStart = false;
    this->bMoveStartUp = false;
    this->MoveSpeedScale = 0.00f;
    this->MoveStopSpeedScale = 0.05f;
    this->MoveStopTickMax = 0.50f;
    this->MoveStopTick = 0.00f;
    this->bMoveBlock = false;
    this->WalkSplineSpeed = 0.00f;
    this->PreWalkSplineTimeRate = 0.00f;
    this->BSMaxSpeed = 480.00f;
    this->SplineSpeedAjustRate = 500.00f;
    this->WalkSplineZOffset = 3.00f;
    this->BackYaw = 0.00f;
    this->bBackMove = false;
    this->bBackMoveFirstWarp = false;
    this->bBackMoveLoop = false;
    this->BackMovePositionNum = 0;
    this->bBackMoveEndChangeYaw = false;
    this->BackMoveEndOffetYaw = 0.00f;
    this->BackMoveWait = 0.00f;
    this->bBackMovePlayerCheck = false;
    this->BackMoveSplineDistance = 0.00f;
    this->bBackMoveSplineReverse = false;
    this->bBackMoveOnSpline = false;
}


