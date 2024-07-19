#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamSoundFormatTableRow.h"
#include "RCParamSoundFormatData.generated.h"

UCLASS(Blueprintable)
class URCParamSoundFormatData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamSoundFormatTableRow> Data;
    
    URCParamSoundFormatData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

