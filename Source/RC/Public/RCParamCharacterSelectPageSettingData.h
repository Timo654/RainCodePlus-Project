#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamCharacterSelectPageSettingTableRow.h"
#include "RCParamCharacterSelectPageSettingData.generated.h"

UCLASS(Blueprintable)
class URCParamCharacterSelectPageSettingData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamCharacterSelectPageSettingTableRow> Data;
    
    URCParamCharacterSelectPageSettingData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

