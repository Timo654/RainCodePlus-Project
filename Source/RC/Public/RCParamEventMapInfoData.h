#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamEventMapInfoTableRow.h"
#include "RCParamEventMapInfoData.generated.h"

UCLASS(Blueprintable)
class URCParamEventMapInfoData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamEventMapInfoTableRow> Data;
    
    URCParamEventMapInfoData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

