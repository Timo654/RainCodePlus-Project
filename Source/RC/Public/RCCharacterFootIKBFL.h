#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCCharacterFootIKBFL.generated.h"

class AActor;
class URCCharacterAnimInstance;
class URCCharacterMovementComponent;

UCLASS(Blueprintable)
class RC_API URCCharacterFootIKBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCCharacterFootIKBFL();

    UFUNCTION(BlueprintCallable)
    static void TickFootIK(float DeltaTime, URCCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    static void SetFootIKEnable(AActor* Actor, bool bFootIKEnable);
    
    UFUNCTION(BlueprintCallable)
    static void InitFootIK(URCCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    static void AnimInstTickFootIK(URCCharacterAnimInstance* AnimInst);
    
    UFUNCTION(BlueprintCallable)
    static void AnimInstSetCanFootIK(URCCharacterAnimInstance* AnimInst, bool bCanFootIK);
    
};

