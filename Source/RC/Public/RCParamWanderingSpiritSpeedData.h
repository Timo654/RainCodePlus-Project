#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamWanderingSpiritSpeedTableRow.h"
#include "RCParamWanderingSpiritSpeedData.generated.h"

UCLASS(Blueprintable)
class URCParamWanderingSpiritSpeedData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamWanderingSpiritSpeedTableRow> Data;
    
    URCParamWanderingSpiritSpeedData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

