#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamOptionCommonTableRow.h"
#include "RCParamOptionCommonData.generated.h"

UCLASS(Blueprintable)
class URCParamOptionCommonData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamOptionCommonTableRow> Data;
    
    URCParamOptionCommonData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

