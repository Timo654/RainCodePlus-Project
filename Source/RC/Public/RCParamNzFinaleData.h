#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzFinaleTableRow.h"
#include "RCParamNzFinaleData.generated.h"

UCLASS(Blueprintable)
class URCParamNzFinaleData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzFinaleTableRow> Data;
    
    URCParamNzFinaleData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

