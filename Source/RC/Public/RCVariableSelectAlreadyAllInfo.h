#pragma once
#include "CoreMinimal.h"
#include "RCVariableSelectAlreadyInfo.h"
#include "RCVariableSelectAlreadyAllInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableSelectAlreadyAllInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableSelectAlreadyInfo> SelectAlreadyList;
    
    FRCVariableSelectAlreadyAllInfo();
};

