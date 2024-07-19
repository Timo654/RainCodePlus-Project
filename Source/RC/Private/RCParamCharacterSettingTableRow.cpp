#include "RCParamCharacterSettingTableRow.h"

FRCParamCharacterSettingTableRow::FRCParamCharacterSettingTableRow() {
    this->Yaw = 0.00f;
    this->bVisible = false;
    this->bCull = false;
    this->LoopMotionPlayStartPos = 0.00f;
    this->bTalk = false;
    this->BalloonFrameType = 0;
    this->BalloonType = 0;
    this->TalkLength = 0.00f;
    this->SelifLength = 0.00f;
    this->BalloonLength = 0.00f;
    this->BalloonHeightOffset = 0.00f;
    this->BalloonAngleOffset = 0.00f;
    this->BalloonLengthOffset = 0.00f;
    this->WalkSpeed = 0.00f;
    this->RunSpeed = 0.00f;
    this->bMove = false;
    this->bMoveFirstWarp = false;
    this->bMoveLoop = false;
    this->MovePositionNum = 0;
    this->bMoveEndChangeYaw = false;
    this->MoveEndOffetYaw = 0.00f;
    this->ChangeYawSpeed = 0.00f;
    this->bPlayerLookAtFace = false;
    this->bSwitchIntegrationMob = false;
    this->bAnimal = false;
    this->AnimalIdleMotionIndex = 0;
    this->AnimalActionMotionIndex = 0;
    this->bAnimalNearPlayerHide = false;
    this->LengthAnimalVisibleMin = 0.00f;
    this->LengthAnimalVisibleMax = 0.00f;
    this->LengthAnimalAction = 0.00f;
}

