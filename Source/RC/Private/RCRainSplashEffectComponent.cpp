#include "RCRainSplashEffectComponent.h"

URCRainSplashEffectComponent::URCRainSplashEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerCharacter = NULL;
    this->OwnerMesh = NULL;
    this->ComponentNo = -1;
    this->AttachPointHead = TEXT("head");
    this->AttachPointSpine = TEXT("spine_03");
}

bool URCRainSplashEffectComponent::EffectStart(FRCEffectComponentData& InEffectData, FName InAttachPointName, UStaticMesh* InEmitterMesh, float InOffset, float InSpawnRate) {
    return false;
}

bool URCRainSplashEffectComponent::EffectSpawn(FRCEffectComponentData& InEffectData, FName InAttachPointName, UStaticMesh* InEmitterMesh, float InOffset, float InSpawnRate) {
    return false;
}


