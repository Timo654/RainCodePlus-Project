#pragma once
#include "CoreMinimal.h"
#include "RCAnimInstance.h"
#include "RCPassengerAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class RC_API URCPassengerAnimInstance : public URCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TurnLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TurnRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Crashed;
    
    URCPassengerAnimInstance();

};

