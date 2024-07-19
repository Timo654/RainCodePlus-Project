#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCPlayerMoveInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCPlayerMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    FRCPlayerMoveInfo();
};

