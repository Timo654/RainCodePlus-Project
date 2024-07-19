#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "RCMenuManager.h"
#include "RCTitleLanguageWindow.generated.h"

class URCTItleLanguageWindowItem;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCTitleLanguageWindow : public URCMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCTItleLanguageWindowItem*> itemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDecide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectIndex;
    
public:
    URCTitleLanguageWindow();

private:
    UFUNCTION(BlueprintCallable)
    void OnDecide();
    
protected:
    UFUNCTION(BlueprintCallable)
    UWidget* LanguageWindowListSelectNavigation(EUINavigation InNavigation);
    
};

