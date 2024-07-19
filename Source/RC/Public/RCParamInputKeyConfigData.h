#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamInputKeyConfigTableRow.h"
#include "RCParamInputKeyConfigData.generated.h"

UCLASS(Blueprintable)
class URCParamInputKeyConfigData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamInputKeyConfigTableRow> Data;
    
    URCParamInputKeyConfigData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

