#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamGlossaryCategoryListTableRow.h"
#include "RCParamGlossaryCategoryListData.generated.h"

UCLASS(Blueprintable)
class URCParamGlossaryCategoryListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamGlossaryCategoryListTableRow> Data;
    
    URCParamGlossaryCategoryListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

