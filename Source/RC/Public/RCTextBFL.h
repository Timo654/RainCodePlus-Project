#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERCTextLanguage.h"
#include "RCTextBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCTextBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCTextBFL();

    UFUNCTION(BlueprintCallable)
    static void SetTextLanguage(ERCTextLanguage Language);
    
    UFUNCTION(BlueprintCallable)
    static void LoadDlcTextLanguage();
    
    UFUNCTION(BlueprintCallable)
    static bool IsText(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    static ERCTextLanguage GetTextLanguage();
    
    UFUNCTION(BlueprintCallable)
    static FString GetText(FName InTextID);
    
};

