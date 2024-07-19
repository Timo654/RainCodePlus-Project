#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "RCUiWidgetBase.h"
#include "RCMenuCollectionLayout.generated.h"

class URCMenuCollection;
class URCUiButtonGuide;
class URCUiMenuBackground;
class URCUiMenuHelp;
class URCUiMenuTitleName;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCMenuCollectionLayout : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiMenuBackground* Menu_BackGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiMenuTitleName* Menu_TitleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCMenuCollection* Menu_Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiMenuHelp* Menu_Help;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiButtonGuide* Menu_BTNGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFinishAnim;
    
public:
    URCMenuCollectionLayout();

    UFUNCTION(BlueprintCallable)
    void DecideWrap(ERCInputKeyType InKeyType);
    
    UFUNCTION(BlueprintCallable)
    void CancelWrap(ERCInputKeyType InKeyType);
    
};

