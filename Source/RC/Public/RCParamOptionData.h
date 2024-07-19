#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamOptionTableRow.h"
#include "RCParamOptionData.generated.h"

UCLASS(Blueprintable)
class URCParamOptionData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamOptionTableRow> Data;
    
    URCParamOptionData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

