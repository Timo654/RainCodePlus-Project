#include "RCScriptActorMoveInfo.h"

FRCScriptActorMoveInfo::FRCScriptActorMoveInfo() {
    this->Wait = 0.00f;
    this->MoveScale = 0.00f;
    this->ChangeYawSpeedScale = 0.00f;
    this->TurnSpeedScale = 0.00f;
    this->FadeType = ERCCharacterMoveFadeType::None;
}

