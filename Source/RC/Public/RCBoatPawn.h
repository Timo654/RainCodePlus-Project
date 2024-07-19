#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "RCBoatAccelDispatcherDelegate.h"
#include "RCBoatSpeedStepDispatcherDelegate.h"
#include "RCPawn.h"
#include "Templates/SubclassOf.h"
#include "RCBoatPawn.generated.h"

class AActor;
class ANiagaraActor;
class UAnimInstance;
class UNiagaraSystem;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class RC_API ARCBoatPawn : public ARCPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoseThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TailThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackSpeedCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeedCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimpleTurnSpeedCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedStep1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedStep2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Heading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Velocity_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Steering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreserveCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* PS_Shipwave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* PS_EngineSplash0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* PS_EngineSplash1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* PS_Splash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANiagaraActor* NiagaraShipwave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANiagaraActor* NiagaraSplash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANiagaraActor* NiagaraEngineSplash0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANiagaraActor* NiagaraEngineSplash1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<UAnimInstance>> CustomAnimBP_Binding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UAnimInstance*> Prev_Binding;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCBoatSpeedStepDispatcher SpeedstepDipatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCBoatAccelDispatcher AccelDipatcher;
    
    ARCBoatPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSteering(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThrottleUp(int32 step, FVector head, FVector Velocity, bool Forward, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThrottleDown(int32 step, FVector head, FVector Velocity, bool Forward, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReset(FVector head, FVector Velocity, float RotationDegrees);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationUpdate(FVector head, FVector Velocity, float RotationDegrees, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnCrashed(UPrimitiveComponent* Component, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector Normal, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCrash(bool DidSpawnEffect, FVector HitLoc, FVector head, FVector Velocity, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    float GetSimulationTick(float Tick);
    
    UFUNCTION(BlueprintCallable)
    FVector GetNavigationVelocityNorm(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    FVector GetNavigationVelocity();
    
    UFUNCTION(BlueprintCallable)
    FVector GetNavigationHead();
    
};

