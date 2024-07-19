#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzPuzzleBarrelWordTableRow.h"
#include "RCParamNzPuzzleBarrelWordData.generated.h"

UCLASS(Blueprintable)
class URCParamNzPuzzleBarrelWordData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzPuzzleBarrelWordTableRow> Data;
    
    URCParamNzPuzzleBarrelWordData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

