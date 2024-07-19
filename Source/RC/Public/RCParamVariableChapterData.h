#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamVariableChapterTableRow.h"
#include "RCParamVariableChapterData.generated.h"

UCLASS(Blueprintable)
class URCParamVariableChapterData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamVariableChapterTableRow> Data;
    
    URCParamVariableChapterData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

