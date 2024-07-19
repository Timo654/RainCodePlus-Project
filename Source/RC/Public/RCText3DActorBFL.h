#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCText3DActorBFL.generated.h"

class ARCText3DActor;

UCLASS(Blueprintable)
class RC_API URCText3DActorBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCText3DActorBFL();

    UFUNCTION(BlueprintCallable)
    static void SetVisibility(FName InActorName, bool bInVisible, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextID(FName InActorName, FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsVisibility(FName InActorName);
    
    UFUNCTION(BlueprintCallable)
    static FName GetTextID(FName InActorName);
    
    UFUNCTION(BlueprintCallable)
    static ARCText3DActor* GetText3DActor(FName InActorName);
    
    UFUNCTION(BlueprintCallable)
    static FText GetText(FName InActorName);
    
};

