#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamSocketListTableRow.h"
#include "RCParamSocketListData.generated.h"

UCLASS(Blueprintable)
class URCParamSocketListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamSocketListTableRow> Data;
    
    URCParamSocketListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

