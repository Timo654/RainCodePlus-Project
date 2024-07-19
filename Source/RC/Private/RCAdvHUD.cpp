#include "RCAdvHUD.h"
#include "RCAdvHUDAdvComponent.h"
#include "RCAdvHUDInteractIconComponent.h"
#include "RCAdvHUDPauseComponent.h"
#include "RCAdvHUDResearchComponent.h"
#include "RCAdvHUDTalkComponent.h"

ARCAdvHUD::ARCAdvHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->bAllowEditInstance = false;
    this->bInitialized = false;
    this->ViewportScale = 1.00f;
    this->PlayerScreenScale = 1.00f;
    this->ChapterNo = -1;
    this->Components.AddDefaulted(3);
    this->bLoadCompleted = false;
    this->bLoadingCharaIntegrationIDToFaceIDDataTable = false;
    this->CharaIntegrationIDToFaceIDDataTable = NULL;
    this->GenericWindowPriority = 0;
    this->GenericWindowWidget = NULL;
    this->ButtonGuideState = ERCAdvHUDWidgetState::None;
    this->ButtonGuideOldState = ERCAdvHUDWidgetState::None;
    this->ButtonGuideRequest = ERCAdvHUDWidgetRequest::None;
    this->ButtonGuidePriority = 0;
    this->ButtonGuideWidget = NULL;
    this->SubtitleType = ERCAdvHUDSubtitleType::Normal;
    this->bSubtitleHiddenByOption = false;
    this->bSubtitleWaitPush = false;
    this->SubtitleState = ERCAdvHUDWidgetState::None;
    this->OldSubtitleState = ERCAdvHUDWidgetState::None;
    this->SubtitlePriority = 0;
    this->SubtitleDelayAtEndVoice = 0.00f;
    this->SubtitleVoiceLength = 0.00f;
    this->SubtitleVoiceElapsedTime = 0.00f;
    this->Subtitle = NULL;
    this->SequentialSubtitleType = ERCAdvHUDSubtitleType::Normal;
    this->bSequentialSubtitle = false;
    this->bSequentialSubtitleHiddenByOption = false;
    this->bSequentialSubtitleWaitPush = false;
    this->bSequentialSubtitleDisableSave = false;
    this->SequentialSubtitleIndex = 0;
    this->SequentialSubtitleDelayToNextTime = 0.00f;
    this->SequentialSubtitleElapsedTime = 0.00f;
    this->TopMenuRequest = ERCAdvHUDWidgetRequest::None;
    this->WorldMenuRequest = ERCAdvHUDWidgetRequest::None;
    this->TopMenuWidgetPriority = 0;
    this->TopMenuWidget = NULL;
    this->bOpenTopMenuWithOtherMenu = false;
    this->MenuGuideRequest = ERCAdvHUDWidgetRequest::None;
    this->MenuGuideWidgetPriority = 0;
    this->MenuGuideWidget = NULL;
    this->AreaMapMenuRequest = ERCAdvHUDWidgetRequest::None;
    this->AreaMapMenuWidgetPriority = 0;
    this->AreaMapMenuWidget = NULL;
    this->bPlayedNewAreaSE = false;
    this->KagiMenuRequest = ERCAdvHUDWidgetRequest::None;
    this->KagiMenuWidgetPriority = 0;
    this->KagiMenuWidget = NULL;
    this->KagiSelectMenuRequest = ERCAdvHUDWidgetRequest::None;
    this->bKagiSelectNotPause = false;
    this->bKagiSelectPrevPauseEnable = false;
    this->bKagiSelectPrevMenuEnable = false;
    this->bKagiSelectPrevBacklogEnable = false;
    this->bKagiSelectPrevCameraLock = false;
    this->KagiSelectMenuWidgetPriority = 0;
    this->KagiSelectMenuWidget = NULL;
    this->MainQuestMenuRequest = ERCAdvHUDWidgetRequest::None;
    this->MainQuestMenuWidgetPriority = 0;
    this->MainQuestMenuWidget = NULL;
    this->SubQuestMenuRequest = ERCAdvHUDWidgetRequest::None;
    this->SubQuestMenuWidgetPriority = 0;
    this->SubQuestMenuWidget = NULL;
    this->SkillSelectMenuRequest = ERCAdvHUDWidgetRequest::None;
    this->SkillSelectMenuWidgetPriority = 0;
    this->SkillSelectMenuWidget = NULL;
    this->SkillMenuRequest = ERCAdvHUDWidgetRequest::None;
    this->SkillMenuWidgetPriority = 0;
    this->SkillMenuWidget = NULL;
    this->SkillWindowPriority = 0;
    this->SkillWindowWidget = NULL;
    this->GlossaryMenuRequest = ERCAdvHUDWidgetRequest::None;
    this->GlossaryMenuWidgetPriority = 0;
    this->GlossaryMenuWidget = NULL;
    this->CollectionMenuRequest = ERCAdvHUDWidgetRequest::None;
    this->CollectionMenuWidgetPriority = 0;
    this->CollectionMenuWidget = NULL;
    this->CollectionWindowRequest = ERCAdvHUDWidgetRequest::None;
    this->CollectionWindowPriority = 0;
    this->CollectionWindowWidget = NULL;
    this->MovieSkipRequest = ERCAdvHUDWidgetRequest::None;
    this->MovieSkipWidgetPriority = 0;
    this->MovieSkipWidget = NULL;
    this->CharacterMenuRequest = ERCAdvHUDWidgetRequest::None;
    this->CharacterMenuWidgetPriority = 0;
    this->CharacterMenuWidget = NULL;
    this->NzResultRequest = ERCAdvHUDWidgetRequest::None;
    this->NzResultWidgetPriority = 0;
    this->NzResultWidget = NULL;
    this->FastForwardIconPriority = 0;
    this->FastForwardIcon = NULL;
    this->TutorialWindowPriority = 0;
    this->TutorialWindowPath = TEXT("/Game/RC/UI/Tutorial/WBP_Tutorial.WBP_Tutorial_C");
    this->TutorialWindow = NULL;
    this->BackLogPriority = 0;
    this->BackLogWidget = NULL;
    this->InteractIconComponent = CreateDefaultSubobject<URCAdvHUDInteractIconComponent>(TEXT("InteractIconComponent"));
    this->AdvComponent = CreateDefaultSubobject<URCAdvHUDAdvComponent>(TEXT("AdvComponent"));
    this->TalkComponent = CreateDefaultSubobject<URCAdvHUDTalkComponent>(TEXT("TalkComponent"));
    this->ResearchPriority = 0;
    this->ResearchComponent = CreateDefaultSubobject<URCAdvHUDResearchComponent>(TEXT("ResearchComponent"));
    this->MapComponent = NULL;
    this->PauseComponent = CreateDefaultSubobject<URCAdvHUDPauseComponent>(TEXT("PauseComponent"));
    this->isPlaySubTitleVoice = true;
}

bool ARCAdvHUD::WorldMenuStart() {
    return false;
}

bool ARCAdvHUD::WorldMenuFinish() {
    return false;
}

void ARCAdvHUD::UpdateCollectionFlag(FName CharaID) {
}

void ARCAdvHUD::Tutorial_StartTutorial(FName ID, bool isAnytimeClosable) {
}

void ARCAdvHUD::Tutorial_RemoveTutorialWindow() {
}

bool ARCAdvHUD::Tutorial_Load() {
    return false;
}

bool ARCAdvHUD::Tutorial_IsShowWindow() {
    return false;
}

bool ARCAdvHUD::Tutorial_IsFinished() {
    return false;
}

bool ARCAdvHUD::Tutorial_CreateWidget() {
    return false;
}

void ARCAdvHUD::Tutorial_CloseTutorial() {
}

bool ARCAdvHUD::TopMenuStart() {
    return false;
}

bool ARCAdvHUD::TopMenuFinish() {
    return false;
}

bool ARCAdvHUD::TalkWindowClose(ERCAdvHUDTalkWindowType InWindowType) {
    return false;
}

bool ARCAdvHUD::TalkStartSimple(ERCAdvHUDTalkWindowType InWindowType) {
    return false;
}

bool ARCAdvHUD::TalkStart2(ERCAdvHUDTalkWindowType InWindowType, FName InTextID, int32 InCharacterFaceID, int32 InCharacterFacialID, bool bInAutoPlay) {
    return false;
}

bool ARCAdvHUD::TalkSetTextSimple(FName InTextID, float InDelayAtEndText) {
    return false;
}

bool ARCAdvHUD::TalkSetTextData(FRCAdvHUDTalkTextData InTextData) {
    return false;
}

bool ARCAdvHUD::TalkSetText2(int32 InCharacterFaceID, int32 InCharacterFacialID, FName InTextID, int32 InCharacter3DID, FName InCharacter3DFacialID, FName InVoiceID, float InDelayAtEndText) {
    return false;
}

bool ARCAdvHUD::TalkSetGradationFilter(FName InFilterID) {
    return false;
}

bool ARCAdvHUD::TalkSetForceTextSpeedSettings(bool bInIsForceTextSpeed, int32 InForceTextSpeed) {
    return false;
}

bool ARCAdvHUD::TalkSetAuto(bool bInAutoPlay) {
    return false;
}

bool ARCAdvHUD::TalkLoadNameplateData(int32 InCharacterNameID, int32 InCharacterNameSubID) {
    return false;
}

bool ARCAdvHUD::TalkLoadFaceData(int32 InCharacterFaceID, int32 InCharacterFacialID) {
    return false;
}

bool ARCAdvHUD::TalkLoadCharacterData2(int32 InCharacterNameID, TArray<int32> InCharacterNameSubIDs, int32 InCharacterFaceID, TArray<int32> InCharacterFacialIDs) {
    return false;
}

bool ARCAdvHUD::TalkLoadCharacterData(int32 InCharacterNameID, int32 InCharacterNameSubID, int32 InCharacterFaceID, int32 InCharacterFacialID) {
    return false;
}

bool ARCAdvHUD::TalkForceFinish() {
    return false;
}

bool ARCAdvHUD::TalkFinish() {
    return false;
}

bool ARCAdvHUD::SubtitleStartFromCharacterID_WaitPush(int32 InCharacterNameID, int32 InCharacterNameSubID, FName InTextID, float InDelayAtEndVoice) {
    return false;
}

bool ARCAdvHUD::SubtitleStartFromCharacterID(int32 InCharacterNameID, int32 InCharacterNameSubID, FName InTextID, float InDelayAtEndVoice) {
    return false;
}

bool ARCAdvHUD::SubtitleStart_WaitPush(FName InNameID, FName InTextID, float InDelayAtEndVoice) {
    return false;
}

bool ARCAdvHUD::SubtitleStart_OnlyCursor() {
    return false;
}

bool ARCAdvHUD::SubtitleStart(FName InNameID, FName InTextID, float InDelayAtEndVoice) {
    return false;
}

bool ARCAdvHUD::SubtitleFinish() {
    return false;
}

bool ARCAdvHUD::SubtitleCancel() {
    return false;
}

bool ARCAdvHUD::SubQuestMenuStart() {
    return false;
}

bool ARCAdvHUD::SubQuestMenuFinish() {
    return false;
}

bool ARCAdvHUD::StartKaiKagiSelect(TArray<FName> InKaiKagiIDArray, FName InCorrectKaiKagiID, bool bInNotPause) {
    return false;
}

bool ARCAdvHUD::SkillSelectMenuStart() {
    return false;
}

bool ARCAdvHUD::SkillSelectMenuFinish() {
    return false;
}

bool ARCAdvHUD::SkillMenuStart() {
    return false;
}

bool ARCAdvHUD::SkillMenuFinish() {
    return false;
}

bool ARCAdvHUD::SetTalkIconData(APawn* InPawn, bool bInDraw, bool bInAccessable, bool bInSubquest, float InScale, bool bInGoal) {
    return false;
}

void ARCAdvHUD::SetShinigamiActor(ARCCharacterRender* InShinigamiActor) {
}

bool ARCAdvHUD::SetMenuHelpText(FName InHelpTextID) {
    return false;
}

bool ARCAdvHUD::SetMenuButtonGuideResetKeyType() {
    return false;
}

bool ARCAdvHUD::SetMenuButtonGuide(FName InModeID, bool bPlayOpenAnim) {
    return false;
}

bool ARCAdvHUD::SetMarkerData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInAccessable, bool bInSubquest, float InScale, bool bInGoal) {
    return false;
}

bool ARCAdvHUD::SetBalloonData(APawn* InPawn, ESCBaloonFrame InBalloonFrameType, ESCBaloonType InBalloonContentType, FName InTextID, bool bInBalloonDraw, bool bInTextDraw) {
    return false;
}

void ARCAdvHUD::SetAreaMapMenuNewAreaSePlayed(bool bInPlayedNewAreaSE) {
}

bool ARCAdvHUD::SequentialTalkStartFromTalkID(FName InTalkID, bool bInForceAutoPlay) {
    return false;
}

bool ARCAdvHUD::SequentialTalkStartFromDataTable(UDataTable* InTable, FName InTalkID, bool bInForceAutoPlay) {
    return false;
}

bool ARCAdvHUD::SequentialTalkStartFromData2(FRCTalkData InTalkData, bool bInForceAutoPlay) {
    return false;
}

bool ARCAdvHUD::SequentialTalkStart2(FName InTalkID, FRCTalkData InTalkData, bool bInForceAutoPlay) {
    return false;
}

bool ARCAdvHUD::SequentialTalkResume() {
    return false;
}

bool ARCAdvHUD::SequentialTalkRequestSuspend() {
    return false;
}

bool ARCAdvHUD::SequentialTalkForceFinish() {
    return false;
}

bool ARCAdvHUD::SequentialTalkFinish() {
    return false;
}

bool ARCAdvHUD::SequentialSubtitleStartFromSubtitleIDForMovie(FName InSubtitleID, float InDelayAtEnd, float InDelayToNext, bool bInCloseAtAllEnd, bool bInDisableSave) {
    return false;
}

bool ARCAdvHUD::SequentialSubtitleStartFromSubtitleID(FName InSubtitleID, float InDelayAtEnd, float InDelayToNext, bool bInCloseAtAllEnd, bool bInDisableSave) {
    return false;
}

bool ARCAdvHUD::SequentialSubtitleStartFromDataTable_WaitPush(UDataTable* InTable, FName InSubtitleID, float InDelayAtEnd, float InDelayToNext, bool bInCloseAtAllEnd, bool bInDisableSave) {
    return false;
}

bool ARCAdvHUD::SequentialSubtitleStartFromDataTable(UDataTable* InTable, FName InSubtitleID, float InDelayAtEnd, float InDelayToNext, bool bInCloseAtAllEnd, bool bInDisableSave) {
    return false;
}

bool ARCAdvHUD::SequentialSubtitleStartFromData2(FRCSubtitleData InSubtitleData, float InDelayAtEnd, float InDelayToNext, bool bInCloseAtAllEnd, bool bInDisableSave) {
    return false;
}

bool ARCAdvHUD::SequentialSubtitleStart2NoVoice(FName InSubtitleID, FRCSubtitleData InSubtitleData, float InDelayAtEnd, float InDelayToNext, bool bInCloseAtAllEnd, bool bInDisableSave) {
    return false;
}

bool ARCAdvHUD::SequentialSubtitleStart2(FName InSubtitleID, FRCSubtitleData InSubtitleData, float InDelayAtEnd, float InDelayToNext, bool bInCloseAtAllEnd, bool bInDisableSave) {
    return false;
}

bool ARCAdvHUD::SequentialSubtitleFinish() {
    return false;
}

bool ARCAdvHUD::SequentialSubtitleCancel(bool bInStopVoice) {
    return false;
}

void ARCAdvHUD::ResetSubtitlePlayVoiceFlag() {
}

bool ARCAdvHUD::ResetSkillSelectFocus() {
    return false;
}

bool ARCAdvHUD::ResearchStartWithQuestionText(FName InQuestionTextID, bool bInEnableFinish, bool bInMiniMap) {
    return false;
}

bool ARCAdvHUD::ResearchStartTelop_Start() {
    return false;
}

bool ARCAdvHUD::ResearchStartTelop_CheckFinished() {
    return false;
}

bool ARCAdvHUD::ResearchStart(bool bInShowLocation, bool bInEnableFinish, bool bInMiniMap) {
    return false;
}

bool ARCAdvHUD::ResearchSpotSelectStartTelop_Start() {
    return false;
}

bool ARCAdvHUD::ResearchSpotSelectStartTelop_CheckFinished() {
    return false;
}

bool ARCAdvHUD::ResearchSpotJudgeTelopMistake_Start() {
    return false;
}

bool ARCAdvHUD::ResearchSpotJudgeTelopCorrect_Start() {
    return false;
}

bool ARCAdvHUD::ResearchSpotJudgeTelop_CheckFinished() {
    return false;
}

bool ARCAdvHUD::ResearchQuestionText_Start(FName InTextID) {
    return false;
}

bool ARCAdvHUD::ResearchQuestionText_SetText(FName InTextID) {
    return false;
}

bool ARCAdvHUD::ResearchQuestionText_Finish() {
    return false;
}

bool ARCAdvHUD::ResearchModeFinish() {
    return false;
}

bool ARCAdvHUD::ResearchMarker_SetMarkerData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInNameDraw, bool bInResearched, bool bInAccessable, float InScale) {
    return false;
}

bool ARCAdvHUD::ResearchMarker_SetEnable(bool bInEnable) {
    return false;
}

bool ARCAdvHUD::ResearchMarker_IsMarkerVisible(ARCCheckActor* InCheckActor) {
    return false;
}

bool ARCAdvHUD::ResearchLocation_Start(FName InLocationID, FName InLocationTextID) {
    return false;
}

bool ARCAdvHUD::ResearchLocation_Finish() {
    return false;
}

bool ARCAdvHUD::ResearchLocation_CheckFinished() {
    return false;
}

bool ARCAdvHUD::ResearchGetKagi_StartFromKagiID(FName InKagiID, int32 InPhase) {
    return false;
}

bool ARCAdvHUD::ResearchGetKagi_CheckFinished() {
    return false;
}

bool ARCAdvHUD::ResearchFinishTelop_Start() {
    return false;
}

bool ARCAdvHUD::ResearchFinishTelop_CheckFinished() {
    return false;
}

bool ARCAdvHUD::ResearchFinish() {
    return false;
}

bool ARCAdvHUD::ResearchDetailStart(FRCAdvHUDResearchDetailStartData InStartData) {
    return false;
}

bool ARCAdvHUD::ResearchDetailSpotSelectStart(FRCAdvHUDResearchDetailStartData InStartData) {
    return false;
}

bool ARCAdvHUD::ResearchDetailPastVisionStart(FRCAdvHUDResearchDetailStartData InStartData, bool bInPast, bool bInEnableFinish) {
    return false;
}

int32 ARCAdvHUD::ResearchDetailGetSelectIndex() {
    return 0;
}

int32 ARCAdvHUD::ResearchDetailGetAccessedIndex() {
    return 0;
}

bool ARCAdvHUD::ResearchDetailFinish() {
    return false;
}

bool ARCAdvHUD::ResearchDetailCheckAutoSelectMoveFinished() {
    return false;
}

bool ARCAdvHUD::ResearchDetailAutoSelectMoveStart(int32 InMarkerDataIndex) {
    return false;
}

bool ARCAdvHUD::ResearchDetailAutoSelectCheckActorMoveStart(ARCCheckActor* InCheckActor) {
    return false;
}

bool ARCAdvHUD::PressedDecideButtonSimple() {
    return false;
}

ERCAdvHUDPressedDecideResult ARCAdvHUD::PressedDecideButton() {
    return ERCAdvHUDPressedDecideResult::Failed;
}

bool ARCAdvHUD::OpenCollectionWindowStart(TArray<FString> TextArray) {
    return false;
}

void ARCAdvHUD::OnButtonGuideClick_ADVHolding(ERCInputKeyType InKeyType) {
}

void ARCAdvHUD::OnButtonGuideClick_ADV2StepResearchBack(ERCInputKeyType InKeyType) {
}

bool ARCAdvHUD::NzResultStart(const int32 InChapterNumber) {
    return false;
}

bool ARCAdvHUD::NzResultFinish() {
    return false;
}

bool ARCAdvHUD::MovieSkipStart() {
    return false;
}

bool ARCAdvHUD::MovieSkipFinish() {
    return false;
}

bool ARCAdvHUD::MenuGuideStart() {
    return false;
}

bool ARCAdvHUD::MenuGuideFinish() {
    return false;
}

bool ARCAdvHUD::MainQuestMenuStart() {
    return false;
}

bool ARCAdvHUD::MainQuestMenuFinish() {
    return false;
}

bool ARCAdvHUD::KagiSelectMenuStart2(TArray<FName> InKaiKagiIDArray, FName InQuestionTextID, bool bInNotPause, bool bInAcceptCancel, int32 InDebugCorrectIndex) {
    return false;
}

bool ARCAdvHUD::KagiSelectMenuStart(TArray<FName> InKaiKagiIDArray, bool bInNotPause) {
    return false;
}

bool ARCAdvHUD::KagiSelectMenuFinish() {
    return false;
}

bool ARCAdvHUD::KagiMenuStart() {
    return false;
}

bool ARCAdvHUD::KagiMenuFinish() {
    return false;
}

bool ARCAdvHUD::IsTalkIconVisible(APawn* InPawn) {
    return false;
}

bool ARCAdvHUD::IsMarkerVisible(ARCCheckActor* InCheckActor) {
    return false;
}

bool ARCAdvHUD::IsKagiSelectMenuLarge() {
    return false;
}

bool ARCAdvHUD::IsKagiSelectMenu() {
    return false;
}

bool ARCAdvHUD::IsKagiMenuLarge() {
    return false;
}

bool ARCAdvHUD::IsCollectionWindowFinished() {
    return false;
}

bool ARCAdvHUD::IsCanGlossaryMenuClose() {
    return false;
}

bool ARCAdvHUD::IsBusMenu() {
    return false;
}

bool ARCAdvHUD::IsBattleKagiMenu() {
    return false;
}

bool ARCAdvHUD::IsBalloonVisible(APawn* InPawn) {
    return false;
}

bool ARCAdvHUD::IsBackLogStarted() {
    return false;
}

bool ARCAdvHUD::IsBackLogFinish() {
    return false;
}

bool ARCAdvHUD::GlossaryMenuStart() {
    return false;
}

bool ARCAdvHUD::GlossaryMenuFinish() {
    return false;
}

ERCAdvHUDWidgetState ARCAdvHUD::GetUsingTalkWidgetState() {
    return ERCAdvHUDWidgetState::None;
}

ERCAdvHUDWidgetState ARCAdvHUD::GetUsingTalkWidgetOldState() {
    return ERCAdvHUDWidgetState::None;
}

int32 ARCAdvHUD::GetSkillSelectIndex() {
    return 0;
}

bool ARCAdvHUD::GetSkillMenuOpen() {
    return false;
}

int32 ARCAdvHUD::GetSequentialTalkVoiceCharacterID() {
    return 0;
}

int32 ARCAdvHUD::GetSequentialSubtitleVoiceCharacterID() {
    return 0;
}

FName ARCAdvHUD::GetSelectedMapID() {
    return NAME_None;
}

bool ARCAdvHUD::GetPressedDecideButtonSimpleResult(ERCAdvHUDPressedDecideResult InResult) {
    return false;
}

TArray<FName> ARCAdvHUD::GetNotClosedWidgetNames() {
    return TArray<FName>();
}

URCUiMovieSkip* ARCAdvHUD::GetMovieSkipUi() {
    return NULL;
}

void ARCAdvHUD::GetKaiKagiSelectKaiKagiIDArray(TArray<FName>& OutKaiKagiIDArray) {
}

int32 ARCAdvHUD::GetKaiKagiSelectIndex() {
    return 0;
}

int32 ARCAdvHUD::GetKagiSelectMenuIndex() {
    return 0;
}

bool ARCAdvHUD::GetInputMenuButtonGuideKeyType(ERCInputKeyType InKeyType) {
    return false;
}

bool ARCAdvHUD::GetBusMenuCancel() {
    return false;
}

int32 ARCAdvHUD::GetBattleKagiMenuIndex() {
    return 0;
}

bool ARCAdvHUD::GetAreaMenuOpen() {
    return false;
}

bool ARCAdvHUD::GetAreaMapMenuNewAreaSePlayed() {
    return false;
}

bool ARCAdvHUD::GetAreaMapMenuGoFastTravel() {
    return false;
}

bool ARCAdvHUD::GetAreaMapMenuEnableFastTravel(FName InWorldMapID) {
    return false;
}

bool ARCAdvHUD::GetAreaMapMenuCancel() {
    return false;
}

FName ARCAdvHUD::GetAreaMapID() {
    return NAME_None;
}

ARCPawnRender* ARCAdvHUD::GetAccessedNPC() {
    return NULL;
}

ARCCheckActor* ARCAdvHUD::GetAccessedCheckActor() {
    return NULL;
}

ARCCharacterRender* ARCAdvHUD::GetAccessedCharacter() {
    return NULL;
}

bool ARCAdvHUD::ForceFinishKaiKagiSelect() {
    return false;
}

bool ARCAdvHUD::EnterBuilding_SetEnable(bool bInEnable) {
    return false;
}

bool ARCAdvHUD::EnterBuilding_SetData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInAccessable, float InScale) {
    return false;
}

bool ARCAdvHUD::EnterBuilding_IsVisible(ARCCheckActor* InCheckActor) {
    return false;
}

bool ARCAdvHUD::DetPointStart(int32 InPoint) {
    return false;
}

bool ARCAdvHUD::DetPointFinish() {
    return false;
}

bool ARCAdvHUD::CutInStart(FName InCutInID) {
    return false;
}

bool ARCAdvHUD::CutInFinish() {
    return false;
}

bool ARCAdvHUD::CutInAnimStartLoad(FName InCutInID) {
    return false;
}

bool ARCAdvHUD::CutInAnimStart(FName InCutInID, bool bInReleaseWBPAtFinished) {
    return false;
}

bool ARCAdvHUD::CutInAnimRelease(FName InCutInID) {
    return false;
}

bool ARCAdvHUD::CutInAnimNext() {
    return false;
}

bool ARCAdvHUD::CutInAnimAllRelease() {
    return false;
}

bool ARCAdvHUD::CollectionWindowFinish() {
    return false;
}

bool ARCAdvHUD::CollectionMenuStart() {
    return false;
}

bool ARCAdvHUD::CollectionMenuFinishForFooterAnimation() {
    return false;
}

bool ARCAdvHUD::CollectionMenuFinish() {
    return false;
}

bool ARCAdvHUD::ClearMenuHelpText() {
    return false;
}

bool ARCAdvHUD::CheckTopMenuClose() {
    return false;
}

bool ARCAdvHUD::CheckTopMenuCheckStarted() {
    return false;
}

bool ARCAdvHUD::CheckTopMenuCheckFinished() {
    return false;
}

bool ARCAdvHUD::CheckTalkWindowClosed(ERCAdvHUDTalkWindowType InWindowType) {
    return false;
}

bool ARCAdvHUD::CheckTalkWindow() {
    return false;
}

bool ARCAdvHUD::CheckTalkStarted() {
    return false;
}

bool ARCAdvHUD::CheckTalkSkipVoice(FName InTextID) {
    return false;
}

bool ARCAdvHUD::CheckTalkFinished() {
    return false;
}

bool ARCAdvHUD::CheckTalkEndText() {
    return false;
}

bool ARCAdvHUD::CheckSubtitleEndDelay() {
    return false;
}

bool ARCAdvHUD::CheckSubQuestMenuStarted() {
    return false;
}

bool ARCAdvHUD::CheckSubQuestMenuFinished() {
    return false;
}

bool ARCAdvHUD::CheckSubQuestMenuClose() {
    return false;
}

bool ARCAdvHUD::CheckSkillSelectMenuStarted() {
    return false;
}

bool ARCAdvHUD::CheckSkillSelectMenuFinished() {
    return false;
}

bool ARCAdvHUD::CheckSkillSelectMenuClose() {
    return false;
}

bool ARCAdvHUD::CheckSkillMenuStarted() {
    return false;
}

bool ARCAdvHUD::CheckSkillMenuFinished() {
    return false;
}

bool ARCAdvHUD::CheckSkillMenuClose() {
    return false;
}

bool ARCAdvHUD::CheckSkillGetInterval() {
    return false;
}

bool ARCAdvHUD::CheckSequentialTalkSuspending() {
    return false;
}

bool ARCAdvHUD::CheckSequentialTalkFromTalkID(FName InTalkID) {
    return false;
}

bool ARCAdvHUD::CheckSequentialTalkFinishedLastText() {
    return false;
}

bool ARCAdvHUD::CheckSequentialTalkFinished() {
    return false;
}

bool ARCAdvHUD::CheckSequentialTalkCloseAtAllEnd() {
    return false;
}

bool ARCAdvHUD::CheckSequentialTalk() {
    return false;
}

bool ARCAdvHUD::CheckSequentialSubtitleFromSubtitleID(FName InSubtitleID) {
    return false;
}

bool ARCAdvHUD::CheckSequentialSubtitleFinishedLastText() {
    return false;
}

bool ARCAdvHUD::CheckSequentialSubtitleFinished() {
    return false;
}

bool ARCAdvHUD::CheckSequentialSubtitleCloseAtAllEnd() {
    return false;
}

bool ARCAdvHUD::CheckSequentialSubtitle() {
    return false;
}

bool ARCAdvHUD::CheckResearchModeFinished() {
    return false;
}

bool ARCAdvHUD::CheckResearchDetail() {
    return false;
}

bool ARCAdvHUD::CheckResearch() {
    return false;
}

bool ARCAdvHUD::CheckNzResultStarted() {
    return false;
}

bool ARCAdvHUD::CheckNzResultFinished() {
    return false;
}

bool ARCAdvHUD::CheckNzResultClose() {
    return false;
}

bool ARCAdvHUD::CheckMovieSkipStarted() {
    return false;
}

bool ARCAdvHUD::CheckMovieSkipFinished() {
    return false;
}

bool ARCAdvHUD::CheckMenuGuideStarted() {
    return false;
}

bool ARCAdvHUD::CheckMenuGuideFinished() {
    return false;
}

bool ARCAdvHUD::CheckMainQuestMenuStarted() {
    return false;
}

bool ARCAdvHUD::CheckMainQuestMenuFinished() {
    return false;
}

bool ARCAdvHUD::CheckMainQuestMenuClose() {
    return false;
}

bool ARCAdvHUD::CheckKagiSelectMenuStarted() {
    return false;
}

bool ARCAdvHUD::CheckKagiSelectMenuFinished() {
    return false;
}

bool ARCAdvHUD::CheckKagiMenuStarted() {
    return false;
}

bool ARCAdvHUD::CheckKagiMenuFinished() {
    return false;
}

bool ARCAdvHUD::CheckKagiMenuClose() {
    return false;
}

bool ARCAdvHUD::CheckInitialized() {
    return false;
}

bool ARCAdvHUD::CheckGlossaryMenuStarted() {
    return false;
}

bool ARCAdvHUD::CheckGlossaryMenuFinished() {
    return false;
}

bool ARCAdvHUD::CheckGlossaryMenuClose() {
    return false;
}

bool ARCAdvHUD::CheckFinishedKaiKagiSelect() {
    return false;
}

bool ARCAdvHUD::CheckDetPointCheckStarted() {
    return false;
}

bool ARCAdvHUD::CheckDetPointCheckFinished() {
    return false;
}

bool ARCAdvHUD::CheckCutInCheckStarted() {
    return false;
}

bool ARCAdvHUD::CheckCutInCheckFinished() {
    return false;
}

bool ARCAdvHUD::CheckCutInAnimNextEnable() {
    return false;
}

bool ARCAdvHUD::CheckCutInAnimLoadCompleted(FName InCutInID) {
    return false;
}

bool ARCAdvHUD::CheckCutInAnimFinishedAnim() {
    return false;
}

bool ARCAdvHUD::CheckCollectionWindowStarted() {
    return false;
}

bool ARCAdvHUD::CheckCollectionMenuStarted() {
    return false;
}

bool ARCAdvHUD::CheckCollectionMenuFinished() {
    return false;
}

bool ARCAdvHUD::CheckCollectionMenuClose() {
    return false;
}

bool ARCAdvHUD::CheckCharacterMenuStarted() {
    return false;
}

bool ARCAdvHUD::CheckCharacterMenuFinished() {
    return false;
}

bool ARCAdvHUD::CheckCharacterMenuClose() {
    return false;
}

bool ARCAdvHUD::CheckAreaMapMenuStarted() {
    return false;
}

bool ARCAdvHUD::CheckAreaMapMenuFinished() {
    return false;
}

bool ARCAdvHUD::CheckAllWidgetsClosed() {
    return false;
}

bool ARCAdvHUD::CheckAllAccessableWidgetsOpened() {
    return false;
}

bool ARCAdvHUD::CheckAllAccessableWidgetsClosed(bool bInContainClosing) {
    return false;
}

bool ARCAdvHUD::CheckAccessedWidgetWait() {
    return false;
}

bool ARCAdvHUD::CheckAccessableWidgetReady() {
    return false;
}

bool ARCAdvHUD::CharacterMenuStart() {
    return false;
}

bool ARCAdvHUD::CharacterMenuFinish() {
    return false;
}

bool ARCAdvHUD::ChangeArea_SetEnable(bool bInEnable) {
    return false;
}

bool ARCAdvHUD::ChangeArea_SetData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInDrawText, float InScale) {
    return false;
}

bool ARCAdvHUD::ChangeArea_IsVisible(ARCCheckActor* InCheckActor) {
    return false;
}

bool ARCAdvHUD::ButtonGuideStart(FName InModeID) {
    return false;
}

bool ARCAdvHUD::ButtonGuideFinish() {
    return false;
}

bool ARCAdvHUD::ButtonGuideCheckStarted() {
    return false;
}

bool ARCAdvHUD::ButtonGuideCheckFinished() {
    return false;
}

bool ARCAdvHUD::BusStop_SetEnable(bool bInEnable) {
    return false;
}

bool ARCAdvHUD::BusStop_SetData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInLooksLikeUsable, bool bInAccessable, float InScale) {
    return false;
}

bool ARCAdvHUD::BusStop_IsVisible(ARCCheckActor* InCheckActor) {
    return false;
}

bool ARCAdvHUD::BattleKagiSelectMenuStart(TArray<FName> InKaiKagiIDArray, int32 InFocusIndex) {
    return false;
}

bool ARCAdvHUD::BackLogStart() {
    return false;
}

bool ARCAdvHUD::BackLogFinish() {
    return false;
}

bool ARCAdvHUD::AreaMapMenuStart(bool bShortcut, FName InLocationID) {
    return false;
}

bool ARCAdvHUD::AreaMapMenuFinish() {
    return false;
}

void ARCAdvHUD::AllAccessableWidgetsOpen() {
}

void ARCAdvHUD::AllAccessableWidgetsClose() {
}

void ARCAdvHUD::AddLogAtSkip(FName InTextID) {
}


