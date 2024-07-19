#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamTipsListTableRow.h"
#include "RCParamTipsListData.generated.h"

UCLASS(Blueprintable)
class URCParamTipsListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamTipsListTableRow> Data;
    
    URCParamTipsListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

