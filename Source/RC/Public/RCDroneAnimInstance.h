#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCAnimInstance.h"
#include "RCDroneAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class RC_API URCDroneAnimInstance : public URCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ClockwiseRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AntiClockwiseRotator;
    
    URCDroneAnimInstance();

};

