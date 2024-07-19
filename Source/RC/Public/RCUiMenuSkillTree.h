#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "ERCInputKeyType.h"
#include "RCMenuManager.h"
#include "RCUiMenuSkillTree.generated.h"

class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuSkillTree : public URCMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Out;
    
public:
    URCUiMenuSkillTree();

protected:
    UFUNCTION(BlueprintCallable)
    UWidget* SkillNavigation(EUINavigation InNavigation);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveAllSkillsWrap(ERCInputKeyType KeyType);
    
    UFUNCTION(BlueprintCallable)
    void DecideSkillWrap(ERCInputKeyType KeyType);
    
    UFUNCTION(BlueprintCallable)
    void DecideSkill();
    
    UFUNCTION(BlueprintCallable)
    void CloseSkillTreeWrap(ERCInputKeyType KeyType);
    
};

