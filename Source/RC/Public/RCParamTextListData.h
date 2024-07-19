#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamTextListTableRow.h"
#include "RCParamTextListData.generated.h"

UCLASS(Blueprintable)
class URCParamTextListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamTextListTableRow> Data;
    
    URCParamTextListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

