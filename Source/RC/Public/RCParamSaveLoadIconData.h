#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamSaveLoadIconTableRow.h"
#include "RCParamSaveLoadIconData.generated.h"

UCLASS(Blueprintable)
class URCParamSaveLoadIconData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamSaveLoadIconTableRow> Data;
    
    URCParamSaveLoadIconData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

