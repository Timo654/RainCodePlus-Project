#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ERCAmatanPuzzleFailureCode.h"
#include "ERCRealPlayerGameMode.h"
#include "RCAmatanFailedDispatcher2Delegate.h"
#include "RCAmatanFailedDispatcherDelegate.h"
#include "RCAmatanFeedbackDispatcherDelegate.h"
#include "RCAmatanPassedDispatcherDelegate.h"
#include "RCAmatanUIButtonDispatcherDelegate.h"
#include "RCPlayerController.h"
#include "RCAmatanPlayerController.generated.h"

class AActor;
class ANiagaraActor;
class ARCAmatanPawnScript;
class ARCCharacterRender;
class ARCEventTrigger;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class RC_API ARCAmatanPlayerController : public ARCPlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCEventTrigger*> Volumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Answer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCCharacterRender* CharacterBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanDoArming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Panels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 steps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Goal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RetryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScanLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MovementLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MovementLockOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MovementLockOverrideTemporary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceArmExtendable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NowInBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NowFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Saveable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CuringTimeIssued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugScriptDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugPositionDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugPositionLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugPositionHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugPositionAngle;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAmatanPassedDispatcher PassDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAmatanFailedDispatcher FailDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAmatanFailedDispatcher2 FailDispatcher2;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAmatanUIButtonDispatcher UIDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAmatanFeedbackDispatcher FeedbackDispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANiagaraActor* NiagaraBlueprint;
    
    ARCAmatanPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Voice(FName ID);
    
    UFUNCTION(BlueprintCallable)
    void UnsetForceArming(bool UpdateUI);
    
    UFUNCTION(BlueprintCallable)
    void UnlockMovementOverrideTemorary();
    
    UFUNCTION(BlueprintCallable)
    void UnlockMovementOverride();
    
    UFUNCTION(BlueprintCallable)
    void UnlockMovement();
    
    UFUNCTION(BlueprintCallable)
    void StartPuzzle();
    
    UFUNCTION(BlueprintCallable)
    void StartPlay(ERCRealPlayerGameMode InGameMode);
    
    UFUNCTION(BlueprintCallable)
    void ShrinkArm();
    
    UFUNCTION(BlueprintCallable)
    void SetSkippable(bool Skippable);
    
    UFUNCTION(BlueprintCallable)
    void SetSaveable(bool Save);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraBlueprint(ANiagaraActor* bp);
    
    UFUNCTION(BlueprintCallable)
    void SetForceArming(bool UpdateUI);
    
    UFUNCTION(BlueprintCallable)
    void SetEventScene(bool Event);
    
    UFUNCTION(BlueprintCallable)
    void SetAnswer(TArray<int32> NewAnswer);
    
    UFUNCTION(BlueprintCallable)
    bool Resume();
    
    UFUNCTION(BlueprintCallable)
    void RestartFrom(float After, FName StartPoint);
    
    UFUNCTION(BlueprintCallable)
    void Restart(float After);
    
    UFUNCTION(BlueprintCallable)
    void ResearchStart(bool UsePointer);
    
    UFUNCTION(BlueprintCallable)
    void ResearchFinish();
    
    UFUNCTION(BlueprintCallable)
    void PermitMovementSound();
    
    UFUNCTION(BlueprintCallable)
    void OnFailed(int32 nowsteps, ERCAmatanPuzzleFailureCode code, int32 last);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& R);
    
    UFUNCTION(BlueprintCallable)
    void OnArmComponentOverlapped(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void LockMovementOverrideTemporary();
    
    UFUNCTION(BlueprintCallable)
    void LockMovementOverride();
    
    UFUNCTION(BlueprintCallable)
    void LockMovementInfinity();
    
    UFUNCTION(BlueprintCallable)
    void LockMovement(float Timeout);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovementLocked() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSkippable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSaveable() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetRetryCount();
    
    UFUNCTION(BlueprintCallable)
    ARCAmatanPawnScript* GetAmatanPawn();
    
    UFUNCTION(BlueprintCallable)
    bool ForceGoal();
    
    UFUNCTION(BlueprintCallable)
    void ForbidMovementSound();
    
    UFUNCTION(BlueprintCallable)
    void FinishPuzzle();
    
    UFUNCTION(BlueprintCallable)
    void Face(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ExtendArm();
    
    UFUNCTION(BlueprintCallable)
    bool DidGoal();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateShockEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanExtendArm() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateShockEffect();
    
};

