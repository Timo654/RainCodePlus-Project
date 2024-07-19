#include "RCEffectComponent.h"

URCEffectComponent::URCEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectManager = NULL;
}

bool URCEffectComponent::SpawnEffectRainSplashAttachedWithManagedID(FRCEffectComponentData& InEffectData, FName InManagedID, USceneComponent* InAttachToComponent, FName InAttachPointName, UStaticMesh* InEmitterMesh, float InOffset, float InSpawnRate, FVector InLocation, FRotator InRotation, FVector InScale, TEnumAsByte<EAttachLocation::Type> InLocationType, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod) {
    return false;
}

bool URCEffectComponent::SpawnEffectAttachedWithManagedID(FRCEffectComponentData& InEffectData, FName InManagedID, USceneComponent* InAttachToComponent, FName InAttachPointName, FVector InLocation, FRotator InRotation, FVector InScale, TEnumAsByte<EAttachLocation::Type> InLocationType, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod) {
    return false;
}

FName URCEffectComponent::SpawnEffectAttached(FRCEffectComponentData& InEffectData, USceneComponent* InAttachToComponent, FName InAttachPointName, FVector InLocation, FRotator InRotation, FVector InScale, TEnumAsByte<EAttachLocation::Type> InLocationType, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod) {
    return NAME_None;
}

bool URCEffectComponent::SpawnEffectAtLocationWithManagedID(FRCEffectComponentData& InEffectData, FName InManagedID, FVector InSpawnLocation, FRotator InSpawnRotation, FVector InScale, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod) {
    return false;
}

FName URCEffectComponent::SpawnEffectAtLocation(FRCEffectComponentData& InEffectData, FVector InSpawnLocation, FRotator InSpawnRotation, FVector InScale, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod) {
    return NAME_None;
}

bool URCEffectComponent::EffectDestroy(FRCEffectComponentData& InEffectData) {
    return false;
}

bool URCEffectComponent::EffectDeactivate(FRCEffectComponentData& InEffectData) {
    return false;
}

bool URCEffectComponent::EffectActivate(FRCEffectComponentData& InEffectData) {
    return false;
}

bool URCEffectComponent::CheckEffectActive(FRCEffectComponentData& InEffectData) {
    return false;
}


