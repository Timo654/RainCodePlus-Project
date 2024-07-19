#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "RCCameraActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    ARCCameraActor(const FObjectInitializer& ObjectInitializer);

};

