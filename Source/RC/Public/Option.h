#pragma once
#include "CoreMinimal.h"
#include "OptionController.h"
#include "OptionGraphics.h"
#include "OptionSound.h"
#include "OptionUiDisplay.h"
#include "Option.generated.h"

USTRUCT(BlueprintType)
struct RC_API FOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionSound SOUND;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionController InputController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionUiDisplay UiDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionGraphics Graphics;
    
    FOption();
};

