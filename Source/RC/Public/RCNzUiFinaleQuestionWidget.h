#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFinalePageMoveDirection.h"
#include "RCNzFinaleGamePieceData.h"
#include "RCUiWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "RCNzUiFinaleQuestionWidget.generated.h"

class UCanvasPanel;
class UImage;
class URCNzUiFinaleDetectiveImageWidget;
class URCNzUiFinaleDetectiveSceneWidget;
class URCNzUiFinaleInteractIconWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleQuestionWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCNzUiFinaleInteractIconWidget*> InteractIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCNzUiFinaleDetectiveSceneWidget*> DetectiveSceneList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Canvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiFinaleDetectiveImageWidget* DetectiveImageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URCNzUiFinaleInteractIconWidget> PieceIconWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URCNzUiFinaleInteractIconWidget> DetectiveIconWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentShowDetectiveSceneIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* backImageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DetectiveImageWidgetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 tmpTargetSectionNum;
    
public:
    URCNzUiFinaleQuestionWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTexture(const UTexture2D* backImg);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePiece(const TArray<FRCNzFinaleGamePieceData>& pieceList);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateBackgroundImg(const int32 targetSectionNum);
    
    UFUNCTION(BlueprintCallable)
    bool StartPlayPageMoveAnim(const int32 targetSectionNum, const EFinalePageMoveDirection dir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleQuestionWidget(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisiblePiece(FName targetPieceID, bool visible);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPickPiece(FName targetPieceID, bool isPick);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIconListInitAnim();
    
    UFUNCTION(BlueprintCallable)
    void InitializeFinaleQuestion();
    
    UFUNCTION(BlueprintCallable)
    TArray<URCNzUiFinaleInteractIconWidget*> GetPieceList();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentShowDetectiveSceneIdx();
    
    UFUNCTION(BlueprintCallable)
    URCNzUiFinaleDetectiveSceneWidget* GetCurrentDetectiveScene();
    
    UFUNCTION(BlueprintCallable)
    void FinishedToRightAnim();
    
    UFUNCTION(BlueprintCallable)
    void FinishedToLeftAnim();
    
    UFUNCTION(BlueprintCallable)
    void FinishedInteractIconStartAnim();
    
    UFUNCTION(BlueprintCallable)
    void CleanPiece();
    
    UFUNCTION(BlueprintCallable)
    void AddInteractIconWidget(URCNzUiFinaleInteractIconWidget* Widget, FVector2D Position, bool isSuccess);
    
    UFUNCTION(BlueprintCallable)
    void AddBackgroundImg(UTexture2D* tex);
    
};

