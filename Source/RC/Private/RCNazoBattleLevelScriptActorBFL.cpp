#include "RCNazoBattleLevelScriptActorBFL.h"

URCNazoBattleLevelScriptActorBFL::URCNazoBattleLevelScriptActorBFL() {
}

bool URCNazoBattleLevelScriptActorBFL::SetBattleInputEnable(bool bInputEnable) {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::IsBattleInitialized() {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::IsBattle() {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::GetPreEventPartVoiceKaijinTag(FName& KaijinTag) {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::GetKaijinPartVoiceID(FName& PartVoiceID, float& DelayTime, ERCNazoBattleKaijinPartVoiceType PartVoiceType, FName KaijinTag) {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::GetDefaultKaijinPartVoiceID(FName& PartVoiceID, float& DelayTime, ERCNazoBattleKaijinPartVoiceType PartVoiceType) {
    return false;
}

FRCNazoBattleSettings URCNazoBattleLevelScriptActorBFL::GetBattleSettings() {
    return FRCNazoBattleSettings{};
}

ARCNazoBattleLevelScriptActor* URCNazoBattleLevelScriptActorBFL::GetBattleLevelScriptActor() {
    return NULL;
}

TArray<FRCNazoBattleLSARebuttalData> URCNazoBattleLevelScriptActorBFL::GetActiveRebuttalDataArray() {
    return TArray<FRCNazoBattleLSARebuttalData>();
}

bool URCNazoBattleLevelScriptActorBFL::BattleStartUI_Start() {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::BattleStartUI_IsFinished() {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::BattleRebuttalResetPosition() {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::BattleRebuttalEndPhase() {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::BattleRebuttalEndCloseContest(bool bSuccess) {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::BattleHintUI_Start(FName HintTextId) {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::BattleHintUI_IsFinished() {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::BattleGetRebuttalPhaseParameter_PreEvent(FName& TalkID) {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::BattleGetRebuttalPhaseParameter_NextRebuttalEvent(int32& RebuttalGroupNo, FName& TalkID) {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::BattleGetRebuttalPhaseParameter_Interval(int32& RebuttalGroupNo, FName& TalkID) {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::BattleGetRebuttalPhaseParameter_GameOver(int32& RebuttalGroupNo, int32& RebuttalNo, FName& TalkID, FName& HintTextId) {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::BattleGetRebuttalPhaseParameter_Confrontation(int32& RebuttalGroupNo, bool& bFirstChallenge, FName& TalkID) {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::BattleGetRebuttalPhaseParameter_CloseContest(int32& RebuttalGroupNo, int32& RebuttalNo, float& InputTime, int32& InputCount, int32& FailureDamage) {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::BattleGetRebuttalPhaseParameter_ClearEvent(FName& TalkID, TArray<FName>& TalkIDArray) {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::BattleGetRebuttalPhaseParameter_AttackSuccess(int32& RebuttalGroupNo, int32& RebuttalNo, FName& TalkID) {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::BattleGetRebuttalPhaseParameter_AttackFailure(int32& RebuttalGroupNo, int32& RebuttalNo, ERCNazoBattleLSARebuttalAttackFailureType& FailureType, FName& TalkID) {
    return false;
}

void URCNazoBattleLevelScriptActorBFL::BattleGetCurrentRebuttalGroupNo(int32& RebuttalGroupNo) {
}

bool URCNazoBattleLevelScriptActorBFL::BattleGameOverUI_Start() {
    return false;
}

bool URCNazoBattleLevelScriptActorBFL::BattleGameOverUI_IsFinished() {
    return false;
}

int32 URCNazoBattleLevelScriptActorBFL::BattleGameOverUI_GetSelectedIndex() {
    return 0;
}

bool URCNazoBattleLevelScriptActorBFL::BattleAllRebuttalLetterForceFinish() {
    return false;
}


