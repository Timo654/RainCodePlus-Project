#pragma once
#include "CoreMinimal.h"
#include "PageMoveLeftFinishDelegateDelegate.h"
#include "PageMoveRightFinishDelegateDelegate.h"
#include "RCNzUiFinaleInteractImgInfo.h"
#include "RCUiWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "RCNzUiFinaleDetectiveImageWidget.generated.h"

class UCanvasPanel;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleDetectiveImageWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* RLParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* LRParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* LLParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* RRParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* RLPageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* RRPageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* LRPageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* LLPageWidget;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPageMoveRightFinishDelegate PageMoveRightFinishDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPageMoveLeftFinishDelegate PageMoveLeftFinishDelegate;
    
    URCNzUiFinaleDetectiveImageWidget();

    UFUNCTION(BlueprintCallable)
    void StartPageTurn();
    
    UFUNCTION(BlueprintCallable)
    void SetRightPage(TSubclassOf<UUserWidget> pageClass, const TArray<FRCNzUiFinaleInteractImgInfo>& PieceImgList);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftPage(TSubclassOf<UUserWidget> pageClass, const TArray<FRCNzUiFinaleInteractImgInfo>& PieceImgList);
    
    UFUNCTION(BlueprintCallable)
    void ResetPageWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayToRightAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaytoLeftAnim();
    
    UFUNCTION(BlueprintCallable)
    void InitializeDetectiveImageWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddChildRR(UUserWidget* targetWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddChildRL(UUserWidget* targetWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddChildLR(UUserWidget* targetWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddChildLL(UUserWidget* targetWidget);
    
};

