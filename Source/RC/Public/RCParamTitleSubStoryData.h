#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamTitleSubStoryTableRow.h"
#include "RCParamTitleSubStoryData.generated.h"

UCLASS(Blueprintable)
class URCParamTitleSubStoryData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamTitleSubStoryTableRow> Data;
    
    URCParamTitleSubStoryData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

