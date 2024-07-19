#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzPuzzleTableRow.h"
#include "RCParamNzPuzzleData.generated.h"

UCLASS(Blueprintable)
class URCParamNzPuzzleData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzPuzzleTableRow> Data;
    
    URCParamNzPuzzleData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

