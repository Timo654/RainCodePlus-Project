#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamChapterListTableRow.h"
#include "RCParamChapterListData.generated.h"

UCLASS(Blueprintable)
class URCParamChapterListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamChapterListTableRow> Data;
    
    URCParamChapterListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

