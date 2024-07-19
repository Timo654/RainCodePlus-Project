#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamRealEventSettingDataAssetRecord.h"
#include "RCParamRealEventSettingDataAsset.generated.h"

UCLASS(Blueprintable)
class URCParamRealEventSettingDataAsset : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamRealEventSettingDataAssetRecord> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Filename;
    
    URCParamRealEventSettingDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

