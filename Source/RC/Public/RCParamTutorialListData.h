#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamTutorialListTableRow.h"
#include "RCParamTutorialListData.generated.h"

UCLASS(Blueprintable)
class URCParamTutorialListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamTutorialListTableRow> Data;
    
    URCParamTutorialListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

