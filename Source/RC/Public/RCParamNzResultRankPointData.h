#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzResultRankPointTableRow.h"
#include "RCParamNzResultRankPointData.generated.h"

UCLASS(Blueprintable)
class URCParamNzResultRankPointData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzResultRankPointTableRow> Data;
    
    URCParamNzResultRankPointData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

