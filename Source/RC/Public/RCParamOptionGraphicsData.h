#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamOptionGraphicsTableRow.h"
#include "RCParamOptionGraphicsData.generated.h"

UCLASS(Blueprintable)
class URCParamOptionGraphicsData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamOptionGraphicsTableRow> Data;
    
    URCParamOptionGraphicsData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

