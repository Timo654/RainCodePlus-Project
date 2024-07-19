#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamTipsBlackSceneListTableRow.h"
#include "RCParamTipsBlackSceneListData.generated.h"

UCLASS(Blueprintable)
class URCParamTipsBlackSceneListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamTipsBlackSceneListTableRow> Data;
    
    URCParamTipsBlackSceneListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

