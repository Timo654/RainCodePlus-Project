#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamQuestCategoryListTableRow.h"
#include "RCParamQuestCategoryListData.generated.h"

UCLASS(Blueprintable)
class URCParamQuestCategoryListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamQuestCategoryListTableRow> Data;
    
    URCParamQuestCategoryListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

