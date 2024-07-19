#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamInputKeyTableRow.h"
#include "RCParamInputKeyData.generated.h"

UCLASS(Blueprintable)
class URCParamInputKeyData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamInputKeyTableRow> Data;
    
    URCParamInputKeyData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

