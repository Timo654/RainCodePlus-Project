#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzResultMinigameTextTableRow.h"
#include "RCParamNzResultMinigameTextData.generated.h"

UCLASS(Blueprintable)
class URCParamNzResultMinigameTextData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzResultMinigameTextTableRow> Data;
    
    URCParamNzResultMinigameTextData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

