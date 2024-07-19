#include "RCScriptActorStatus.h"

URCScriptActorStatus::URCScriptActorStatus() {
    this->bVisible = false;
    this->bPause = false;
    this->bCameraNearFade = true;
    this->CharacterTag = ERCCharactreTag::NPC;
    this->WalkSpeed = 300.00f;
    this->RunSpeed = 600.00f;
    this->Yaw = 0.00f;
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
    this->ChangeYawSpeed = 1.00f;
    this->MoveWait = 0.00f;
    this->bMovePause = false;
    this->bMoveFadeOut = false;
    this->bTalk = false;
    this->bPlayerLookAtFace = true;
    this->BalloonFrameType = 0;
    this->BalloonType = 0;
    this->TalkLength = 150.00f;
    this->SelifLength = 600.00f;
    this->BalloonLength = 600.00f;
    this->BalloonHeightOffset = 20.00f;
    this->BalloonAngleOffset = 0.00f;
    this->BalloonLengthOffset = 0.00f;
    this->QuestType = ERCActorQuestType::None;
}


