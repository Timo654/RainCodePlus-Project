#pragma once
#include "CoreMinimal.h"
#include "EAnimationNotifyType.h"
#include "RCAnimNotify.h"
#include "RCCharacterAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class RC_API URCCharacterAnimNotify : public URCAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimationNotifyType NotifyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StrValue1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StrValue2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue2;
    
public:
    URCCharacterAnimNotify();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetStrValue2(const FString& InValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetStrValue1(const FString& InValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetNotifyType(EAnimationNotifyType InType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetFloatValue2(float InValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetFloatValue1(float InValue) const;
    
};

