#include "RCMovingActorComponent.h"

URCMovingActorComponent::URCMovingActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->isEngineSound = true;
}

void URCMovingActorComponent::SetEngineSoundID(const FString& SoundId) {
}

bool URCMovingActorComponent::IsEnableEngineSound() {
    return false;
}

FString URCMovingActorComponent::GetEngineSoundID() {
    return TEXT("");
}

void URCMovingActorComponent::EnableEngineSound(bool IsEnable) {
}


