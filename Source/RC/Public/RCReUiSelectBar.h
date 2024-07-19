#pragma once
#include "CoreMinimal.h"
#include "RCMenuButton.h"
#include "RCReUiSelectBar.generated.h"

class UTextLayoutWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCReUiSelectBar : public URCMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_OnCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Push;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_OffCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Text_000;
    
public:
    URCReUiSelectBar();

};

