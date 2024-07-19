#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamSystemTableRow.h"
#include "RCParamSystemData.generated.h"

UCLASS(Blueprintable)
class URCParamSystemData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamSystemTableRow> Data;
    
    URCParamSystemData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

