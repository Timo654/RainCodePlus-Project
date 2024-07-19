#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamEventCheckReloadSubLevelTableRow.h"
#include "RCParamEventCheckReloadSubLevelData.generated.h"

UCLASS(Blueprintable)
class URCParamEventCheckReloadSubLevelData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamEventCheckReloadSubLevelTableRow> Data;
    
    URCParamEventCheckReloadSubLevelData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

