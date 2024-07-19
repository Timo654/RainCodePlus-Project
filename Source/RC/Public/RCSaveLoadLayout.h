#pragma once
#include "CoreMinimal.h"
#include "ESAVELOADMENU_STATE.h"
#include "RCUiWidgetBase.h"
#include "RCSaveLoadLayout.generated.h"

class URCSaveLoadSelect;
class URCSaveLoadWidget;
class URCUiButtonGuide;
class URCUiMenuHelp;
class URCUiMenuTitleName;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCSaveLoadLayout : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiMenuTitleName* Menu_TitleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCSaveLoadWidget* Menu_SaveLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCSaveLoadSelect* Menu_SaveLoad_Select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiMenuHelp* Menu_Help;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiButtonGuide* Menu_BTNGuide;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESAVELOADMENU_STATE prevState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESAVELOADMENU_STATE State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isTopMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSubStory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isBp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isTitleBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFooterAnimtion;
    
public:
    URCSaveLoadLayout();

};

