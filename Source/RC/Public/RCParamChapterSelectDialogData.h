#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamChapterSelectDialogTableRow.h"
#include "RCParamChapterSelectDialogData.generated.h"

UCLASS(Blueprintable)
class URCParamChapterSelectDialogData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamChapterSelectDialogTableRow> Data;
    
    URCParamChapterSelectDialogData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

