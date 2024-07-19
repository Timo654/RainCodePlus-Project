#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamTitleMenuListTableRow.h"
#include "RCParamTitleMenuListData.generated.h"

UCLASS(Blueprintable)
class URCParamTitleMenuListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCParamTitleMenuListTableRow> Data;
    
    URCParamTitleMenuListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

