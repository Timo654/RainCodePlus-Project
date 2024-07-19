#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Slate/WidgetTransform.h"
#include "FinaleFinishDetectiveInteractIconAnimDelegate.h"
#include "FinaleInteractEndFinishedDelegate.h"
#include "FinaleInteractStartnimFinishedDelegate.h"
#include "RCNzFinaleGamePieceData.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleInteractIconWidget.generated.h"

class ARCNzFinaleManagerBase;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleInteractIconWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNzFinaleGamePieceData PieceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PieceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool successFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCorrected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPlayInOutAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PieceImg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetTransform QTransformSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D QuetionTextFixedPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUseFixedPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFinishStartAnim;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinaleFinishDetectiveInteractIconAnim FinishedAnim;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinaleInteractStartnimFinished InteractStartFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinaleInteractEndFinished InteractEndFinishedDelegate;
    
    URCNzUiFinaleInteractIconWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateBackgroundImage(UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable)
    void SetPieceData_IsPick(bool isPick);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCorrectFlag(bool Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCorrectedState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayWaitAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySuccessAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayStartAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayQuestionAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHideAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayFinishQuestionAnim(bool isSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFinishAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFailedAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCorrectAnim();
    
    UFUNCTION(BlueprintCallable)
    void InitializeInteractIconWidget(FRCNzFinaleGamePieceData Data);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetQuestionTextFixedPosition();
    
    UFUNCTION(BlueprintCallable)
    FString GetPieceText();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetPieceImg();
    
    UFUNCTION(BlueprintCallable)
    FName GetPieceID();
    
    UFUNCTION(BlueprintCallable)
    FString GetPieceDetailText();
    
    UFUNCTION(BlueprintCallable)
    bool GetPieceData_IsPick();
    
    UFUNCTION(BlueprintCallable)
    FRCNzFinaleGamePieceData GetPieceData();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsUseFixedPosition();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsPlayInOutAnimationFlag();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsFinishStartAnim();
    
    UFUNCTION(BlueprintCallable)
    bool GetisCorrectFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetInteractIconPosition(bool& isLeft);
    
    UFUNCTION(BlueprintCallable)
    float GetColScale();
    
    UFUNCTION(BlueprintCallable)
    FString GetBackgroundImagePath(ARCNzFinaleManagerBase* FinaleManager);
    
    UFUNCTION(BlueprintCallable)
    FName GetAnswerID();
    
};

