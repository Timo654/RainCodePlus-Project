#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERCChapter.h"
#include "ERCGameMode.h"
#include "ERCNzResultRankValue.h"
#include "ERCRealEventMapConnectBusStopStatus.h"
#include "ERCRealEventMapConnectStatus.h"
#include "ERCStoryMode.h"
#include "RCVariableLogInfo.h"
#include "RCVariableNazoResultList.h"
#include "RCVariableBFL.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RC_API URCVariableBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCVariableBFL();

    UFUNCTION(BlueprintCallable)
    static void SubTanteiPoint(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SubSceneValueDirect(FName InSceneVariableName, int32 InValue, bool bZeroStop);
    
    UFUNCTION(BlueprintCallable)
    static void SubGameValueDirect(FName InGameVariableName, int32 InValue, bool bZeroStop);
    
    UFUNCTION(BlueprintCallable)
    static void SubChapterValueDirect(FName InChapterVariableName, int32 InValue, bool bZeroStop);
    
    UFUNCTION(BlueprintCallable)
    static void SetTitleMenuInitListFlag(bool isFront);
    
    UFUNCTION(BlueprintCallable)
    static void SetTitleGalleryMovieEvent(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetTitleFrontListIndex(int32 SelectedIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetTitleCollectionEvent(bool isTitle);
    
    UFUNCTION(BlueprintCallable)
    static void SetTitleBackListIndex(int32 SelectedIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetStoryMode(ERCStoryMode InStoryMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetStartDebugMenuDraw(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetSkipEnable(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectAlready(FName InSceneID, FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    static void SetSceneVariableDirect(FName InSceneVariableName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetSaveLoadMapName(FName InSaveLoadMapName);
    
    UFUNCTION(BlueprintCallable)
    static void SetSaveEnable(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetNowMapIDLong(FName InMapID);
    
    UFUNCTION(BlueprintCallable)
    static void SetNowGameLevelInfoDetail(int32 InChapter, FName InScene, FName InMapID, FName InPlayerStartName);
    
    UFUNCTION(BlueprintCallable)
    static void SetNowGameLevelInfo(FName InMapID);
    
    UFUNCTION(BlueprintCallable)
    static void SetNextScene(FName InScene, FName InMapID, FName InPlayerStartName);
    
    UFUNCTION(BlueprintCallable)
    static void SetNextMapIDLong(FName InMapID);
    
    UFUNCTION(BlueprintCallable)
    static void SetNextMapID(FName InMapID, FName InPlayerStartName);
    
    UFUNCTION(BlueprintCallable)
    static void SetNextGameLevelInfoFromData(int32 InChapter, FName InScene);
    
    UFUNCTION(BlueprintCallable)
    static void SetNextGameLevelInfo(int32 InChapter, FName InScene, FName InMapID, FName InPlayerStartName);
    
    UFUNCTION(BlueprintCallable)
    static void SetNextBusStopMove(FName InMapID);
    
    UFUNCTION(BlueprintCallable)
    static void SetNextAutoGameLevelInfoFromData();
    
    UFUNCTION(BlueprintCallable)
    static void SetNewGame(ERCStoryMode InStoryMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetNazoRewardPoint(int32 InChapter, int32 InRewardPoint);
    
    UFUNCTION(BlueprintCallable)
    static void SetNazoResultTanteiPoint2(int32 InTanteiPoint, FName InMinigameID);
    
    UFUNCTION(BlueprintCallable)
    static void SetNazoResultTanteiPoint(int32 InTanteiPoint, FName InMinigameID);
    
    UFUNCTION(BlueprintCallable)
    static void SetNazoResultScene(FName InMinigameID);
    
    UFUNCTION(BlueprintCallable)
    static void SetNazoResultSave();
    
    UFUNCTION(BlueprintCallable)
    static void SetNazoResultRank(int32 InChapter, ERCNzResultRankValue InRank);
    
    UFUNCTION(BlueprintCallable)
    static void SetNazoResultPoint(int32 InChapter, int32 InPoint);
    
    UFUNCTION(BlueprintCallable)
    static void SetNazoResultHpRank(int32 InChapter, ERCNzResultRankValue InRank);
    
    UFUNCTION(BlueprintCallable)
    static void SetNazoResultFailureCount(int32 InCount, FName InMinigameID);
    
    UFUNCTION(BlueprintCallable)
    static void SetNazoResultContinueCount(int32 InChapter, int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetMovieSkipEnable(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetMessageAuto(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetMainQuestPhase(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetLastCameraTagName(FName InCameraTagName);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameVariableDirect(FName InGameVariableName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameMode(ERCGameMode InGameMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameClear();
    
    UFUNCTION(BlueprintCallable)
    static void SetGalleryMode(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetGalleryMenuPlayingMovieID(FName InMovieID);
    
    UFUNCTION(BlueprintCallable)
    static void SetGalleryMenuMovieSoundTable(UDataTable* InSoundTable);
    
    UFUNCTION(BlueprintCallable)
    static void SetGalleryMenuMovieListIndex(int32 InListIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetFreeMoveSkipEnable(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetExecMenuSceneLoad(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableSaveDataSubStory(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableSaveData(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetDrawDisableSubQuest(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetDataLoadReturn(bool bIsFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetCollectionEventStart(int32 InChapter, FName InScene);
    
    UFUNCTION(BlueprintCallable)
    static void SetCollectionEventBack();
    
    UFUNCTION(BlueprintCallable)
    static void SetChapterVariableDirect(FName InChapterVariableName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetChapterClear(ERCChapter InChapter);
    
    UFUNCTION(BlueprintCallable)
    static void SetBusStopStatusFromAreamap(FName InMapID, ERCRealEventMapConnectBusStopStatus InSatus);
    
    UFUNCTION(BlueprintCallable)
    static void SetBusStopStatus(ERCRealEventMapConnectStatus InBusStopStatus);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSaveLoadMapName();
    
    UFUNCTION(BlueprintCallable)
    static void ResetCollectionEvent();
    
    UFUNCTION(BlueprintCallable)
    static void OpenDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    static bool IsTitleMenuInitListFlag();
    
    UFUNCTION(BlueprintCallable)
    static bool IsStartDebugMenuDraw();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSkipEnable();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSelectAlready(FName InSceneID, FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneValueZeroDirect(FName InSceneVariableName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneValuesOrZeroDirect(TArray<FName> InSceneVariableNameList);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneValuesOrSmallDirect(TArray<FName> InSceneVariableNameList, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneValuesOrNotZeroDirect(TArray<FName> InSceneVariableNameList);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneValuesOrLargeDirect(TArray<FName> InSceneVariableNameList, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneValuesOrEqualDirect(TArray<FName> InSceneVariableNameList, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneValueSmallDirect(FName InSceneVariableName, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneValuesAndZeroDirect(TArray<FName> InSceneVariableNameList);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneValuesAndSmallDirect(TArray<FName> InSceneVariableNameList, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneValuesAndNotZeroDirect(TArray<FName> InSceneVariableNameList);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneValuesAndLargeDirect(TArray<FName> InSceneVariableNameList, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneValuesAndEqualDirect(TArray<FName> InSceneVariableNameList, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneValueNotZeroDirect(FName InSceneVariableName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneValueLargeDirect(FName InSceneVariableName, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneValueEqualDirect(FName InSceneVariableName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneChange();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSaveEnable();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMovieSkipEnable();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMessageAuto();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameValueZeroDirect(FName InGameVariableName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameValuesOrZeroDirect(TArray<FName> InGameVariableNameList);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameValuesOrSmallDirect(TArray<FName> InGameVariableNameList, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameValuesOrNotZeroDirect(TArray<FName> InGameVariableNameList);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameValuesOrLargeDirect(TArray<FName> InGameVariableNameList, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameValuesOrEqualDirect(TArray<FName> InGameVariableNameList, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameValueSmallDirect(FName InGameVariableName, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameValuesAndZeroDirect(TArray<FName> InGameVariableNameList);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameValuesAndSmallDirect(TArray<FName> InGameVariableNameList, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameValuesAndNotZeroDirect(TArray<FName> InGameVariableNameList);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameValuesAndLargeDirect(TArray<FName> InGameVariableNameList, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameValuesAndEqualDirect(TArray<FName> InGameVariableNameList, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameValueNotZeroDirect(FName InGameVariableName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameValueLargeDirect(FName InGameVariableName, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameValueEqualDirect(FName InGameVariableName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameClear();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGalleryMode();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFreeMoveSkipEnable();
    
    UFUNCTION(BlueprintCallable)
    static bool IsExecMenuSceneLoad();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableSaveDataSubStory();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableSaveData();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDrawDisableSubQuest();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDataLoadReturn();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCollectionStoryScene();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCollectionEventStart();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCollectionEvent();
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterValueZeroDirect(FName InChapterVariableName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterValuesOrZeroDirect(TArray<FName> InChapterVariableNameList);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterValuesOrSmallDirect(TArray<FName> InChapterVariableNameList, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterValuesOrNotZeroDirect(TArray<FName> InChapterVariableNameList);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterValuesOrLargeDirect(TArray<FName> InChapterVariableNameList, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterValuesOrEqualDirect(TArray<FName> InChapterVariableNameList, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterValueSmallDirect(FName InChapterVariableName, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterValuesAndZeroDirect(TArray<FName> InChapterVariableNameList);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterValuesAndSmallDirect(TArray<FName> InChapterVariableNameList, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterValuesAndNotZeroDirect(TArray<FName> InChapterVariableNameList);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterValuesAndLargeDirect(TArray<FName> InChapterVariableNameList, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterValuesAndEqualDirect(TArray<FName> InChapterVariableNameList, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterValueNotZeroDirect(FName InChapterVariableName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterValueLargeDirect(FName InChapterVariableName, int32 InValue, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterValueEqualDirect(FName InChapterVariableName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static bool IsChapterClear(ERCChapter InChapter);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBusStopMove();
    
    UFUNCTION(BlueprintCallable)
    static void InitNazoResult();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTotalTanteiPoint();
    
    UFUNCTION(BlueprintCallable)
    static bool GetTitleGalleryMovieEvent();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTitleFrontListIndex();
    
    UFUNCTION(BlueprintCallable)
    static bool GetTitleCollectionEvent();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTitleBackListIndex();
    
    UFUNCTION(BlueprintCallable)
    static ERCStoryMode GetStoryMode();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSceneVariableDirect(FName InSceneVariableName);
    
    UFUNCTION(BlueprintCallable)
    static FName GetScene();
    
    UFUNCTION(BlueprintCallable)
    static FName GetSaveLoadMapName();
    
    UFUNCTION(BlueprintCallable)
    static FName GetPlayerStartName();
    
    UFUNCTION(BlueprintCallable)
    static FName GetOldScene();
    
    UFUNCTION(BlueprintCallable)
    static FName GetOldMapIDLong();
    
    UFUNCTION(BlueprintCallable)
    static FName GetOldMapID();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOldChapter();
    
    UFUNCTION(BlueprintCallable)
    static FName GetNextScene();
    
    UFUNCTION(BlueprintCallable)
    static FName GetNextPlayerStartName();
    
    UFUNCTION(BlueprintCallable)
    static FName GetNextMapIDLong();
    
    UFUNCTION(BlueprintCallable)
    static FName GetNextMapID();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNextChapter();
    
    UFUNCTION(BlueprintCallable)
    static FName GetNazoResultNowMinigameID();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNazoResultContinue(int32 InRound, FName InMinigameID);
    
    UFUNCTION(BlueprintCallable)
    static void GetNazoResult(FRCVariableNazoResultList& OutData, int32 InChapter, bool bCurrent);
    
    UFUNCTION(BlueprintCallable)
    static FName GetMapIDLong();
    
    UFUNCTION(BlueprintCallable)
    static FName GetMapID();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMainQuestPhase();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLogMax();
    
    UFUNCTION(BlueprintCallable)
    static bool GetLog(TArray<FRCVariableLogInfo>& OutLogList, int32 StartLogNum, int32 EndLogNum);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLastLogNum();
    
    UFUNCTION(BlueprintCallable)
    static FName GetLastCameraTagName();
    
    UFUNCTION(BlueprintCallable)
    static FName GetLastAccessActorName();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGameVariableDirect(FName InGameVariableName);
    
    UFUNCTION(BlueprintCallable)
    static ERCGameMode GetGameMode();
    
    UFUNCTION(BlueprintCallable)
    static FName GetGalleryMenuPlayingMovieID();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetGalleryMenuMovieSoundTable();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGalleryMenuMovieListIndex();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetEndLogNum();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetChapterVariableDirect(FName InChapterVariableName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetChapter();
    
    UFUNCTION(BlueprintCallable)
    static ERCRealEventMapConnectBusStopStatus GetBusStopStatusFromAreamap(FName InMapID);
    
    UFUNCTION(BlueprintCallable)
    static ERCRealEventMapConnectStatus GetBusStopStatus();
    
    UFUNCTION(BlueprintCallable)
    static void EndNazoResultScene();
    
    UFUNCTION(BlueprintCallable)
    static void CreateSaveGameLevelInfo(int32 InChapter, FName InScene);
    
    UFUNCTION(BlueprintCallable)
    static void ClearSaveGameLevelInfo();
    
    UFUNCTION(BlueprintCallable)
    static void ClearNazoResultCount();
    
    UFUNCTION(BlueprintCallable)
    static void ClearNazoResultContinue(int32 InRound, FName InMinigameID);
    
    UFUNCTION(BlueprintCallable)
    static void ClearNazoResult(int32 InChapter);
    
    UFUNCTION(BlueprintCallable)
    static void ClearMainQuestPhase();
    
    UFUNCTION(BlueprintCallable)
    static void ClearBusStopStatusFromAreamap();
    
    UFUNCTION(BlueprintCallable)
    static void ClearBusStopMove();
    
    UFUNCTION(BlueprintCallable)
    static int32 AddTanteiPoint(FName InTanteiPointID);
    
    UFUNCTION(BlueprintCallable)
    static void AddSceneValueDirect(FName InSceneVariableName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddResultTanteiPoint(int32 InChapter, int32 InTanteiPoint);
    
    UFUNCTION(BlueprintCallable)
    static void AddNazoResultFailureCount2(FName InMinigameID);
    
    UFUNCTION(BlueprintCallable)
    static void AddNazoResultFailureCount(FName InMinigameID);
    
    UFUNCTION(BlueprintCallable)
    static void AddNazoResultContinue(int32 InRound, FName InMinigameID);
    
    UFUNCTION(BlueprintCallable)
    static void AddNazoBattleJustMove();
    
    UFUNCTION(BlueprintCallable)
    static void AddNazoBattleHanronSlash();
    
    UFUNCTION(BlueprintCallable)
    static void AddNazoBattleHajiki();
    
    UFUNCTION(BlueprintCallable)
    static void AddNazoBattleGayaSlash();
    
    UFUNCTION(BlueprintCallable)
    static void AddNazoBattleClear3Way();
    
    UFUNCTION(BlueprintCallable)
    static void AddNazoBattleAssist();
    
    UFUNCTION(BlueprintCallable)
    static void AddMainQuestPhase();
    
    UFUNCTION(BlueprintCallable)
    static void AddLog(int32 InCharacterFaceID, int32 InCharacterFacialID, FName InTextID, FName InVoiceID);
    
    UFUNCTION(BlueprintCallable)
    static void AddGameValueDirect(FName InGameVariableName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static void AddChapterValueDirect(FName InChapterVariableName, int32 InValue);
    
};

