#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamVariableGameTableRow.h"
#include "RCParamVariableGameData.generated.h"

UCLASS(Blueprintable)
class URCParamVariableGameData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamVariableGameTableRow> Data;
    
    URCParamVariableGameData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

