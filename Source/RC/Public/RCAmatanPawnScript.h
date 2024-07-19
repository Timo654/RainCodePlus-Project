#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RCPawnScript.h"
#include "RCAmatanPawnScript.generated.h"

class AActor;
class ANiagaraActor;
class UAnimSequence;
class UCameraComponent;
class UCapsuleComponent;
class UNiagaraSystem;
class UPhysicsAsset;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class RC_API ARCAmatanPawnScript : public ARCPawnScript {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANiagaraActor* NiagaraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> AnimSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ParticleSystem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UNiagaraSystem>> Effects;
    
public:
    ARCAmatanPawnScript(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPostEffectWeight(int32 Index, float Weight);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectOffset(float Distance, float Height);
    
    UFUNCTION(BlueprintCallable)
    float Play_APush();
    
    UFUNCTION(BlueprintCallable)
    float Play_APull();
    
    UFUNCTION(BlueprintCallable)
    float Pause_Anim();
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetSkeletalMeshComponent();
    
    UFUNCTION(BlueprintCallable)
    float GetPostEffectWeight(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    UCapsuleComponent* GetCapsuleComponent();
    
    UFUNCTION(BlueprintCallable)
    float CalcDurationForAutoRotationYaw(AActor* Dist);
    
    UFUNCTION(BlueprintCallable)
    float CalcDurationForAutoMove(AActor* Dist);
    
    UFUNCTION(BlueprintCallable)
    void AutoPilotRotate(FRotator NewRotate);
    
    UFUNCTION(BlueprintCallable)
    void AutoPilotMove(FVector NewPosition, bool Teleport, bool IgnoreEvent);
    
    UFUNCTION(BlueprintCallable)
    void AutoPilot(FVector NewPosition, FRotator NewRotate, bool Teleport, bool IgnoreEvent);
    
};

