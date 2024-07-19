#pragma once
#include "CoreMinimal.h"
#include "RCMenuWidget.h"
#include "RCMenuManager.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCMenuManager : public URCMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* LastFocusedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocusIntervalTime;
    
public:
    URCMenuManager();

    UFUNCTION(BlueprintCallable)
    void SetKeyboardFocusOnPossible();
    
};

