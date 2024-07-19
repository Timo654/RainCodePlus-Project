#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EKoratFreeTimelineAtbBrkType.h"
#include "EKoratFreeTimelineAtbType.h"
#include "EKoratFreeTimelineType.h"
#include "KoratSequencePlayInfo.h"
#include "SequenceActorSpawnParameters.h"
#include "SSEffectManager.generated.h"

class AActor;
class ASSLevelSequenceActor;
class ULevelSequence;
class UMaterialInstanceDynamic;
class UWorld;

UCLASS(Blueprintable)
class FREETIMELINE_API USSEffectManager : public UObject {
    GENERATED_BODY()
public:
    USSEffectManager();

    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorSyncMontage(AActor* OwnerActor, ULevelSequence* LevelSequence, TArray<FKoratSequencePlayInfo> PlaySeq, bool bLooped, bool bPauseAtEnd, FName ManagedID, int32 StartFrame, bool bRebindPlayer, bool bPlayExec, ULevelSequence* CancelSequence, const FName ActionDataKey);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorSyncFreeTimeline(AActor* OwnerActor, ULevelSequence* LevelSequence, TArray<FKoratSequencePlayInfo> PlaySeq, bool bOverrideTransform, FTransform OverrideTransform, FName ManagedID, bool bRebindPlayer, bool bPlayExec, ULevelSequence* CancelSequence, const FName ActionDataKey);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorForFreeTimelineDirect(AActor* BaseActor, ULevelSequence* LevelSequence, FTransform Transform, FName ManagedID, bool bRebindPlayer);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorForFreeTimelineAtbBrk(AActor* OwnerActor, EKoratFreeTimelineAtbBrkType TimelineType, TArray<FKoratSequencePlayInfo> PlaySeq, bool bLooped, bool bPauseAtEnd, FName ManagedID, int32 StartFrame, bool bRebindPlayer);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorForFreeTimelineAtb(AActor* OwnerActor, EKoratFreeTimelineAtbType TimelineType, TArray<FKoratSequencePlayInfo> PlaySeq, bool bLooped, bool bPauseAtEnd, FName ManagedID, int32 StartFrame, bool bRebindPlayer);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActorForFreeTimeline(AActor* OwnerActor, EKoratFreeTimelineType TimelineType, TArray<FKoratSequencePlayInfo> PlaySeq, bool bLooped, bool bPauseAtEnd, FName ManagedID, int32 StartFrame, bool bRebindPlayer);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* SpawnSequenceActor(const FSequenceActorSpawnParameters& InParameters);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterStencil(AActor* InChara, int32 StencilIndex, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterOutlineFill(AActor* InChara, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterOutline(AActor* InChara, bool bEnable, FName InTypeName);
    
    UFUNCTION(BlueprintCallable)
    static ULevelSequence* SelectCharacterFreeTimelineAtbBrk(AActor* OwnerActor, EKoratFreeTimelineAtbBrkType TimelineType, FName AtbName);
    
    UFUNCTION(BlueprintCallable)
    static ULevelSequence* SelectCharacterFreeTimelineAtb(AActor* OwnerActor, EKoratFreeTimelineAtbType TimelineType, FName AtbName);
    
    UFUNCTION(BlueprintCallable)
    static ULevelSequence* SelectCharacterFreeTimeline(AActor* OwnerActor, EKoratFreeTimelineType TimelineType, ULevelSequence*& CancelSequenceData);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveSequencerKey(FName Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveSequencerAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveExternalActorKeyByActor(AActor* ExtActor);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveExternalActorKey(FName Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveExternalActorAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveEffectKey(FName Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveEffectAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void OutputDebugInfo();
    
    UFUNCTION(BlueprintCallable)
    static bool IsExistSequencerKey(FName Key);
    
    UFUNCTION(BlueprintCallable)
    static bool IsExistKey(FName Key);
    
    UFUNCTION(BlueprintCallable)
    static bool IsExistExternalActorKey(FName Key);
    
    UFUNCTION(BlueprintCallable)
    static ASSLevelSequenceActor* GetSequencer(UWorld* World, FName Key);
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInstanceDynamic* GetOutlineMaterialInstance(AActor* InOwner);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetExternalActor(UWorld* World, FName Key);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetEffects(UWorld* World, FName Key, FName SeqActorName);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetEffect(UWorld* World, FName Key);
    
    UFUNCTION(BlueprintCallable)
    static void AddSequencer(UWorld* World, FName Key, ASSLevelSequenceActor* SequencerActor);
    
    UFUNCTION(BlueprintCallable)
    static void AddExternalActor(AActor* Actor, FName SeqName);
    
    UFUNCTION(BlueprintCallable)
    static void AddEffect(UWorld* World, FName Key, AActor* EffectActor, FName SeqName);
    
};

