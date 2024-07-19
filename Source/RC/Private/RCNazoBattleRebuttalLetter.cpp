#include "RCNazoBattleRebuttalLetter.h"
#include "Components/DecalComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "RCText3DMeshedComponent.h"

ARCNazoBattleRebuttalLetter::ARCNazoBattleRebuttalLetter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->RebuttalLetterMesh = NULL;
    this->RebuttalLetterText3D = CreateDefaultSubobject<URCText3DMeshedComponent>(TEXT("RebuttalLetterText"));
    this->DecorationEffect = NULL;
    this->HitBoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HitBoxMesh"));
    this->JustAvoidBoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("JustAvoidBoxMesh"));
    this->ShadowDecal = CreateDefaultSubobject<UDecalComponent>(TEXT("ShadowDecal"));
    this->SlashedMesh = NULL;
    this->AppearEffectInLp = NULL;
    this->AppearEffectOt = NULL;
    this->AttackLineEffect = NULL;
    this->EffectIn = NULL;
    this->EffectLp = NULL;
    this->EffectOt = NULL;
    this->RebuttalLetterMeshMaterial = NULL;
    this->RebuttalLetterText3DFrontMaterial = NULL;
    this->RebuttalLetterText3DEdgeMaterial = NULL;
    this->ShadowDecalMaterial = NULL;
    this->SlashedMeshMaterial = NULL;
    this->NiagaraIn = NULL;
    this->NiagaraLp = NULL;
    this->NiagaraOt = NULL;
    this->RebuttalLetterTexture = NULL;
    this->NowSpeed = 0.00f;
    this->ShadowDecal->SetupAttachment(RootComponent);
    this->RebuttalLetterText3D->SetupAttachment(RootComponent);
    this->HitBoxMesh->SetupAttachment(RebuttalLetterText3D);
    this->JustAvoidBoxMesh->SetupAttachment(RebuttalLetterText3D);
}

void ARCNazoBattleRebuttalLetter::SetHitCharaEnable(bool InHitCharaEnable) {
}

void ARCNazoBattleRebuttalLetter::OnJustAvoidBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ARCNazoBattleRebuttalLetter::OnJustAvoidBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ARCNazoBattleRebuttalLetter::OnHitBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


