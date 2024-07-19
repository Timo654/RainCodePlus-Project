#include "RCScriptActorHitReactionData.h"

FRCScriptActorHitReactionData::FRCScriptActorHitReactionData() {
    this->bHitReaction = false;
    this->bHitRight = false;
    this->Power = 0.00f;
    this->PowerInterpSpeed = 0.00f;
    this->BlendInterpSpeedToReaction = 0.00f;
    this->BlendInterpSpeedToBase = 0.00f;
}

