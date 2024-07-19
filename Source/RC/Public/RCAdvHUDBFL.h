#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERCAdvHUDTalkWindowType.h"
#include "ERCInputKeyType.h"
#include "ERCSkillFunctionType.h"
#include "RCAdvHUDTalkTextData.h"
#include "RCSubtitleData.h"
#include "RCTalkData.h"
#include "RCAdvHUDBFL.generated.h"

class ARCAdvHUD;
class UDataTable;

UCLASS(Blueprintable)
class RC_API URCAdvHUDBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCAdvHUDBFL();

    UFUNCTION(BlueprintCallable)
    static bool WorldMenuStart();
    
    UFUNCTION(BlueprintCallable)
    static void UpdateCollectionFlag(FName CharaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 TextIDToFaceID(FName TextID);
    
    UFUNCTION(BlueprintCallable)
    static void TalkStartSimple(bool& bSucceeded, ERCAdvHUDTalkWindowType WindowType);
    
    UFUNCTION(BlueprintCallable)
    static void TalkStart2(bool& bSucceeded, ERCAdvHUDTalkWindowType WindowType, FName TextID, int32 CharacterFaceID, int32 CharacterFacialID, bool bAutoPlay);
    
    UFUNCTION(BlueprintCallable)
    static void TalkSetTextSimple(bool& bSucceeded, FName TextID, float Delay);
    
    UFUNCTION(BlueprintCallable)
    static void TalkSetTextData(bool& bSucceeded, FRCAdvHUDTalkTextData TextData);
    
    UFUNCTION(BlueprintCallable)
    static void TalkSetText2(bool& bSucceeded, int32 CharacterFaceID, int32 CharacterFacialID, FName TextID, int32 Character3DID, FName CharacterFacial3DID, FName VoiceID, float Delay);
    
    UFUNCTION(BlueprintCallable)
    static void TalkSetGradationFilter(bool& bSucceeded, FName FilterID);
    
    UFUNCTION(BlueprintCallable)
    static void TalkSetForceTextSpeedSettings(bool& bSucceeded, bool bIsForceTextSpeed, int32 ForceTextSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void TalkSetAuto(bool& bSucceeded, bool bAutoPlay);
    
    UFUNCTION(BlueprintCallable)
    static void TalkForceFinish(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static void TalkFinish(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static void SuquestStartInformationStart(bool& bSucceeded, FName QuestID, float dispTime);
    
    UFUNCTION(BlueprintCallable)
    static void SuquestEndInformationStart(bool& bSucceeded, FName QuestID, float dispTime);
    
    UFUNCTION(BlueprintCallable)
    static void SubtitleStartFromCharacterID_WaitPush(bool& bSucceeded, int32 CharacterNameID, int32 CharacterNameSubID, FName TextID, float DelayAtEndVoice);
    
    UFUNCTION(BlueprintCallable)
    static void SubtitleStartFromCharacterID(bool& bSucceeded, int32 CharacterNameID, int32 CharacterNameSubID, FName TextID, float DelayAtEndVoice);
    
    UFUNCTION(BlueprintCallable)
    static void SubtitleStart_WaitPush(bool& bSucceeded, FName NameID, FName TextID, float DelayAtEndVoice);
    
    UFUNCTION(BlueprintCallable)
    static void SubtitleStart_OnlyCursor(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static void SubtitleStart(bool& bSucceeded, FName NameID, FName TextID, float DelayAtEndVoice);
    
    UFUNCTION(BlueprintCallable)
    static void SubtitleFinish(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static bool SubQuestMenuStart();
    
    UFUNCTION(BlueprintCallable)
    static bool SubQuestMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    static void StartKaiKagiSelect2(bool& bSucceeded, FName QuestionTextID, TArray<FName> KaiKagiIDArray, FName CorrectKaiKagiID, TArray<FName> DeleteKaiKagiIDArray, bool bNotPause, bool bCancelDisable);
    
    UFUNCTION(BlueprintCallable)
    static void StartKaiKagiSelect(bool& bSucceeded, TArray<FName> KaiKagiIDArray, FName CorrectKaiKagiID, bool bNotPause);
    
    UFUNCTION(BlueprintCallable)
    static bool SkillSelectMenuStart();
    
    UFUNCTION(BlueprintCallable)
    static bool SkillSelectMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    static bool SkillMenuStart();
    
    UFUNCTION(BlueprintCallable)
    static bool SkillMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    static void SetPauseEnable(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMenuHelpText(FName InHelpTextID);
    
    UFUNCTION(BlueprintCallable)
    static void SetMenuEnable(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMenuButtonGuideResetKeyType();
    
    UFUNCTION(BlueprintCallable)
    static bool SetMenuButtonGuide(FName InModeID, bool bInPlayOpenAnim);
    
    UFUNCTION(BlueprintCallable)
    static void SetBacklogEnable(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAreaMapMenuNewAreaSePlayed(bool bInPlayedNewAreaSE);
    
    UFUNCTION(BlueprintCallable)
    static void SequentialTalkStartFromTalkID(bool& bSucceeded, FName TalkID, bool bForceAutoPlay);
    
    UFUNCTION(BlueprintCallable)
    static void SequentialTalkStartFromDataTable(bool& bSucceeded, UDataTable* Table, FName TalkID, bool bForceAutoPlay);
    
    UFUNCTION(BlueprintCallable)
    static void SequentialTalkStartFromData2(bool& bSucceeded, FRCTalkData TalkData, bool bForceAutoPlay);
    
    UFUNCTION(BlueprintCallable)
    static void SequentialTalkStart2(bool& bSucceeded, FName TalkID, FRCTalkData TalkData, bool bForceAutoPlay);
    
    UFUNCTION(BlueprintCallable)
    static void SequentialTalkForceFinish(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static void SequentialTalkFinish(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static void SequentialSubtitleStartFromSubtitleIDForMovie(bool& bSucceeded, FName InSubtitleID, float InDelayAtEnd, float InDelayToNext, bool bInCloseAtAllEnd, bool bInDisableSave);
    
    UFUNCTION(BlueprintCallable)
    static void SequentialSubtitleStartFromSubtitleID(bool& bSucceeded, FName SubTitleID, float DelayAtEnd, float DelayToNext, bool bCloseAtAllEnd, bool bDisableSave);
    
    UFUNCTION(BlueprintCallable)
    static void SequentialSubtitleStartFromDataTable_WaitPush(bool& bSucceeded, UDataTable* Table, FName SubTitleID, float DelayAtEnd, float DelayToNext, bool bCloseAtAllEnd, bool bDisableSave);
    
    UFUNCTION(BlueprintCallable)
    static void SequentialSubtitleStartFromDataTable(bool& bSucceeded, UDataTable* Table, FName SubTitleID, float DelayAtEnd, float DelayToNext, bool bCloseAtAllEnd, bool bDisableSave);
    
    UFUNCTION(BlueprintCallable)
    static void SequentialSubtitleStartFromData2(bool& bSucceeded, FRCSubtitleData SubtitleData, float DelayAtEnd, float DelayToNext, bool bCloseAtAllEnd, bool bDisableSave);
    
    UFUNCTION(BlueprintCallable)
    static void SequentialSubtitleStart2(bool& bSucceeded, FName SubTitleID, FRCSubtitleData SubtitleData, float DelayAtEnd, float DelayToNext, bool bCloseAtAllEnd, bool bDisableSave);
    
    UFUNCTION(BlueprintCallable)
    static void SequentialSubtitleFinish(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static void SequentialSubtitleCancel();
    
    UFUNCTION(BlueprintCallable)
    static bool SaveLoadSelectStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SaveLoadLayoutClose();
    
    UFUNCTION(BlueprintCallable)
    static void ResetSubtitlePlayVoiceFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ResetSkillSelectFocus();
    
    UFUNCTION(BlueprintCallable)
    static void OpenSkillWindow(FName InSkillMode, FName InSkillID);
    
    UFUNCTION(BlueprintCallable)
    static void OpenGenericWindowMultiTextIDs(TArray<FName> InTextIDArray, bool bInIsSelect, bool bInIsFocusTrue, bool bInIsAcceptCancel);
    
    UFUNCTION(BlueprintCallable)
    static void OpenGenericWindowMultiStrings(TArray<FString> InStringArray, bool bInIsSelect, bool bInIsFocusTrue, bool bInIsAcceptCancel);
    
    UFUNCTION(BlueprintCallable)
    static void OpenGenericWindow(FName InTextID, bool bInIsSelect, bool bInIsFocusTrue, bool bInIsAcceptCancel);
    
    UFUNCTION(BlueprintCallable)
    static bool NzResultStart(const int32 InChapterNumber);
    
    UFUNCTION(BlueprintCallable)
    static bool NzResultFinish();
    
    UFUNCTION(BlueprintCallable)
    static bool MenuGuideStart();
    
    UFUNCTION(BlueprintCallable)
    static bool MenuGuideFinish();
    
    UFUNCTION(BlueprintCallable)
    static void MakeKaiKagiIDArrayBySkill(TArray<FName>& OutKaiKagiIDArray, TArray<FName> KaiKagiIDArray, FName CorrectKaiKagiID, TArray<FName> DeleteKaiKagiIDArray, ERCSkillFunctionType SkillFunctionType);
    
    UFUNCTION(BlueprintCallable)
    static void MakeDeleteKaiKagiIDArray(TArray<FName>& OutDeleteKaiKagiIDArray, TArray<FName> KaiKagiIDArray, FName CorrectKaiKagiID, TArray<FName> DeleteKaiKagiIDArray);
    
    UFUNCTION(BlueprintCallable)
    static bool MainQuestMenuStart();
    
    UFUNCTION(BlueprintCallable)
    static bool MainQuestMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    static bool KagiMenuStart();
    
    UFUNCTION(BlueprintCallable)
    static bool KagiMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    static bool IsShowTutorialWindow();
    
    UFUNCTION(BlueprintCallable)
    static bool IsShowSkillWindow();
    
    UFUNCTION(BlueprintCallable)
    static bool IsShowGenericWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKagiSelectMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKagiLarge();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFinishedSuquestStartInformation();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFinishedSuquestEndInformation();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFinishedSkillWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFinishedSaveLoadLayout();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFinishedGenericWindow();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFigureInformationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCanGlossaryMenuClose();
    
    UFUNCTION(BlueprintCallable)
    static bool GlossaryMenuStart();
    
    UFUNCTION(BlueprintCallable)
    static bool GlossaryMenuFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSkillSelectIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSkillMenuOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSequentialTalkVoiceCharacterID(int32& VoiceCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSequentialSubtitleVoiceCharacterID(int32& VoiceCharacterID);
    
    UFUNCTION(BlueprintCallable)
    static FName GetSelectedMapID();
    
    UFUNCTION(BlueprintCallable)
    static void GetKaiKagiSelectKaiKagiIDArray(TArray<FName>& KaiKagiIDArray);
    
    UFUNCTION(BlueprintCallable)
    static void GetKaiKagiSelectIndex(int32& SelectedIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool GetInputMenuButtonGuideKeyType(ERCInputKeyType InKeyType);
    
    UFUNCTION(BlueprintCallable)
    static bool GetButtonResultSkillWindow();
    
    UFUNCTION(BlueprintCallable)
    static bool GetButtonResultGenericWindow();
    
    UFUNCTION(BlueprintCallable)
    static bool GetBusMenuCancel();
    
    UFUNCTION(BlueprintCallable)
    static bool GetAreaMapMenuNewAreaSePlayed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAreaMapMenuGoFastTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAreaMapMenuEnableFastTravel(FName InWorldMapID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAreaMapMenuCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARCAdvHUD* GetAdvHUD();
    
    UFUNCTION(BlueprintCallable)
    static void ForceFinishKaiKagiSelect(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static void FigureInformationStart(bool& bSucceeded, FName CharaID, float dispTime);
    
    UFUNCTION(BlueprintCallable)
    static void DetPointStart(bool& bSucceeded, int32 Point);
    
    UFUNCTION(BlueprintCallable)
    static void DetPointFinish(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static void CutInStart(bool& bSucceeded, FName CutInID);
    
    UFUNCTION(BlueprintCallable)
    static void CutInFinish(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static void CutInAnimStartLoad(bool& bSucceeded, FName CutInID);
    
    UFUNCTION(BlueprintCallable)
    static void CutInAnimStart(bool& bSucceeded, FName CutInID, bool bInReleaseWBPAtFinished);
    
    UFUNCTION(BlueprintCallable)
    static void CutInAnimRelease(bool& bSucceeded, FName CutInID);
    
    UFUNCTION(BlueprintCallable)
    static void CutInAnimNext(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static void CutInAnimAllRelease(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static bool CollectionMenuStart();
    
    UFUNCTION(BlueprintCallable)
    static bool CollectionMenuFinishForFooterAnimation();
    
    UFUNCTION(BlueprintCallable)
    static bool CollectionMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    static void CloseSkillWindow();
    
    UFUNCTION(BlueprintCallable)
    static void CloseGenericWindow();
    
    UFUNCTION(BlueprintCallable)
    static bool ClearMenuHelpText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckTopMenuClose();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckTopMenuCheckStarted();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckTopMenuCheckFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckTalkWindow(bool& bRunning);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckTalkStarted(bool& bStarted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckTalkFinished(bool& bFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckTalkEndText(bool& bEnded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckSubtitleEndDelay(bool& bFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckSubQuestMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckSubQuestMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckSubQuestMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckSkillSelectMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckSkillSelectMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckSkillSelectMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckSkillMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckSkillMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckSkillMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckSkillGetInterval();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckSequentialTalkFinishedLastText(bool& bFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckSequentialTalkFinished(bool& bFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckSequentialTalkCloseAtAllEnd(bool& bClose);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckSequentialTalk(bool& bRunning);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckSequentialSubtitleFinishedLastText(bool& bFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckSequentialSubtitleFinished(bool& bFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckSequentialSubtitleCloseAtAllEnd(bool& bClose);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckSequentialSubtitle(bool& bRunning);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckNzResultStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckNzResultFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckNzResultClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMenuGuideStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMenuGuideFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMainQuestMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMainQuestMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMainQuestMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckKagiMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckKagiMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckGlossaryMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckGlossaryMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckGlossaryMenuClose();
    
    UFUNCTION(BlueprintCallable)
    static void CheckFinishedKaiKagiSelect(bool& bFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckDetPointCheckStarted(bool& bStarted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckDetPointCheckFinished(bool& bFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckCutInCheckStarted(bool& bStarted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckCutInCheckFinished(bool& bFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckCutInAnimNextEnable(bool& bNextEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckCutInAnimLoadCompleted(bool& bLoaded, FName CutInID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckCutInAnimFinishedAnim(bool& bNextEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckCollectionMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckCollectionMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckCollectionMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckCharacterMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckCharacterMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckCharacterMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckAreaMapMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckAreaMapMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CharaIntegrationIDToFaceID(int32 IntegrationID);
    
    UFUNCTION(BlueprintCallable)
    static bool CharacterMenuStart();
    
    UFUNCTION(BlueprintCallable)
    static bool CharacterMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    static bool AreaMapMenuStart(bool bShortcut, FName InLocationID);
    
    UFUNCTION(BlueprintCallable)
    static bool AreaMapMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    static void AddLogAtSkip(FName TextID);
    
};

