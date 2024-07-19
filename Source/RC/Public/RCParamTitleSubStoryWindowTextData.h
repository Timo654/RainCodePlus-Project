#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamTitleSubStoryWindowTextTableRow.h"
#include "RCParamTitleSubStoryWindowTextData.generated.h"

UCLASS(Blueprintable)
class URCParamTitleSubStoryWindowTextData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamTitleSubStoryWindowTextTableRow> Data;
    
    URCParamTitleSubStoryWindowTextData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

