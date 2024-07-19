#pragma once
#include "CoreMinimal.h"
#include "EVehicleLaneType.h"
#include "RCRunningVehicleData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRCRunningVehicleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* pVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleLaneType laneType;
    
    RC_API FRCRunningVehicleData();
};

