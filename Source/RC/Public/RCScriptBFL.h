#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCScriptBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCScriptBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCScriptBFL();

    UFUNCTION(BlueprintCallable)
    static bool StartScriptWork();
    
    UFUNCTION(BlueprintCallable)
    static bool StartScriptLineNo(FName InScriptName, int32 InLineNo);
    
    UFUNCTION(BlueprintCallable)
    static bool StartScript(FName InScriptName, FName InLabelName);
    
    UFUNCTION(BlueprintCallable)
    static void SetValiable(int32 InValue, FName InVariable, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetScriptPath(FName InPathName);
    
    UFUNCTION(BlueprintCallable)
    static void SetNextLabel(FName InLabelName);
    
    UFUNCTION(BlueprintCallable)
    static bool JampLabel(FName StartLabelName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetValiable(FName InVariable, int32 InArrayIndex);
    
};

