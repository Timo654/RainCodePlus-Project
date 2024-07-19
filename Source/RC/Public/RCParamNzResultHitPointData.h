#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzResultHitPointTableRow.h"
#include "RCParamNzResultHitPointData.generated.h"

UCLASS(Blueprintable)
class URCParamNzResultHitPointData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzResultHitPointTableRow> Data;
    
    URCParamNzResultHitPointData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

