#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamTutorialPageListTableRow.h"
#include "RCParamTutorialPageListData.generated.h"

UCLASS(Blueprintable)
class URCParamTutorialPageListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamTutorialPageListTableRow> Data;
    
    URCParamTutorialPageListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

