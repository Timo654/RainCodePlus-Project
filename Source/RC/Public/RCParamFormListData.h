#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamFormListTableRow.h"
#include "RCParamFormListData.generated.h"

UCLASS(Blueprintable)
class URCParamFormListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamFormListTableRow> Data;
    
    URCParamFormListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

