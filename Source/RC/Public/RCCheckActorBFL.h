#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCCheckActorBFL.generated.h"

class ARCCheckActor;

UCLASS(Blueprintable)
class RC_API URCCheckActorBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCCheckActorBFL();

    UFUNCTION(BlueprintCallable)
    static void SetCheckSettings(const FString& InActorName, bool bInCheck);
    
    UFUNCTION(BlueprintCallable)
    static void SetCheckSetting(FName InName, bool bInCheck);
    
    UFUNCTION(BlueprintCallable)
    static void SetCheckFinish(FName InName, bool bInCheck);
    
    UFUNCTION(BlueprintCallable)
    static void SetAreaMoveStop(FName InName, bool bInAreaMoveStop);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllAreaMoveMainQuestFlag();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCheckSetting(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCheckFinish(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAreaMoveStop(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static ARCCheckActor* GetCheckActor(FName InName);
    
};

