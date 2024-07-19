#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamSaveLoadTextTableRow.h"
#include "RCParamSaveLoadTextData.generated.h"

UCLASS(Blueprintable)
class URCParamSaveLoadTextData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamSaveLoadTextTableRow> Data;
    
    URCParamSaveLoadTextData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

