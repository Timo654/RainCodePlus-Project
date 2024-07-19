#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamVehicleTableRow.h"
#include "RCParamVehicleData.generated.h"

UCLASS(Blueprintable)
class URCParamVehicleData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamVehicleTableRow> Data;
    
    URCParamVehicleData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

