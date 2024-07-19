#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamEventCharacterFacialColorTableRow.h"
#include "RCParamEventCharacterFacialColorData.generated.h"

UCLASS(Blueprintable)
class URCParamEventCharacterFacialColorData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamEventCharacterFacialColorTableRow> Data;
    
    URCParamEventCharacterFacialColorData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

