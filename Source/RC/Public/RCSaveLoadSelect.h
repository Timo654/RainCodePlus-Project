#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "ERCInputKeyType.h"
#include "ESaveLoadMode.h"
#include "ESaveLoadSelectState.h"
#include "RCMenuManager.h"
#include "RCSaveLoadSelect.generated.h"

class URCSaveLoadSelectButtonBase;
class URCSaveLoadSelectButtonLoad;
class URCSaveLoadSelectButtonSave;
class URCSaveLoadSelectButtonTitle;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCSaveLoadSelect : public URCMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCSaveLoadSelectButtonSave* Button_Save;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCSaveLoadSelectButtonLoad* Button_Load;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCSaveLoadSelectButtonTitle* Button_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveLoadSelectState State;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveLoadMode selectedMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCSaveLoadSelectButtonBase*> buttonArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectLoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPushDecideKey;
    
public:
    URCSaveLoadSelect();

protected:
    UFUNCTION(BlueprintCallable)
    UWidget* SaveLoadSelectNavigation(EUINavigation InNavigation);
    
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

