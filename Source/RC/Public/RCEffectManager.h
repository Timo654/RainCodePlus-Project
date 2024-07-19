#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Particles/WorldPSCPool.h"
#include "RCEffectData.h"
#include "RCEffectManagedData.h"
#include "RCEffectManager.generated.h"

class UNiagaraComponent;
class UParticleSystemComponent;
class URCEffectSequence;
class USceneComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class RC_API URCEffectManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCEffectData> EffectDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCEffectManagedData> EffectManagedDataMap;
    
public:
    URCEffectManager();

    UFUNCTION(BlueprintCallable)
    bool SpawnEffectRainSplashAttachedWithManagedID(FName InManagedID, FName InEffectID, USceneComponent* InAttachToComponent, FName InAttachPointName, UStaticMesh* InEmitterMesh, float InOffset, float InSpawnRate, FVector InLocation, FRotator InRotation, FVector InScale, TEnumAsByte<EAttachLocation::Type> InLocationType, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnEffectAttachedWithManagedID(FName InManagedID, FName InEffectID, USceneComponent* InAttachToComponent, FName InAttachPointName, FVector InLocation, FRotator InRotation, FVector InScale, TEnumAsByte<EAttachLocation::Type> InLocationType, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod);
    
    UFUNCTION(BlueprintCallable)
    FName SpawnEffectAttached(FName InEffectID, USceneComponent* InAttachToComponent, FName InAttachPointName, FVector InLocation, FRotator InRotation, FVector InScale, TEnumAsByte<EAttachLocation::Type> InLocationType, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    bool SpawnEffectAtLocationWithManagedID(UObject* InWorldContextObject, FName InManagedID, FName InEffectID, FVector InSpawnLocation, FRotator InSpawnRotation, FVector InScale, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    FName SpawnEffectAtLocation(UObject* InWorldContextObject, FName InEffectID, FVector InSpawnLocation, FRotator InSpawnRotation, FVector InScale, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod);
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseEffect(FName InEffectID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnParticleFinished(UParticleSystemComponent* InPSComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnNiagaraFinished(UNiagaraComponent* InNComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnEffectSequenceFinished(URCEffectSequence* InEffectSequence);
    
public:
    UFUNCTION(BlueprintCallable)
    bool LoadEffect(FName InEffectID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetManagedDataNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRCEffectManagedData GetManagedData(FName InManagedID);
    
    UFUNCTION(BlueprintCallable)
    bool EffectDestroy(FName InManagedID);
    
    UFUNCTION(BlueprintCallable)
    bool EffectDeactivate(FName InManagedID);
    
    UFUNCTION(BlueprintCallable)
    bool EffectActivate(FName InManagedID, bool bInReset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEffectLoaded(FName InEffectID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEffectActive(FName InManagedID);
    
};

