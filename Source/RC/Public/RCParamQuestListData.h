#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamQuestListTableRow.h"
#include "RCParamQuestListData.generated.h"

UCLASS(Blueprintable)
class URCParamQuestListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamQuestListTableRow> Data;
    
    URCParamQuestListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

