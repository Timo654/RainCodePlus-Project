#include "RCNzFinaleManagerBase.h"
#include "Templates/SubclassOf.h"

ARCNzFinaleManagerBase::ARCNzFinaleManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LimitTime = 0.00f;
    this->LimitTimeMax = 0.00f;
    this->GameStartFadeInTime = 0.00f;
    this->LimitTimeAlertScale = 0.00f;
    this->AlertStartTime = 0;
    this->SignalStartTime = 0;
    this->SectionLineClass = NULL;
    this->CurrentSection = NULL;
    this->SectionNum = -1;
    this->OneLineSectionNumMax = 0;
    this->sectionHorizontalDistance = 0.00f;
    this->sectionVerticalDistance = 0.00f;
    this->StartSectionPosZ = 0.00f;
    this->ZoomCameraDist = 0.00f;
    this->ZoomCameraTime = 0.00f;
    this->ZoomCameraReturnTime = 0.00f;
    this->InitializePlayerPosZDetectiveMode = 0.00f;
    this->isLoadedData = false;
    this->CurrentMode = EFinaleSceneType::Heading;
    this->FinaleMainUI = NULL;
    this->FinaleIndexListParentUI = NULL;
    this->FinaleIndexListUI = NULL;
    this->FinaleCursorUI = NULL;
    this->QuestionWidget = NULL;
    this->PiecePositionDataTable = NULL;
    this->CurrentPiece = NULL;
    this->isGamePlay = false;
    this->DetectiveBackgroundActor = NULL;
    this->cursorMoveSpeed = 0.00f;
    this->cursorIndexMoveSpeed = 0.00f;
    this->cursorLowMoveSpeed = 0.00f;
    this->CurrentHoverPiece = NULL;
    this->CurrentHoverPieceListItem = NULL;
    this->BeforeOpenPieceListL_SelectedPieceIdx = -1;
    this->isMoveCursor = false;
    this->CurrentHP = 0;
    this->CurrentMaxHP = 0;
    this->isUseDetectiveSceneScaleParam = false;
    this->InitDetectivePointNum = 0;
    this->IsSkip = false;
    this->InteractIconWidgetClass = NULL;
    this->debug_dpi = 0.00f;
    this->DataTablePath = TEXT("/Game/RC/Parameter/Minigame/Finale/");
    this->pieceDataAsset = NULL;
    this->sectionDataAsset = NULL;
    this->isDebugMode = false;
    this->DamagePoint = 0.00f;
    this->OpenPiecceListText = TEXT("\x30D4\x30FC\x30B9\x30EA\x30B9\x30C8\x3092\x958B\x304F");
    this->SelectPieceText = TEXT("\x30D4\x30FC\x30B9\x3092\x9078\x629E");
    this->SelectIndexText = TEXT("\x7BC0\x306B\x5165\x308B");
    this->CheckDetectPieceText = TEXT("\x30D4\x30FC\x30B9\x3092\x5165\x308C\x308B");
    this->MoveNextPageIconText = TEXT("\x6B21\x306E\x30DA\x30FC\x30B8\x3078\x79FB\x52D5");
    this->MovePrevPageIconText = TEXT("\x524D\x306E\x30DA\x30FC\x30B8\x3078\x79FB\x52D5");
    this->HUD = NULL;
    this->startDamageAnim = -1;
    this->IsGameOver = false;
    this->inputNoneTimer = 0.00f;
    this->inputNoneTimerMax = 0.60f;
    this->currentInputType = ERCInputCursolInfoType::None;
    this->isLowSpeedMode = false;
    this->lastHeadingIndex = -1;
    this->HeadingColScale = 1.10f;
    this->IsTutorial = false;
    this->TutorialID = TEXT("14");
    this->BtnGuideIndex = TEXT("RCButtonGuideName_24");
    this->SectionText1ID = TEXT("RCfinale_setu_010");
    this->SectionText2ID = TEXT("RCfinale_setu_020");
    this->lowSpeedBtnGuideTexID = TEXT("RCFinale_Guide_Slow_001");
    this->currentFrameAutoPlayInput = EFinaleAutoPlayInputType::Decide;
    this->pieceListAreaL = -700.00f;
    this->pieceListAreaR = -900.00f;
    this->pieceListAreaU = -400.00f;
    this->pieceListAreaD = -600.00f;
    this->pageMoveIconSize = 100.00f;
    this->BGMFadeOutTime = 1.00f;
    this->BGMFadeOutFinishVolume = 0.10f;
    this->HoveredButtonGuide = NULL;
}

void ARCNzFinaleManagerBase::UpdateSectionPageGuide() {
}

void ARCNzFinaleManagerBase::UpdatePieceListData() {
}

void ARCNzFinaleManagerBase::UpdatePieceDataList(FRCNzFinalePieceObjectInfo Info) {
}

void ARCNzFinaleManagerBase::UpdatePieceData() {
}

void ARCNzFinaleManagerBase::UpdatePageMoveIcon() {
}

bool ARCNzFinaleManagerBase::UpdateLimitTime(float deltaSecond) {
    return false;
}

void ARCNzFinaleManagerBase::UpdateCursor(float deltaSecond, float X, float Y) {
}


void ARCNzFinaleManagerBase::SpawnSectionActorList() {
}

bool ARCNzFinaleManagerBase::ShowPieceLayout_Implementation() {
    return false;
}

void ARCNzFinaleManagerBase::ShowDirectingUI(bool isSuccess) {
}

void ARCNzFinaleManagerBase::SetSelectedPieceIdx(int32 idx) {
}

void ARCNzFinaleManagerBase::SetIsMouseCursorState(bool IsVisible, bool isStatic) {
}

void ARCNzFinaleManagerBase::SetIsMouseCursor(bool Val) {
}

void ARCNzFinaleManagerBase::SetCursorVisible(bool IsVisible) {
}

void ARCNzFinaleManagerBase::SetCursorPosition(FVector2D Pos) {
}

bool ARCNzFinaleManagerBase::PrevSection(ARCNzFinaleHeadingLineBase*& Section) {
    return false;
}



void ARCNzFinaleManagerBase::PlaySuccessSectionAllInteractPointAnimation() {
}

void ARCNzFinaleManagerBase::PlaySuccessInteractPointAnimation() {
}

void ARCNzFinaleManagerBase::PlaySuccessAllSectionInteractPointAnimation() {
}

void ARCNzFinaleManagerBase::PlayIndexClearSE() {
}

void ARCNzFinaleManagerBase::PlayGetPieceAnimation() {
}

void ARCNzFinaleManagerBase::PlayFinishAnimation() {
}

void ARCNzFinaleManagerBase::PlayFinaleTimelimitFinishSE() {
}


void ARCNzFinaleManagerBase::PlayFinaleMainLayoutFinishSE() {
}

void ARCNzFinaleManagerBase::PlayClearAnimation() {
}

void ARCNzFinaleManagerBase::OnPageGuideClick(int32 PageIndex, const FPointerEvent& InMouseEvent) {
}

bool ARCNzFinaleManagerBase::NextSection(ARCNzFinaleHeadingLineBase*& Section) {
    return false;
}

void ARCNzFinaleManagerBase::MoveSectionProcess_OnEndAnimFinished() {
}

void ARCNzFinaleManagerBase::MoveSectionProcess(int32 idx) {
}

void ARCNzFinaleManagerBase::MoveSection(int32 idx) {
}

void ARCNzFinaleManagerBase::MovePrevSectionProcess() {
}

void ARCNzFinaleManagerBase::MovePrevSection() {
}

void ARCNzFinaleManagerBase::MoveNextSectionProcess() {
}

void ARCNzFinaleManagerBase::MoveNextSection() {
}

void ARCNzFinaleManagerBase::MoveModeToHeadingProcess() {
}

void ARCNzFinaleManagerBase::MoveMode() {
}

UTexture* ARCNzFinaleManagerBase::LoadTexture(const FString& Path) {
    return NULL;
}

void ARCNzFinaleManagerBase::LoadDataTable() {
}

bool ARCNzFinaleManagerBase::IsHoverCusor() {
    return false;
}

bool ARCNzFinaleManagerBase::IsExistTargetSection(int32 TargetSceneIdx) {
    return false;
}

bool ARCNzFinaleManagerBase::IsExistPrevSection() {
    return false;
}

bool ARCNzFinaleManagerBase::IsExistNextSection() {
    return false;
}

bool ARCNzFinaleManagerBase::IsCurrentSection() {
    return false;
}

bool ARCNzFinaleManagerBase::IsCheckHoverCursorIsPick() {
    return false;
}

void ARCNzFinaleManagerBase::InitializeRegisterUIEvent() {
}

void ARCNzFinaleManagerBase::InCorrectDamage() {
}

TArray<FRCNzFinaleGamePieceData> ARCNzFinaleManagerBase::GetTargetSectionPieceList(FName targetSectionID) {
    return TArray<FRCNzFinaleGamePieceData>();
}

TArray<bool> ARCNzFinaleManagerBase::GetTargetSectionDetectivePointState(FName targetSectionID) {
    return TArray<bool>();
}

FVector2D ARCNzFinaleManagerBase::GetTargetPieceSpawnPosition(int32 idx, FRCParamNzFinaleSectionTableRow Data) {
    return FVector2D{};
}

FVector ARCNzFinaleManagerBase::GetTargetPiecePosition(FName TargetID) {
    return FVector{};
}

FName ARCNzFinaleManagerBase::GetTargetIndexSectionID(int32 idx) {
    return NAME_None;
}

void ARCNzFinaleManagerBase::GetTargetIdxPageText(int32 targetIdx, FString& titleTxt, int32& sectionTxt) {
}

FVector ARCNzFinaleManagerBase::GetSectionActorPosition() {
    return FVector{};
}

bool ARCNzFinaleManagerBase::GetPieceSuccessTargetPage(FRCNzFinalePieceObjectInfo pieceInfo, int32 currentIdx, int32& idx, FName& SectionName, int32& pageMoveDir) {
    return false;
}

FString ARCNzFinaleManagerBase::GetPieceImageRootPath(bool isSmall) {
    return TEXT("");
}

void ARCNzFinaleManagerBase::GetPieceCurrentHoverInteractPoint() {
}

bool ARCNzFinaleManagerBase::GetIsUseDetectiveSceneScaleParam() {
    return false;
}

FString ARCNzFinaleManagerBase::GetFinaleSectionDataTablePath() {
    return TEXT("");
}

FString ARCNzFinaleManagerBase::GetFinaleSceneDataTablePath() {
    return TEXT("");
}

FString ARCNzFinaleManagerBase::GetFinalePieceDataTablePath() {
    return TEXT("");
}

FString ARCNzFinaleManagerBase::GetFinaleDetectiveBackgroundImageDataTablePath() {
    return TEXT("");
}

FString ARCNzFinaleManagerBase::GetFinaleDataTablePath() {
    return TEXT("");
}

FString ARCNzFinaleManagerBase::GetDetectiveSceneWidgetPath(FName targetSectionID) {
    return TEXT("");
}

TSubclassOf<UUserWidget> ARCNzFinaleManagerBase::GetDetectiveSceneWidgetClass(FName targetSectionID) {
    return NULL;
}

FString ARCNzFinaleManagerBase::GetDetectiveImageRootPath() {
    return TEXT("");
}

URCNzUiFinaleDetectiveSceneWidget* ARCNzFinaleManagerBase::GetDetectiveBackgroundWidget(FName targetSectionID) {
    return NULL;
}

FVector2D ARCNzFinaleManagerBase::GetDetectiveBackgroundImgScale(const FString& targetSectionID) {
    return FVector2D{};
}

UTexture2D* ARCNzFinaleManagerBase::GetDetectiveBackgroundImageList(const FString& targetSectionID) {
    return NULL;
}

FString ARCNzFinaleManagerBase::GetDataTableRootPath() {
    return TEXT("");
}

void ARCNzFinaleManagerBase::GetCursorScreenPosition(float& PositionX, float& PositionY) {
}

FVector2D ARCNzFinaleManagerBase::GetCursorPosViewPortSize() {
    return FVector2D{};
}

FName ARCNzFinaleManagerBase::GetCurrentSectionID() {
    return NAME_None;
}

TArray<bool> ARCNzFinaleManagerBase::GetCurrentSectionDetectivePointState() {
    return TArray<bool>();
}

ARCNzFinaleHeadingLineBase* ARCNzFinaleManagerBase::GetCurrentSection() {
    return NULL;
}

FName ARCNzFinaleManagerBase::GetCurrentSceneID() {
    return NAME_None;
}

FVector2D ARCNzFinaleManagerBase::GetCurrentHoverPiecePosition() {
    return FVector2D{};
}

EFinaleInteractPointType ARCNzFinaleManagerBase::GetCurrentHoverInteratPointType() {
    return EFinaleInteractPointType::Piece;
}

float ARCNzFinaleManagerBase::GetCurrentDPI() {
    return 0.0f;
}

float ARCNzFinaleManagerBase::GetCurrentCursorMoveSpeed() {
    return 0.0f;
}

FString ARCNzFinaleManagerBase::GetBackgroundImgPath(FName BackgroundImgID) {
    return TEXT("");
}


void ARCNzFinaleManagerBase::FinishSwitchHeadingMode_Implementation() {
}

void ARCNzFinaleManagerBase::FinishSwitchDetectiveAssemblyMode_Implementation() {
}

void ARCNzFinaleManagerBase::FinishSucessInteractPointAnimation() {
}

void ARCNzFinaleManagerBase::FinishSuccessSectionAllInteractPointAnimation() {
}

void ARCNzFinaleManagerBase::FinishQuestionWidgetStartAnim() {
}

void ARCNzFinaleManagerBase::FinishPieceDetailUnlock() {
}

void ARCNzFinaleManagerBase::FinishIndexClearEvent() {
}

void ARCNzFinaleManagerBase::FinishGetPieceAnimation() {
}

void ARCNzFinaleManagerBase::FinishedMainLayoutStartAnim() {
}

void ARCNzFinaleManagerBase::FinishedMainLayoutFinishAnim() {
}

void ARCNzFinaleManagerBase::FinishedLightingAAnim() {
}

void ARCNzFinaleManagerBase::FinishedFinaleInteractIconWidgetAnim(bool isSuccess) {
}

void ARCNzFinaleManagerBase::FinaleFinishEvent() {
}

void ARCNzFinaleManagerBase::FiishSuccessAllSectionInteractPointAnimation_Implementation() {
}

void ARCNzFinaleManagerBase::ExitSectionActor(ARCNzFinaleHeadingLineBase* TargetActor) {
}

void ARCNzFinaleManagerBase::ExitPieceObject(ARCNzFinalePieceBase* piece) {
}

void ARCNzFinaleManagerBase::EnterSectionActor(ARCNzFinaleHeadingLineBase* TargetActor) {
}

void ARCNzFinaleManagerBase::EnterPieceObject(ARCNzFinalePieceBase* piece) {
}

void ARCNzFinaleManagerBase::DebugSelectPiece() {
}

void ARCNzFinaleManagerBase::DebugAutoPlay_Implementation(float DeltaTime, bool isClearMode) {
}

void ARCNzFinaleManagerBase::ClearQuestionWidget() {
}

bool ARCNzFinaleManagerBase::CheckTargetDetectiveSectionState(FName ID) {
    return false;
}

bool ARCNzFinaleManagerBase::CheckSelectPiece_Implementation(FRCNzFinalePieceObjectInfo Info, FVector2D& PiecePosition) {
    return false;
}

bool ARCNzFinaleManagerBase::CheckIsLockCurrentSelectedPiece(FRCNzFinalePieceObjectInfo pieceInfo) {
    return false;
}

void ARCNzFinaleManagerBase::CheckHoverItem(float deltaSecond) {
}

bool ARCNzFinaleManagerBase::CheckDetectiveState() {
    return false;
}

bool ARCNzFinaleManagerBase::CheckCursorHoverPieceListOpenIcon(bool isAutoMove) {
    return false;
}

bool ARCNzFinaleManagerBase::CheckCursorHoverPageMoveIcon(bool isAutoMove) {
    return false;
}

bool ARCNzFinaleManagerBase::CheckCurrentMode(EFinaleSceneType isMode) {
    return false;
}

bool ARCNzFinaleManagerBase::CheckCurrentFrameInput(EFinaleAutoPlayInputType targetInput) {
    return false;
}

bool ARCNzFinaleManagerBase::CheckAllDetectiveSectionState() {
    return false;
}


void ARCNzFinaleManagerBase::CancelSelectPieceList() {
}

FVector2D ARCNzFinaleManagerBase::CalcUpdateCursorPosition(float deltaSecond, float X, float Y, float MoveSpeed) {
    return FVector2D{};
}

bool ARCNzFinaleManagerBase::CalcIsHoverCursor(FMargin Offsets, FVector2D Size, FVector2D halfViewportSize, FVector2D cursorPos, FVector2D listParentSize, int32 idx, float colScale) {
    return false;
}

int32 ARCNzFinaleManagerBase::CalcDetectivePointNum() {
    return 0;
}

void ARCNzFinaleManagerBase::AllReleaseUI() {
}

void ARCNzFinaleManagerBase::AddFailedCount() {
}

void ARCNzFinaleManagerBase::AddDamage(int32 Damage) {
}


