#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamTutorialButtonGuideListTableRow.h"
#include "RCParamTutorialButtonGuideListData.generated.h"

UCLASS(Blueprintable)
class URCParamTutorialButtonGuideListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamTutorialButtonGuideListTableRow> Data;
    
    URCParamTutorialButtonGuideListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

