#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamRainEffectListTableRow.h"
#include "RCParamRainEffectListData.generated.h"

UCLASS(Blueprintable)
class URCParamRainEffectListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamRainEffectListTableRow> Data;
    
    URCParamRainEffectListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

