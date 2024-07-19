#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamLevelListTableRow.h"
#include "RCParamLevelListData.generated.h"

UCLASS(Blueprintable)
class URCParamLevelListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamLevelListTableRow> Data;
    
    URCParamLevelListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

