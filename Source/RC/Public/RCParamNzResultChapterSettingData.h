#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzResultChapterSettingTableRow.h"
#include "RCParamNzResultChapterSettingData.generated.h"

UCLASS(Blueprintable)
class URCParamNzResultChapterSettingData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzResultChapterSettingTableRow> Data;
    
    URCParamNzResultChapterSettingData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

