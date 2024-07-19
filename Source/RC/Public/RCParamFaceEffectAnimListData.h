#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamFaceEffectAnimListTableRow.h"
#include "RCParamFaceEffectAnimListData.generated.h"

UCLASS(Blueprintable)
class URCParamFaceEffectAnimListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamFaceEffectAnimListTableRow> Data;
    
    URCParamFaceEffectAnimListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

