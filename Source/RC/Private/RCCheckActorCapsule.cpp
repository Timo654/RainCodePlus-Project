#include "RCCheckActorCapsule.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"

ARCCheckActorCapsule::ARCCheckActorCapsule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->Scene = (USceneComponent*)RootComponent;
    this->CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionComp"));
    this->HalfHeight = 0.00f;
    this->Radius = 0.00f;
    this->CapsuleComp->SetupAttachment(RootComponent);
}


