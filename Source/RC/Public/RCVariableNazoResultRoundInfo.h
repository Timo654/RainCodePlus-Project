#pragma once
#include "CoreMinimal.h"
#include "RCVariableNazoResultRoundInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableNazoResultRoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Round;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContinueCount;
    
    FRCVariableNazoResultRoundInfo();
};

