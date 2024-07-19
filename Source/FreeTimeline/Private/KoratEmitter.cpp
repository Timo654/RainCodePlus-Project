#include "KoratEmitter.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"

AKoratEmitter::AKoratEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USceneComponent>(TEXT("AttachCompo")).SetDefaultSubobjectClass<UParticleSystemComponent>(TEXT("ParticleSystemComponent0"))) {
    this->ExecuteActor = NULL;
    this->AttachRootCompo = (USceneComponent*)RootComponent;
    this->bUseTerrainRay = false;
    this->TerrainSocketName = TEXT("NULL");
}


