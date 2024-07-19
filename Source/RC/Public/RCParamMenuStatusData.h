#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamMenuStatusTableRow.h"
#include "RCParamMenuStatusData.generated.h"

UCLASS(Blueprintable)
class URCParamMenuStatusData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamMenuStatusTableRow> Data;
    
    URCParamMenuStatusData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

