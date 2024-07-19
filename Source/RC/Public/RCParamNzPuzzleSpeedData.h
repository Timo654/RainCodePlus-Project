#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzPuzzleSpeedTableRow.h"
#include "RCParamNzPuzzleSpeedData.generated.h"

UCLASS(Blueprintable)
class URCParamNzPuzzleSpeedData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzPuzzleSpeedTableRow> Data;
    
    URCParamNzPuzzleSpeedData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

