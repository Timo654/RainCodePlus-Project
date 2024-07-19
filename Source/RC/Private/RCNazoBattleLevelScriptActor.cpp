#include "RCNazoBattleLevelScriptActor.h"

ARCNazoBattleLevelScriptActor::ARCNazoBattleLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInitialized = false;
    this->State = ERCNazoBattleLSAState::None;
    this->NazoLSA = NULL;
    this->DelayTimerHandleArray.AddDefaulted(4);
    this->CameraShakeSClass = NULL;
    this->CameraShakeMClass = NULL;
    this->CameraShakeLClass = NULL;
    this->BattleSettingsDataTable = NULL;
    this->RebuttalGroupSettingsDataTable = NULL;
    this->RebuttalLetterDataTable = NULL;
    this->DisturbLetterDataTable = NULL;
    this->AssistParameterDataTable = NULL;
    this->Phase = ERCNazoBattleLSAPhases::Invalid;
    this->BattleSkipSpeedRate = 2.00f;
    this->bInputEnable = true;
    this->bPlayerAttackCollisionAtacchedSword = false;
    this->PlayerDisturbSlashCollisionSettingsArray.AddDefaulted(3);
    this->PlayerJumpSlashCollisionSettingsArray.AddDefaulted(3);
    this->PlayerCrouchSlashCollisionSettingsArray.AddDefaulted(1);
    this->PlayerAttackSlashPlayRate = 1.00f;
    this->PlayerAttackSlashInputDisableTime = 0.80f;
    this->PlayerAttackSlashCollisionEnableDelayTime = 0.26f;
    this->PlayerAttackHitDelayTime = 0.52f;
    this->PlayerAttackSuccessSlashRaedyPlayRate = 1.00f;
    this->PlayerAttackSuccessCutinDelayTime = 0.62f;
    this->PlayerAttackSuccessCutinTime = 2.00f;
    this->PlayerAttackSuccessCancelKaijinMoveDelayTime = 0.70f;
    this->PlayerAttackSuccessSlowGameSpeed = 0.20f;
    this->PlayerAttackSuccessSlowTime = 0.28f;
    this->PlayerAttackSuccessReturnGameSpeedTime = 0.30f;
    this->PlayerAttackSuccessChangeCameraDelayTime = 0.00f;
    this->PlayerAttackSuccessKaijinDamageDelayTime = 0.00f;
    this->PlayerAttackSuccessClearDelayTime = 2.85f;
    this->PlayerAttackFailureRepelDelayTime = 0.40f;
    this->PlayerAttackFailureRepelPlayRate = 1.00f;
    this->PlayerAttackFailureSlowDelayTime = 0.50f;
    this->PlayerAttackFailureSlowSpeed = 0.20f;
    this->PlayerAttackFailureSlowTime = 2.00f;
    this->PlayerAttackFailureEventDelayTime = 0.40f;
    this->PlayerAttackRepelPlayRate = 1.00f;
    this->PlayerAttackRepelInputDisableTime = 0.80f;
    this->PlayerAttackRepelCollisionEnableDelayTime = 0.20f;
    this->PlayerRepelSuccessLetterSpeed = 1800.00f;
    this->PlayerRepelSuccessHitstopDelayTime = 0.00f;
    this->PlayerRepelSuccessGameSpeed = 0.01f;
    this->PlayerRepelSuccessCutinDelayTime = 0.20f;
    this->PlayerRepelSuccessCutinTime = 2.00f;
    this->PlayerRepelSuccessHitKaijinSEVolumeRate_FinalBattle = 0.30f;
    this->PlayerDisturbSlashPlayRate = 1.00f;
    this->PlayerDisturbSlashInputDisableTime = 0.35f;
    this->PlayerDisturbSlashCollisionEnableDelayTime = 0.10f;
    this->PlayerDisturbSlashContinuousCountMax = 3;
    this->PlayerDisturbSlashContinuousAttackEnableDelayTime = 0.30f;
    this->PlayerDisturbSlashContinuousAttackEnableTime = 0.30f;
    this->PlayerMoveLTime = 0.80f;
    this->PlayerMoveRTime = 0.80f;
    this->PlayerMoveLInputDisableTime = 0.35f;
    this->PlayerMoveRInputDisableTime = 0.35f;
    this->PlayerMoveLCurvePath = TEXT("/Game/RC/GameActor/NzDM/CRV_NzDM_Sway_L.CRV_NzDM_Sway_L");
    this->PlayerMoveRCurvePath = TEXT("/Game/RC/GameActor/NzDM/CRV_NzDM_Sway_R.CRV_NzDM_Sway_R");
    this->PlayerAvoidanceAttackEnableDelayTime = 0.10f;
    this->PlayerAvoidanceAttackEnableTime = 0.35f;
    this->PlayerAvoidanceAttackTime = 0.80f;
    this->PlayerAvoidanceAttackInputDisableTime = 0.35f;
    this->PlayerJumpRiseTime = 0.48f;
    this->PlayerJumpDistance = 80.00f;
    this->PlayerJumpContinuousAttackEnableDelayTime = 0.10f;
    this->PlayerJumpContinuousAttackEnableTime = 0.80f;
    this->PlayerMoveUInputDisableTime = 0.70f;
    this->PlayerJumpCurvePath = TEXT("/Game/RC/GameActor/NzDM/CRV_NzDM_Pl_Jump.CRV_NzDM_Pl_Jump");
    this->PlayerCrouchContinuousAttackEnableDelayTime = 0.10f;
    this->PlayerCrouchContinuousAttackEnableDelayTime_StartLoop = 0.10f;
    this->PlayerCrouchContinuousAttackEnableTime = 0.35f;
    this->PlayerMoveDInputDisableTime = 0.70f;
    this->bPlayerJustAvoidCollisionFixedSizeFlag = true;
    this->PlayerJustAvoidCollisionSizeRate = 6.00f;
    this->PlayerJustAvoidUnrivalTimeU = 0.80f;
    this->PlayerJustAvoidUnrivalTimeD = 0.80f;
    this->PlayerJustAvoidUnrivalTimeL = 0.80f;
    this->PlayerJustAvoidUnrivalTimeR = 0.80f;
    this->bPlayerUnrivalEffectColorLerpFlag = false;
    this->PlayerUnrivalEffectColorA = 0.00f;
    this->PlayerUnrivalEffectColorB = 0.50f;
    this->PlayerUnrivalEffectColorC = 1.00f;
    this->PlayerUnrivalEffectRestTimeToColorB = 5.00f;
    this->PlayerUnrivalEffectRestTimeToColorC = 2.00f;
    this->PlayerUnrivalShortenJingleTime = 1.50f;
    this->PlayerDamageInputDisableTime = 0.50f;
    this->PlayerDamageReductionRateArrayByContinueCount.AddDefaulted(2);
    this->bPlayerSkillRebLetSpeedDownApplyAcc = true;
    this->bPlayerSkillRebLetSpeedDownApplyIntervalTime = true;
    this->bPlayerSkillRebLetSpeedDownApplyDisturbLetter = true;
    this->KaijinAttackMotionInLengthDefault = 3.00f;
    this->KaijinWaitTimeAfterVoiceAndMotionEnd = 1.00f;
    this->bRebuttalCameraUseFocusLocationOffset = true;
    this->RebuttalGroupCurrentIndex = -1;
    this->RebuttalGroupCurrentNo = -1;
    this->bRebuttalGroupCurrentFirstChallenge = true;
    this->RebuttalCurrentIndex = -1;
    this->RebuttalCurrentNo = -1;
    this->LastRebuttalLetterPosition = ERCNazoBattleRebuttalLetterPosition::Top;
    this->bLastRebuttalLetterLeft = true;
    this->RebuttalDataCurrentStartIndex = -1;
    this->RebuttalDataCurrentEndIndex = -1;
    this->RebuttalDataCurrentNum = 0;
    this->bRebuttalPaused = false;
    this->bRebuttalInputEnable = false;
    this->CurrentRebuttalGroupJustAvoidCount = 0;
    this->CurrentRebuttalGroupDisturbSlashPoint = 0;
    this->RebuttalIndexAtAttack = -1;
    this->RebuttalNoAtAttack = -1;
    this->bRebuttalKaijinCutin = false;
    this->bRebuttalGroupCleared = false;
    this->bRebuttalGroupFailed = false;
    this->RebuttalAttackFailureType = ERCNazoBattleLSARebuttalAttackFailureType::Failure00_WrongTargetAndWrongKaiKagi;
    this->bRebuttalCloseContestSuccess = false;
    this->RebuttalNoAtGameOver = -1;
    this->bRebuttalGroupFinished = false;
    this->RebuttalIndexAtRebuttalFinished = -1;
    this->bCanAttackRebuttalLetterIfDisturbLetterExist = true;
    this->RebuttalLetterAttackLineEffectLifeTime = 3.00f;
    this->RebuttalLetterDistanceToPlayer = 1000.00f;
    this->RebuttalLetterOutDistance = 1200.00f;
    this->RebuttalLetterAutoResizeW = 230.00f;
    this->RebuttalLetterAutoResizeW_ZH = 200.00f;
    this->RebuttalLetterAutoResizeMax = 0.40f;
    this->RebuttalLetterAutoResizeMin = -1.00f;
    this->RebuttalLetterAutoResizeMax_ZH = 0.60f;
    this->RebuttalLetterAutoResizeMin_ZH = -1.00f;
    this->bRebuttalLetterHitCollisionVisibility = false;
    this->bRebuttalLetterJustAvoidCollisionVisibility = false;
    this->bCanAttackDisturbLettersAtOnce = true;
    this->RebuttalIndexAtAttackDisturbLetter = -1;
    this->DisturbIndexAtAttackDisturbLetter = -1;
    this->DisturbLetterVoiceVolumeRate = 0.40f;
    this->BattleStartWidget = NULL;
    this->BattleUIWidget = NULL;
    this->KaiKagiListWidget = NULL;
    this->KaiKagiSelectWidget = NULL;
    this->AssistCutinWidget = NULL;
}

void ARCNazoBattleLevelScriptActor::SetUseSpawnLetter(bool bInUseSpawnLetter) {
}

void ARCNazoBattleLevelScriptActor::SetRebuttalLetterCollisionVisibility(bool bInHitCollisionVisibility, bool bInJustAvoidCollisionVisibility) {
}

void ARCNazoBattleLevelScriptActor::SetBattleInputEnable(bool bInInputEnable) {
}

void ARCNazoBattleLevelScriptActor::RebuttalLetterOnSlashStopped(FRCNazoBattleRebuttalLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::RebuttalLetterOnSlashed(FRCNazoBattleRebuttalLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::RebuttalLetterOnRepelledPreventedByKaijin(FRCNazoBattleRebuttalLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::RebuttalLetterOnRepelledHitKaijin(FRCNazoBattleRebuttalLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::RebuttalLetterOnRepelled(FRCNazoBattleRebuttalLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::RebuttalLetterOnOut(FRCNazoBattleRebuttalLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::RebuttalLetterOnJustAvoidEnable(FRCNazoBattleRebuttalLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::RebuttalLetterOnJustAvoidDisable(FRCNazoBattleRebuttalLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::RebuttalLetterOnHit(FRCNazoBattleRebuttalLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::RebuttalLetterOnFinished(FRCNazoBattleRebuttalLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::RebuttalLetterOnAttackEnable(FRCNazoBattleRebuttalLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::RebuttalLetterOnAttackDisable(FRCNazoBattleRebuttalLetterNotifyData NotifyData) {
}



void ARCNazoBattleLevelScriptActor::RebuttalKaijinCutin_Finish() {
}


void ARCNazoBattleLevelScriptActor::PlayerPlayOneShotAnim(FName InMotionName, float InPlayRate, float InBlendTime) {
}

void ARCNazoBattleLevelScriptActor::PlayerPlayLoopAnim(FName InMotionName, float InPlayRate, float InBlendTime, bool bInStartLoopMotion) {
}

void ARCNazoBattleLevelScriptActor::PlayerPlayAnim(FName InMotionName, float InPlayRate, bool bInLoop, float InBlendTime, bool bInStartLoopMotion) {
}

void ARCNazoBattleLevelScriptActor::PlayerOnDamage(FRCNazoBattleRebuttalLetterNotifyData NotifyData) {
}

bool ARCNazoBattleLevelScriptActor::PlayerDamage(int32 InDamage, FName InMotionName) {
    return false;
}


void ARCNazoBattleLevelScriptActor::KaiKagiSwitch_Prev() {
}

void ARCNazoBattleLevelScriptActor::KaiKagiSwitch_Next() {
}

bool ARCNazoBattleLevelScriptActor::KaiKagiSelect_Start() {
    return false;
}

void ARCNazoBattleLevelScriptActor::KaiKagiSelect_Finished(int32 SelectIndex) {
}

void ARCNazoBattleLevelScriptActor::KaiKagiSelect_Decide(int32 SelectIndex) {
}

bool ARCNazoBattleLevelScriptActor::KaiKagiList_Start() {
    return false;
}

void ARCNazoBattleLevelScriptActor::KaiKagiList_Finished() {
}

void ARCNazoBattleLevelScriptActor::KaijinPlayOneShotAnim(FName InKaijinTag, FName InMotionName, float InPlayRate, float InBlendTime) {
}

void ARCNazoBattleLevelScriptActor::KaijinPlayLoopAnim(FName InKaijinTag, FName InMotionName, float InPlayRate, float InBlendTime) {
}

void ARCNazoBattleLevelScriptActor::KaijinPlayAnim(FName InKaijinTag, FName InMotionName, float InPlayRate, bool bInLoop, float InBlendTime) {
}

bool ARCNazoBattleLevelScriptActor::IsInitialized() {
    return false;
}


bool ARCNazoBattleLevelScriptActor::GetUseSpawnLetter() {
    return false;
}

FName ARCNazoBattleLevelScriptActor::GetRebuttalPreEventTalkID() {
    return NAME_None;
}

int32 ARCNazoBattleLevelScriptActor::GetRebuttalNoAtGameOver() {
    return 0;
}

int32 ARCNazoBattleLevelScriptActor::GetRebuttalNoAtAttack() {
    return 0;
}

FName ARCNazoBattleLevelScriptActor::GetRebuttalNextRebuttalEventTalkID() {
    return NAME_None;
}

FName ARCNazoBattleLevelScriptActor::GetRebuttalIntervalTalkID() {
    return NAME_None;
}

int32 ARCNazoBattleLevelScriptActor::GetRebuttalGroupCurrentNo() {
    return 0;
}

bool ARCNazoBattleLevelScriptActor::GetRebuttalGroupCurrentFirstChallenge() {
    return false;
}

FName ARCNazoBattleLevelScriptActor::GetRebuttalGameOverTalkID() {
    return NAME_None;
}

FName ARCNazoBattleLevelScriptActor::GetRebuttalGameOverHintTextID() {
    return NAME_None;
}

FName ARCNazoBattleLevelScriptActor::GetRebuttalConfrontationTalkID() {
    return NAME_None;
}

float ARCNazoBattleLevelScriptActor::GetRebuttalCloseContestInputTime() {
    return 0.0f;
}

int32 ARCNazoBattleLevelScriptActor::GetRebuttalCloseContestInputCount() {
    return 0;
}

int32 ARCNazoBattleLevelScriptActor::GetRebuttalCloseContestFailureDamage() {
    return 0;
}

TArray<FName> ARCNazoBattleLevelScriptActor::GetRebuttalClearEventTalkIDArray() {
    return TArray<FName>();
}

FName ARCNazoBattleLevelScriptActor::GetRebuttalClearEventTalkID() {
    return NAME_None;
}

FName ARCNazoBattleLevelScriptActor::GetRebuttalAttackTalkID() {
    return NAME_None;
}

ERCNazoBattleLSARebuttalAttackFailureType ARCNazoBattleLevelScriptActor::GetRebuttalAttackFailureType() {
    return ERCNazoBattleLSARebuttalAttackFailureType::Failure00_WrongTargetAndWrongKaiKagi;
}

TArray<FRCNazoBattleLSARebuttalData> ARCNazoBattleLevelScriptActor::GetActiveRebuttalDataArray() {
    return TArray<FRCNazoBattleLSARebuttalData>();
}


void ARCNazoBattleLevelScriptActor::EndPhase() {
}

void ARCNazoBattleLevelScriptActor::DisturbLetterOnSlashed(FRCNazoBattleDisturbLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::DisturbLetterOnRepelled(FRCNazoBattleDisturbLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::DisturbLetterOnOut(FRCNazoBattleDisturbLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::DisturbLetterOnHit(FRCNazoBattleDisturbLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::DisturbLetterOnFinished(FRCNazoBattleDisturbLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::DisturbLetterOnDamage(FRCNazoBattleDisturbLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::DisturbLetterOnAttackEnable(FRCNazoBattleDisturbLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::DisturbLetterOnAttackDisable(FRCNazoBattleDisturbLetterNotifyData NotifyData) {
}

void ARCNazoBattleLevelScriptActor::DebugSetDrawHUD(bool bInDraw) {
}



void ARCNazoBattleLevelScriptActor::CloseContest_End(bool bSuccess) {
}




void ARCNazoBattleLevelScriptActor::ChangeCameraFromTag(FName CameraTag, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp) {
}

void ARCNazoBattleLevelScriptActor::ChangeCamera(ACameraActor* Camera, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp) {
}

void ARCNazoBattleLevelScriptActor::BattleUI_Start(bool bInOpenKaiKagi, bool bInOpenPlayerHP) {
}

void ARCNazoBattleLevelScriptActor::BattleUI_SetKaiKagiID(FName InKaiKagiID) {
}

void ARCNazoBattleLevelScriptActor::BattleUI_Finish() {
}

void ARCNazoBattleLevelScriptActor::BattleUI_ChangeKaiKagi(FName InKaiKagiID) {
}

void ARCNazoBattleLevelScriptActor::BattleSubTitleSwitch() {
}

bool ARCNazoBattleLevelScriptActor::BattleStartUI_Start() {
    return false;
}

bool ARCNazoBattleLevelScriptActor::BattleStartUI_IsFinished() {
    return false;
}

void ARCNazoBattleLevelScriptActor::BattleRebuttalResetPosition() {
}

void ARCNazoBattleLevelScriptActor::BattleAllRebuttalLetterForceFinish() {
}



void ARCNazoBattleLevelScriptActor::AssistPlayAnim(FName InMotionName, float InPlayRate, bool bInLoop, float InBlendTime) {
}

void ARCNazoBattleLevelScriptActor::AssistCutin_Start() {
}


