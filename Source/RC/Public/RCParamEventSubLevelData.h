#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamEventSubLevelTableRow.h"
#include "RCParamEventSubLevelData.generated.h"

UCLASS(Blueprintable)
class URCParamEventSubLevelData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamEventSubLevelTableRow> Data;
    
    URCParamEventSubLevelData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

