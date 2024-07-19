#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzPuzzleLangTableRow.h"
#include "RCParamNzPuzzleLangData.generated.h"

UCLASS(Blueprintable)
class URCParamNzPuzzleLangData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzPuzzleLangTableRow> Data;
    
    URCParamNzPuzzleLangData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

