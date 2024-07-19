#include "RCCheckActorBox.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ARCCheckActorBox::ARCCheckActorBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->Scene = (USceneComponent*)RootComponent;
    this->BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
    this->bPlayerHit = false;
    this->HalfHeight = 0.00f;
    this->Radius = 0.00f;
    this->BoxComp->SetupAttachment(RootComponent);
}

void ARCCheckActorBox::OnActorEndOverlapPlayerEntry(AActor* OverlappedActor, AActor* OtherActor) {
}

void ARCCheckActorBox::OnActorBeginOverlapPlayerEntry(AActor* OverlappedActor, AActor* OtherActor) {
}


