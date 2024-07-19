#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamSaveLoadDialogTableRow.h"
#include "RCParamSaveLoadDialogData.generated.h"

UCLASS(Blueprintable)
class URCParamSaveLoadDialogData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamSaveLoadDialogTableRow> Data;
    
    URCParamSaveLoadDialogData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

