#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamVariableSceneTableRow.h"
#include "RCParamVariableSceneData.generated.h"

UCLASS(Blueprintable)
class URCParamVariableSceneData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamVariableSceneTableRow> Data;
    
    URCParamVariableSceneData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

