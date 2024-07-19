#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERCGameMode.h"
#include "RCRealEventBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCRealEventBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCRealEventBFL();

    UFUNCTION(BlueprintCallable)
    static bool IsBusStopEnable(FName InMapID);
    
    UFUNCTION(BlueprintCallable)
    static ERCGameMode GetGameMode(int32 InChapter, FName InScene);
    
};

