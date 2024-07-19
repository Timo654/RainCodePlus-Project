#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamMinimapListTableRow.h"
#include "RCParamMinimapListData.generated.h"

UCLASS(Blueprintable)
class URCParamMinimapListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamMinimapListTableRow> Data;
    
    URCParamMinimapListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

