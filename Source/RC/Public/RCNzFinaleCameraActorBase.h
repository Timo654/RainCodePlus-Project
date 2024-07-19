#pragma once
#include "CoreMinimal.h"
#include "EFinaleSceneType.h"
#include "RCCameraActor.h"
#include "RCNzFinaleCameraActorBase.generated.h"

UCLASS(Blueprintable)
class RC_API ARCNzFinaleCameraActorBase : public ARCCameraActor {
    GENERATED_BODY()
public:
    ARCNzFinaleCameraActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeDetectiveMode(EFinaleSceneType nextType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CameraZoomStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CameraZoomReturnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CameraZoomReturnEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CameraZoomEnd();
    
};

