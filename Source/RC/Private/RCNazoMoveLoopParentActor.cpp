#include "RCNazoMoveLoopParentActor.h"
#include "Components/SceneComponent.h"

ARCNazoMoveLoopParentActor::ARCNazoMoveLoopParentActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->ReentryActorClassArray.AddDefaulted(7);
}

void ARCNazoMoveLoopParentActor::ReentryActors() {
}


