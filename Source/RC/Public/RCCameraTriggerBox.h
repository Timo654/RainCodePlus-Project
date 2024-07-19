#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "RCCameraTriggerBox.generated.h"

UCLASS(Blueprintable)
class RC_API ARCCameraTriggerBox : public ATriggerBox {
    GENERATED_BODY()
public:
    ARCCameraTriggerBox(const FObjectInitializer& ObjectInitializer);

};

