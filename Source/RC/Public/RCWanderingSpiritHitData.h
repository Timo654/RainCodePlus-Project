#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCWanderingSpiritHitData.generated.h"

USTRUCT(BlueprintType)
struct FRCWanderingSpiritHitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitPos;
    
    RC_API FRCWanderingSpiritHitData();
};

