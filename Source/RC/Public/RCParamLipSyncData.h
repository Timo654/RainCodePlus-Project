#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamLipSyncTableRow.h"
#include "RCParamLipSyncData.generated.h"

UCLASS(Blueprintable)
class URCParamLipSyncData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamLipSyncTableRow> Data;
    
    URCParamLipSyncData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

