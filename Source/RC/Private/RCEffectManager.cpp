#include "RCEffectManager.h"

URCEffectManager::URCEffectManager() {
}

bool URCEffectManager::SpawnEffectRainSplashAttachedWithManagedID(FName InManagedID, FName InEffectID, USceneComponent* InAttachToComponent, FName InAttachPointName, UStaticMesh* InEmitterMesh, float InOffset, float InSpawnRate, FVector InLocation, FRotator InRotation, FVector InScale, TEnumAsByte<EAttachLocation::Type> InLocationType, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod) {
    return false;
}

bool URCEffectManager::SpawnEffectAttachedWithManagedID(FName InManagedID, FName InEffectID, USceneComponent* InAttachToComponent, FName InAttachPointName, FVector InLocation, FRotator InRotation, FVector InScale, TEnumAsByte<EAttachLocation::Type> InLocationType, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod) {
    return false;
}

FName URCEffectManager::SpawnEffectAttached(FName InEffectID, USceneComponent* InAttachToComponent, FName InAttachPointName, FVector InLocation, FRotator InRotation, FVector InScale, TEnumAsByte<EAttachLocation::Type> InLocationType, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod) {
    return NAME_None;
}

bool URCEffectManager::SpawnEffectAtLocationWithManagedID(UObject* InWorldContextObject, FName InManagedID, FName InEffectID, FVector InSpawnLocation, FRotator InSpawnRotation, FVector InScale, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod) {
    return false;
}

FName URCEffectManager::SpawnEffectAtLocation(UObject* InWorldContextObject, FName InEffectID, FVector InSpawnLocation, FRotator InSpawnRotation, FVector InScale, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod) {
    return NAME_None;
}

bool URCEffectManager::ReleaseEffect(FName InEffectID) {
    return false;
}

void URCEffectManager::OnParticleFinished(UParticleSystemComponent* InPSComponent) {
}

void URCEffectManager::OnNiagaraFinished(UNiagaraComponent* InNComponent) {
}

void URCEffectManager::OnEffectSequenceFinished(URCEffectSequence* InEffectSequence) {
}

bool URCEffectManager::LoadEffect(FName InEffectID) {
    return false;
}

int32 URCEffectManager::GetManagedDataNum() {
    return 0;
}

FRCEffectManagedData URCEffectManager::GetManagedData(FName InManagedID) {
    return FRCEffectManagedData{};
}

bool URCEffectManager::EffectDestroy(FName InManagedID) {
    return false;
}

bool URCEffectManager::EffectDeactivate(FName InManagedID) {
    return false;
}

bool URCEffectManager::EffectActivate(FName InManagedID, bool bInReset) {
    return false;
}

bool URCEffectManager::CheckEffectLoaded(FName InEffectID) {
    return false;
}

bool URCEffectManager::CheckEffectActive(FName InManagedID) {
    return false;
}


