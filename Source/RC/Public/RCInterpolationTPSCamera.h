#pragma once
#include "CoreMinimal.h"
#include "RCTPSCamera.h"
#include "RCInterpolationTPSCamera.generated.h"

UCLASS(Blueprintable)
class RC_API ARCInterpolationTPSCamera : public ARCTPSCamera {
    GENERATED_BODY()
public:
    ARCInterpolationTPSCamera(const FObjectInitializer& ObjectInitializer);

};

