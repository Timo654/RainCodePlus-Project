#include "RCEnvironmentChangeTrigger.h"

ARCEnvironmentChangeTrigger::ARCEnvironmentChangeTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCheckCameraCollision = false;
    this->ParentTrigger = NULL;
    this->PlayerMoveSpeedType = ERCEnvironmentChangeSpeedType::None;
    this->RainChangeType = ERCEnvironmentChangeRainType::None;
    this->bCharacterDrawLayerChange = false;
    this->ExitPlayerMoveSpeedType = ERCEnvironmentChangeSpeedType::None;
    this->ExitRainChangeType = ERCEnvironmentChangeRainType::None;
    this->bExitCharacterDrawLayerChange = false;
    this->bDebugDraw = false;
    this->bInPlayer = false;
}

void ARCEnvironmentChangeTrigger::OnActorEndOverlapScriptEntry(AActor* OverlappedActor, AActor* OtherActor) {
}

void ARCEnvironmentChangeTrigger::OnActorBeginOverlapScriptEntry(AActor* OverlappedActor, AActor* OtherActor) {
}


