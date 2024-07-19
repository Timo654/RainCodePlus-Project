#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "RCPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class RC_API ARCPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    ARCPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReloadCameras();
    
};

