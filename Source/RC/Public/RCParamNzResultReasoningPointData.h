#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzResultReasoningPointTableRow.h"
#include "RCParamNzResultReasoningPointData.generated.h"

UCLASS(Blueprintable)
class URCParamNzResultReasoningPointData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzResultReasoningPointTableRow> Data;
    
    URCParamNzResultReasoningPointData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

