#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzMTBChTableRow.h"
#include "RCParamNzMTBChData.generated.h"

UCLASS(Blueprintable)
class URCParamNzMTBChData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzMTBChTableRow> Data;
    
    URCParamNzMTBChData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

