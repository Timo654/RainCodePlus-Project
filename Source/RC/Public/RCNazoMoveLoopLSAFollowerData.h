#pragma once
#include "CoreMinimal.h"
#include "RCNazoLoopLSAFollowerData.h"
#include "RCNazoMoveLoopLSAFollowerData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoMoveLoopLSAFollowerData : public FRCNazoLoopLSAFollowerData {
    GENERATED_BODY()
public:
    RC_API FRCNazoMoveLoopLSAFollowerData();
};

