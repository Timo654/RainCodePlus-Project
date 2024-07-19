#include "RCAdvHUDResearchPointer_MouseControlData_Mouse.h"

FRCAdvHUDResearchPointer_MouseControlData_Mouse::FRCAdvHUDResearchPointer_MouseControlData_Mouse() {
    this->MoveType = ERCAdvHUDResearchPointerMouse_MoveType::Absolute;
    this->MoveDistance = 0.00f;
    this->MoveRate = 0.00f;
    this->bMultiplyByViewportScale = false;
    this->MoveDistanceMinAtOff = 0.00f;
    this->MoveDistanceMinAtOn = 0.00f;
    this->TimeToJudgeNotMove = 0.00f;
    this->TimeToTurnOff = 0.00f;
    this->ElapsedTimeSinceStopped = 0.00f;
}

