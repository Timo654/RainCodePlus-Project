#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamSoundIdListTemplateTableRow.h"
#include "RCParamSoundIdListTemplateData.generated.h"

UCLASS(Blueprintable)
class URCParamSoundIdListTemplateData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamSoundIdListTemplateTableRow> Data;
    
    URCParamSoundIdListTemplateData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

