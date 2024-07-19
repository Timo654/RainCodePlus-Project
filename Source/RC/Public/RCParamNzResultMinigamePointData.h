#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzResultMinigamePointTableRow.h"
#include "RCParamNzResultMinigamePointData.generated.h"

UCLASS(Blueprintable)
class URCParamNzResultMinigamePointData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzResultMinigamePointTableRow> Data;
    
    URCParamNzResultMinigamePointData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

