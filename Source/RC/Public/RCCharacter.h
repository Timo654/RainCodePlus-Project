#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RCCharacter.generated.h"

UCLASS(Blueprintable)
class RC_API ARCCharacter : public ACharacter {
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
    bool bVisibleCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleIsCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPauseCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulatePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisonPrisetName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int8> CastShadowDefaultValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MeshComponentNames;
    
public:
    ARCCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool bVisibleFlag, bool bDirectFlag, bool bIsCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetSimulatePhysicsFlag(bool bInSimulatePhysics, bool bInDirect);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseCancelFlag(bool bInPauseCancel);
    
    UFUNCTION(BlueprintCallable)
    void SetPause(bool bPauseFlag, bool bDirectFlag);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisibility();
    
    UFUNCTION(BlueprintCallable)
    bool IsSimulatePhysicsFlag();
    
    UFUNCTION(BlueprintCallable)
    bool IsPauseCancelFlag();
    
    UFUNCTION(BlueprintCallable)
    bool IsPause();
    
};

