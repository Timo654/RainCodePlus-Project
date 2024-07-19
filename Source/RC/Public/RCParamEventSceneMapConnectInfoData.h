#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamEventSceneMapConnectInfoTableRow.h"
#include "RCParamEventSceneMapConnectInfoData.generated.h"

UCLASS(Blueprintable)
class URCParamEventSceneMapConnectInfoData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamEventSceneMapConnectInfoTableRow> Data;
    
    URCParamEventSceneMapConnectInfoData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

