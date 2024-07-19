#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERCSoundType.h"
#include "RCBlueprintFunctionLibrary.h"
#include "RCParamSequencerSoundTemplateTableRow.h"
#include "RCSoundManagerBFL.generated.h"

class AActor;
class ACharacter;
class ARCSoundManager;
class USoundAttenuation;

UCLASS(Blueprintable)
class RC_API URCSoundManagerBFL : public URCBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCSoundManagerBFL();

    UFUNCTION(BlueprintCallable)
    static void UpdataVolume(ERCSoundType SoundType, float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void UpdataSingleVolumeForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, float volumeRate);
    
    UFUNCTION(BlueprintCallable)
    static void UpdataSingleVolume(ERCSoundType SoundType, int32 soundIndex, float volumeRate);
    
    UFUNCTION(BlueprintCallable)
    static void StopSoundBeforeLoading();
    
    UFUNCTION(BlueprintCallable)
    static void StopSingleForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, AActor* Actor, bool is3DSound);
    
    UFUNCTION(BlueprintCallable)
    static void StopSingle(ERCSoundType SoundType, int32 soundIndex, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void Stop(ERCSoundType SoundType);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnSoundForSoundIDMovingActor(ERCSoundType SoundType, const FString& ParamSoundID, AActor* Actor, float RangeMin, float RangeMax, bool IsLoop, const FString& CharaID);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnSoundForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, const FString& CharaID, FVector Location, float RangeMin, float RangeMax, bool IsLoop, AActor* Actor, USoundAttenuation* SoundAttenuation);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnSoundForMovingActor(ERCSoundType SoundType, int32 soundIndex, AActor* Actor, float RangeMin, float RangeMax, bool IsLoop, const FString& CharaID);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnSound(ERCSoundType SoundType, int32 soundIndex, const FString& CharaID, FVector Location, float RangeMin, float RangeMax, bool IsLoop, AActor* Actor, USoundAttenuation* SoundAttenuation);
    
    UFUNCTION(BlueprintCallable)
    static void SetSQCTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    static void SetRunningSQC(bool isFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlaySoundForVoiceID(FName VoiceID, FName voiceCharaID, FName FacialName, FName useMorph, bool bAllowfacialFlowLiquid, float volumeRate);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlaySoundForParamSoundIDVolume(ERCSoundType SoundType, const FString& ParamSoundID, bool IsLoop, const FString& CharaID, bool isFadeIn, float volumeRate);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlaySoundForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, bool IsLoop, const FString& CharaID, bool isFadeIn);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlaySound(ERCSoundType SoundType, int32 soundIndex, bool IsLoop, const FString& CharaID, bool isFadeIn);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayAmatanVoice(FName VoiceID);
    
    UFUNCTION(BlueprintCallable)
    static void SetLipSyncCharaArray(TArray<ACharacter*> charaArray);
    
    UFUNCTION(BlueprintCallable)
    static void SetFadeSoundForSoundIDPosition(ERCSoundType soundType1, const FString& paramSoundID1, AActor* actor1, ERCSoundType soundType2, const FString& paramSoundID2, AActor* actor2);
    
    UFUNCTION(BlueprintCallable)
    static void SetFadeSoundForPosition(ERCSoundType soundType1, int32 soundIndex1, AActor* actor1, ERCSoundType soundType2, int32 soundIndex2, AActor* actor2);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableLipSync(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisableLipSyncCharaID(FName CharaID);
    
    UFUNCTION(BlueprintCallable)
    static void SetBackLogFlag(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    static void Set3DSoundPlayFlag(const FString& ActorName, bool IsPause);
    
    UFUNCTION(BlueprintCallable)
    static void ResumeSingleForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ResumeSingle(ERCSoundType SoundType, int32 soundIndex, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ResumeForSoundType(ERCSoundType SoundType);
    
    UFUNCTION(BlueprintCallable)
    static void ResumeFieldSound();
    
    UFUNCTION(BlueprintCallable)
    static void Resume();
    
    UFUNCTION(BlueprintCallable)
    static void ResetVoiceCharaFacialOfActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void ResetVoiceCharaFacial();
    
    UFUNCTION(BlueprintCallable)
    static void ResetDisableLipSyncCharaID();
    
    UFUNCTION(BlueprintCallable)
    static void ResetAreaChange();
    
    UFUNCTION(BlueprintCallable)
    static void ReloadVoiceSheet();
    
    UFUNCTION(BlueprintCallable)
    static void PauseSingleForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void PauseSingle(ERCSoundType SoundType, int32 soundIndex, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void PauseForSoundType(ERCSoundType SoundType);
    
    UFUNCTION(BlueprintCallable)
    static void Pause();
    
    UFUNCTION(BlueprintCallable)
    static void LoadNonResidentSheet(const FString& SheetID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlaying(ERCSoundType SoundType, const FString& ParamSoundID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLoadCompleteNonResidentSheet(ERCSoundType SoundType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDeathMatchBattle();
    
    UFUNCTION(BlueprintCallable)
    static FName GetVoiceID(FName TextID, int32 Chapter);
    
private:
    UFUNCTION(BlueprintCallable)
    static ERCSoundType GetSoundType(ERCSoundType SoundType, int32 OptionType);
    
    UFUNCTION(BlueprintCallable)
    static void GetSoundParameter(ERCSoundType SoundType, const FString& ParamSoundID, int32& soundIndex, FString& SoundId, FString& CharaID, int32& OptionType);
    
    UFUNCTION(BlueprintCallable)
    static ARCSoundManager* GetSoundManager();
    
public:
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetPlayingSeIDArray();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetPlayingEnvIDArray();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetPlayingBgmIDArray();
    
    UFUNCTION(BlueprintCallable)
    static void FadeOutForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, float fadeOutTime, float finishVolume);
    
    UFUNCTION(BlueprintCallable)
    static void FadeOut(ERCSoundType SoundType, int32 Index, float fadeOutTime, float finishVolume);
    
    UFUNCTION(BlueprintCallable)
    static void FadeInForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, float fadeInTime, float StartTime, float finishVolume);
    
    UFUNCTION(BlueprintCallable)
    static void FadeIn(ERCSoundType SoundType, int32 Index, float fadeInTime, float StartTime, float finishVolume);
    
    UFUNCTION(BlueprintCallable)
    static void CrossFadeForParamSoundID(ERCSoundType SoundType, const FString& ParamSoundID, float fadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    static void CrossFade(ERCSoundType SoundType, int32 Index, float fadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeMapEnvSoundVolume(float Volume, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void ActionSequencerSound(FRCParamSequencerSoundTemplateTableRow SoundData, bool bMovie);
    
};

