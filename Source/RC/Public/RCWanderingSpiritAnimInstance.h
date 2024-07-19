#pragma once
#include "CoreMinimal.h"
#include "ERCWanderingSpiritMotionPart.h"
#include "ERCWanderingSpiritMotionType.h"
#include "RCAnimInstance.h"
#include "RCWanderingSpiritAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class RC_API URCWanderingSpiritAnimInstance : public URCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCWanderingSpiritMotionType AnimMode;
    
    URCWanderingSpiritAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool StartOutPart(bool bStart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool StartLoopPart(bool bStart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool StartInPart(bool bStart);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionPart(ERCWanderingSpiritMotionPart part);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SetLoopFlag(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLoopFlag() const;
    
};

