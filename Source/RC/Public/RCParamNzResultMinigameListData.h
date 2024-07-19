#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzResultMinigameListTableRow.h"
#include "RCParamNzResultMinigameListData.generated.h"

UCLASS(Blueprintable)
class URCParamNzResultMinigameListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzResultMinigameListTableRow> Data;
    
    URCParamNzResultMinigameListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

