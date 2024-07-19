#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamSubQuestTextTableRow.h"
#include "RCParamSubQuestTextData.generated.h"

UCLASS(Blueprintable)
class URCParamSubQuestTextData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamSubQuestTextTableRow> Data;
    
    URCParamSubQuestTextData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

