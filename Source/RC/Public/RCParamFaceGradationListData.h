#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamFaceGradationListTableRow.h"
#include "RCParamFaceGradationListData.generated.h"

UCLASS(Blueprintable)
class URCParamFaceGradationListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamFaceGradationListTableRow> Data;
    
    URCParamFaceGradationListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

