#pragma once
#include "CoreMinimal.h"
#include "EVehicleInitPositionLaneType.h"
#include "RCActor.h"
#include "RCVehicleTarget.generated.h"

UCLASS(Blueprintable)
class RC_API ARCVehicleTarget : public ARCActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleInitPositionLaneType firstSpawnIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lootIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float vehicleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float vehicleAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float curveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCurveManual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float curveRotValue;
    
    ARCVehicleTarget(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 GetRootIndex();
    
};

