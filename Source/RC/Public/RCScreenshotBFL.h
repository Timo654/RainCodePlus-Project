#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCScreenshotBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCScreenshotBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCScreenshotBFL();

    UFUNCTION(BlueprintCallable)
    static void SetEnableFromChapter(int32 InChapter);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnable(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnable();
    
};

