#pragma once
#include "CoreMinimal.h"
#include "RCVariableLogInfo.h"
#include "RCVariableLogList.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableLogList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastLogNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableLogInfo> LogList;
    
    FRCVariableLogList();
};

