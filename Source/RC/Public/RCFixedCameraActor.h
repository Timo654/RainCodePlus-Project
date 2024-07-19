#pragma once
#include "CoreMinimal.h"
#include "RCCameraActor.h"
#include "RCFixedCameraActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCFixedCameraActor : public ARCCameraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookAt;
    
public:
    ARCFixedCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveRain();
    
    UFUNCTION(BlueprintCallable)
    void AtouchRain(float lenght, bool Zfollow, float OffsetZ);
    
};

