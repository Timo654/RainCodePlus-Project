#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamLipSyncCharaIDListTableRow.h"
#include "RCParamLipSyncCharaIDListData.generated.h"

UCLASS(Blueprintable)
class URCParamLipSyncCharaIDListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCParamLipSyncCharaIDListTableRow> Data;
    
    URCParamLipSyncCharaIDListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

