#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "RCMenuManager.h"
#include "RCUiMenuTutorialList.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuTutorialList : public URCMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBarOfPage;
    
public:
    URCUiMenuTutorialList();

protected:
    UFUNCTION(BlueprintCallable)
    UWidget* TutorialNavigation(EUINavigation InNavigation);
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectTutorial();
    
};

