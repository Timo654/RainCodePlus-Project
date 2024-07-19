#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamInputIDTableRow.h"
#include "RCParamInputIDData.generated.h"

UCLASS(Blueprintable)
class URCParamInputIDData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamInputIDTableRow> Data;
    
    URCParamInputIDData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

