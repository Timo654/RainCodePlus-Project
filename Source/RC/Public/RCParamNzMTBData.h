#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzMTBTableRow.h"
#include "RCParamNzMTBData.generated.h"

UCLASS(Blueprintable)
class URCParamNzMTBData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzMTBTableRow> Data;
    
    URCParamNzMTBData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

