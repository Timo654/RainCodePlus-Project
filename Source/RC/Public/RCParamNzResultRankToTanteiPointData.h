#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzResultRankToTanteiPointTableRow.h"
#include "RCParamNzResultRankToTanteiPointData.generated.h"

UCLASS(Blueprintable)
class URCParamNzResultRankToTanteiPointData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzResultRankToTanteiPointTableRow> Data;
    
    URCParamNzResultRankToTanteiPointData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

