#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "RCMenuManager.h"
#include "RCUiMenuKagiList.generated.h"

class APlayerController;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuKagiList : public URCMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBarOfPage;
    
public:
    URCUiMenuKagiList();

protected:
    UFUNCTION(BlueprintCallable)
    UWidget* KagiNavigation(EUINavigation InNavigation);
    
public:
    UFUNCTION(BlueprintCallable)
    void KagiMenuCustomNavigation(EUINavigation InNavigation, APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void DecideKagi();
    
};

