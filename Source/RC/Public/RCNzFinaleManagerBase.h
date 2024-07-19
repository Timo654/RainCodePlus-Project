#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Layout/Margin.h"
#include "Input/Events.h"
#include "EFinaleAutoPlayInputType.h"
#include "EFinaleInteractPointType.h"
#include "EFinaleSEType.h"
#include "EFinaleSceneType.h"
#include "ERCInputCursolInfoType.h"
#include "FinaleFinishDetectiveInteractIconAnimInManagerDelegate.h"
#include "RCNzFinaleGameBackgroundData.h"
#include "RCNzFinaleGameIDListData.h"
#include "RCNzFinaleGamePieceData.h"
#include "RCNzFinaleGameSectionState.h"
#include "RCNzFinalePieceObjectInfo.h"
#include "RCParamNzFinaleSectionTableRow.h"
#include "Templates/SubclassOf.h"
#include "RCNzFinaleManagerBase.generated.h"

class ARCNzFinaleDetectiveBackGround;
class ARCNzFinaleHeadingLineBase;
class ARCNzFinalePieceBase;
class ARCNzHUD;
class UDataTable;
class URCNzUiFinaleCursorWidget;
class URCNzUiFinaleDetectiveSceneWidget;
class URCNzUiFinaleIndexListParentWidget;
class URCNzUiFinaleIndexListWidget;
class URCNzUiFinaleInteractIconWidget;
class URCNzUiFinalePieceList_PieceBase;
class URCNzUiFinaleQuestionWidget;
class URCNzUiFinaleWidget;
class URCParamNzFinalePieceData;
class URCParamNzFinaleSectionData;
class UTexture;
class UTexture2D;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class RC_API ARCNzFinaleManagerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimitTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameStartFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimitTimeAlertScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AlertStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SignalStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARCNzFinaleHeadingLineBase> SectionLineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SectionIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCNzFinaleHeadingLineBase*> SectionLineList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCNzFinaleHeadingLineBase* CurrentSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OneLineSectionNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float sectionHorizontalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float sectionVerticalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartSectionPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartSectionPosZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomCameraDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomCameraTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomCameraReturnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitializePlayerPosDetectiveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitializePlayerPosZDetectiveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isLoadedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFinaleSceneType CurrentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleWidget* FinaleMainUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleIndexListParentWidget* FinaleIndexListParentUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleIndexListWidget* FinaleIndexListUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleCursorWidget* FinaleCursorUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleQuestionWidget* QuestionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PiecePositionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNzFinalePieceObjectInfo> PieceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCNzFinalePieceBase* CurrentPiece;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isGamePlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCNzFinaleDetectiveBackGround* DetectiveBackgroundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cursorMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cursorIndexMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cursorLowMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCNzFinaleGameIDListData> DetectieveBackgroundImageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> DetectiveBackgroundImageWidgetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<UUserWidget>> DetectievBackgroundWidgetClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, URCNzUiFinaleDetectiveSceneWidget*> DetectiveBackgroundWidgetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCNzFinaleGameBackgroundData> BackgroundImageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector2D> DetectiveBackgroundImgScaleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCNzFinaleGameSectionState> SectionStateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCNzFinaleGameIDListData> SectionPieceListMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzFinaleSectionTableRow> SectionDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleInteractIconWidget* CurrentHoverPiece;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinalePieceList_PieceBase* CurrentHoverPieceListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeforeOpenPieceListL_SelectedPieceIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isMoveCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMaxHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFinaleSEType, FString> FinaleSEIDMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUseDetectiveSceneScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BgmID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitDetectivePointNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FinaleIntteractIconWidgetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> InteractIconWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DetectiveImageRootPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PieceImageRootPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentChapterNumStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float debug_dpi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataTablePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCParamNzFinalePieceData* pieceDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCParamNzFinaleSectionData* sectionDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDebugMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OpenPiecceListText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectPieceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectIndexText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CheckDetectPieceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MoveNextPageIconText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MovePrevPageIconText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IndexSectionTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCNzHUD* HUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 startDamageAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGameOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float inputNoneTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float inputNoneTimerMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D oldCursorPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCInputCursolInfoType currentInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D currentInputMovePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isLowSpeedMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lastHeadingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName oldFrameHoverPieceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName lastPlaySEHoverPieceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadingColScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TutorialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BtnGuideIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionText1ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionText2ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName lowSpeedBtnGuideTexID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFinaleAutoPlayInputType currentFrameAutoPlayInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D currentFrameAutoPlayAnalogInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float pieceListAreaL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float pieceListAreaR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float pieceListAreaU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float pieceListAreaD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float pageMoveIconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BGMFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BGMFadeOutFinishVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* HoveredButtonGuide;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinaleFinishDetectiveInteractIconAnimInManager FinishedDetectiveInteractIconAnimDelegate;
    
    ARCNzFinaleManagerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSectionPageGuide();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePieceListData();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePieceDataList(FRCNzFinalePieceObjectInfo Info);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePieceData();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePageMoveIcon();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateLimitTime(float deltaSecond);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCursor(float deltaSecond, float X, float Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartTutorial();
    
    UFUNCTION(BlueprintCallable)
    void SpawnSectionActorList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowPieceLayout();
    
    UFUNCTION(BlueprintCallable)
    void ShowDirectingUI(bool isSuccess);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedPieceIdx(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMouseCursorState(bool IsVisible, bool isStatic);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMouseCursor(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorPosition(FVector2D Pos);
    
    UFUNCTION(BlueprintCallable)
    bool PrevSection(ARCNzFinaleHeadingLineBase*& Section);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTimeSignalSE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTimeLimitSE();
    
    UFUNCTION(BlueprintCallable)
    void PlaySuccessSectionAllInteractPointAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlaySuccessInteractPointAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlaySuccessAllSectionInteractPointAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayIndexClearSE();
    
    UFUNCTION(BlueprintCallable)
    void PlayGetPieceAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayFinishAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayFinaleTimelimitFinishSE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFinaleSE(EFinaleSEType targetSE, bool IsLoop);
    
    UFUNCTION(BlueprintCallable)
    void PlayFinaleMainLayoutFinishSE();
    
    UFUNCTION(BlueprintCallable)
    void PlayClearAnimation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPageGuideClick(int32 PageIndex, const FPointerEvent& InMouseEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    bool NextSection(ARCNzFinaleHeadingLineBase*& Section);
    
    UFUNCTION(BlueprintCallable)
    void MoveSectionProcess_OnEndAnimFinished();
    
    UFUNCTION(BlueprintCallable)
    void MoveSectionProcess(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    void MoveSection(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    void MovePrevSectionProcess();
    
    UFUNCTION(BlueprintCallable)
    void MovePrevSection();
    
    UFUNCTION(BlueprintCallable)
    void MoveNextSectionProcess();
    
    UFUNCTION(BlueprintCallable)
    void MoveNextSection();
    
    UFUNCTION(BlueprintCallable)
    void MoveModeToHeadingProcess();
    
    UFUNCTION(BlueprintCallable)
    void MoveMode();
    
    UFUNCTION(BlueprintCallable)
    UTexture* LoadTexture(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    void LoadDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoverCusor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTargetSection(int32 TargetSceneIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistPrevSection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistNextSection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentSection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCheckHoverCursorIsPick();
    
    UFUNCTION(BlueprintCallable)
    void InitializeRegisterUIEvent();
    
    UFUNCTION(BlueprintCallable)
    void InCorrectDamage();
    
    UFUNCTION(BlueprintCallable)
    TArray<FRCNzFinaleGamePieceData> GetTargetSectionPieceList(FName targetSectionID);
    
    UFUNCTION(BlueprintCallable)
    TArray<bool> GetTargetSectionDetectivePointState(FName targetSectionID);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetTargetPieceSpawnPosition(int32 idx, FRCParamNzFinaleSectionTableRow Data);
    
    UFUNCTION(BlueprintCallable)
    FVector GetTargetPiecePosition(FName TargetID);
    
    UFUNCTION(BlueprintCallable)
    FName GetTargetIndexSectionID(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    void GetTargetIdxPageText(int32 targetIdx, FString& titleTxt, int32& sectionTxt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSectionActorPosition();
    
    UFUNCTION(BlueprintCallable)
    bool GetPieceSuccessTargetPage(FRCNzFinalePieceObjectInfo pieceInfo, int32 currentIdx, int32& idx, FName& SectionName, int32& pageMoveDir);
    
    UFUNCTION(BlueprintCallable)
    FString GetPieceImageRootPath(bool isSmall);
    
    UFUNCTION(BlueprintCallable)
    void GetPieceCurrentHoverInteractPoint();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsUseDetectiveSceneScaleParam();
    
    UFUNCTION(BlueprintCallable)
    FString GetFinaleSectionDataTablePath();
    
    UFUNCTION(BlueprintCallable)
    FString GetFinaleSceneDataTablePath();
    
    UFUNCTION(BlueprintCallable)
    FString GetFinalePieceDataTablePath();
    
    UFUNCTION(BlueprintCallable)
    FString GetFinaleDetectiveBackgroundImageDataTablePath();
    
    UFUNCTION(BlueprintCallable)
    FString GetFinaleDataTablePath();
    
    UFUNCTION(BlueprintCallable)
    FString GetDetectiveSceneWidgetPath(FName targetSectionID);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UUserWidget> GetDetectiveSceneWidgetClass(FName targetSectionID);
    
    UFUNCTION(BlueprintCallable)
    FString GetDetectiveImageRootPath();
    
    UFUNCTION(BlueprintCallable)
    URCNzUiFinaleDetectiveSceneWidget* GetDetectiveBackgroundWidget(FName targetSectionID);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetDetectiveBackgroundImgScale(const FString& targetSectionID);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetDetectiveBackgroundImageList(const FString& targetSectionID);
    
    UFUNCTION(BlueprintCallable)
    FString GetDataTableRootPath();
    
    UFUNCTION(BlueprintCallable)
    void GetCursorScreenPosition(float& PositionX, float& PositionY);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetCursorPosViewPortSize();
    
    UFUNCTION(BlueprintCallable)
    FName GetCurrentSectionID();
    
    UFUNCTION(BlueprintCallable)
    TArray<bool> GetCurrentSectionDetectivePointState();
    
    UFUNCTION(BlueprintCallable)
    ARCNzFinaleHeadingLineBase* GetCurrentSection();
    
    UFUNCTION(BlueprintCallable)
    FName GetCurrentSceneID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCurrentHoverPiecePosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFinaleInteractPointType GetCurrentHoverInteratPointType();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentDPI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentCursorMoveSpeed();
    
    UFUNCTION(BlueprintCallable)
    FString GetBackgroundImgPath(FName BackgroundImgID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GameOverEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishSwitchHeadingMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishSwitchDetectiveAssemblyMode();
    
    UFUNCTION(BlueprintCallable)
    void FinishSucessInteractPointAnimation();
    
    UFUNCTION(BlueprintCallable)
    void FinishSuccessSectionAllInteractPointAnimation();
    
    UFUNCTION(BlueprintCallable)
    void FinishQuestionWidgetStartAnim();
    
    UFUNCTION(BlueprintCallable)
    void FinishPieceDetailUnlock();
    
    UFUNCTION(BlueprintCallable)
    void FinishIndexClearEvent();
    
    UFUNCTION(BlueprintCallable)
    void FinishGetPieceAnimation();
    
    UFUNCTION(BlueprintCallable)
    void FinishedMainLayoutStartAnim();
    
    UFUNCTION(BlueprintCallable)
    void FinishedMainLayoutFinishAnim();
    
    UFUNCTION(BlueprintCallable)
    void FinishedLightingAAnim();
    
    UFUNCTION(BlueprintCallable)
    void FinishedFinaleInteractIconWidgetAnim(bool isSuccess);
    
    UFUNCTION(BlueprintCallable)
    void FinaleFinishEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FiishSuccessAllSectionInteractPointAnimation();
    
    UFUNCTION(BlueprintCallable)
    void ExitSectionActor(ARCNzFinaleHeadingLineBase* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void ExitPieceObject(ARCNzFinalePieceBase* piece);
    
    UFUNCTION(BlueprintCallable)
    void EnterSectionActor(ARCNzFinaleHeadingLineBase* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void EnterPieceObject(ARCNzFinalePieceBase* piece);
    
    UFUNCTION(BlueprintCallable)
    void DebugSelectPiece();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugAutoPlay(float DeltaTime, bool isClearMode);
    
    UFUNCTION(BlueprintCallable)
    void ClearQuestionWidget();
    
    UFUNCTION(BlueprintCallable)
    bool CheckTargetDetectiveSectionState(FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckSelectPiece(FRCNzFinalePieceObjectInfo Info, FVector2D& PiecePosition);
    
    UFUNCTION(BlueprintCallable)
    bool CheckIsLockCurrentSelectedPiece(FRCNzFinalePieceObjectInfo pieceInfo);
    
    UFUNCTION(BlueprintCallable)
    void CheckHoverItem(float deltaSecond);
    
    UFUNCTION(BlueprintCallable)
    bool CheckDetectiveState();
    
    UFUNCTION(BlueprintCallable)
    bool CheckCursorHoverPieceListOpenIcon(bool isAutoMove);
    
    UFUNCTION(BlueprintCallable)
    bool CheckCursorHoverPageMoveIcon(bool isAutoMove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCurrentMode(EFinaleSceneType isMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCurrentFrameInput(EFinaleAutoPlayInputType targetInput);
    
    UFUNCTION(BlueprintCallable)
    bool CheckAllDetectiveSectionState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeBackgroundImg(const UTexture2D* Img, const EFinaleInteractPointType InteractType);
    
    UFUNCTION(BlueprintCallable)
    void CancelSelectPieceList();
    
    UFUNCTION(BlueprintCallable)
    FVector2D CalcUpdateCursorPosition(float deltaSecond, float X, float Y, float MoveSpeed);
    
    UFUNCTION(BlueprintCallable)
    bool CalcIsHoverCursor(FMargin Offsets, FVector2D Size, FVector2D halfViewportSize, FVector2D cursorPos, FVector2D listParentSize, int32 idx, float colScale);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcDetectivePointNum();
    
    UFUNCTION(BlueprintCallable)
    void AllReleaseUI();
    
    UFUNCTION(BlueprintCallable)
    void AddFailedCount();
    
    UFUNCTION(BlueprintCallable)
    void AddDamage(int32 Damage);
    
};

