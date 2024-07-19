#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzFinaleSectionTableRow.h"
#include "RCParamNzFinaleSectionData.generated.h"

UCLASS(Blueprintable)
class URCParamNzFinaleSectionData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzFinaleSectionTableRow> Data;
    
    URCParamNzFinaleSectionData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

