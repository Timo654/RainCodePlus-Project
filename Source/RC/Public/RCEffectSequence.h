#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Particles/WorldPSCPool.h"
#include "RCEffectSequence_OnFinishedDelegate.h"
#include "RCEffectSequence.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;
class URCEffectSequence;
class USceneComponent;

UCLASS(Blueprintable)
class RC_API URCEffectSequence : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachToComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCEffectSequence_OnFinished OnFinished;
    
    URCEffectSequence();

    UFUNCTION(BlueprintCallable)
    static URCEffectSequence* SpawnEffectSequenceAttached(ULevelSequence* InLevelSequence, USceneComponent* InAttachToComponent, FName InAttachPointName, FVector InLocation, FRotator InRotation, FVector InScale, TEnumAsByte<EAttachLocation::Type> InLocationType, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static URCEffectSequence* SpawnEffectSequenceAtLocation(UObject* InWorldContextObject, ULevelSequence* InLevelSequence, FVector InSpawnLocation, FRotator InSpawnRotation, FVector InScale, bool bInAutoDestroy, EPSCPoolMethod InPoolingMethod);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LevelSequenceFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable)
    bool Destroy();
    
    UFUNCTION(BlueprintCallable)
    bool Deactivate();
    
    UFUNCTION(BlueprintCallable)
    bool Activate(bool bInReset);
    
};

