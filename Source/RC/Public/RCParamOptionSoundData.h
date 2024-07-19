#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamOptionSoundTableRow.h"
#include "RCParamOptionSoundData.generated.h"

UCLASS(Blueprintable)
class URCParamOptionSoundData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamOptionSoundTableRow> Data;
    
    URCParamOptionSoundData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

