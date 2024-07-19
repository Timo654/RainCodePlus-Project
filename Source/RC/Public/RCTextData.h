#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCTextDataTableRow.h"
#include "RCTextData.generated.h"

UCLASS(Blueprintable)
class URCTextData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCTextDataTableRow> Data;
    
    URCTextData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

