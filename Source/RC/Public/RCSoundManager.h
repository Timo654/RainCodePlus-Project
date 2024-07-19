#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ERCCharacterMorphTarget.h"
#include "ERCSoundType.h"
#include "EnvMapData.h"
#include "FacialCharaData.h"
#include "FadeData.h"
#include "LipSyncData.h"
#include "LoadData.h"
#include "ManualMotionData.h"
#include "RCParamLipSyncDataAdjustTableRow.h"
#include "RCParamSoundFormatTableRow.h"
#include "RCParamSoundNonResidentListTableRow.h"
#include "SoundData.h"
#include "SoundPlayerPosFade.h"
#include "SoundVolume.h"
#include "RCSoundManager.generated.h"

class ACharacter;
class UAtomComponent;
class UAtomStatics;
class URCCharacterProxy;
class URCParamLipSyncForTextIDData;
class USoundAtomCue;
class USoundAtomCueSheet;

UCLASS(Blueprintable)
class RC_API ARCSoundManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFadeData> fadeInDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFadeData> fadeOutDataArray;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URCCharacterProxy*> lipSyncCharacterProxyArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManualMotionData> manualMotionDataArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundData> bgmSoundDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundData> seSoundDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundData> envSoundDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundData> voiceSoundDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundData> gameSeSoundDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundData> backLogVoiceSoundDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundData> mapEnvSoundDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnvMapData> mapEnvPlayingSoundStrArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundData> env3DSoundDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundData> seJingleSoundDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundData> amatanVoiceSoundDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundData> optionBGMSoundDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoadData> loadedSoundArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> bgmResidentSheetPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> seResidentSheetPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> envResidentSheetPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> voiceResidentSheetPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> bgmNonResidentSheetPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> seNonResidentSheetPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> envNonResidentSheetPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> voiceNonResidentSheetPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> residentSoundLoadingFlagArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> notResidentSoundLoadingFlagArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> soundCueBGMResidentSheetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> soundCueSEResidentSheetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> soundCueENVResidentSheetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> soundCueVOICEResidentSheetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> soundCueBGMNonResidentSheetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> soundCueSENonResidentSheetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> soundCueENVNonResidentSheetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> soundCueVOICENonResidentSheetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCParamLipSyncForTextIDData* paramLipSyncForTextIDData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName chapterLipSyncDataPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isLoadChapterLipSyncParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtomStatics* AtomStatics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERCCharacterMorphTarget> morthTargetDefaultArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERCCharacterMorphTarget> morthTargetSadArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERCCharacterMorphTarget> morthTargetAngryArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERCCharacterMorphTarget> morthTargetSurpriseArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERCCharacterMorphTarget> morthTargetPlesureArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERCCharacterMorphTarget> morthTargetSpecialArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isInitSheetLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCueSheetLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isStartedCueSheetLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isReloadVoiceSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundVolume SoundVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMenuPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float defaultLipSyncWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float adjustAiueoLipSyncRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isLoadingFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundPlayerPosFade SoundPlayerPosFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName currentVoiceFacial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLipSyncData> lipSyncDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isLoadingLipSyncData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName useLipSyncMorphTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFacialCharaData> voiceCharaArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> disableLipSyncCharaIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEnableLipSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 beforeTopVowelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCheckSubTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isBackLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isInitVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEnableSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEnableSQCSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isRunningSQC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SQCTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDeathMatchBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAtomComponent*> PauseAtomComponentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableGameSound;
    
public:
    ARCSoundManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSingleSoundVolume(ERCSoundType SoundType, const FString& SoundId, float volumeRate);
    
    UFUNCTION(BlueprintCallable)
    void UpdateOptionVolume(ERCSoundType SoundType, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMenuPauseVolume();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMasterVolume(float MasterVolume);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateFade(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void Stop(ERCSoundType SoundType);
    
private:
    UFUNCTION(BlueprintCallable)
    void StartSheetLoad();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPlaySound(ERCSoundType SoundType, const FString& SoundId, bool IsLoop, const FString& CharaID, bool isFadeIn, const FString& ParamSoundID, ERCSoundType OptionType, float volumeRate);
    
    UFUNCTION(BlueprintCallable)
    void SetLipSyncCharaArray(TArray<ACharacter*> charaArray);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeSoundForPositionData(FSoundPlayerPosFade Data);
    
    UFUNCTION(BlueprintCallable)
    void ResumeSingle(ERCSoundType SoundType, const FString& SoundId, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ResumeForSoundType(ERCSoundType SoundType);
    
    UFUNCTION(BlueprintCallable)
    void ResumeFieldSound();
    
    UFUNCTION(BlueprintCallable)
    void Resume();
    
private:
    UFUNCTION(BlueprintCallable)
    void ResetNonResidentSheet();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReloadVoiceSheet();
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayLipSync();
    
public:
    UFUNCTION(BlueprintCallable)
    void Play(ERCSoundType SoundType, bool IsLoop, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void PauseSingle(ERCSoundType SoundType, const FString& SoundId, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void PauseForSoundType(ERCSoundType SoundType, bool bAllPause);
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    void LoopSetting(USoundAtomCue* pSoundCue, bool IsLoop);
    
    UFUNCTION(BlueprintCallable)
    void LoadNonResidentSheet(const FString& SheetID);
    
private:
    UFUNCTION(BlueprintCallable)
    bool isSameVolume(float lVolume, float rVolume);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadedNonResidentSheet();
    
public:
    UFUNCTION(BlueprintCallable)
    bool isCurrentSoundID(ERCSoundType SoundType, const FString& SoundId, const FString& CharaID);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSoundData> GetVoiceSoundDataArray();
    
    UFUNCTION(BlueprintCallable)
    FRCParamSoundFormatTableRow GetSoundParamData(ERCSoundType SoundType);
    
    UFUNCTION(BlueprintCallable)
    FString GetSoundId(ERCSoundType SoundType, int32 soundIndex, const FString& CharaID);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSoundData> GetSoundDataArray(ERCSoundType SoundType);
    
    UFUNCTION(BlueprintCallable)
    FLoadData GetSoundAtomCue(ERCSoundType SoundType);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSoundData> GetSeSoundDataArray();
    
    UFUNCTION(BlueprintCallable)
    FString GetPlayingBGMID();
    
private:
    UFUNCTION(BlueprintCallable)
    FRCParamSoundNonResidentListTableRow GetNonResidentCueSheetParam(const FString& SheetID);
    
    UFUNCTION(BlueprintCallable)
    float GetLipSyncVol(float voiceVol);
    
public:
    UFUNCTION(BlueprintCallable)
    FRCParamLipSyncDataAdjustTableRow GetLipSyncParamDataAdjust(FName voiceCharaID);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSoundData> GetEnviromentSoundDataArray();
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetCueSheetParamPathArray(ERCSoundType SoundType);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FSoundData> GetBgmSoundDataArray();
    
    UFUNCTION(BlueprintCallable)
    void FadeOutAll(ERCSoundType SoundType, float fadeOutTime, float finishVolume);
    
    UFUNCTION(BlueprintCallable)
    void FadeOut(ERCSoundType SoundType, const FString& SoundId, float fadeOutTime, float finishVolume);
    
    UFUNCTION(BlueprintCallable)
    void FadeInAll(ERCSoundType SoundType, float fadeInTime, float StartTime, float finishVolume);
    
    UFUNCTION(BlueprintCallable)
    void FadeIn(ERCSoundType SoundType, const FString& SoundId, float fadeInTime, float StartTime, float finishVolume, bool isBaseOriginalVolume);
    
    UFUNCTION(BlueprintCallable)
    void CrossFade(ERCSoundType SoundType, const FString& SoundId, float fadeInTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckSheetLoad();
    
public:
    UFUNCTION(BlueprintCallable)
    float CalcVolume(ERCSoundType SoundType);
    
};

