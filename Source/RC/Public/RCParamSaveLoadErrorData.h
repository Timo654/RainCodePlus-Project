#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamSaveLoadErrorTableRow.h"
#include "RCParamSaveLoadErrorData.generated.h"

UCLASS(Blueprintable)
class URCParamSaveLoadErrorData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamSaveLoadErrorTableRow> Data;
    
    URCParamSaveLoadErrorData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

