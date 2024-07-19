#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCCharacterHitReactionBFL.generated.h"

class URCCharacterAnimInstance;
class URCCharacterMovementComponent;

UCLASS(Blueprintable)
class RC_API URCCharacterHitReactionBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCCharacterHitReactionBFL();

    UFUNCTION(BlueprintCallable)
    static void TickHitReaction(float DeltaTime, URCCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    static void AnimInstTickHitReaction(float DeltaTime, URCCharacterAnimInstance* AnimInst);
    
};

