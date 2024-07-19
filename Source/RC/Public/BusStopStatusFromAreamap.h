#pragma once
#include "CoreMinimal.h"
#include "ERCRealEventMapConnectBusStopStatus.h"
#include "BusStopStatusFromAreamap.generated.h"

USTRUCT(BlueprintType)
struct RC_API FBusStopStatusFromAreamap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCRealEventMapConnectBusStopStatus Status;
    
    FBusStopStatusFromAreamap();
};

