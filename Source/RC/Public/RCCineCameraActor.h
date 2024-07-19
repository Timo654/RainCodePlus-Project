#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "RCCineCameraActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCCineCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rainDistanceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rainHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useOffsetFlag;
    
    ARCCineCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUseOffsetFlag(bool bUseOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetRainHeightOffset(float heightOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetRainDistanceOffset(float disntaceOffset);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRain();
    
    UFUNCTION(BlueprintCallable)
    void AtouchRain(float lenght, bool Zfollow, float OffsetZ);
    
};

