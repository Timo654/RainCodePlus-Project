#pragma once
#include "CoreMinimal.h"
#include "RCSequenceTalkJumpData.generated.h"

class ULevelSequencePlayer;

USTRUCT(BlueprintType)
struct FRCSequenceTalkJumpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* SequencePlayer;
    
    RC_API FRCSequenceTalkJumpData();
};

