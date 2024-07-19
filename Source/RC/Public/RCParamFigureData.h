#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamFigureTableRow.h"
#include "RCParamFigureData.generated.h"

UCLASS(Blueprintable)
class URCParamFigureData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamFigureTableRow> Data;
    
    URCParamFigureData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

