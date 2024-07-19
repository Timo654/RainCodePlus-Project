#include "SSEffectManager.h"

USSEffectManager::USSEffectManager() {
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActorSyncMontage(AActor* OwnerActor, ULevelSequence* LevelSequence, TArray<FKoratSequencePlayInfo> PlaySeq, bool bLooped, bool bPauseAtEnd, FName ManagedID, int32 StartFrame, bool bRebindPlayer, bool bPlayExec, ULevelSequence* CancelSequence, const FName ActionDataKey) {
    return NULL;
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActorSyncFreeTimeline(AActor* OwnerActor, ULevelSequence* LevelSequence, TArray<FKoratSequencePlayInfo> PlaySeq, bool bOverrideTransform, FTransform OverrideTransform, FName ManagedID, bool bRebindPlayer, bool bPlayExec, ULevelSequence* CancelSequence, const FName ActionDataKey) {
    return NULL;
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActorForFreeTimelineDirect(AActor* BaseActor, ULevelSequence* LevelSequence, FTransform Transform, FName ManagedID, bool bRebindPlayer) {
    return NULL;
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActorForFreeTimelineAtbBrk(AActor* OwnerActor, EKoratFreeTimelineAtbBrkType TimelineType, TArray<FKoratSequencePlayInfo> PlaySeq, bool bLooped, bool bPauseAtEnd, FName ManagedID, int32 StartFrame, bool bRebindPlayer) {
    return NULL;
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActorForFreeTimelineAtb(AActor* OwnerActor, EKoratFreeTimelineAtbType TimelineType, TArray<FKoratSequencePlayInfo> PlaySeq, bool bLooped, bool bPauseAtEnd, FName ManagedID, int32 StartFrame, bool bRebindPlayer) {
    return NULL;
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActorForFreeTimeline(AActor* OwnerActor, EKoratFreeTimelineType TimelineType, TArray<FKoratSequencePlayInfo> PlaySeq, bool bLooped, bool bPauseAtEnd, FName ManagedID, int32 StartFrame, bool bRebindPlayer) {
    return NULL;
}

ASSLevelSequenceActor* USSEffectManager::SpawnSequenceActor(const FSequenceActorSpawnParameters& InParameters) {
    return NULL;
}

void USSEffectManager::SetCharacterStencil(AActor* InChara, int32 StencilIndex, bool bEnable) {
}

void USSEffectManager::SetCharacterOutlineFill(AActor* InChara, bool bEnable) {
}

void USSEffectManager::SetCharacterOutline(AActor* InChara, bool bEnable, FName InTypeName) {
}

ULevelSequence* USSEffectManager::SelectCharacterFreeTimelineAtbBrk(AActor* OwnerActor, EKoratFreeTimelineAtbBrkType TimelineType, FName AtbName) {
    return NULL;
}

ULevelSequence* USSEffectManager::SelectCharacterFreeTimelineAtb(AActor* OwnerActor, EKoratFreeTimelineAtbType TimelineType, FName AtbName) {
    return NULL;
}

ULevelSequence* USSEffectManager::SelectCharacterFreeTimeline(AActor* OwnerActor, EKoratFreeTimelineType TimelineType, ULevelSequence*& CancelSequenceData) {
    return NULL;
}

bool USSEffectManager::RemoveSequencerKey(FName Key) {
    return false;
}

void USSEffectManager::RemoveSequencerAll(UObject* WorldContextObject) {
}

bool USSEffectManager::RemoveExternalActorKeyByActor(AActor* ExtActor) {
    return false;
}

bool USSEffectManager::RemoveExternalActorKey(FName Key) {
    return false;
}

void USSEffectManager::RemoveExternalActorAll(UObject* WorldContextObject) {
}

bool USSEffectManager::RemoveEffectKey(FName Key) {
    return false;
}

void USSEffectManager::RemoveEffectAll(UObject* WorldContextObject) {
}

void USSEffectManager::OutputDebugInfo() {
}

bool USSEffectManager::IsExistSequencerKey(FName Key) {
    return false;
}

bool USSEffectManager::IsExistKey(FName Key) {
    return false;
}

bool USSEffectManager::IsExistExternalActorKey(FName Key) {
    return false;
}

ASSLevelSequenceActor* USSEffectManager::GetSequencer(UWorld* World, FName Key) {
    return NULL;
}

UMaterialInstanceDynamic* USSEffectManager::GetOutlineMaterialInstance(AActor* InOwner) {
    return NULL;
}

AActor* USSEffectManager::GetExternalActor(UWorld* World, FName Key) {
    return NULL;
}

TArray<AActor*> USSEffectManager::GetEffects(UWorld* World, FName Key, FName SeqActorName) {
    return TArray<AActor*>();
}

AActor* USSEffectManager::GetEffect(UWorld* World, FName Key) {
    return NULL;
}

void USSEffectManager::AddSequencer(UWorld* World, FName Key, ASSLevelSequenceActor* SequencerActor) {
}

void USSEffectManager::AddExternalActor(AActor* Actor, FName SeqName) {
}

void USSEffectManager::AddEffect(UWorld* World, FName Key, AActor* EffectActor, FName SeqName) {
}


