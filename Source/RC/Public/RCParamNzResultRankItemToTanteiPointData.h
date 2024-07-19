#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzResultRankItemToTanteiPointTableRow.h"
#include "RCParamNzResultRankItemToTanteiPointData.generated.h"

UCLASS(Blueprintable)
class URCParamNzResultRankItemToTanteiPointData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzResultRankItemToTanteiPointTableRow> Data;
    
    URCParamNzResultRankItemToTanteiPointData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

