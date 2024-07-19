#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamEventCheckSubQuestSubLevelTableRow.h"
#include "RCParamEventCheckSubQuestSubLevelData.generated.h"

UCLASS(Blueprintable)
class URCParamEventCheckSubQuestSubLevelData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamEventCheckSubQuestSubLevelTableRow> Data;
    
    URCParamEventCheckSubQuestSubLevelData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

