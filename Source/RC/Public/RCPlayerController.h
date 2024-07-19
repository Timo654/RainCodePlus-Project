#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RCPlayerController.generated.h"

class URCInputManager;

UCLASS(Blueprintable)
class RC_API ARCPlayerController : public APlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCInputManager* InputManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkipSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkipTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BufResetCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeginPlayEnd;
    
public:
    ARCPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSkipEnable(bool bInSkipEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseOverEnable(bool bInMouseOverEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LevelBeginPlayFinishedCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkipEnable() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMouseOverEnable() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBeginPlayEnd();
    
};

