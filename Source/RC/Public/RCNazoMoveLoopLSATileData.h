#pragma once
#include "CoreMinimal.h"
#include "RCNazoLoopLSATileData.h"
#include "RCNazoMoveLoopLSATileData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoMoveLoopLSATileData : public FRCNazoLoopLSATileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    RC_API FRCNazoMoveLoopLSATileData();
};

