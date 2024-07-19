#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamLipSyncForTextIDTableRow.h"
#include "RCParamLipSyncForTextIDData.generated.h"

UCLASS(Blueprintable)
class URCParamLipSyncForTextIDData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCParamLipSyncForTextIDTableRow> Data;
    
    URCParamLipSyncForTextIDData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

