#include "RCAmatanPawnScript.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"

ARCAmatanPawnScript::ARCAmatanPawnScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->AutoPossessPlayer = EAutoReceiveInput::Player0;
    this->SkeletalMeshCompo = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->CameraCompo = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->NiagaraActor = NULL;
    this->AnimSequences.AddDefaulted(2);
    this->ParticleSystem = NULL;
    this->SkeletalMeshCompo->SetupAttachment(RootComponent);
    this->CameraCompo->SetupAttachment(RootComponent);
}

void ARCAmatanPawnScript::SetPostEffectWeight(int32 Index, float Weight) {
}

void ARCAmatanPawnScript::SetEffectOffset(float Distance, float Height) {
}

float ARCAmatanPawnScript::Play_APush() {
    return 0.0f;
}

float ARCAmatanPawnScript::Play_APull() {
    return 0.0f;
}

float ARCAmatanPawnScript::Pause_Anim() {
    return 0.0f;
}

USkeletalMeshComponent* ARCAmatanPawnScript::GetSkeletalMeshComponent() {
    return NULL;
}

float ARCAmatanPawnScript::GetPostEffectWeight(int32 Index) {
    return 0.0f;
}

UCapsuleComponent* ARCAmatanPawnScript::GetCapsuleComponent() {
    return NULL;
}

float ARCAmatanPawnScript::CalcDurationForAutoRotationYaw(AActor* Dist) {
    return 0.0f;
}

float ARCAmatanPawnScript::CalcDurationForAutoMove(AActor* Dist) {
    return 0.0f;
}

void ARCAmatanPawnScript::AutoPilotRotate(FRotator NewRotate) {
}

void ARCAmatanPawnScript::AutoPilotMove(FVector NewPosition, bool Teleport, bool IgnoreEvent) {
}

void ARCAmatanPawnScript::AutoPilot(FVector NewPosition, FRotator NewRotate, bool Teleport, bool IgnoreEvent) {
}


