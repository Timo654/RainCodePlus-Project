#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RCPawn.generated.h"

UCLASS(Blueprintable)
class RC_API ARCPawn : public APawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisiblePawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleIsCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPauseCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisonPrisetName;
    
public:
    ARCPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool bInVisible, bool bDirect, bool bIsCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseCancelFlag(bool bInPauseCancel);
    
    UFUNCTION(BlueprintCallable)
    void SetPause(bool bInPause, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisibility();
    
    UFUNCTION(BlueprintCallable)
    bool IsPauseCancelFlag();
    
    UFUNCTION(BlueprintCallable)
    bool IsPause();
    
};

