#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCAnimInstTurnData.h"
#include "RCCharacterTurnBFL.generated.h"

class AActor;
class ARCCharacterScript;
class URCCharacterAnimInstance;

UCLASS(Blueprintable)
class RC_API URCCharacterTurnBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCCharacterTurnBFL();

    UFUNCTION(BlueprintCallable)
    static void StopTurn(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void StartTurnState(URCCharacterAnimInstance* AnimInst);
    
    UFUNCTION(BlueprintCallable)
    static void SetTurnable(URCCharacterAnimInstance* AnimInst, bool bTurnable);
    
    UFUNCTION(BlueprintCallable)
    static void InitializeTurn(ARCCharacterScript* Character);
    
    UFUNCTION(BlueprintCallable)
    static void EndTurn(URCCharacterAnimInstance* AnimInst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckTurning(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckLeaveTurn(bool& bLeaveTurn, FRCAnimInstTurnData TurnData);
    
    UFUNCTION(BlueprintCallable)
    static void AnimInstTickTurn(float DeltaTime, URCCharacterAnimInstance* AnimInst);
    
    UFUNCTION(BlueprintCallable)
    static void AnimInstInitializeTurn(URCCharacterAnimInstance* AnimInst);
    
};

