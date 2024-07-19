#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ERCInputButtonType.h"
#include "ERCInputExButton.h"
#include "ERCInputHardwareType.h"
#include "RCKeyType.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCKeyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCInputButtonType ButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCInputHardwareType HardwareType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCInputExButton ExButton;
    
    FRCKeyType();
};

