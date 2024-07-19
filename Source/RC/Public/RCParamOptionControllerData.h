#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamOptionControllerTableRow.h"
#include "RCParamOptionControllerData.generated.h"

UCLASS(Blueprintable)
class URCParamOptionControllerData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamOptionControllerTableRow> Data;
    
    URCParamOptionControllerData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

