#include "RCScriptActorHitReactionSettings.h"

FRCScriptActorHitReactionSettings::FRCScriptActorHitReactionSettings() {
    this->bHitReactionEnable = false;
    this->HitLength = 0.00f;
    this->MaxPower = 0.00f;
    this->MinPower = 0.00f;
    this->bWeakenPower = false;
    this->WeakenHitLength = 0.00f;
    this->FastSpeed = 0.00f;
    this->SlowSpeed = 0.00f;
    this->BlendInterpSpeedToReactionFast = 0.00f;
    this->BlendInterpSpeedToReactionSlow = 0.00f;
    this->BlendInterpSpeedToBaseFast = 0.00f;
    this->BlendInterpSpeedToBaseSlow = 0.00f;
}

