#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERCDebugAutoPlayType.h"
#include "RCDebugAutoPlayBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCDebugAutoPlayBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCDebugAutoPlayBFL();

    UFUNCTION(BlueprintCallable)
    static void SetType(ERCDebugAutoPlayType InType);
    
    UFUNCTION(BlueprintCallable)
    static void SetSkip(bool bInSkip);
    
    UFUNCTION(BlueprintCallable)
    static void SetSceneLoop(bool bInSceneLoop);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSkip();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneLoop();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnable();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAutoSceneChange();
    
    UFUNCTION(BlueprintCallable)
    static ERCDebugAutoPlayType GetType();
    
};

