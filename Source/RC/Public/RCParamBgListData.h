#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamBgListTableRow.h"
#include "RCParamBgListData.generated.h"

UCLASS(Blueprintable)
class URCParamBgListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamBgListTableRow> Data;
    
    URCParamBgListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

