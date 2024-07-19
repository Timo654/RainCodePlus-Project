#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamSequencerSoundTemplateTableRow.h"
#include "RCParamSequencerSoundTemplateData.generated.h"

UCLASS(Blueprintable)
class URCParamSequencerSoundTemplateData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamSequencerSoundTemplateTableRow> Data;
    
    URCParamSequencerSoundTemplateData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

