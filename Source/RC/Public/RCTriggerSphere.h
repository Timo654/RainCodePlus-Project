#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerSphere.h"
#include "RCTriggerSphere.generated.h"

UCLASS(Blueprintable)
class RC_API ARCTriggerSphere : public ATriggerSphere {
    GENERATED_BODY()
public:
    ARCTriggerSphere(const FObjectInitializer& ObjectInitializer);

};

