#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamVoiceDataPathListTableRow.h"
#include "RCParamVoiceDataPathListData.generated.h"

UCLASS(Blueprintable)
class URCParamVoiceDataPathListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCParamVoiceDataPathListTableRow> Data;
    
    URCParamVoiceDataPathListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

