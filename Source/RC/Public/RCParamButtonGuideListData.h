#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamButtonGuideListTableRow.h"
#include "RCParamButtonGuideListData.generated.h"

UCLASS(Blueprintable)
class URCParamButtonGuideListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamButtonGuideListTableRow> Data;
    
    URCParamButtonGuideListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

