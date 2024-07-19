#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERCGameMode.h"
#include "RCRealLevelScriptActorBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCRealLevelScriptActorBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCRealLevelScriptActorBFL();

    UFUNCTION(BlueprintCallable)
    static void SetSubLevelLoadSync(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetSubLevelLoadingWait(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void OnNextLevel(ERCGameMode InNextGameMode);
    
    UFUNCTION(BlueprintCallable)
    static void OnBusOut();
    
    UFUNCTION(BlueprintCallable)
    static void OnBusIn();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSubLevelLoadSync();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSubLevelLoadingWait();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEndBusstopEvent();
    
};

