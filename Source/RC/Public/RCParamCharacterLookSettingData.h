#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamCharacterLookSettingTableRow.h"
#include "RCParamCharacterLookSettingData.generated.h"

UCLASS(Blueprintable)
class URCParamCharacterLookSettingData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamCharacterLookSettingTableRow> Data;
    
    URCParamCharacterLookSettingData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

