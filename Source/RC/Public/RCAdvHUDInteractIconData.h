#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDAccessableWidgetBaseData.h"
#include "RCAdvHUDInteractIconData.generated.h"

USTRUCT(BlueprintType)
struct FRCAdvHUDInteractIconData : public FRCAdvHUDAccessableWidgetBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    RC_API FRCAdvHUDInteractIconData();
};

