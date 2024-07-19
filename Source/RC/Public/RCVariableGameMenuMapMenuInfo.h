#pragma once
#include "CoreMinimal.h"
#include "RCVariableGameMenuMapIconInfo.h"
#include "RCVariableGameMenuMapLineInfo.h"
#include "RCVariableGameMenuMapMenuInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableGameMenuMapMenuInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableGameMenuMapIconInfo> IconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableGameMenuMapLineInfo> LineList;
    
    FRCVariableGameMenuMapMenuInfo();
};

