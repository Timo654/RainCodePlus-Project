#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerCapsule.h"
#include "RCTriggerCapsule.generated.h"

UCLASS(Blueprintable)
class RC_API ARCTriggerCapsule : public ATriggerCapsule {
    GENERATED_BODY()
public:
    ARCTriggerCapsule(const FObjectInitializer& ObjectInitializer);

};

