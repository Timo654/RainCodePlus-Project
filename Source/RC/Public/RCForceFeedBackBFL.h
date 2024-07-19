#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCForceFeedBackBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCForceFeedBackBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCForceFeedBackBFL();

    UFUNCTION(BlueprintCallable)
    static void StopForceFeedBack();
    
    UFUNCTION(BlueprintCallable)
    static bool StartForceFeedBack(FName InID, bool bSkipPlay, bool bIgnoreTimeDilation);
    
};

