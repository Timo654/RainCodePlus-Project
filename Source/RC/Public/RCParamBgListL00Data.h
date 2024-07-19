#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamBgListL00TableRow.h"
#include "RCParamBgListL00Data.generated.h"

UCLASS(Blueprintable)
class URCParamBgListL00Data : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamBgListL00TableRow> Data;
    
    URCParamBgListL00Data();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

