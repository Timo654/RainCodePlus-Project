#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamChapterNameTableRow.h"
#include "RCParamChapterNameData.generated.h"

UCLASS(Blueprintable)
class URCParamChapterNameData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamChapterNameTableRow> Data;
    
    URCParamChapterNameData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

