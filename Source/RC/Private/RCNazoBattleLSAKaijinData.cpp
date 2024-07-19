#include "RCNazoBattleLSAKaijinData.h"

FRCNazoBattleLSAKaijinData::FRCNazoBattleLSAKaijinData() {
    this->Kaijin = NULL;
    this->KaijinMesh = NULL;
    this->AnimCtrl = NULL;
    this->bOneShotMotion = false;
    this->RebuttalIndex = 0.00f;
    this->PositionIndex = 0;
    this->JumpCurve = NULL;
    this->JumpState = ERCNazoBattleLSAKaijinJumpState::None;
    this->JumpMaxX = 0.00f;
    this->JumpMinX = 0.00f;
    this->JumpElapsedTime = 0.00f;
    this->JumpRate = 0.00f;
    this->JumpMotionPlayRate = 0.00f;
    this->JumpReadyMotionTime = 0.00f;
    this->JumpMotionTime = 0.00f;
    this->JumpLandingMotionTime = 0.00f;
    this->JumpLandingTime = 0.00f;
    this->CameraFocusRate = 0.00f;
    this->CameraPitchOffset = 0.00f;
}

