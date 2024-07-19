#pragma once
#include "CoreMinimal.h"
#include "ERCCommonSwitch.h"
#include "ERCOptionMinimapRotate.h"
#include "ERCOptionUiQuality.h"
#include "ERCTextLanguage.h"
#include "OptionUiDisplay.generated.h"

USTRUCT(BlueprintType)
struct RC_API FOptionUiDisplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCTextLanguage TextLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MessageTextSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCCommonSwitch SubTitlesDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCCommonSwitch BattleSubTitlesDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCCommonSwitch MinimapDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCOptionMinimapRotate MinimapNorthFixed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCOptionUiQuality UiQuality;
    
    FOptionUiDisplay();
};

