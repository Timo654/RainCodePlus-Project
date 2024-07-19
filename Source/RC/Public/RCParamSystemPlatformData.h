#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamSystemPlatformTableRow.h"
#include "RCParamSystemPlatformData.generated.h"

UCLASS(Blueprintable)
class URCParamSystemPlatformData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamSystemPlatformTableRow> Data;
    
    URCParamSystemPlatformData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

