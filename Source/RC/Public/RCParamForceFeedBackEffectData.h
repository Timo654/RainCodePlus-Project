#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamForceFeedBackEffectTableRow.h"
#include "RCParamForceFeedBackEffectData.generated.h"

UCLASS(Blueprintable)
class URCParamForceFeedBackEffectData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamForceFeedBackEffectTableRow> Data;
    
    URCParamForceFeedBackEffectData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

