#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCRealEventBusStopInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCRealEventBusStopInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    FRCRealEventBusStopInfo();
};

