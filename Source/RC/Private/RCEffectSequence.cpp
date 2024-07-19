#include "RCEffectSequence.h"

URCEffectSequence::URCEffectSequence() {
    this->LevelSequence = NULL;
    this->LevelSequenceActor = NULL;
    this->LevelSequencePlayer = NULL;
    this->AttachToComponent = NULL;
}

URCEffectSequence* URCEffectSequence::SpawnEffectSequenceAttached(ULevelSequence* InLevelSequence, USceneComponent* InAttachToComponent, FName InAttachPointName, FVector InLocation, FRotator InRotation, FVector InScale, TEnumAsByte<EAttachLocation::Type> InLocationType, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod) {
    return NULL;
}

URCEffectSequence* URCEffectSequence::SpawnEffectSequenceAtLocation(UObject* InWorldContextObject, ULevelSequence* InLevelSequence, FVector InSpawnLocation, FRotator InSpawnRotation, FVector InScale, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod) {
    return NULL;
}

void URCEffectSequence::LevelSequenceFinished() {
}

bool URCEffectSequence::IsActive() {
    return false;
}

bool URCEffectSequence::Destroy() {
    return false;
}

bool URCEffectSequence::Deactivate() {
    return false;
}

bool URCEffectSequence::Activate(bool bInReset) {
    return false;
}


