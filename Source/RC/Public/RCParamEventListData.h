#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamEventListTableRow.h"
#include "RCParamEventListData.generated.h"

UCLASS(Blueprintable)
class URCParamEventListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamEventListTableRow> Data;
    
    URCParamEventListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

