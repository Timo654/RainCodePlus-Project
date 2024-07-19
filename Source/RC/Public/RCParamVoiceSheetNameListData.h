#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamVoiceSheetNameListTableRow.h"
#include "RCParamVoiceSheetNameListData.generated.h"

UCLASS(Blueprintable)
class URCParamVoiceSheetNameListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamVoiceSheetNameListTableRow> Data;
    
    URCParamVoiceSheetNameListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

