#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamCharacterFacial2D3DListTableRow.h"
#include "RCParamCharacterFacial2D3DListData.generated.h"

UCLASS(Blueprintable)
class URCParamCharacterFacial2D3DListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamCharacterFacial2D3DListTableRow> Data;
    
    URCParamCharacterFacial2D3DListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

