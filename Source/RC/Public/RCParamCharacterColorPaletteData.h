#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamCharacterColorPaletteTableRow.h"
#include "RCParamCharacterColorPaletteData.generated.h"

UCLASS(Blueprintable)
class URCParamCharacterColorPaletteData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCParamCharacterColorPaletteTableRow> Data;
    
    URCParamCharacterColorPaletteData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

