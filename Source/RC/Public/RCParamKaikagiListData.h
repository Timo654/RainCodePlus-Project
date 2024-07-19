#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamKaikagiListTableRow.h"
#include "RCParamKaikagiListData.generated.h"

UCLASS(Blueprintable)
class URCParamKaikagiListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamKaikagiListTableRow> Data;
    
    URCParamKaikagiListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

