#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCAmatanBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCAmatanBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCAmatanBFL();

    UFUNCTION(BlueprintCallable)
    static void SwitchToAmatan();
    
    UFUNCTION(BlueprintCallable)
    static void SwitchBackFromAmatan();
    
};

