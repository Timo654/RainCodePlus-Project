#include "RCMojimichiManagerActor.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"

ARCMojimichiManagerActor::ARCMojimichiManagerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->FractureBP = NULL;
    this->ConstructBP = NULL;
    this->targetTexture = NULL;
    this->DandDStart = false;
    this->OrthogonalMetrics = 1000.00f;
    this->DensityScale = 1.00f;
    this->Widget = NULL;
    this->m_CameraActor = NULL;
    this->NiagaraText = NULL;
    this->RenderTarget = NULL;
    this->ParticleCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("ParticleCaptureComponent"));
    this->ParticleRT = NULL;
    this->TempBuffer = NULL;
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->TxtMat = NULL;
    this->EffectPlane = NULL;
    this->DebugTexture = NULL;
    this->InternalResolutionMetrics = 0;
    this->RTMetrics = 0.00f;
    this->DisolveCurve = NULL;
    this->Divisor = 1;
    this->RTSingleChannel = false;
    this->ParticleCapture->SetupAttachment(RootComponent);
}

void ARCMojimichiManagerActor::StopFracture() {
}

bool ARCMojimichiManagerActor::StartFracture() {
    return false;
}

bool ARCMojimichiManagerActor::StartConstructionWithActorTag(UWorld* World, FName ActorTag) {
    return false;
}

bool ARCMojimichiManagerActor::StartConstruction(UWorld* World) {
    return false;
}

bool ARCMojimichiManagerActor::SpawnConstructor(UWorld* World, AActor* Actor, UMeshComponent* Component) {
    return false;
}

bool ARCMojimichiManagerActor::ShowText() {
    return false;
}

bool ARCMojimichiManagerActor::DisolveText(float DisolveTime) {
    return false;
}


