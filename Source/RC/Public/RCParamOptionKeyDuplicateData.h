#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamOptionKeyDuplicateTableRow.h"
#include "RCParamOptionKeyDuplicateData.generated.h"

UCLASS(Blueprintable)
class URCParamOptionKeyDuplicateData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamOptionKeyDuplicateTableRow> Data;
    
    URCParamOptionKeyDuplicateData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

