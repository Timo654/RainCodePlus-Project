#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERCXSXConsoleType.h"
#include "RCHardwareXboxSX.generated.h"

UCLASS(Blueprintable)
class RC_API URCHardwareXboxSX : public UObject {
    GENERATED_BODY()
public:
    URCHardwareXboxSX();

    UFUNCTION(BlueprintCallable)
    static ERCXSXConsoleType GetXSXConsoleType();
    
};

