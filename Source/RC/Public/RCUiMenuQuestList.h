#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "ERCInputKeyType.h"
#include "RCMenuManager.h"
#include "RCUiMenuQuestList.generated.h"

class APlayerController;
class URCUiMenuQuestListGrp;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuQuestList : public URCMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBarOfPage;
    
public:
    URCUiMenuQuestList();

protected:
    UFUNCTION(BlueprintCallable)
    void SetQuestButtonGuide(URCUiMenuQuestListGrp* InListGrp);
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectQuestListBarWrap(ERCInputKeyType InKeyType);
    
    UFUNCTION(BlueprintCallable)
    void SelectQuestListBar();
    
protected:
    UFUNCTION(BlueprintCallable)
    UWidget* QuestNavigation(EUINavigation InNavigation);
    
public:
    UFUNCTION(BlueprintCallable)
    void QuestMenuCustomNavigation(EUINavigation InNavigation, APlayerController* InPlayerController);
    
};

