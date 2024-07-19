#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RCCharacterViewerActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCCharacterViewerActor : public AActor {
    GENERATED_BODY()
public:
    ARCCharacterViewerActor(const FObjectInitializer& ObjectInitializer);

};

