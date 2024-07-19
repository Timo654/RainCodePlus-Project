#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamAttachmentColorPaletteTableRow.h"
#include "RCParamAttachmentColorPaletteData.generated.h"

UCLASS(Blueprintable)
class URCParamAttachmentColorPaletteData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCParamAttachmentColorPaletteTableRow> Data;
    
    URCParamAttachmentColorPaletteData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

