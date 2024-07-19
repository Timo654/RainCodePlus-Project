#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamCollectionDialogTableRow.h"
#include "RCParamCollectionDialogData.generated.h"

UCLASS(Blueprintable)
class URCParamCollectionDialogData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamCollectionDialogTableRow> Data;
    
    URCParamCollectionDialogData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

