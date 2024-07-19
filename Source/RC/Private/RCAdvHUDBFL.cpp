#include "RCAdvHUDBFL.h"

URCAdvHUDBFL::URCAdvHUDBFL() {
}

bool URCAdvHUDBFL::WorldMenuStart() {
    return false;
}

void URCAdvHUDBFL::UpdateCollectionFlag(FName CharaID) {
}

int32 URCAdvHUDBFL::TextIDToFaceID(FName TextID) {
    return 0;
}

void URCAdvHUDBFL::TalkStartSimple(bool& bSucceeded, ERCAdvHUDTalkWindowType WindowType) {
}

void URCAdvHUDBFL::TalkStart2(bool& bSucceeded, ERCAdvHUDTalkWindowType WindowType, FName TextID, int32 CharacterFaceID, int32 CharacterFacialID, bool bAutoPlay) {
}

void URCAdvHUDBFL::TalkSetTextSimple(bool& bSucceeded, FName TextID, float Delay) {
}

void URCAdvHUDBFL::TalkSetTextData(bool& bSucceeded, FRCAdvHUDTalkTextData TextData) {
}

void URCAdvHUDBFL::TalkSetText2(bool& bSucceeded, int32 CharacterFaceID, int32 CharacterFacialID, FName TextID, int32 Character3DID, FName CharacterFacial3DID, FName VoiceID, float Delay) {
}

void URCAdvHUDBFL::TalkSetGradationFilter(bool& bSucceeded, FName FilterID) {
}

void URCAdvHUDBFL::TalkSetForceTextSpeedSettings(bool& bSucceeded, bool bIsForceTextSpeed, int32 ForceTextSpeed) {
}

void URCAdvHUDBFL::TalkSetAuto(bool& bSucceeded, bool bAutoPlay) {
}

void URCAdvHUDBFL::TalkForceFinish(bool& bSucceeded) {
}

void URCAdvHUDBFL::TalkFinish(bool& bSucceeded) {
}

void URCAdvHUDBFL::SuquestStartInformationStart(bool& bSucceeded, FName QuestID, float dispTime) {
}

void URCAdvHUDBFL::SuquestEndInformationStart(bool& bSucceeded, FName QuestID, float dispTime) {
}

void URCAdvHUDBFL::SubtitleStartFromCharacterID_WaitPush(bool& bSucceeded, int32 CharacterNameID, int32 CharacterNameSubID, FName TextID, float DelayAtEndVoice) {
}

void URCAdvHUDBFL::SubtitleStartFromCharacterID(bool& bSucceeded, int32 CharacterNameID, int32 CharacterNameSubID, FName TextID, float DelayAtEndVoice) {
}

void URCAdvHUDBFL::SubtitleStart_WaitPush(bool& bSucceeded, FName NameID, FName TextID, float DelayAtEndVoice) {
}

void URCAdvHUDBFL::SubtitleStart_OnlyCursor(bool& bSucceeded) {
}

void URCAdvHUDBFL::SubtitleStart(bool& bSucceeded, FName NameID, FName TextID, float DelayAtEndVoice) {
}

void URCAdvHUDBFL::SubtitleFinish(bool& bSucceeded) {
}

bool URCAdvHUDBFL::SubQuestMenuStart() {
    return false;
}

bool URCAdvHUDBFL::SubQuestMenuFinish() {
    return false;
}

void URCAdvHUDBFL::StartKaiKagiSelect2(bool& bSucceeded, FName QuestionTextID, TArray<FName> KaiKagiIDArray, FName CorrectKaiKagiID, TArray<FName> DeleteKaiKagiIDArray, bool bNotPause, bool bCancelDisable) {
}

void URCAdvHUDBFL::StartKaiKagiSelect(bool& bSucceeded, TArray<FName> KaiKagiIDArray, FName CorrectKaiKagiID, bool bNotPause) {
}

bool URCAdvHUDBFL::SkillSelectMenuStart() {
    return false;
}

bool URCAdvHUDBFL::SkillSelectMenuFinish() {
    return false;
}

bool URCAdvHUDBFL::SkillMenuStart() {
    return false;
}

bool URCAdvHUDBFL::SkillMenuFinish() {
    return false;
}

void URCAdvHUDBFL::SetPauseEnable(bool bInFlag) {
}

bool URCAdvHUDBFL::SetMenuHelpText(FName InHelpTextID) {
    return false;
}

void URCAdvHUDBFL::SetMenuEnable(bool bInFlag) {
}

bool URCAdvHUDBFL::SetMenuButtonGuideResetKeyType() {
    return false;
}

bool URCAdvHUDBFL::SetMenuButtonGuide(FName InModeID, bool bInPlayOpenAnim) {
    return false;
}

void URCAdvHUDBFL::SetBacklogEnable(bool bInFlag) {
}

void URCAdvHUDBFL::SetAreaMapMenuNewAreaSePlayed(bool bInPlayedNewAreaSE) {
}

void URCAdvHUDBFL::SequentialTalkStartFromTalkID(bool& bSucceeded, FName TalkID, bool bForceAutoPlay) {
}

void URCAdvHUDBFL::SequentialTalkStartFromDataTable(bool& bSucceeded, UDataTable* Table, FName TalkID, bool bForceAutoPlay) {
}

void URCAdvHUDBFL::SequentialTalkStartFromData2(bool& bSucceeded, FRCTalkData TalkData, bool bForceAutoPlay) {
}

void URCAdvHUDBFL::SequentialTalkStart2(bool& bSucceeded, FName TalkID, FRCTalkData TalkData, bool bForceAutoPlay) {
}

void URCAdvHUDBFL::SequentialTalkForceFinish(bool& bSucceeded) {
}

void URCAdvHUDBFL::SequentialTalkFinish(bool& bSucceeded) {
}

void URCAdvHUDBFL::SequentialSubtitleStartFromSubtitleIDForMovie(bool& bSucceeded, FName InSubtitleID, float InDelayAtEnd, float InDelayToNext, bool bInCloseAtAllEnd, bool bInDisableSave) {
}

void URCAdvHUDBFL::SequentialSubtitleStartFromSubtitleID(bool& bSucceeded, FName SubTitleID, float DelayAtEnd, float DelayToNext, bool bCloseAtAllEnd, bool bDisableSave) {
}

void URCAdvHUDBFL::SequentialSubtitleStartFromDataTable_WaitPush(bool& bSucceeded, UDataTable* Table, FName SubTitleID, float DelayAtEnd, float DelayToNext, bool bCloseAtAllEnd, bool bDisableSave) {
}

void URCAdvHUDBFL::SequentialSubtitleStartFromDataTable(bool& bSucceeded, UDataTable* Table, FName SubTitleID, float DelayAtEnd, float DelayToNext, bool bCloseAtAllEnd, bool bDisableSave) {
}

void URCAdvHUDBFL::SequentialSubtitleStartFromData2(bool& bSucceeded, FRCSubtitleData SubtitleData, float DelayAtEnd, float DelayToNext, bool bCloseAtAllEnd, bool bDisableSave) {
}

void URCAdvHUDBFL::SequentialSubtitleStart2(bool& bSucceeded, FName SubTitleID, FRCSubtitleData SubtitleData, float DelayAtEnd, float DelayToNext, bool bCloseAtAllEnd, bool bDisableSave) {
}

void URCAdvHUDBFL::SequentialSubtitleFinish(bool& bSucceeded) {
}

void URCAdvHUDBFL::SequentialSubtitleCancel() {
}

bool URCAdvHUDBFL::SaveLoadSelectStart() {
    return false;
}

bool URCAdvHUDBFL::SaveLoadLayoutClose() {
    return false;
}

void URCAdvHUDBFL::ResetSubtitlePlayVoiceFlag() {
}

bool URCAdvHUDBFL::ResetSkillSelectFocus() {
    return false;
}

void URCAdvHUDBFL::OpenSkillWindow(FName InSkillMode, FName InSkillID) {
}

void URCAdvHUDBFL::OpenGenericWindowMultiTextIDs(TArray<FName> InTextIDArray, bool bInIsSelect, bool bInIsFocusTrue, bool bInIsAcceptCancel) {
}

void URCAdvHUDBFL::OpenGenericWindowMultiStrings(TArray<FString> InStringArray, bool bInIsSelect, bool bInIsFocusTrue, bool bInIsAcceptCancel) {
}

void URCAdvHUDBFL::OpenGenericWindow(FName InTextID, bool bInIsSelect, bool bInIsFocusTrue, bool bInIsAcceptCancel) {
}

bool URCAdvHUDBFL::NzResultStart(const int32 InChapterNumber) {
    return false;
}

bool URCAdvHUDBFL::NzResultFinish() {
    return false;
}

bool URCAdvHUDBFL::MenuGuideStart() {
    return false;
}

bool URCAdvHUDBFL::MenuGuideFinish() {
    return false;
}

void URCAdvHUDBFL::MakeKaiKagiIDArrayBySkill(TArray<FName>& OutKaiKagiIDArray, TArray<FName> KaiKagiIDArray, FName CorrectKaiKagiID, TArray<FName> DeleteKaiKagiIDArray, ERCSkillFunctionType SkillFunctionType) {
}

void URCAdvHUDBFL::MakeDeleteKaiKagiIDArray(TArray<FName>& OutDeleteKaiKagiIDArray, TArray<FName> KaiKagiIDArray, FName CorrectKaiKagiID, TArray<FName> DeleteKaiKagiIDArray) {
}

bool URCAdvHUDBFL::MainQuestMenuStart() {
    return false;
}

bool URCAdvHUDBFL::MainQuestMenuFinish() {
    return false;
}

bool URCAdvHUDBFL::KagiMenuStart() {
    return false;
}

bool URCAdvHUDBFL::KagiMenuFinish() {
    return false;
}

bool URCAdvHUDBFL::IsShowTutorialWindow() {
    return false;
}

bool URCAdvHUDBFL::IsShowSkillWindow() {
    return false;
}

bool URCAdvHUDBFL::IsShowGenericWindow() {
    return false;
}

bool URCAdvHUDBFL::IsKagiSelectMenu() {
    return false;
}

bool URCAdvHUDBFL::IsKagiLarge() {
    return false;
}

bool URCAdvHUDBFL::IsFinishedSuquestStartInformation() {
    return false;
}

bool URCAdvHUDBFL::IsFinishedSuquestEndInformation() {
    return false;
}

bool URCAdvHUDBFL::IsFinishedSkillWindow() {
    return false;
}

bool URCAdvHUDBFL::IsFinishedSaveLoadLayout() {
    return false;
}

bool URCAdvHUDBFL::IsFinishedGenericWindow() {
    return false;
}

bool URCAdvHUDBFL::IsFigureInformationFinished() {
    return false;
}

bool URCAdvHUDBFL::IsCanGlossaryMenuClose() {
    return false;
}

bool URCAdvHUDBFL::GlossaryMenuStart() {
    return false;
}

bool URCAdvHUDBFL::GlossaryMenuFinish() {
    return false;
}

int32 URCAdvHUDBFL::GetSkillSelectIndex() {
    return 0;
}

bool URCAdvHUDBFL::GetSkillMenuOpen() {
    return false;
}

void URCAdvHUDBFL::GetSequentialTalkVoiceCharacterID(int32& VoiceCharacterID) {
}

void URCAdvHUDBFL::GetSequentialSubtitleVoiceCharacterID(int32& VoiceCharacterID) {
}

FName URCAdvHUDBFL::GetSelectedMapID() {
    return NAME_None;
}

void URCAdvHUDBFL::GetKaiKagiSelectKaiKagiIDArray(TArray<FName>& KaiKagiIDArray) {
}

void URCAdvHUDBFL::GetKaiKagiSelectIndex(int32& SelectedIndex) {
}

bool URCAdvHUDBFL::GetInputMenuButtonGuideKeyType(ERCInputKeyType InKeyType) {
    return false;
}

bool URCAdvHUDBFL::GetButtonResultSkillWindow() {
    return false;
}

bool URCAdvHUDBFL::GetButtonResultGenericWindow() {
    return false;
}

bool URCAdvHUDBFL::GetBusMenuCancel() {
    return false;
}

bool URCAdvHUDBFL::GetAreaMapMenuNewAreaSePlayed() {
    return false;
}

bool URCAdvHUDBFL::GetAreaMapMenuGoFastTravel() {
    return false;
}

bool URCAdvHUDBFL::GetAreaMapMenuEnableFastTravel(FName InWorldMapID) {
    return false;
}

bool URCAdvHUDBFL::GetAreaMapMenuCancel() {
    return false;
}

ARCAdvHUD* URCAdvHUDBFL::GetAdvHUD() {
    return NULL;
}

void URCAdvHUDBFL::ForceFinishKaiKagiSelect(bool& bSucceeded) {
}

void URCAdvHUDBFL::FigureInformationStart(bool& bSucceeded, FName CharaID, float dispTime) {
}

void URCAdvHUDBFL::DetPointStart(bool& bSucceeded, int32 Point) {
}

void URCAdvHUDBFL::DetPointFinish(bool& bSucceeded) {
}

void URCAdvHUDBFL::CutInStart(bool& bSucceeded, FName CutInID) {
}

void URCAdvHUDBFL::CutInFinish(bool& bSucceeded) {
}

void URCAdvHUDBFL::CutInAnimStartLoad(bool& bSucceeded, FName CutInID) {
}

void URCAdvHUDBFL::CutInAnimStart(bool& bSucceeded, FName CutInID, bool bInReleaseWBPAtFinished) {
}

void URCAdvHUDBFL::CutInAnimRelease(bool& bSucceeded, FName CutInID) {
}

void URCAdvHUDBFL::CutInAnimNext(bool& bSucceeded) {
}

void URCAdvHUDBFL::CutInAnimAllRelease(bool& bSucceeded) {
}

bool URCAdvHUDBFL::CollectionMenuStart() {
    return false;
}

bool URCAdvHUDBFL::CollectionMenuFinishForFooterAnimation() {
    return false;
}

bool URCAdvHUDBFL::CollectionMenuFinish() {
    return false;
}

void URCAdvHUDBFL::CloseSkillWindow() {
}

void URCAdvHUDBFL::CloseGenericWindow() {
}

bool URCAdvHUDBFL::ClearMenuHelpText() {
    return false;
}

bool URCAdvHUDBFL::CheckTopMenuClose() {
    return false;
}

bool URCAdvHUDBFL::CheckTopMenuCheckStarted() {
    return false;
}

bool URCAdvHUDBFL::CheckTopMenuCheckFinished() {
    return false;
}

void URCAdvHUDBFL::CheckTalkWindow(bool& bRunning) {
}

void URCAdvHUDBFL::CheckTalkStarted(bool& bStarted) {
}

void URCAdvHUDBFL::CheckTalkFinished(bool& bFinished) {
}

void URCAdvHUDBFL::CheckTalkEndText(bool& bEnded) {
}

void URCAdvHUDBFL::CheckSubtitleEndDelay(bool& bFinished) {
}

bool URCAdvHUDBFL::CheckSubQuestMenuStarted() {
    return false;
}

bool URCAdvHUDBFL::CheckSubQuestMenuFinished() {
    return false;
}

bool URCAdvHUDBFL::CheckSubQuestMenuClose() {
    return false;
}

bool URCAdvHUDBFL::CheckSkillSelectMenuStarted() {
    return false;
}

bool URCAdvHUDBFL::CheckSkillSelectMenuFinished() {
    return false;
}

bool URCAdvHUDBFL::CheckSkillSelectMenuClose() {
    return false;
}

bool URCAdvHUDBFL::CheckSkillMenuStarted() {
    return false;
}

bool URCAdvHUDBFL::CheckSkillMenuFinished() {
    return false;
}

bool URCAdvHUDBFL::CheckSkillMenuClose() {
    return false;
}

bool URCAdvHUDBFL::CheckSkillGetInterval() {
    return false;
}

void URCAdvHUDBFL::CheckSequentialTalkFinishedLastText(bool& bFinished) {
}

void URCAdvHUDBFL::CheckSequentialTalkFinished(bool& bFinished) {
}

void URCAdvHUDBFL::CheckSequentialTalkCloseAtAllEnd(bool& bClose) {
}

void URCAdvHUDBFL::CheckSequentialTalk(bool& bRunning) {
}

void URCAdvHUDBFL::CheckSequentialSubtitleFinishedLastText(bool& bFinished) {
}

void URCAdvHUDBFL::CheckSequentialSubtitleFinished(bool& bFinished) {
}

void URCAdvHUDBFL::CheckSequentialSubtitleCloseAtAllEnd(bool& bClose) {
}

void URCAdvHUDBFL::CheckSequentialSubtitle(bool& bRunning) {
}

bool URCAdvHUDBFL::CheckNzResultStarted() {
    return false;
}

bool URCAdvHUDBFL::CheckNzResultFinished() {
    return false;
}

bool URCAdvHUDBFL::CheckNzResultClose() {
    return false;
}

bool URCAdvHUDBFL::CheckMenuGuideStarted() {
    return false;
}

bool URCAdvHUDBFL::CheckMenuGuideFinished() {
    return false;
}

bool URCAdvHUDBFL::CheckMainQuestMenuStarted() {
    return false;
}

bool URCAdvHUDBFL::CheckMainQuestMenuFinished() {
    return false;
}

bool URCAdvHUDBFL::CheckMainQuestMenuClose() {
    return false;
}

bool URCAdvHUDBFL::CheckKagiMenuStarted() {
    return false;
}

bool URCAdvHUDBFL::CheckKagiMenuFinished() {
    return false;
}

bool URCAdvHUDBFL::CheckInitialized() {
    return false;
}

bool URCAdvHUDBFL::CheckGlossaryMenuStarted() {
    return false;
}

bool URCAdvHUDBFL::CheckGlossaryMenuFinished() {
    return false;
}

bool URCAdvHUDBFL::CheckGlossaryMenuClose() {
    return false;
}

void URCAdvHUDBFL::CheckFinishedKaiKagiSelect(bool& bFinished) {
}

void URCAdvHUDBFL::CheckDetPointCheckStarted(bool& bStarted) {
}

void URCAdvHUDBFL::CheckDetPointCheckFinished(bool& bFinished) {
}

void URCAdvHUDBFL::CheckCutInCheckStarted(bool& bStarted) {
}

void URCAdvHUDBFL::CheckCutInCheckFinished(bool& bFinished) {
}

void URCAdvHUDBFL::CheckCutInAnimNextEnable(bool& bNextEnable) {
}

void URCAdvHUDBFL::CheckCutInAnimLoadCompleted(bool& bLoaded, FName CutInID) {
}

void URCAdvHUDBFL::CheckCutInAnimFinishedAnim(bool& bNextEnable) {
}

bool URCAdvHUDBFL::CheckCollectionMenuStarted() {
    return false;
}

bool URCAdvHUDBFL::CheckCollectionMenuFinished() {
    return false;
}

bool URCAdvHUDBFL::CheckCollectionMenuClose() {
    return false;
}

bool URCAdvHUDBFL::CheckCharacterMenuStarted() {
    return false;
}

bool URCAdvHUDBFL::CheckCharacterMenuFinished() {
    return false;
}

bool URCAdvHUDBFL::CheckCharacterMenuClose() {
    return false;
}

bool URCAdvHUDBFL::CheckAreaMapMenuStarted() {
    return false;
}

bool URCAdvHUDBFL::CheckAreaMapMenuFinished() {
    return false;
}

int32 URCAdvHUDBFL::CharaIntegrationIDToFaceID(int32 IntegrationID) {
    return 0;
}

bool URCAdvHUDBFL::CharacterMenuStart() {
    return false;
}

bool URCAdvHUDBFL::CharacterMenuFinish() {
    return false;
}

bool URCAdvHUDBFL::AreaMapMenuStart(bool bShortcut, FName InLocationID) {
    return false;
}

bool URCAdvHUDBFL::AreaMapMenuFinish() {
    return false;
}

void URCAdvHUDBFL::AddLogAtSkip(FName TextID) {
}


