#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamCharacterSettingDataAssetRecord.h"
#include "RCParamCharacterSettingDataAsset.generated.h"

UCLASS(Blueprintable)
class URCParamCharacterSettingDataAsset : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamCharacterSettingDataAssetRecord> Data;
    
    URCParamCharacterSettingDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

