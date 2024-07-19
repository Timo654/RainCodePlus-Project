#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamTitleSubStoryDialogTextTableRow.h"
#include "RCParamTitleSubStoryDialogTextData.generated.h"

UCLASS(Blueprintable)
class URCParamTitleSubStoryDialogTextData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamTitleSubStoryDialogTextTableRow> Data;
    
    URCParamTitleSubStoryDialogTextData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

