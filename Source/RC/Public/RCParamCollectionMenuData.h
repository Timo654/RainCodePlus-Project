#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamCollectionMenuTableRow.h"
#include "RCParamCollectionMenuData.generated.h"

UCLASS(Blueprintable)
class URCParamCollectionMenuData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamCollectionMenuTableRow> Data;
    
    URCParamCollectionMenuData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

