#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamTitleHelpTextTableRow.h"
#include "RCParamTitleHelpTextData.generated.h"

UCLASS(Blueprintable)
class URCParamTitleHelpTextData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamTitleHelpTextTableRow> Data;
    
    URCParamTitleHelpTextData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

