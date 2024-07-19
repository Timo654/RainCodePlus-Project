#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "EPuzzlePointerHoverType.h"
#include "ERCInputPlatform.h"
#include "RCUiWidgetBase.h"
#include "RCNzPuzzleMainLayoutBase.generated.h"

class URCNzCriminalButtonGuideList;
class URCNzPuzzleAnswerLayoutBase;
class URCNzPuzzleHintBalloonBase;
class URCNzPuzzlePointerBase;
class URCNzPuzzleQuestionBase;
class URCNzPuzzleTimelimitAlertBase;
class URCNzUiFinaleTimeLimitWidget;
class UTexture2D;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzPuzzleMainLayoutBase : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzPuzzleHintBalloonBase* HintBalloonR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzPuzzleHintBalloonBase* HintBalloonL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzPuzzleHintBalloonBase* currentHoverHintBalloon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzPuzzlePointerBase* Pointer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzPuzzleAnswerLayoutBase* AnswerLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzPuzzleQuestionBase* question;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzPuzzleTimelimitAlertBase* TimelimitAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleTimeLimitWidget* TimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzCriminalButtonGuideList* ButtonGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PrePointerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCNzPuzzleHintBalloonBase*> HintBalloonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PreScreenPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Debug_AutoMoveTargetPos;
    
public:
    URCNzPuzzleMainLayoutBase();

    UFUNCTION(BlueprintCallable)
    void WaitingOpen();
    
    UFUNCTION(BlueprintCallable)
    void SynchronizeToInputPlatform(ERCInputPlatform InputPlatform);
    
    UFUNCTION(BlueprintCallable)
    void StartUI();
    
    UFUNCTION(BlueprintCallable)
    void StartAlert();
    
    UFUNCTION(BlueprintCallable)
    void ShowHint(const int32 KaikagiNum, const FText HintText, const FName hintVoiceID);
    
    UFUNCTION(BlueprintCallable)
    void ShowButtonGuide();
    
    UFUNCTION(BlueprintCallable)
    void SetWordListNum(int32 Length);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeLimit(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestion(const FText wordText);
    
    UFUNCTION(BlueprintCallable)
    void SetHoverPointer(EPuzzlePointerHoverType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetAnswer(int32 wordPos, FName wordText, UTexture2D* wordTexture);
    
    UFUNCTION(BlueprintCallable)
    bool PointerMove(float DeltaTime, float Aspect);
    
    UFUNCTION(BlueprintCallable)
    void PlayHint();
    
    UFUNCTION(BlueprintCallable)
    void InitializePuzzleMainLayout();
    
    UFUNCTION(BlueprintCallable)
    void HideButtonGuide();
    
    UFUNCTION(BlueprintCallable)
    void GetWidget3DLocAndDir(const UWidget* Widget, FVector& Location, FVector& Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPointerScreenPositionAlpha(float& PositionX, float& PositionY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPointerScreenPosition(float& PositionX, float& PositionY);
    
    UFUNCTION(BlueprintCallable)
    FVector GetPointerMoveDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPointerLocation(FVector& Location, FVector& Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector2D> GetHintBalloonBox(URCNzPuzzleHintBalloonBase* Widget, bool isLeft);
    
    UFUNCTION(BlueprintCallable)
    bool CheckPointerHoverType(EPuzzlePointerHoverType Type);
    
    UFUNCTION(BlueprintCallable)
    void CheckIsHoverCursorToHintBalloon();
    
    UFUNCTION(BlueprintCallable)
    bool CalcIsHoverCursor(FMargin Offsets, FVector2D Size, FVector2D halfViewportSize, FVector2D cursorPos, bool isLeft);
    
};

