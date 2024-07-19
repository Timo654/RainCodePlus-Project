#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamStartupTextTableRow.h"
#include "RCParamStartupTextData.generated.h"

UCLASS(Blueprintable)
class URCParamStartupTextData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamStartupTextTableRow> Data;
    
    URCParamStartupTextData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

