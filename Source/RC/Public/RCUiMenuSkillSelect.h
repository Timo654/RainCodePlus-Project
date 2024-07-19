#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "ERCInputKeyType.h"
#include "RCMenuManager.h"
#include "RCUiMenuSkillSelect.generated.h"

class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuSkillSelect : public URCMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
public:
    URCUiMenuSkillSelect();

protected:
    UFUNCTION(BlueprintCallable)
    void StartPush();
    
    UFUNCTION(BlueprintCallable)
    UWidget* SkillSelectNavigation(EUINavigation InNavigation);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyOpenEventWrap(ERCInputKeyType InKeyType);
    
    UFUNCTION(BlueprintCallable)
    void NotifyCloseEventWrap(ERCInputKeyType InKeyType);
    
};

