#pragma once
#include "CoreMinimal.h"
#include "RCVariableGameMenuKaikagiInfo.h"
#include "RCVariableGameMenuKaikagiMenuInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableGameMenuKaikagiMenuInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableGameMenuKaikagiInfo> KaikagiList;
    
    FRCVariableGameMenuKaikagiMenuInfo();
};

