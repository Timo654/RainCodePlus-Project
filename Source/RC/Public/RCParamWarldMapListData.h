#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamWarldMapListTableRow.h"
#include "RCParamWarldMapListData.generated.h"

UCLASS(Blueprintable)
class URCParamWarldMapListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamWarldMapListTableRow> Data;
    
    URCParamWarldMapListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

