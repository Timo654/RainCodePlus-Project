#include "RCSequenceFollowTarget.h"
#include "Components/SceneComponent.h"

ARCSequenceFollowTarget::ARCSequenceFollowTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->FollowActor = NULL;
}


