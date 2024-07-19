#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamEventMapConnectInfoTableRow.h"
#include "RCParamEventMapConnectInfoData.generated.h"

UCLASS(Blueprintable)
class URCParamEventMapConnectInfoData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamEventMapConnectInfoTableRow> Data;
    
    URCParamEventMapConnectInfoData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

