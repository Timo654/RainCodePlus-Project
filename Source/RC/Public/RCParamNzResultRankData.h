#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzResultRankTableRow.h"
#include "RCParamNzResultRankData.generated.h"

UCLASS(Blueprintable)
class URCParamNzResultRankData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzResultRankTableRow> Data;
    
    URCParamNzResultRankData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

