#include "RCNazoPlayableLoopSequenceParentActor.h"
#include "Components/SceneComponent.h"

ARCNazoPlayableLoopSequenceParentActor::ARCNazoPlayableLoopSequenceParentActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->SequenceActor = NULL;
}


