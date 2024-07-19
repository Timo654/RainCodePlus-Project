#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzCriminalCameraSettingTableRow.h"
#include "RCParamNzCriminalCameraSettingData.generated.h"

UCLASS(Blueprintable)
class URCParamNzCriminalCameraSettingData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzCriminalCameraSettingTableRow> Data;
    
    URCParamNzCriminalCameraSettingData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

