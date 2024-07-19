#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamEventMapBusStopInfoTableRow.h"
#include "RCParamEventMapBusStopInfoData.generated.h"

UCLASS(Blueprintable)
class URCParamEventMapBusStopInfoData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamEventMapBusStopInfoTableRow> Data;
    
    URCParamEventMapBusStopInfoData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

