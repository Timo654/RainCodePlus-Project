#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Particles/WorldPSCPool.h"
#include "RCEffectComponentData.h"
#include "RCEffectComponent.generated.h"

class URCEffectManager;
class USceneComponent;
class UStaticMesh;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCEffectManager* EffectManager;
    
public:
    URCEffectComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool SpawnEffectRainSplashAttachedWithManagedID(UPARAM(Ref) FRCEffectComponentData& InEffectData, FName InManagedID, USceneComponent* InAttachToComponent, FName InAttachPointName, UStaticMesh* InEmitterMesh, float InOffset, float InSpawnRate, FVector InLocation, FRotator InRotation, FVector InScale, TEnumAsByte<EAttachLocation::Type> InLocationType, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnEffectAttachedWithManagedID(UPARAM(Ref) FRCEffectComponentData& InEffectData, FName InManagedID, USceneComponent* InAttachToComponent, FName InAttachPointName, FVector InLocation, FRotator InRotation, FVector InScale, TEnumAsByte<EAttachLocation::Type> InLocationType, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod);
    
    UFUNCTION(BlueprintCallable)
    FName SpawnEffectAttached(UPARAM(Ref) FRCEffectComponentData& InEffectData, USceneComponent* InAttachToComponent, FName InAttachPointName, FVector InLocation, FRotator InRotation, FVector InScale, TEnumAsByte<EAttachLocation::Type> InLocationType, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnEffectAtLocationWithManagedID(UPARAM(Ref) FRCEffectComponentData& InEffectData, FName InManagedID, FVector InSpawnLocation, FRotator InSpawnRotation, FVector InScale, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod);
    
    UFUNCTION(BlueprintCallable)
    FName SpawnEffectAtLocation(UPARAM(Ref) FRCEffectComponentData& InEffectData, FVector InSpawnLocation, FRotator InSpawnRotation, FVector InScale, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod);
    
    UFUNCTION(BlueprintCallable)
    bool EffectDestroy(UPARAM(Ref) FRCEffectComponentData& InEffectData);
    
    UFUNCTION(BlueprintCallable)
    bool EffectDeactivate(UPARAM(Ref) FRCEffectComponentData& InEffectData);
    
    UFUNCTION(BlueprintCallable)
    bool EffectActivate(UPARAM(Ref) FRCEffectComponentData& InEffectData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEffectActive(UPARAM(Ref) FRCEffectComponentData& InEffectData);
    
};

