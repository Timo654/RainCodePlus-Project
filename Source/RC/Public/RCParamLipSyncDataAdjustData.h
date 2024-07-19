#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamLipSyncDataAdjustTableRow.h"
#include "RCParamLipSyncDataAdjustData.generated.h"

UCLASS(Blueprintable)
class URCParamLipSyncDataAdjustData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamLipSyncDataAdjustTableRow> Data;
    
    URCParamLipSyncDataAdjustData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

