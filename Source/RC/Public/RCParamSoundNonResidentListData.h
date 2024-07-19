#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamSoundNonResidentListTableRow.h"
#include "RCParamSoundNonResidentListData.generated.h"

UCLASS(Blueprintable)
class URCParamSoundNonResidentListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamSoundNonResidentListTableRow> Data;
    
    URCParamSoundNonResidentListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

