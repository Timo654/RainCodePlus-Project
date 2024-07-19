#pragma once
#include "CoreMinimal.h"
#include "ERCInputMode.h"
#include "RCInputMode.generated.h"

USTRUCT(BlueprintType)
struct FRCInputMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCInputMode InputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ModeName;
    
    RC_API FRCInputMode();
};

