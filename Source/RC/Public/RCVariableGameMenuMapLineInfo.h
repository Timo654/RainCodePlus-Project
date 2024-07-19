#pragma once
#include "CoreMinimal.h"
#include "ERCGameMenuStatus.h"
#include "RCVariableGameMenuMapLineInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableGameMenuMapLineInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapID1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapID2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCGameMenuStatus Status;
    
    FRCVariableGameMenuMapLineInfo();
};

