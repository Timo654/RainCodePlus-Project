#include "RCVariableBFL.h"

URCVariableBFL::URCVariableBFL() {
}

void URCVariableBFL::SubTanteiPoint(int32 InValue) {
}

void URCVariableBFL::SubSceneValueDirect(FName InSceneVariableName, int32 InValue, bool bZeroStop) {
}

void URCVariableBFL::SubGameValueDirect(FName InGameVariableName, int32 InValue, bool bZeroStop) {
}

void URCVariableBFL::SubChapterValueDirect(FName InChapterVariableName, int32 InValue, bool bZeroStop) {
}

void URCVariableBFL::SetTitleMenuInitListFlag(bool isFront) {
}

void URCVariableBFL::SetTitleGalleryMovieEvent(bool bInFlag) {
}

void URCVariableBFL::SetTitleFrontListIndex(int32 SelectedIndex) {
}

void URCVariableBFL::SetTitleCollectionEvent(bool isTitle) {
}

void URCVariableBFL::SetTitleBackListIndex(int32 SelectedIndex) {
}

void URCVariableBFL::SetStoryMode(ERCStoryMode InStoryMode) {
}

void URCVariableBFL::SetStartDebugMenuDraw(bool bInFlag) {
}

void URCVariableBFL::SetSkipEnable(bool bInFlag) {
}

void URCVariableBFL::SetSelectAlready(FName InSceneID, FName InTextID) {
}

void URCVariableBFL::SetSceneVariableDirect(FName InSceneVariableName, int32 InValue) {
}

void URCVariableBFL::SetSaveLoadMapName(FName InSaveLoadMapName) {
}

void URCVariableBFL::SetSaveEnable(bool bInFlag) {
}

void URCVariableBFL::SetNowMapIDLong(FName InMapID) {
}

void URCVariableBFL::SetNowGameLevelInfoDetail(int32 InChapter, FName InScene, FName InMapID, FName InPlayerStartName) {
}

void URCVariableBFL::SetNowGameLevelInfo(FName InMapID) {
}

void URCVariableBFL::SetNextScene(FName InScene, FName InMapID, FName InPlayerStartName) {
}

void URCVariableBFL::SetNextMapIDLong(FName InMapID) {
}

void URCVariableBFL::SetNextMapID(FName InMapID, FName InPlayerStartName) {
}

void URCVariableBFL::SetNextGameLevelInfoFromData(int32 InChapter, FName InScene) {
}

void URCVariableBFL::SetNextGameLevelInfo(int32 InChapter, FName InScene, FName InMapID, FName InPlayerStartName) {
}

void URCVariableBFL::SetNextBusStopMove(FName InMapID) {
}

void URCVariableBFL::SetNextAutoGameLevelInfoFromData() {
}

void URCVariableBFL::SetNewGame(ERCStoryMode InStoryMode) {
}

void URCVariableBFL::SetNazoRewardPoint(int32 InChapter, int32 InRewardPoint) {
}

void URCVariableBFL::SetNazoResultTanteiPoint2(int32 InTanteiPoint, FName InMinigameID) {
}

void URCVariableBFL::SetNazoResultTanteiPoint(int32 InTanteiPoint, FName InMinigameID) {
}

void URCVariableBFL::SetNazoResultScene(FName InMinigameID) {
}

void URCVariableBFL::SetNazoResultSave() {
}

void URCVariableBFL::SetNazoResultRank(int32 InChapter, ERCNzResultRankValue InRank) {
}

void URCVariableBFL::SetNazoResultPoint(int32 InChapter, int32 InPoint) {
}

void URCVariableBFL::SetNazoResultHpRank(int32 InChapter, ERCNzResultRankValue InRank) {
}

void URCVariableBFL::SetNazoResultFailureCount(int32 InCount, FName InMinigameID) {
}

void URCVariableBFL::SetNazoResultContinueCount(int32 InChapter, int32 InCount) {
}

void URCVariableBFL::SetMovieSkipEnable(bool bInFlag) {
}

void URCVariableBFL::SetMessageAuto(bool bInFlag) {
}

void URCVariableBFL::SetMainQuestPhase(int32 InValue) {
}

void URCVariableBFL::SetLastCameraTagName(FName InCameraTagName) {
}

void URCVariableBFL::SetGameVariableDirect(FName InGameVariableName, int32 InValue) {
}

void URCVariableBFL::SetGameMode(ERCGameMode InGameMode) {
}

void URCVariableBFL::SetGameClear() {
}

void URCVariableBFL::SetGalleryMode(bool bInFlag) {
}

void URCVariableBFL::SetGalleryMenuPlayingMovieID(FName InMovieID) {
}

void URCVariableBFL::SetGalleryMenuMovieSoundTable(UDataTable* InSoundTable) {
}

void URCVariableBFL::SetGalleryMenuMovieListIndex(int32 InListIndex) {
}

void URCVariableBFL::SetFreeMoveSkipEnable(bool bInFlag) {
}

void URCVariableBFL::SetExecMenuSceneLoad(bool bInFlag) {
}

void URCVariableBFL::SetEnableSaveDataSubStory(bool IsEnable) {
}

void URCVariableBFL::SetEnableSaveData(bool IsEnable) {
}

void URCVariableBFL::SetDrawDisableSubQuest(bool bInFlag) {
}

void URCVariableBFL::SetDataLoadReturn(bool bIsFlag) {
}

void URCVariableBFL::SetCollectionEventStart(int32 InChapter, FName InScene) {
}

void URCVariableBFL::SetCollectionEventBack() {
}

void URCVariableBFL::SetChapterVariableDirect(FName InChapterVariableName, int32 InValue) {
}

void URCVariableBFL::SetChapterClear(ERCChapter InChapter) {
}

void URCVariableBFL::SetBusStopStatusFromAreamap(FName InMapID, ERCRealEventMapConnectBusStopStatus InSatus) {
}

void URCVariableBFL::SetBusStopStatus(ERCRealEventMapConnectStatus InBusStopStatus) {
}

void URCVariableBFL::ResetSaveLoadMapName() {
}

void URCVariableBFL::ResetCollectionEvent() {
}

void URCVariableBFL::OpenDebugMenu() {
}

bool URCVariableBFL::IsTitleMenuInitListFlag() {
    return false;
}

bool URCVariableBFL::IsStartDebugMenuDraw() {
    return false;
}

bool URCVariableBFL::IsSkipEnable() {
    return false;
}

bool URCVariableBFL::IsSelectAlready(FName InSceneID, FName InTextID) {
    return false;
}

bool URCVariableBFL::IsSceneValueZeroDirect(FName InSceneVariableName) {
    return false;
}

bool URCVariableBFL::IsSceneValuesOrZeroDirect(TArray<FName> InSceneVariableNameList) {
    return false;
}

bool URCVariableBFL::IsSceneValuesOrSmallDirect(TArray<FName> InSceneVariableNameList, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsSceneValuesOrNotZeroDirect(TArray<FName> InSceneVariableNameList) {
    return false;
}

bool URCVariableBFL::IsSceneValuesOrLargeDirect(TArray<FName> InSceneVariableNameList, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsSceneValuesOrEqualDirect(TArray<FName> InSceneVariableNameList, int32 InValue) {
    return false;
}

bool URCVariableBFL::IsSceneValueSmallDirect(FName InSceneVariableName, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsSceneValuesAndZeroDirect(TArray<FName> InSceneVariableNameList) {
    return false;
}

bool URCVariableBFL::IsSceneValuesAndSmallDirect(TArray<FName> InSceneVariableNameList, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsSceneValuesAndNotZeroDirect(TArray<FName> InSceneVariableNameList) {
    return false;
}

bool URCVariableBFL::IsSceneValuesAndLargeDirect(TArray<FName> InSceneVariableNameList, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsSceneValuesAndEqualDirect(TArray<FName> InSceneVariableNameList, int32 InValue) {
    return false;
}

bool URCVariableBFL::IsSceneValueNotZeroDirect(FName InSceneVariableName) {
    return false;
}

bool URCVariableBFL::IsSceneValueLargeDirect(FName InSceneVariableName, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsSceneValueEqualDirect(FName InSceneVariableName, int32 InValue) {
    return false;
}

bool URCVariableBFL::IsSceneChange() {
    return false;
}

bool URCVariableBFL::IsSaveEnable() {
    return false;
}

bool URCVariableBFL::IsMovieSkipEnable() {
    return false;
}

bool URCVariableBFL::IsMessageAuto() {
    return false;
}

bool URCVariableBFL::IsGameValueZeroDirect(FName InGameVariableName) {
    return false;
}

bool URCVariableBFL::IsGameValuesOrZeroDirect(TArray<FName> InGameVariableNameList) {
    return false;
}

bool URCVariableBFL::IsGameValuesOrSmallDirect(TArray<FName> InGameVariableNameList, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsGameValuesOrNotZeroDirect(TArray<FName> InGameVariableNameList) {
    return false;
}

bool URCVariableBFL::IsGameValuesOrLargeDirect(TArray<FName> InGameVariableNameList, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsGameValuesOrEqualDirect(TArray<FName> InGameVariableNameList, int32 InValue) {
    return false;
}

bool URCVariableBFL::IsGameValueSmallDirect(FName InGameVariableName, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsGameValuesAndZeroDirect(TArray<FName> InGameVariableNameList) {
    return false;
}

bool URCVariableBFL::IsGameValuesAndSmallDirect(TArray<FName> InGameVariableNameList, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsGameValuesAndNotZeroDirect(TArray<FName> InGameVariableNameList) {
    return false;
}

bool URCVariableBFL::IsGameValuesAndLargeDirect(TArray<FName> InGameVariableNameList, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsGameValuesAndEqualDirect(TArray<FName> InGameVariableNameList, int32 InValue) {
    return false;
}

bool URCVariableBFL::IsGameValueNotZeroDirect(FName InGameVariableName) {
    return false;
}

bool URCVariableBFL::IsGameValueLargeDirect(FName InGameVariableName, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsGameValueEqualDirect(FName InGameVariableName, int32 InValue) {
    return false;
}

bool URCVariableBFL::IsGameClear() {
    return false;
}

bool URCVariableBFL::IsGalleryMode() {
    return false;
}

bool URCVariableBFL::IsFreeMoveSkipEnable() {
    return false;
}

bool URCVariableBFL::IsExecMenuSceneLoad() {
    return false;
}

bool URCVariableBFL::IsEnableSaveDataSubStory() {
    return false;
}

bool URCVariableBFL::IsEnableSaveData() {
    return false;
}

bool URCVariableBFL::IsDrawDisableSubQuest() {
    return false;
}

bool URCVariableBFL::IsDataLoadReturn() {
    return false;
}

bool URCVariableBFL::IsCollectionStoryScene() {
    return false;
}

bool URCVariableBFL::IsCollectionEventStart() {
    return false;
}

bool URCVariableBFL::IsCollectionEvent() {
    return false;
}

bool URCVariableBFL::IsChapterValueZeroDirect(FName InChapterVariableName) {
    return false;
}

bool URCVariableBFL::IsChapterValuesOrZeroDirect(TArray<FName> InChapterVariableNameList) {
    return false;
}

bool URCVariableBFL::IsChapterValuesOrSmallDirect(TArray<FName> InChapterVariableNameList, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsChapterValuesOrNotZeroDirect(TArray<FName> InChapterVariableNameList) {
    return false;
}

bool URCVariableBFL::IsChapterValuesOrLargeDirect(TArray<FName> InChapterVariableNameList, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsChapterValuesOrEqualDirect(TArray<FName> InChapterVariableNameList, int32 InValue) {
    return false;
}

bool URCVariableBFL::IsChapterValueSmallDirect(FName InChapterVariableName, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsChapterValuesAndZeroDirect(TArray<FName> InChapterVariableNameList) {
    return false;
}

bool URCVariableBFL::IsChapterValuesAndSmallDirect(TArray<FName> InChapterVariableNameList, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsChapterValuesAndNotZeroDirect(TArray<FName> InChapterVariableNameList) {
    return false;
}

bool URCVariableBFL::IsChapterValuesAndLargeDirect(TArray<FName> InChapterVariableNameList, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsChapterValuesAndEqualDirect(TArray<FName> InChapterVariableNameList, int32 InValue) {
    return false;
}

bool URCVariableBFL::IsChapterValueNotZeroDirect(FName InChapterVariableName) {
    return false;
}

bool URCVariableBFL::IsChapterValueLargeDirect(FName InChapterVariableName, int32 InValue, bool bEqual) {
    return false;
}

bool URCVariableBFL::IsChapterValueEqualDirect(FName InChapterVariableName, int32 InValue) {
    return false;
}

bool URCVariableBFL::IsChapterClear(ERCChapter InChapter) {
    return false;
}

bool URCVariableBFL::IsBusStopMove() {
    return false;
}

void URCVariableBFL::InitNazoResult() {
}

int32 URCVariableBFL::GetTotalTanteiPoint() {
    return 0;
}

bool URCVariableBFL::GetTitleGalleryMovieEvent() {
    return false;
}

int32 URCVariableBFL::GetTitleFrontListIndex() {
    return 0;
}

bool URCVariableBFL::GetTitleCollectionEvent() {
    return false;
}

int32 URCVariableBFL::GetTitleBackListIndex() {
    return 0;
}

ERCStoryMode URCVariableBFL::GetStoryMode() {
    return ERCStoryMode::Original;
}

int32 URCVariableBFL::GetSceneVariableDirect(FName InSceneVariableName) {
    return 0;
}

FName URCVariableBFL::GetScene() {
    return NAME_None;
}

FName URCVariableBFL::GetSaveLoadMapName() {
    return NAME_None;
}

FName URCVariableBFL::GetPlayerStartName() {
    return NAME_None;
}

FName URCVariableBFL::GetOldScene() {
    return NAME_None;
}

FName URCVariableBFL::GetOldMapIDLong() {
    return NAME_None;
}

FName URCVariableBFL::GetOldMapID() {
    return NAME_None;
}

int32 URCVariableBFL::GetOldChapter() {
    return 0;
}

FName URCVariableBFL::GetNextScene() {
    return NAME_None;
}

FName URCVariableBFL::GetNextPlayerStartName() {
    return NAME_None;
}

FName URCVariableBFL::GetNextMapIDLong() {
    return NAME_None;
}

FName URCVariableBFL::GetNextMapID() {
    return NAME_None;
}

int32 URCVariableBFL::GetNextChapter() {
    return 0;
}

FName URCVariableBFL::GetNazoResultNowMinigameID() {
    return NAME_None;
}

int32 URCVariableBFL::GetNazoResultContinue(int32 InRound, FName InMinigameID) {
    return 0;
}

void URCVariableBFL::GetNazoResult(FRCVariableNazoResultList& OutData, int32 InChapter, bool bCurrent) {
}

FName URCVariableBFL::GetMapIDLong() {
    return NAME_None;
}

FName URCVariableBFL::GetMapID() {
    return NAME_None;
}

int32 URCVariableBFL::GetMainQuestPhase() {
    return 0;
}

int32 URCVariableBFL::GetLogMax() {
    return 0;
}

bool URCVariableBFL::GetLog(TArray<FRCVariableLogInfo>& OutLogList, int32 StartLogNum, int32 EndLogNum) {
    return false;
}

int32 URCVariableBFL::GetLastLogNum() {
    return 0;
}

FName URCVariableBFL::GetLastCameraTagName() {
    return NAME_None;
}

FName URCVariableBFL::GetLastAccessActorName() {
    return NAME_None;
}

int32 URCVariableBFL::GetGameVariableDirect(FName InGameVariableName) {
    return 0;
}

ERCGameMode URCVariableBFL::GetGameMode() {
    return ERCGameMode::Non;
}

FName URCVariableBFL::GetGalleryMenuPlayingMovieID() {
    return NAME_None;
}

UDataTable* URCVariableBFL::GetGalleryMenuMovieSoundTable() {
    return NULL;
}

int32 URCVariableBFL::GetGalleryMenuMovieListIndex() {
    return 0;
}

int32 URCVariableBFL::GetEndLogNum() {
    return 0;
}

int32 URCVariableBFL::GetChapterVariableDirect(FName InChapterVariableName) {
    return 0;
}

int32 URCVariableBFL::GetChapter() {
    return 0;
}

ERCRealEventMapConnectBusStopStatus URCVariableBFL::GetBusStopStatusFromAreamap(FName InMapID) {
    return ERCRealEventMapConnectBusStopStatus::Enable;
}

ERCRealEventMapConnectStatus URCVariableBFL::GetBusStopStatus() {
    return ERCRealEventMapConnectStatus::None;
}

void URCVariableBFL::EndNazoResultScene() {
}

void URCVariableBFL::CreateSaveGameLevelInfo(int32 InChapter, FName InScene) {
}

void URCVariableBFL::ClearSaveGameLevelInfo() {
}

void URCVariableBFL::ClearNazoResultCount() {
}

void URCVariableBFL::ClearNazoResultContinue(int32 InRound, FName InMinigameID) {
}

void URCVariableBFL::ClearNazoResult(int32 InChapter) {
}

void URCVariableBFL::ClearMainQuestPhase() {
}

void URCVariableBFL::ClearBusStopStatusFromAreamap() {
}

void URCVariableBFL::ClearBusStopMove() {
}

int32 URCVariableBFL::AddTanteiPoint(FName InTanteiPointID) {
    return 0;
}

void URCVariableBFL::AddSceneValueDirect(FName InSceneVariableName, int32 InValue) {
}

int32 URCVariableBFL::AddResultTanteiPoint(int32 InChapter, int32 InTanteiPoint) {
    return 0;
}

void URCVariableBFL::AddNazoResultFailureCount2(FName InMinigameID) {
}

void URCVariableBFL::AddNazoResultFailureCount(FName InMinigameID) {
}

void URCVariableBFL::AddNazoResultContinue(int32 InRound, FName InMinigameID) {
}

void URCVariableBFL::AddNazoBattleJustMove() {
}

void URCVariableBFL::AddNazoBattleHanronSlash() {
}

void URCVariableBFL::AddNazoBattleHajiki() {
}

void URCVariableBFL::AddNazoBattleGayaSlash() {
}

void URCVariableBFL::AddNazoBattleClear3Way() {
}

void URCVariableBFL::AddNazoBattleAssist() {
}

void URCVariableBFL::AddMainQuestPhase() {
}

void URCVariableBFL::AddLog(int32 InCharacterFaceID, int32 InCharacterFacialID, FName InTextID, FName InVoiceID) {
}

void URCVariableBFL::AddGameValueDirect(FName InGameVariableName, int32 InValue) {
}

void URCVariableBFL::AddChapterValueDirect(FName InChapterVariableName, int32 InValue) {
}


