#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamEnviromentSoundTableRow.h"
#include "RCParamEnviromentSoundData.generated.h"

UCLASS(Blueprintable)
class URCParamEnviromentSoundData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamEnviromentSoundTableRow> Data;
    
    URCParamEnviromentSoundData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

