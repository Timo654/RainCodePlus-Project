#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "Engine/LevelScriptActor.h"
#include "Engine/EngineTypes.h"
#include "ERCNazoBattleLSAPhases.h"
#include "ERCNazoBattleLSARebuttalAttackFailureType.h"
#include "ERCNazoBattleLSAState.h"
#include "ERCNazoBattleRebuttalLetterPosition.h"
#include "RCNazoBattleDisturbLetterAssets.h"
#include "RCNazoBattleDisturbLetterNotifyData.h"
#include "RCNazoBattleLSAAssistData.h"
#include "RCNazoBattleLSACameraData.h"
#include "RCNazoBattleLSAKaijinGroupData.h"
#include "RCNazoBattleLSAPlayerAttackCollisionSettings.h"
#include "RCNazoBattleLSAPlayerData.h"
#include "RCNazoBattleLSARebuttalData.h"
#include "RCNazoBattleLSAShinigamiData.h"
#include "RCNazoBattleRebuttalGroupSettings.h"
#include "RCNazoBattleRebuttalLetterAssets.h"
#include "RCNazoBattleRebuttalLetterNotifyData.h"
#include "RCNazoBattleSettings.h"
#include "RCNazoBattleLevelScriptActor.generated.h"

class ACameraActor;
class ARCNazoBattleDisturbLetter;
class ARCNazoBattleRebuttalLetter;
class ARCNazoLevelScriptActor;
class UDataTable;
class URCNzUiAssistCutin;
class URCNzUiBattleKaiKagiList;
class URCNzUiBattleKaiKagiSelect;
class URCNzUiBattleStart;
class URCNzUiBattleUi;

UCLASS(Blueprintable)
class RC_API ARCNazoBattleLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCNazoBattleLSAState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARCNazoLevelScriptActor* NazoLSA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimerHandle> DelayTimerHandleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle SlowAndCameraShakeTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CameraShakeSClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CameraShakeMClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CameraShakeLClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BattleSettingsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattleSettingsKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RebuttalGroupSettingsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RebuttalLetterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DisturbLetterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AssistParameterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LoadRequestPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LoadingPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LoadedPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleSettings BattleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCNazoBattleLSAPhases Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayingVoiceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleSkipSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInputEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleLSAPlayerData PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerAttackCollisionAtacchedSword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerSwordCollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerSwordCollisionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleLSAPlayerAttackCollisionSettings PlayerRebuttalSlashCollisionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleLSAPlayerAttackCollisionSettings PlayerRepelCollisionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoBattleLSAPlayerAttackCollisionSettings> PlayerDisturbSlashCollisionSettingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleLSAPlayerAttackCollisionSettings PlayerAvoidanceSlashLCollisionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleLSAPlayerAttackCollisionSettings PlayerAvoidanceSlashRCollisionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoBattleLSAPlayerAttackCollisionSettings> PlayerJumpSlashCollisionSettingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoBattleLSAPlayerAttackCollisionSettings> PlayerCrouchSlashCollisionSettingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackSlashPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackSlashInputDisableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackSlashCollisionEnableDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackHitDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackSuccessSlashRaedyPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackSuccessCutinDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackSuccessCutinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackSuccessCancelKaijinMoveDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackSuccessSlowGameSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackSuccessSlowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackSuccessReturnGameSpeedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackSuccessChangeCameraDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackSuccessKaijinDamageDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackSuccessClearDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackFailureRepelDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackFailureRepelPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackFailureSlowDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackFailureSlowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackFailureSlowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackFailureEventDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackRepelPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackRepelInputDisableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAttackRepelCollisionEnableDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerRepelSuccessLetterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerRepelSuccessHitstopDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerRepelSuccessGameSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerRepelSuccessCutinDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerRepelSuccessCutinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerRepelSuccessHitKaijinSEVolumeRate_FinalBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDisturbSlashPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDisturbSlashInputDisableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDisturbSlashCollisionEnableDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerDisturbSlashContinuousCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDisturbSlashContinuousAttackEnableDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDisturbSlashContinuousAttackEnableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerMoveLTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerMoveRTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerMoveLInputDisableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerMoveRInputDisableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerMoveLCurvePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerMoveRCurvePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAvoidanceAttackEnableDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAvoidanceAttackEnableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAvoidanceAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAvoidanceAttackInputDisableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerJumpRiseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerJumpDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerJumpContinuousAttackEnableDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerJumpContinuousAttackEnableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerMoveUInputDisableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerJumpCurvePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerCrouchContinuousAttackEnableDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerCrouchContinuousAttackEnableDelayTime_StartLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerCrouchContinuousAttackEnableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerMoveDInputDisableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerJustAvoidCollisionFixedSizeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerJustAvoidCollisionFixedSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerJustAvoidCollisionSizeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerJustAvoidUnrivalTimeU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerJustAvoidUnrivalTimeD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerJustAvoidUnrivalTimeL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerJustAvoidUnrivalTimeR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerUnrivalEffectColorLerpFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerUnrivalEffectColorA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerUnrivalEffectColorB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerUnrivalEffectColorC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerUnrivalEffectRestTimeToColorB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerUnrivalEffectRestTimeToColorC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerUnrivalShortenJingleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDamageInputDisableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PlayerDamageReductionRateArrayByContinueCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerSkillRebLetSpeedDownApplyAcc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerSkillRebLetSpeedDownApplyIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerSkillRebLetSpeedDownApplyDisturbLetter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PlayerDamageAirTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleLSAShinigamiData ShinigamiData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleLSAAssistData AssistData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleLSAKaijinGroupData KaijinGroupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KaijinAttackMotionInLengthDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KaijinWaitTimeAfterVoiceAndMotionEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleLSACameraData CameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebuttalCameraUseFocusLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoBattleRebuttalGroupSettings> RebuttalGroupSettingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RebuttalGroupCurrentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RebuttalGroupCurrentNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebuttalGroupCurrentFirstChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RebuttalCurrentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RebuttalCurrentNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RebuttalCurrentKaiKagiID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RebuttalSelectableKaiKagiIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RebuttalDeleteKaiKagiIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCNazoBattleRebuttalLetterPosition LastRebuttalLetterPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastRebuttalLetterLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoBattleLSARebuttalData> RebuttalDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RebuttalDataStartIndexArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RebuttalDataEndIndexArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RebuttalDataCurrentStartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RebuttalDataCurrentEndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RebuttalDataCurrentNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebuttalPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebuttalInputEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RebuttalInputDisableTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RebuttalGroupJustAvoidCountArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRebuttalGroupJustAvoidCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RebuttalGroupDisturbSlashPointArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRebuttalGroupDisturbSlashPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RebuttalIndexAtAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RebuttalNoAtAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebuttalKaijinCutin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebuttalGroupCleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebuttalGroupFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCNazoBattleLSARebuttalAttackFailureType RebuttalAttackFailureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RebuttalAttackTalkID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebuttalCloseContestSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RebuttalNoAtGameOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RebuttalGameOverHintText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebuttalGroupFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RebuttalIndexAtRebuttalFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAttackRebuttalLetterIfDisturbLetterExist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RebuttalLetterAttackLineEffectLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleRebuttalLetterAssets RebuttalLetterAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCNazoBattleRebuttalLetter*> RebuttalLetterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RebuttalLetterDistanceToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RebuttalLetterOutDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor RebuttalLetterShadowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RebuttalLetterAutoResizeW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RebuttalLetterAutoResizeW_ZH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RebuttalLetterAutoResizeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RebuttalLetterAutoResizeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RebuttalLetterAutoResizeMax_ZH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RebuttalLetterAutoResizeMin_ZH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebuttalLetterHitCollisionVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebuttalLetterJustAvoidCollisionVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCNazoBattleRebuttalLetter*> UnusedRebuttalLetterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAttackDisturbLettersAtOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoBattleDisturbLetterAssets DisturbLetterAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCNazoBattleDisturbLetter*> DisturbLetterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RebuttalIndexAtAttackDisturbLetter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisturbIndexAtAttackDisturbLetter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisturbLetterVoiceVolumeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCNazoBattleDisturbLetter*> UnusedDisturbLetterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DisplaceVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzUiBattleStart* BattleStartWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzUiBattleUi* BattleUIWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzUiBattleKaiKagiList* KaiKagiListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzUiBattleKaiKagiSelect* KaiKagiSelectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzUiAssistCutin* AssistCutinWidget;
    
public:
    ARCNazoBattleLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUseSpawnLetter(bool bInUseSpawnLetter);
    
    UFUNCTION(BlueprintCallable)
    void SetRebuttalLetterCollisionVisibility(bool bInHitCollisionVisibility, bool bInJustAvoidCollisionVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleInputEnable(bool bInInputEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RebuttalLetterOnSlashStopped(FRCNazoBattleRebuttalLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void RebuttalLetterOnSlashed(FRCNazoBattleRebuttalLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void RebuttalLetterOnRepelledPreventedByKaijin(FRCNazoBattleRebuttalLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void RebuttalLetterOnRepelledHitKaijin(FRCNazoBattleRebuttalLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void RebuttalLetterOnRepelled(FRCNazoBattleRebuttalLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void RebuttalLetterOnOut(FRCNazoBattleRebuttalLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void RebuttalLetterOnJustAvoidEnable(FRCNazoBattleRebuttalLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void RebuttalLetterOnJustAvoidDisable(FRCNazoBattleRebuttalLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void RebuttalLetterOnHit(FRCNazoBattleRebuttalLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void RebuttalLetterOnFinished(FRCNazoBattleRebuttalLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void RebuttalLetterOnAttackEnable(FRCNazoBattleRebuttalLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void RebuttalLetterOnAttackDisable(FRCNazoBattleRebuttalLetterNotifyData NotifyData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RebuttalKaikagiList_Finished(int32 RebuttalGroupNo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RebuttalKaijinCutin_Start(int32 RebuttalGroupNo, int32 RebuttalNo);
    
    UFUNCTION(BlueprintCallable)
    void RebuttalKaijinCutin_Finish();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreEvent_Start(FName TalkID);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayerPlayOneShotAnim(FName InMotionName, float InPlayRate, float InBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerPlayLoopAnim(FName InMotionName, float InPlayRate, float InBlendTime, bool bInStartLoopMotion);
    
    UFUNCTION(BlueprintCallable)
    void PlayerPlayAnim(FName InMotionName, float InPlayRate, bool bInLoop, float InBlendTime, bool bInStartLoopMotion);
    
    UFUNCTION(BlueprintCallable)
    void PlayerOnDamage(FRCNazoBattleRebuttalLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerDamage(int32 InDamage, FName InMotionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NextRebuttalEvent_Start(int32 RebuttalGroupNo, FName TalkID);
    
    UFUNCTION(BlueprintCallable)
    void KaiKagiSwitch_Prev();
    
    UFUNCTION(BlueprintCallable)
    void KaiKagiSwitch_Next();
    
    UFUNCTION(BlueprintCallable)
    bool KaiKagiSelect_Start();
    
    UFUNCTION(BlueprintCallable)
    void KaiKagiSelect_Finished(int32 SelectIndex);
    
    UFUNCTION(BlueprintCallable)
    void KaiKagiSelect_Decide(int32 SelectIndex);
    
    UFUNCTION(BlueprintCallable)
    bool KaiKagiList_Start();
    
    UFUNCTION(BlueprintCallable)
    void KaiKagiList_Finished();
    
    UFUNCTION(BlueprintCallable)
    void KaijinPlayOneShotAnim(FName InKaijinTag, FName InMotionName, float InPlayRate, float InBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void KaijinPlayLoopAnim(FName InKaijinTag, FName InMotionName, float InPlayRate, float InBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void KaijinPlayAnim(FName InKaijinTag, FName InMotionName, float InPlayRate, bool bInLoop, float InBlendTime);
    
    UFUNCTION(BlueprintCallable)
    bool IsInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Interval_Start(int32 RebuttalGroupNo, FName TalkID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseSpawnLetter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRebuttalPreEventTalkID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRebuttalNoAtGameOver();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRebuttalNoAtAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRebuttalNextRebuttalEventTalkID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRebuttalIntervalTalkID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRebuttalGroupCurrentNo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRebuttalGroupCurrentFirstChallenge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRebuttalGameOverTalkID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRebuttalGameOverHintTextID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRebuttalConfrontationTalkID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRebuttalCloseContestInputTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRebuttalCloseContestInputCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRebuttalCloseContestFailureDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetRebuttalClearEventTalkIDArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRebuttalClearEventTalkID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRebuttalAttackTalkID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERCNazoBattleLSARebuttalAttackFailureType GetRebuttalAttackFailureType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRCNazoBattleLSARebuttalData> GetActiveRebuttalDataArray();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GameOver_Start(int32 RebuttalGroupNo, int32 RebuttalNo, FName TalkID, FName HintTextId);
    
    UFUNCTION(BlueprintCallable)
    void EndPhase();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisturbLetterOnSlashed(FRCNazoBattleDisturbLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void DisturbLetterOnRepelled(FRCNazoBattleDisturbLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void DisturbLetterOnOut(FRCNazoBattleDisturbLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void DisturbLetterOnHit(FRCNazoBattleDisturbLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void DisturbLetterOnFinished(FRCNazoBattleDisturbLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void DisturbLetterOnDamage(FRCNazoBattleDisturbLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void DisturbLetterOnAttackEnable(FRCNazoBattleDisturbLetterNotifyData NotifyData);
    
    UFUNCTION(BlueprintCallable)
    void DisturbLetterOnAttackDisable(FRCNazoBattleDisturbLetterNotifyData NotifyData);
    
public:
    UFUNCTION(BlueprintCallable)
    void DebugSetDrawHUD(bool bInDraw);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Confrontation_Start(int32 RebuttalGroupNo, bool bFirstChallenge, FName TalkID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseContest_Start(int32 RebuttalGroupNo, int32 RebuttalNo, float InputTime, int32 InputCount, int32 FailureDamage);
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseContest_End(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearEvent_Start(FName TalkID, const TArray<FName>& TalkIDArray);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeStateEvent(ERCNazoBattleLSAState BattleState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangePhaseEvent(ERCNazoBattleLSAPhases BattlePhase);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeCameraFromTag(FName CameraTag, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCamera(ACameraActor* Camera, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp);
    
    UFUNCTION(BlueprintCallable)
    void BattleUI_Start(bool bInOpenKaiKagi, bool bInOpenPlayerHP);
    
    UFUNCTION(BlueprintCallable)
    void BattleUI_SetKaiKagiID(FName InKaiKagiID);
    
    UFUNCTION(BlueprintCallable)
    void BattleUI_Finish();
    
    UFUNCTION(BlueprintCallable)
    void BattleUI_ChangeKaiKagi(FName InKaiKagiID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BattleSubTitleSwitch();
    
public:
    UFUNCTION(BlueprintCallable)
    bool BattleStartUI_Start();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BattleStartUI_IsFinished();
    
    UFUNCTION(BlueprintCallable)
    void BattleRebuttalResetPosition();
    
    UFUNCTION(BlueprintCallable)
    void BattleAllRebuttalLetterForceFinish();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AttackSuccess_Start(int32 RebuttalGroupNo, int32 RebuttalNo, FName TalkID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AttackFailure_Start(int32 RebuttalGroupNo, int32 RebuttalNo, ERCNazoBattleLSARebuttalAttackFailureType FailureType, FName TalkID);
    
public:
    UFUNCTION(BlueprintCallable)
    void AssistPlayAnim(FName InMotionName, float InPlayRate, bool bInLoop, float InBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void AssistCutin_Start();
    
};

