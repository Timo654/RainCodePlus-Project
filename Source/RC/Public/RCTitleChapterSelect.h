#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "ERCTitleChapterSelectState.h"
#include "RCUiWidgetBase.h"
#include "RCTitleChapterSelect.generated.h"

class UImage;
class URCTitleChapterSelectCaption;
class URCTitleChapterSelectList;
class URCTitleChapterSelectWindow;
class URCTitleHelp;
class URCUiButtonGuide;
class URCUiMenuMainQuestImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCTitleChapterSelect : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* chapterImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTitleChapterSelectList* SelectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTitleChapterSelectCaption* selectCaption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiMenuMainQuestImage* questImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTitleHelp* titleHelp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiButtonGuide* Title_BTNGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTitleChapterSelectWindow* SelectWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCTitleChapterSelectState State;
    
public:
    URCTitleChapterSelect();

private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedFinishAnim();
    
public:
    UFUNCTION(BlueprintCallable)
    void DecideWrap(ERCInputKeyType InKeyType);
    
    UFUNCTION(BlueprintCallable)
    void CancelWrap(ERCInputKeyType InKeyType);
    
};

