#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamOption_ItemListTableRow.h"
#include "RCParamOption_ItemListData.generated.h"

UCLASS(Blueprintable)
class URCParamOption_ItemListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamOption_ItemListTableRow> Data;
    
    URCParamOption_ItemListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

