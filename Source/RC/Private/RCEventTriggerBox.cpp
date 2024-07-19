#include "RCEventTriggerBox.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ARCEventTriggerBox::ARCEventTriggerBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->Scene = (USceneComponent*)RootComponent;
    this->BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
    this->BoxComp->SetupAttachment(RootComponent);
}


