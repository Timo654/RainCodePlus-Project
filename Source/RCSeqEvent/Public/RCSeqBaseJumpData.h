#pragma once
#include "CoreMinimal.h"
#include "ERCSeqBaseJumpType.h"
#include "RCSeqBaseJumpData.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqBaseJumpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCSeqBaseJumpType JumpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Seconds;
    
    RCSEQEVENT_API FRCSeqBaseJumpData();
};

