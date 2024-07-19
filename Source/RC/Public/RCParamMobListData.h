#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamMobListTableRow.h"
#include "RCParamMobListData.generated.h"

UCLASS(Blueprintable)
class URCParamMobListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamMobListTableRow> Data;
    
    URCParamMobListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

