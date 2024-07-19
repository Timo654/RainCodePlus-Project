#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzResultMinigameTypeTableRow.h"
#include "RCParamNzResultMinigameTypeData.generated.h"

UCLASS(Blueprintable)
class URCParamNzResultMinigameTypeData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzResultMinigameTypeTableRow> Data;
    
    URCParamNzResultMinigameTypeData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

