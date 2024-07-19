#pragma once
#include "CoreMinimal.h"
#include "ERCNazoMoveLoopLSATalkState.h"
#include "RCNazoMoveLoopLSATalkSettings.h"
#include "RCNazoMoveLoopLSATalkData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoMoveLoopLSATalkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCNazoMoveLoopLSATalkState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoMoveLoopLSATalkSettings CurrentTalkSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoMoveLoopLSATalkSettings NextTalkSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextIndex;
    
    RC_API FRCNazoMoveLoopLSATalkData();
};

