#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzMTBWallTableRow.h"
#include "RCParamNzMTBWallData.generated.h"

UCLASS(Blueprintable)
class URCParamNzMTBWallData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzMTBWallTableRow> Data;
    
    URCParamNzMTBWallData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

