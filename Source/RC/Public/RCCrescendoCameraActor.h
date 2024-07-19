#pragma once
#include "CoreMinimal.h"
#include "RCCameraActor.h"
#include "RCCrescendoCameraActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCCrescendoCameraActor : public ARCCameraActor {
    GENERATED_BODY()
public:
    ARCCrescendoCameraActor(const FObjectInitializer& ObjectInitializer);

};

