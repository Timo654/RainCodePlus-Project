#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamTalkTextTagListTableRow.h"
#include "RCParamTalkTextTagListData.generated.h"

UCLASS(Blueprintable)
class URCParamTalkTextTagListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamTalkTextTagListTableRow> Data;
    
    URCParamTalkTextTagListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

