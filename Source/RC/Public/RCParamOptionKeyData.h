#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamOptionKeyTableRow.h"
#include "RCParamOptionKeyData.generated.h"

UCLASS(Blueprintable)
class URCParamOptionKeyData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamOptionKeyTableRow> Data;
    
    URCParamOptionKeyData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

