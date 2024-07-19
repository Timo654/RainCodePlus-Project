#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamTitleDialogTextTableRow.h"
#include "RCParamTitleDialogTextData.generated.h"

UCLASS(Blueprintable)
class URCParamTitleDialogTextData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamTitleDialogTextTableRow> Data;
    
    URCParamTitleDialogTextData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

