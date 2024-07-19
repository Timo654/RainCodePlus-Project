#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamSoundResidentListTableRow.h"
#include "RCParamSoundResidentListData.generated.h"

UCLASS(Blueprintable)
class URCParamSoundResidentListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamSoundResidentListTableRow> Data;
    
    URCParamSoundResidentListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

