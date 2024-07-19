#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "RCMenuManager.h"
#include "RCUiMenuGlossaryList.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuGlossaryList : public URCMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBarOfPage;
    
public:
    URCUiMenuGlossaryList();

protected:
    UFUNCTION(BlueprintCallable)
    UWidget* GlossaryNavigation(EUINavigation InNavigation);
    
};

