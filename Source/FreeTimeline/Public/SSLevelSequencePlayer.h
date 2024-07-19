#pragma once
#include "CoreMinimal.h"
#include "LevelSequencePlayer.h"
#include "KoratSequencePlayInfo.h"
#include "KoratSequencerMarkerInfo.h"
#include "SSLevelSequencePlayer.generated.h"

class AActor;
class AEmitter;
class ULevelSequence;

UCLASS(Blueprintable)
class FREETIMELINE_API USSLevelSequencePlayer : public ULevelSequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAttachParam;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ExecuteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* SelectedLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSequencerMarkerInfo> MarkerInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSequencePlayInfo> SequencerPlayInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayInfoIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionDataKey;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ManagedID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AEmitter>> ExternalLoopingEmitterList;
    
public:
    USSLevelSequencePlayer(const class FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetSequencerPlaySeqNextLabel(FName Label, FName NewNextLabel);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedForExternalParticle();
    
};

