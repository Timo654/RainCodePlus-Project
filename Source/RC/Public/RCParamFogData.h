#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamFogTableRow.h"
#include "RCParamFogData.generated.h"

UCLASS(Blueprintable)
class URCParamFogData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamFogTableRow> Data;
    
    URCParamFogData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

