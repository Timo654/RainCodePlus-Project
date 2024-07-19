#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamGlossaryListTableRow.h"
#include "RCParamGlossaryListData.generated.h"

UCLASS(Blueprintable)
class URCParamGlossaryListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamGlossaryListTableRow> Data;
    
    URCParamGlossaryListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

