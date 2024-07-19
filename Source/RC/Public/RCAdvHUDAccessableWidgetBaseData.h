#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDAccessableWidgetCommonData.h"
#include "RCAdvHUDAccessableWidgetBaseData.generated.h"

USTRUCT(BlueprintType)
struct FRCAdvHUDAccessableWidgetBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUDAccessableWidgetCommonData CommonData;
    
    RC_API FRCAdvHUDAccessableWidgetBaseData();
};

