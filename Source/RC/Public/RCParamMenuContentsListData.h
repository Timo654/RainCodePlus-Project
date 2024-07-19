#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamMenuContentsListTableRow.h"
#include "RCParamMenuContentsListData.generated.h"

UCLASS(Blueprintable)
class URCParamMenuContentsListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamMenuContentsListTableRow> Data;
    
    URCParamMenuContentsListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

