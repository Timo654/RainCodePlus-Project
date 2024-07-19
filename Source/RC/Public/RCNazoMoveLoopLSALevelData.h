#pragma once
#include "CoreMinimal.h"
#include "RCNazoMoveLoopLSALaneData.h"
#include "RCNazoMoveLoopLSALaneSettings.h"
#include "RCNazoMoveLoopLSALevelData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoMoveLoopLSALevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoMoveLoopLSALaneSettings> LaneSettingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoMoveLoopLSALaneData> LaneDataArray;
    
    RC_API FRCNazoMoveLoopLSALevelData();
};

