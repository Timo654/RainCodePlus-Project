#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "RCTriggerVolume.generated.h"

UCLASS(Blueprintable)
class RC_API ARCTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    ARCTriggerVolume(const FObjectInitializer& ObjectInitializer);

};

