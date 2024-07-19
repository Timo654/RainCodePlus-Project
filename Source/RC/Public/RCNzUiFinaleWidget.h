#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/WidgetAnimation.h"
#include "DirectingHiddenFinishedDelegate.h"
#include "EFinaleInteractPointType.h"
#include "EPageMoveVisibleDirection.h"
#include "ERCInputKeyType.h"
#include "FinaleFinishDetectiveInteractIconAnimInMainLayoutDelegate.h"
#include "HeadingClearFinishedDelegate.h"
#include "IndexClearFinishedDelegate.h"
#include "IndexClearPlaySEDelegate.h"
#include "MainLayoutANFinishFinishedDelegate.h"
#include "MainLayoutANStartFinishedDelegate.h"
#include "MainLayoutStartCandleDelegate.h"
#include "MainLayoutStartTitleDelegate.h"
#include "PageTurnIndexLFinishedDelegate.h"
#include "PageTurnIndexRFinishedDelegate.h"
#include "PieceCorrectFinishedDelegate.h"
#include "PieceDetailApplyStartFinishedDelegate.h"
#include "PieceDetailUnlockFinishedDelegate.h"
#include "PieceIncorrectFinishedDelegate.h"
#include "RCNzFinalePieceObjectInfo.h"
#include "RCUiWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "TimerLighting_AFinishedDelegate.h"
#include "RCNzUiFinaleWidget.generated.h"

class URCNzPuzzleTimelimitAlertBase;
class URCNzUiBattleHPBar;
class URCNzUiFinaleDetectiveTitleWidget;
class URCNzUiFinaleHeadingClearWidget;
class URCNzUiFinaleIndexBTNGuideWidget;
class URCNzUiFinaleIndexClearWidget;
class URCNzUiFinaleIndexListParentWidget;
class URCNzUiFinaleIndexListWidget;
class URCNzUiFinaleLowSpeedBTNGuide;
class URCNzUiFinalePGLayoutWidget;
class URCNzUiFinalePageMoveLayoutWidget;
class URCNzUiFinalePieceCorrectWidget;
class URCNzUiFinalePieceDetailWidget;
class URCNzUiFinalePieceGetWidget;
class URCNzUiFinalePieceLayoutWidget;
class URCNzUiFinalePieceList_PieceBase;
class URCNzUiFinalePieceQuestionBase;
class URCNzUiFinaleQuestionLayoutWidget;
class URCNzUiFinaleQuestionRestWidget;
class URCNzUiFinaleQuestionWidget;
class URCNzUiFinaleTimeLimitBase;
class UTexture2D;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleTimeLimitBase* Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzPuzzleTimelimitAlertBase* Alert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinalePieceLayoutWidget* PieceLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinalePageMoveLayoutWidget* PageMoveLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinalePieceGetWidget* PieceGet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinalePieceCorrectWidget* PieceCorrect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleHeadingClearWidget* HeadingClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleIndexClearWidget* IndexClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleQuestionRestWidget* QuestionRest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleQuestionLayoutWidget* QuestionLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiBattleHPBar* HPBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleQuestionWidget* QuestionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleIndexListWidget* IndexListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleIndexListParentWidget* IndexListParentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleDetectiveTitleWidget* DetectiveTitleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinalePieceQuestionBase* PieceQuestion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinalePieceQuestionBase* KomaDetailUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinalePieceDetailWidget* PieceDetailWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinalePGLayoutWidget* PGLayoutWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleIndexBTNGuideWidget* IndexBtnGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleLowSpeedBTNGuide* LowSpeedBtnGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> InteractIconWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FinaleIntteractIconWidgetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isIndex02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPieceCorrectFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Incorrect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LockPieceNameStr;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent FinishedStartAnimDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent FinishedFinishAnimDelegate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> CursorPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> ULList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> URList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> DLList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> DRList;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectingHiddenFinished DirectingFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeadingClearFinished HeadingClearFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndexClearFinished IndexClearFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndexClearPlaySE IndexClearPlaySE;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPieceCorrectFinished PieceCorrectFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPieceIncorrectFinished PieceIncorrectFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPieceDetailApplyStartFinished PieceDetailApplyStartFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPageTurnIndexRFinished PageTurnIndexRFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPageTurnIndexLFinished PageTurnIndexLFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinaleFinishDetectiveInteractIconAnimInMainLayout FinishedDetectiveInteractIconAnimDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerLighting_AFinished TimerLightingAFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainLayoutANStartFinished MainLayoutStartFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainLayoutANFinishFinished MainLayoutFinishFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPieceDetailUnlockFinished PieceDetailUnlockFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainLayoutStartCandle MainLayutStartCandleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainLayoutStartTitle MainLayoutStartTitleDelegate;
    
    URCNzUiFinaleWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateSelectedPieceIdx(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateQuestion(bool IsVisible, const FString& QuestionText, const FVector2D& Position, const bool isLeft, const EFinaleInteractPointType Type, const bool isZoom);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePieceListUI();
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePieceListBtnGuide(ERCInputKeyType Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePieceList(const TArray<FRCNzFinalePieceObjectInfo>& pieceList, const TArray<FRCNzFinalePieceObjectInfo>& releasePieceList);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePageGuideBtnGuide(ERCInputKeyType keyL, ERCInputKeyType keyR);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateLowSpeedBtnGuide(ERCInputKeyType kye, const FString& str);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateIndexBtnGuide(ERCInputKeyType InKeyType, const FString& str);
    
    UFUNCTION(BlueprintCallable)
    void UpdateHPBar(float Hp);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDetectiveTitle(const int32& Section, const FString& Title);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateCursorBtnGuide(ERCInputKeyType Key, bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void StartInCorrect();
    
    UFUNCTION(BlueprintCallable)
    void StartCorrect();
    
    UFUNCTION(BlueprintCallable)
    void ShowQuestionFinishAnimation(const FVector2D& Position, bool isSuccess);
    
    UFUNCTION(BlueprintCallable)
    void SetVisiblityDetectiveTitleUI(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisiblePieceList(bool isShow);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleIndexBtnGuide(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleHPBar(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleDetailPieeList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimeScale(float TimeScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimeLimitAlertTimingScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetSectionText(const FString& sectionText1, const FString& sectionText2);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestionRestNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetPageMoveDirIconVisiblity(EPageMoveVisibleDirection Visiblity);
    
    UFUNCTION(BlueprintCallable)
    void SetIsHoverdPieceList(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetDelayUnLockAnimTime(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayStartLogoAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayStartGameAnimTimeLimit();
    
    UFUNCTION(BlueprintCallable)
    void PlayStartAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPageTurnIndexRAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPageTurnIndexLAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayIncorrectAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGameOverAnimTimeLimit();
    
    UFUNCTION(BlueprintCallable)
    void PlayFinishAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayDoneAnimPieceDetail();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayClearAnimTimeLimit();
    
    UFUNCTION(BlueprintCallable)
    void PlayApplyBlock_Lock();
    
    UFUNCTION(BlueprintCallable)
    void PlayApplyBlock_Done();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PieceMoveRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PieceMoveLeft();
    
    UFUNCTION(BlueprintCallable)
    void PieceIncorrectFinishedEvent();
    
    UFUNCTION(BlueprintCallable)
    void PieceGetEvent();
    
    UFUNCTION(BlueprintCallable)
    void PieceDetailFinishUnLockEvent();
    
    UFUNCTION(BlueprintCallable)
    void PieceDetailFinishApplyStartEvent();
    
    UFUNCTION(BlueprintCallable)
    void PieceDetailFinishApplyFinishEvent();
    
    UFUNCTION(BlueprintCallable)
    void PieceDetailFinishApplyBlock_LockEvent();
    
    UFUNCTION(BlueprintCallable)
    void PieceDetailFinishApplyBlock_DoneEvent();
    
    UFUNCTION(BlueprintCallable)
    void PieceCorrectFinishedEvent();
    
    UFUNCTION(BlueprintCallable)
    void PieceCorrectEvent();
    
    UFUNCTION(BlueprintCallable)
    void OpenPieceSelectWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenPieceList();
    
    UFUNCTION(BlueprintCallable)
    void MoveIndexScene();
    
    UFUNCTION(BlueprintCallable)
    void MoveHeading();
    
    UFUNCTION(BlueprintCallable)
    void MoveDetectiveScene();
    
    UFUNCTION(BlueprintCallable)
    void MoveDetectiveConstruct(TArray<bool> isCheckList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsVisiblePieceList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsShowQuestionTextUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsShowKomaDescriptionTextUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDetailPieceListMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugDrawFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputDecideDetectiveMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializePieceList(const TArray<FRCNzFinalePieceObjectInfo>& pieceList);
    
    UFUNCTION(BlueprintCallable)
    void InitializeIndexList(const FString& chNumStr);
    
    UFUNCTION(BlueprintCallable)
    void InitializeHPBar(float HpMax);
    
    UFUNCTION(BlueprintCallable)
    void InitializeFinaleUI();
    
    UFUNCTION(BlueprintCallable)
    void IndexClearPlaySEEvent();
    
    UFUNCTION(BlueprintCallable)
    void IndexClearFinishedEvent();
    
    UFUNCTION(BlueprintCallable)
    void IndexClearEvent();
    
    UFUNCTION(BlueprintCallable)
    void HeadingClearFinishedEvent();
    
    UFUNCTION(BlueprintCallable)
    void HeadingClearEvent();
    
    UFUNCTION(BlueprintCallable)
    URCNzUiFinaleQuestionWidget* GetQuestionWidget();
    
    UFUNCTION(BlueprintCallable)
    void GetPieceSLocationAndSize(int32 idx, FVector2D& Loc, FVector2D& Size);
    
    UFUNCTION(BlueprintCallable)
    void GetPieceSListParentLocAndSize(FVector2D& Loc, FVector2D& Size);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetPieceLListParentSize();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetPieceListLScale();
    
    UFUNCTION(BlueprintCallable)
    float GetPieceListLAngle();
    
    UFUNCTION(BlueprintCallable)
    TArray<URCNzUiFinalePieceList_PieceBase*> GetPieceListItemLArray();
    
    UFUNCTION(BlueprintCallable)
    URCNzUiFinalePGLayoutWidget* GetPGLayoutWidget();
    
    UFUNCTION(BlueprintCallable)
    void GetPGLayoutLocationAndSize(FVector2D& Location, FVector2D& Size);
    
    UFUNCTION(BlueprintCallable)
    int32 GetOneLinePieceItemNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsHoverdPieceList();
    
    UFUNCTION(BlueprintCallable)
    URCNzUiFinaleIndexListWidget* GetIndexListWidget();
    
    UFUNCTION(BlueprintCallable)
    URCNzUiFinaleIndexListParentWidget* GetIndexListParentWidget();
    
    UFUNCTION(BlueprintCallable)
    FRCNzFinalePieceObjectInfo GetCurrentSelectPiece();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentSelectedPieceIdx();
    
    UFUNCTION(BlueprintCallable)
    void FinishedTimerBurnLightingAAnimation();
    
    UFUNCTION(BlueprintCallable)
    void FinishedStartAnimation();
    
    UFUNCTION(BlueprintCallable)
    void FinishedQuestionFinishAnimation(bool isSuccess);
    
    UFUNCTION(BlueprintCallable)
    void FinishedFinishAnimation();
    
    UFUNCTION(BlueprintCallable)
    void DirectingFinishedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClosePieceList();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSelectPieceEvent(const FString& PieceTitle, UTexture2D* PieceDetail, int32 isLock, bool isUsed, bool isUnlock);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AlertStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddPieceList(const FRCNzFinalePieceObjectInfo& pieceInfo);
    
    UFUNCTION(BlueprintCallable)
    bool AddDamage(int32 NewAddDamage, int32& OutResultHP);
    
};

