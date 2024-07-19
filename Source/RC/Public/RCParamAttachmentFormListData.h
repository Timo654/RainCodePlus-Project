#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamAttachmentFormListTableRow.h"
#include "RCParamAttachmentFormListData.generated.h"

UCLASS(Blueprintable)
class URCParamAttachmentFormListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamAttachmentFormListTableRow> Data;
    
    URCParamAttachmentFormListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

