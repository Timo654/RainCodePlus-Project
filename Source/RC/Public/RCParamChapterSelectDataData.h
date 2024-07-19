#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamChapterSelectDataTableRow.h"
#include "RCParamChapterSelectDataData.generated.h"

UCLASS(Blueprintable)
class URCParamChapterSelectDataData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamChapterSelectDataTableRow> Data;
    
    URCParamChapterSelectDataData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

