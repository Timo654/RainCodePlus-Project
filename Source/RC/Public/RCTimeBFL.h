#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCTimeBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCTimeBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCTimeBFL();

    UFUNCTION(BlueprintCallable)
    static void SetSkipSpeed(float InSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void SetMenuPause(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameSpeed(float InSpeed);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMenuPause();
    
    UFUNCTION(BlueprintCallable)
    static float GetSkipSpeed();
    
    UFUNCTION(BlueprintCallable)
    static float GetNowSpeed();
    
    UFUNCTION(BlueprintCallable)
    static float GetGameSpeed();
    
};

