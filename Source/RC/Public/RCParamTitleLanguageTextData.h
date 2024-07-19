#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamTitleLanguageTextTableRow.h"
#include "RCParamTitleLanguageTextData.generated.h"

UCLASS(Blueprintable)
class URCParamTitleLanguageTextData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamTitleLanguageTextTableRow> Data;
    
    URCParamTitleLanguageTextData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

