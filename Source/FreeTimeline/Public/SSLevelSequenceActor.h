#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "MovieSceneObjectBindingID.h"
#include "KoratAttachParamInfo.h"
#include "KoratSequencePlayInfo.h"
#include "KoratSequencerRebindInfo.h"
#include "SSLevelSequenceActor.generated.h"

class AActor;
class ULevelSequence;
class USSLevelSequencePlayer;

UCLASS(Blueprintable)
class FREETIMELINE_API ASSLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ManagedID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSequencerRebindInfo> RebindInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* CancelLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelPlayEnable;
    
public:
    ASSLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopSequencePlayer();
    
    UFUNCTION(BlueprintCallable)
    void StopPlayerAndDestroy(bool bCancel);
    
private:
    UFUNCTION(BlueprintCallable)
    void StartCharacterCameraFromPlayerOnPlay();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSequencePlayerAttachParam(FKoratAttachParamInfo AttachParam);
    
    UFUNCTION(BlueprintCallable)
    void SetRebindsForGame(bool bRebindOwnerCharacter, bool bRebindCharacterCamera, bool bRebindFrontCamera, bool bRebindToonDirectionLight);
    
    UFUNCTION(BlueprintCallable)
    bool SetRebind(const FString& InNameRegexPattern, AActor* RebindActor, bool DisableAnimTrack, bool DisableTransformTrack);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayInfoNextLabel(FName Label, FName NewNextLabel);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayInfo(TArray<FKoratSequencePlayInfo>& InPlayInfoList);
    
    UFUNCTION(BlueprintCallable)
    void SetCancelLevelSequence(ULevelSequence* InCancelLevelSequence);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySequencePlayerInLooping(int32 StartFrame, bool bPauseAtEnd, int32 NumLoops);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySequencePlayerByInfo(FName Label, float PlayRatio);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySequencePlayer(int32 StartFrame, bool bPauseAtEnd);
    
    UFUNCTION(BlueprintCallable)
    void KillMySelf();
    
    UFUNCTION(BlueprintCallable)
    bool IsSequencePlayerPlaying();
    
    UFUNCTION(BlueprintCallable)
    USSLevelSequencePlayer* GetSSSequencePlayer();
    
private:
    UFUNCTION()
    void AddRebindInfo(FMovieSceneObjectBindingID InBindingId, const FString& InName, uint32 InActorGUID);
    
};

