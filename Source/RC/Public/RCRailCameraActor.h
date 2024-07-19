#pragma once
#include "CoreMinimal.h"
#include "RCCameraActor.h"
#include "RCRailCameraActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCRailCameraActor : public ARCCameraActor {
    GENERATED_BODY()
public:
    ARCRailCameraActor(const FObjectInitializer& ObjectInitializer);

};

