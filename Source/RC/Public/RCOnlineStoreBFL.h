#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCOnlineStoreBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCOnlineStoreBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCOnlineStoreBFL();

    UFUNCTION(BlueprintCallable)
    static void OpenStore();
    
    UFUNCTION(BlueprintCallable)
    static void CheckInstallContents();
    
};

