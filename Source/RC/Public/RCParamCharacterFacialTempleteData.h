#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamCharacterFacialTempleteTableRow.h"
#include "RCParamCharacterFacialTempleteData.generated.h"

UCLASS(Blueprintable)
class URCParamCharacterFacialTempleteData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamCharacterFacialTempleteTableRow> Data;
    
    URCParamCharacterFacialTempleteData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

