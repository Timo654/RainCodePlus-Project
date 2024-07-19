#pragma once
#include "CoreMinimal.h"
#include "RCMenuButton.h"
#include "RCTitleSubStoryListItemSwitch.generated.h"

class URCTitleSubStoryListItemFinish;
class URCTitleSubStoryListItemUnFinish;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCTitleSubStoryListItemSwitch : public URCMenuButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTitleSubStoryListItemFinish* itemFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTitleSubStoryListItemUnFinish* itemUnFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* listItemSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* iconSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCurrentMouseSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCurrentPressDecide;
    
public:
    URCTitleSubStoryListItemSwitch();

};

