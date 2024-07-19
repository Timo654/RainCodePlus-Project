#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RCCameraManager.generated.h"

class ARCCameraActor;

UCLASS(Blueprintable)
class RC_API ARCCameraManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCCameraActor*> AllCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCCameraActor* CurrentCamera;
    
    ARCCameraManager(const FObjectInitializer& ObjectInitializer);

};

