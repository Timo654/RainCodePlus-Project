#pragma once
#include "CoreMinimal.h"
#include "RCActor.h"
#include "RCCharacterLookTargetActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCCharacterLookTargetActor : public ARCActor {
    GENERATED_BODY()
public:
    ARCCharacterLookTargetActor(const FObjectInitializer& ObjectInitializer);

};

