#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamCharacterCategoryListTableRow.h"
#include "RCParamCharacterCategoryListData.generated.h"

UCLASS(Blueprintable)
class URCParamCharacterCategoryListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamCharacterCategoryListTableRow> Data;
    
    URCParamCharacterCategoryListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

