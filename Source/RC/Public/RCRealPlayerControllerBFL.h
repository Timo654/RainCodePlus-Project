#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCRealPlayerControllerBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCRealPlayerControllerBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCRealPlayerControllerBFL();

    UFUNCTION(BlueprintCallable)
    static void SetSkipEnable(bool bInSkipEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetMouseOverEnable(bool bInMouseOverEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSkipEnable();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMouseOverEnable();
    
};

