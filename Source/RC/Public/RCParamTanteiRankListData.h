#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamTanteiRankListTableRow.h"
#include "RCParamTanteiRankListData.generated.h"

UCLASS(Blueprintable)
class URCParamTanteiRankListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamTanteiRankListTableRow> Data;
    
    URCParamTanteiRankListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

