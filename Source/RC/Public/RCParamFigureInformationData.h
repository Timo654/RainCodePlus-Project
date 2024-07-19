#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamFigureInformationTableRow.h"
#include "RCParamFigureInformationData.generated.h"

UCLASS(Blueprintable)
class URCParamFigureInformationData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamFigureInformationTableRow> Data;
    
    URCParamFigureInformationData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

