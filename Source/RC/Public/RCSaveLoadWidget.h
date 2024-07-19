#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "ERCInputKeyType.h"
#include "ERCStoryMode.h"
#include "ESaveLoadMode.h"
#include "ESaveLoadState.h"
#include "RCMenuManager.h"
#include "RCSaveSlotInfo.h"
#include "RCSaveLoadWidget.generated.h"

class URCSaveLoadList;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCSaveLoadWidget : public URCMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCSaveLoadList* SaveLoad_List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveLoadState State;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveLoadMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dispTopIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSaveSlotInfo selectSaveSlotInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveLoadFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSaveNG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCStoryMode StoryMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAfterSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListSelectInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInstallingDialog;
    
public:
    URCSaveLoadWidget();

private:
    UFUNCTION(BlueprintCallable)
    UWidget* SaveLoadWidgetNavigation(EUINavigation InNavigation);
    
public:
    UFUNCTION(BlueprintCallable)
    void PushDecideWrap(ERCInputKeyType InKeyType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PushDecide();
    
public:
    UFUNCTION(BlueprintCallable)
    void PushCancelWrap(ERCInputKeyType InKeyType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PushCancel();
    
};

