#pragma once
#include "CoreMinimal.h"
#include "RCBlueprintFunctionLibrary.h"
#include "RCSaveLoadBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCSaveLoadBFL : public URCBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCSaveLoadBFL();

    UFUNCTION(BlueprintCallable)
    static void OpenSave();
    
    UFUNCTION(BlueprintCallable)
    static void OpenLoad();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFinished();
    
};

